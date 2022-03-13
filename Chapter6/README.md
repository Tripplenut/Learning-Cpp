# Chapter Notes

## Section 1 (Function Basics)

This section is about functions and how they work. Big method guy. Functions are an essential part to any program. If you don't want to put all your code in one big ass file and want to automate things just a little bit, which is the whole point of object oriented programming you use functions. There are some built in like sizeof and you can make your own like the factorial method in the file. They also have a scope. They can be fixed to a file or object. To use an objects functions you just gotta create an object and call the function and to use a files you need to import it to you main file and call it in main.

## Section 2 (Argument Passing)

This section is about the parameters used by functions. I didn't go over it in the last section but every function has parameters, sometimes they don't (the same way not all functions return something). When you use an exsiting variable as a parameter of a function which you will probably be always doing you can either call it by reference or pass it by reference. Passing by reference will not change the original parameters variable. It will simply create a copy and alter that copy and you can set that to the parameter outside of the function or you can pass it by reference so every time the variable is altered it changes the parameter. Just add a & before the variable to pass is by reference. If using a large data structure or some type of complex system or class pass by reference as a copy would limit the memory and probably hoe your program over.

## Section 3 (Return Types and Return Statements)

This section is about returns and return types. When you make a method that isn't void (no return) it has to have a return type of one of the primitive types. If you make an alegbric function that sums the numbers in an integer array you may want to return the sum as type int so you can use it. You can also return arrays, vectors, and pretty much anything that's a class or type. Returning Classes can be a little confusing and won't happen often at my current state of programming. You can also use return statements to cut programs short. The same way in chapter 5 section 5 there where different ways to stop iterations of loops a return is that final way as it send a function all together. Void types are just functions with no returns, so if you want to manipulate data but you don't need to set that to anything you can make it type void.

## Section 4 (Overloaded Functions)

This section is about Overloaded Functions and how to use them. I'm not gonna lie, I knew method overriding was a thing and that you can make overloaded constructors but overloaded methdods... This just changed everything for me I swear. I am going to have an absolute field day from this day on using this in places were I do not need to. To sum it up you can use different parameters for the same function to do the same thing (or different). So lets say you have a value for a parameter it can run the code with that parameter but if you don't got it you can still run the code without it. Check the file to see a little example.

## Section 5 (Features for Specialized Uses)

This section is about a whole lot of shit i don't understand and don't really want to. There is one part that is cool and its calling functions with default arguements. It's like you can pick and choose what parameters into a function and for those that are not provided it takes the default. I tried my best to make an example in the file. Keep in mind this only works for trailing arguments so whiile I did say pick and choose put parameters in order of importance.

## Section 6 (Function Matching)

This section is about a function matching or like figuring out which overloaded function to call. So when you have a bunch of overloaded functions of the same name but different types and parameter lengths the computer needs to figure out which function to call. To begin if the number of function you called uses a different amount of parameters then one of the overloaded functions the computer automatically cancels out that function as being the correct one. Then it checks the types. So if you have 2 overloaded and one takes type int while the other takes floats it will go with the function with the closest cast, so if its a short or int the int function will be called, if its a float or a double the float function will be called. Lets say the functions take floats and longs, you will get an "ambigious caller" if you input a double as it can be casted down as both a float and long so both methods can be used but the compiler doesn't know which one to choose.

## Section 7 (Pointers to Functions)

This section is about using pointers to call functions. I assume its for saving memory or something like that idk but one this I do know is that I am not explaining on the bull shit I just read. Sorry to future me for this but there is no way in hell I was ever going to use this in the next 2 years of my life so it would only be a waste of resources to type out the spagetti code I am currently looking at. Aside from that the chapter is over, now its project time :)
