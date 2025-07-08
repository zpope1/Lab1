# Temperature Conversion Program (Correcting Errors)

## Syntax and Semantic errors

Programming can be challenging, and C++ is somewhat of a quirky language. Put those two together, and there are a lot of ways to make mistakes. Errors generally fall into one of two categories: syntax errors, and semantic errors (logic errors).
A syntax error occurs when you write a statement that is not valid according to the grammar of the C++ language. This includes errors such as missing semicolons, using undeclared variables, mismatched parentheses or braces, etc…
Fortunately, the compiler will generally catch syntax errors and generate warnings or errors, so you easily identify and fix the problem. Then it’s just a matter of compiling again until you get rid of all the errors.
Once your program is compiling correctly, getting it to actually produce the result(s) you want can be tricky. A semantic error occurs when a statement is syntactically valid, but does not do what the programmer intended.
Sometimes these will cause your program to crash, such as in the case of division by zero:
Modern compilers have been getting better at detecting certain types of common semantic errors (e.g. use of an uninitialized variable). However, in most cases, the compiler will not be able to catch most of these types of problems, because the compiler is designed to enforce grammar, not intent.
In this assignment, the errors are fairly easy to spot. But in most non-trivial programs, semantic errors are not easy to find by eyeballing the code. This is where debugging techniques like setting break points in a progam can come in handy.
We will explore these techniques later in the course.

## Directions
After accepting the Lab1 assignment, clone the Lab1 repository to your virtual machine, correct the syntax errors and run the program using the Fahrenheit tempature 212.75 as input. The program stiall has semantic errors that will need to be corrected before you'll get the correct results that match the interface prototype example shown below. Once the program is working coorectly, push it back to your repositiry which will spin up a test of your solution code. Once it has passed the auto-test tou will need to submit it to Canvas under the lab1 assignment.

## Interface Prototype Example

<pre><b>Lab1
Temperature Conversion
Fahrenheit to Celsius

Enter Fahrenheit Temperature: 212.75

212.75 degrees Fahrenheit is equal to 100.42 degrees Celsius!</b></pre>
  



