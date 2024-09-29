# This is a Quine

A quine is a computer program (a kind of metaprogram) whose output and source
code are identical. As a challenge or for fun, some programmers try to write the shortest
quine in a given programming language.
The operation that consist of simply opening the source file and displaying it is
considered cheating. More generally, a program that uses any data entry cannot be
considered a valid quine. A trivial solution is a program whose source code is empty.
Indeed, the execution of such a program produces for most languages no output, that is
to say the source code of the program.

# first quine
The first program must have the features below :
• The executable must be named Colleen.
• When executed, the program must display on the standard output an output
identical to the source code of the file used to compile the program.
• The source code must contain at least :
◦ A main function.
◦ Two different comments.
◦ One of the comments must be present in the main function
◦ One of the comments must be present outside of your program.
◦ Another function in addition to the main function (which of course will be
called)

# second quine
For the second program :
• The executable must be named Grace.
• When executed, the program writes in a file named Grace_kid.c/Grace_kid.s
the source code of the file used to compile the program.
• The source code must strickly contain
◦ No main declared.
◦ Three defines only.
◦ One comment.
• The program will run by calling a macro.

# third quine
Last program :
• The executable must be named Sully.
• When executed the program writes in a file named Sully_X.c/Sully_X.s. The
X will be an interger given in the source. Once the file is created, the program
compiles this file and then runs the new program (which will have the name of its
source file).
• Stopping the program depends on the file name : the resulting program will be
executed only if the integer X is greater or equals than 0.
• An integer is therefore present in the source of your program and will have to
evolve by decrementing every time you create a source file from the execution of
the program.
• You have no constraints on the source code, apart from the integer that will be
set to 5 at first.


