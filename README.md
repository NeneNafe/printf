TEAM PROJECT - 0X011.C - printf

What is printf?

printf(print formatted) in C, this writes out a cstring to stdout also known as standard output. In the most simple case, printf takes one argument: a string of characters to be printed. For example; one writes printf("xyz"). This sort of function would simply print an x, then a y, and finally a z. However, this is not exactly "formatted printing", but it is still the basis of what printf does.

To produce formated string we use the "%" operator followed by the format specifier we want. For instance printf("%s", x) will print x as a string. Same goes for "%f" which means print a float and "%d" which means print an integer.
