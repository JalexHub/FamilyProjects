# Coding Basics #

Coding is like writing instructions for a recipe. Computers are pretty dumb, and you have to tell them exactly what to do. Otherwise, computers will just sit there and do nothing except be a space heater. We will go over some basic coding concepts that we will use in these projects. Specifically, we will focus on learning some of the basics of C++ for Arduino.

## Variables ##
Variables store data. That is their job. You can think of a variable as a bucket. In Arduino, variables have types. That just means that the buckets are a specific size, and they can only hold certain kinds of data. We're going to go over some of the types and why you might want to use them. You declare variables by writing their type down followed by a name for the variable. 

When you declare a variable you always have its type first, followed by a name, and terminated with a semicolon.  "type" "name";


Examples 

int foo;

float big_number;

unsigned bloop;

double bigNum;


### int ###
ints hold integers which means that they hold whole numbers that can be either positive or negative, e.g. -1, 5, 54, -320, etc. There is a limit to how big a number you can put in an int. In the Arduino UNO, ints are 2 byte values, and they can hold numbers from -32,768 to 32,767. 

Examples

int bazz = 0;
int camp = -54;
int num = 64;

### long ###
The long data type is just a bigger int. These are 4 bytes long, and can store values from -2,147,483,648 to 2,147,483,647. When you declare a long, or assign a value to it, the number has to have a L at the end of it.

Examples

long speed_of_light = 186000L;


### float ###
The float data type is different. It stores numbers with decimals like 3.14, -2541.001, etc. I'm sure you can see how useful that is expecially if you are trying to do some math on numbers that are not whole numbers.

Example

float pi = 3.14159;


There are more data types, and you can even make your own data types, but we do not need to know that right now. In the projects, we will go over the data types we need and how to use them.

## Assigning Variables ##

## Mixing Variables ##

## Operations ##

## If-else statements ##

## The while loop ##

## The for loop ##
