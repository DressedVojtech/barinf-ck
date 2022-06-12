# brainfuck interpereter
Build using Cmake, or anyhow you want, then paste your brainfuck code into code.txt and run. You will get your output in the terminal.

In case you don't know how brainfuck works and you are intersted in this. Brainfuck is a simple programming language mainly created as a joke.
The main feature of the language is that it is minimal. It only uses 8 characters:

\+ ... increment this cell on the belt

\- ... deduct of this cell on the belt

\> ... move by one cell to the right on the belt

\< ... move one cell to the left on the belt

\. ... write value of the cell on the belt as an ASCII character

\, ... input

\[ ... start of a loop

\] ... end of a loop

## Simple description of the language
You can imagine the whole language as an infinitely long belt with a sort of pointer. As the pointer moves along the belt (using < and >), you can increment or deduct the values in each of the cells on the belt (using + or -). When you want to output the value to the screen you use . which outputs it as an ASCII character. Or you can get an input using , which saves the value of the code of the ascii character you give it. Lastly you can use loops, which will run until the value of the cell at the end of the loop isn't zero. Traditionaly brainfuck doen't allow for stacked loops, that is loops inside of other loops, but I don't really view it as a problem and I think that it should be allowed, so my interpereter does. If you wna t to further read on this subject here is a link to wikipedia about brainfuck: https://en.wikipedia.org/wiki/Brainfuck.
