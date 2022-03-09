# Chapter Notes

## Section 1 (Function Basics)

This section is about functions and how they work. Big method guy. Functions are an essential part to any program. If you don't want to put all your code in one big ass file and want to automate things just a little bit, which is the whole point of object oriented programming you use functions. There are some built in like sizeof and you can make your own like the factorial method in the file. They also have a scope. They can be fixed to a file or object. To use an objects functions you just gotta create an object and call the function and to use a files you need to import it to you main file and call it in main.

## Section 2 (Argument Passing)

This section is about the parameters used by functions. I didn't go over it in the last section but every function has parameters, sometimes they don't (the same way not all functions return something). When you use an exsiting variable as a parameter of a function which you will probably be always doing you can either call it by reference or pass it by reference. Passing by reference will not change the original parameters variable. It will simply create a copy and alter that copy and you can set that to the parameter outside of the function or you can pass it by reference so every time the variable is altered it changes the parameter. Just add a & before the variable to pass is by reference. If using a large data structure or some type of complex system or class pass by reference as a copy would limit the memory and probably hoe your program over.

## Section 3 (Return Types and Return Statements)

This section is about returns and return types. When you make a method that isn't void (no return) it has to have a return type of one of the primitive types. If you make an alegbric function that sums the numbers in an integer array you may want to return the sum as type int so you can use it. You can also return arrays, vectors, and pretty much anything that's a class or type. Returning Classes can be a little confusing and won't happen often at my current state of programming. You can also use return statements to cut programs short. The same way in chapter 5 section 5 there where different ways to stop iterations of loops a return is that final way as it send a function all together. Void types are just functions with no returns, so if you want to manipulate data but you don't need to set that to anything you can make it type void.
