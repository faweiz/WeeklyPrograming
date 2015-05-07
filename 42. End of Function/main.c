// C:Weekly programming 42. End of Function
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
/* Learn how to exit the function and what's difference between exit() and return;
   return: only End the current function;
   exit: End/Exit the whole program
*/

#include <stdio.h>
#include <stdlib.h>

int test_return()
{
    printf("We are testing 'return'...\n");
    return 0;
}
int test_exit()
{
    printf("We are testing 'exit'...\n");
    exit(0);
}
int main()
{
    test_return(); // the return function
    printf("Come to here, After return! \n");
    test_exit(); // the exit function
    printf("Come to here, After exit! \n");  /*as see on screen-shot that the program is no run to this point!
    see screen-shot at */
    return 0;
}
