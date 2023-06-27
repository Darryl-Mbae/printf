# Printf
## 2 Simple Printing
In the most simple case, printf takes one argument a string of characters to be printed

## 2.1 Naturally Special Characters
C uses backslash (virgule, \) as an escape character to change the meaning of the next character after it. Thus, to print a doublequote you type in backslash double-quote. To print a backslash, you must escape it by typing another backslash in front of it. The first backslash means “give the next character its alternate meaning.” The second backslash has an alternate meaning of “print a backslash.”

## Format Specifications
The real power of printf is when we are printing the contents of variables. Let’s take the format specifier %d for example. This prints a number.
```
int age;
age = 25;
printf ( "I am %d years old\n", age );
```
## 3.1 Percent

* %c print a single character
* %d print a decimal (base 10) number
* %e print an exponential floating-point number
* %f print a floating-point number
* %g print a general-format floating-point number
* %i print an integer in base 10
* %o print a number in octal (base 8)
* %s print a string of characters
* %u print an unsigned decimal (base 10) number
* %x print a number in hexidecimal (base 16)
* %% print a percent sign (\% also works)


## 3.2 The Width Option
As mentioned above, simply printing numbers was not enough. There were special options that were desired. The most important was probably the width option. By saying %5d the number was guaranteed to take up five spaces 

| printf | produces |
|------- | --------- |
| ("%5d",0) | ____0 |
| ("%5d",-7) | ___-7 |
| ("%5d",1560133635) | 1560133635 |
| ("%5d",-2035065302) | -2035065302 |

Notice that for shorter numbers, the result is padded out with leading spaces. For excessively long numbers there is no padding, and the full number is printed.
printf makes the decision to print such numbers fully, even though they take too much space. This is because it is better to print the right answer and look ugly than to print the wrong answer and look pretty

## 3.3 The Justify Option
The most natural wayto print numbers seems to be right-justified with leading spaces. That is what %5d means: print a base-10 number in a field of width 5, with the number right-aligned and front-filled with spaces. To make the number left-aligned, a minus sign is added to the format specifier. To print a number 5 spaces wide and left-justified (left-aligned) the format specifier is %-5d.

## 3.4 The Zero-Fill Option
When a number is zero-filled, the zeros always go in front, and the resulting number is both left- and right-justified. In this case the minus sign has no effect. To print a zero-filled number 5 spaces wide the format specifier is %05d. Here are some sample cases and results.

| printf | produces |
| ------ | -------- |
| ("%05d",0) | 00000 |
| ("%05d",-7) | -0007 |
| ("%05d",1560133635) | 1560133635 |
| ("%05d",-2035065302) | -2035065302 |

## 3.5 Fun With Plus Signs
Negative numbers always print with a minus sign. Positive numbers and zero usually do not print with a sign, but you can request one. A plus (+) in the format specifier makes that request. To print a signed number 5 spaces wide the format specifier is %+5d. 

## 4 Floating Point
Notice that if a dot and a number are specified, the number (the precision) indicates how many places should be shown after the decimal point
Notice that if no dot and precision are specified for %f, the default is %.6f 
