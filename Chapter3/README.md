# Chapter Notes

## Section 1 (Namespaces)

This section is about Namespaces and declaring them. It is pretty much just a page that describes how you can initilize namespaces to make typing code more efficent by either referencing the namespace for that specific function or the namespace as a whole. I remember watching a video about how making a whole file use a namespace is stupid as when you want to scale up your project your going to be running into inconviences in naming and the author also mentions the same thing. So use them but be weary when you rely on them with external libraries. <https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice> <-- a link for future reference on why this is bad.

## Section 2 (Strings)

This section was about strings and different ways to initilize them. Also String Operators. Not much to say about this since I know so much about strings from java. It's useful for knowing c++ specific terms like .size() instead of .length() and .empty(), which doesn't have a java opposite which is dumb.

## Section 3 (Vectors)

This section is about vectors. Going into it I had no idea how they work and leaving I still had no idea how they worked. It is essentialy an array but not really, maybe a list. One nice thing is that its resizable and would definenty be useful unless that have other sorts of lists, then im probably never going to use this a day in my life. That seems to be the case knowing how I need to type like a whole for loop to add elements to it aswell. Only thing this has going for it is resizabilty.

## Section 4 (Iterators)

This section is about iterators and their usage. It't like a pointer for Vectors, Strings, and probably arrays too. It allows you to access each element within a "list" from a starting part the end. They work like pointers as they both give us inderect access to an object but the difference is iterators allow us to go from element to element rather then just accessing the sequence as a whole. I don't really like it much but if a regular for or while loop with other variables don't suffice I guess it's useful. It's also weird that c++ programmers use != when checking if a sequence isn't at its final var.

## Section 5 (Arrays)

This section is about arrays. Love arrays with a passion and I've been waiting for this chapter to come. Arrays don't have the flexibility vectors have since you declare their size on compile and you can't alter it but in my opinion it is much easier to traverse and alter arrays to ones needs rather then the queue kind of format vectors have. It was a digestable chapter until the author started talking about getting the pointer values of the specific values in the array. One key take away is that you can point to an array and traverse through it with that pointer aswell.

## Section 6 (Matrix)

This section is about Matrix/2 dimensional arrays. All the same rules apply to these are regular arrays yet there it just another level to their complexity as it is an array inside of an array. Useful for mazes, maps, data something to be honest I don't really know I just know that when you gotta use them you need to know how to use them. You can also make tic-tac-toe :)

## Tic Tac Toe

I decided I would put my array and matrix knowledge to use and make a tic-tac-toe game. You just gotta put in the cooridantes of where you wanna place your pieces and stuff and it'll place them. Play against a friend, or if you have no friends like me yourself. (Don't forget to make this)
