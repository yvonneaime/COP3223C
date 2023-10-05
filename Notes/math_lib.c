// Yvonne Aime
// COP3223
// Notes - Math Library Functions


#include <stdio.h>

/* If you use Dev C++ to compile your programs, then to use
math functions you must add the following include: */
#include <math.h>


int main() {
// Picking a random num between 1 and 100
// Adding the 1 in the beginning of the expression ensures that 
// 1 - 100 is inclusive all nums, rather than just 0 - 99 
 int x = 1 + rand()%100;

/* If we wanted to assign a variable difference to the
absolute value of the difference between to variables price and
cost, we could do the following:        */
 int price, cost;
 int difference = abs(price-cost);

/* Example that calculates the distance from the
origin to a point (x,y). Assume x, y and distance are doubles: */
 double x, y, distance;
 distance = sqrt(pow(x,2)+pow(y,2));

 /* Whenever you call a math function, just remember that each
parameter can be ANY expression of the proper type. Most of
the examples of the previous page are either variables or very
simple expressions, but there's no reason a more complicated
expression isn't possible. Also, do NOT put "int" or "double"
in the parameter list when you CALL a function
 */
 
 return 0;
}