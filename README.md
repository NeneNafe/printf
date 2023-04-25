TEAM PROJECT - 0X011.C - printf

What is printf?

printf(print formatted) in C, this writes out a cstring to stdout also known as standard output. In the most simple case, printf takes one argument: a string of characters to be printed. For example; one writes printf("xyz"). This sort of function would simply print an x, then a y, and finally a z. However, this is not exactly "formatted printing", but it is still the basis of what printf does.

To produce formated string we use the "%" operator followed by the format specifier we want. For instance printf("%s", x) will print x as a string. Same goes for "%f" which means print a float and "%d" which means print an integer.

RESOURCES USED FOR THE PROJECT

1. Secrets of printf
2. Group projects concept
3. Flowcharts
4. Technical Writing

Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
- c
- s
- %
. You don’t have to reproduce the buffer handling of the C library printf function
. You don’t have to handle the flag characters
. You don’t have to handle field width
. You don’t have to handle precision
. You don’t have to handle the length modifiers

1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. With a face like mine, I do better in print
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

5. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)/n
