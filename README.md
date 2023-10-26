# Exception_Handling
Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. 

## THEORY
There are two types of exceptions: a)Synchronous, b)Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.). C++ provides the following specialized keywords for this purpose:
try: Represents a block of code that can throw an exception.
catch: Represents a block of code that is executed when a particular exception is thrown.
throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.<br>
Some of its advantages are:<br>
1)Separation of Error Handling code from Normal Code: In traditional error handling codes, there are always if-else conditions to handle errors. These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less readable and maintainable. With try/catch blocks, the code for error handling becomes separate from the normal flow.<br>
2) Functions/Methods can handle only the exceptions they choose: A function can throw many exceptions, but may choose to handle some of them. The other exceptions, which are thrown but not caught, can be handled by the caller. If the caller chooses not to catch them, then the exceptions are handled by the caller of the caller. 
In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it).<br>
3)Grouping of Error Types: In C++, both basic types and objects can be thrown as exceptions. We can create a hierarchy of exception objects, group exceptions in namespaces or classes and categorize them according to their types.<br>
Exception handling in C++ consists of three keywords: try, throw and catch:<br>
The try statement allows you to define a block of code to be tested for errors while it is being executed.<br>
The throw keyword throws an exception when a problem is detected, which lets us create a custom error.<br>
The catch statement allows you to define a block of code to be executed if an error occurs in the try block.<br>



