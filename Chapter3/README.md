# Chapter Notes

## Section 1 (Namespaces)

This section is about Namespaces and declaring them. It is pretty much just a page that describes how you can initialize namespaces to make typing code more efficient by either referencing the namespace for that specific function or the namespace as a whole. I remember watching a video about how making a whole file use a namespace is stupid as when you want to scale up your project, you are going to be running into inconveniences in naming, and the author also mentions the same thing. So use them but be wary when you rely on them with external libraries. <https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice> <-- a link for future reference on why this is bad.

## Section 2 (Strings)

This section was about strings and different ways to initialize them. Also, String Operators. Not much to say about this since I know so much about strings from java. It's useful for knowing c++ specific terms like .size() instead of .length() and .empty(), which doesn't have a java opposite which is dumb.

## Section 3 (Vectors)

This section is about vectors. Going into it, I had no idea how they work and leaving, I still had no idea how they worked. It is essentially an array but not really, maybe a list. One nice thing is that it is resizable and would definitely be useful unless I have other sorts of lists, then I'm probably never going to use this a day in my life. That seems to be the case knowing how I need to type like a whole for loop to add elements to it as well. The only thing this has going for it is resizabilty.

## Section 4 (Iterators)

This section is about iterators and their usage. It's like a pointer for Vectors, Strings, and probably arrays too. It allows you to access each element within a "list" from a starting point to the end. They work like pointers as they both give us indirect access to an object, but the difference is iterators allow us to go from element to element rather than just accessing the sequence as a whole. I don't really like it much, but if a regular for or while loop with other variables doesn't suffice, I guess it's useful. It's also weird that c++ programmers use != when checking if a sequence isn't at its final var.

## Section 5 (Arrays)

This section is about arrays. Love arrays with a passion, and I've been waiting for this chapter to come. Arrays don't have the flexibility vectors have since you declare their size on compile, and you can't alter it, but in my opinion, it is much easier to traverse and alter arrays to one needs rather than the queue kind of format vectors have. It was a digestible chapter until the author started talking about getting the pointer values of the specific values in the array. One key takeaway is that you can point to an array and traverse through it with that pointer as well.

## Section 6 (Matrix)

This section is about Matrix/2 dimensional arrays. All the same, rules apply to these are regular arrays, yet there is just another level to their complexity as it is an array inside of an array. Useful for mazes, maps, data, something, to be honest, I don't really know; I just know that when you gotta use them, you need to know how to use them. You can also make tic-tac-toe :)

## Tic Tac Toe

I decided I would put my array and matrix knowledge to use and make a tic-tac-toe game. You just gotta put in the spot number, and it'll place them. Play against a friend, or if you have no friends like me yourself. It is really buggy and is pretty much a game of roulette if it wants to work, but to my knowledge, I think I did good enough.

## End of Chapter Notes

This whole chapter wasn't that bad besides vectors. Strings made sense, and I liked the way you could initialize them, then vectors made sense, but I just seem like a java ArrayList but with less customizability since you can only add vars to the start or end. Then iterators made sense but seemed useless compared to other methods of looping. Arrays and Matrix were fun, but I don't like the steps needed to get the side of the array. Getting the size of the array then dividing it by the pointer like cmon, I could probably automate it with a library or static method, but that's still an extra step.
