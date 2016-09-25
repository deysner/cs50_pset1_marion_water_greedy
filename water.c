/**
 * water.c
 *
 * Yevgeniya Deysner
 * j.deysner@gmail.com
 *
 * problem set1 of CS50
 * problem water
 */
 
#include <cs50.h>
#include <stdio.h>
 
int main (void)
{
    //ask user for input
    printf("For how many minutes do you take your shower?: ");
    int x = GetInt();
    
    // do the math
    printf ("You use the amount of water equivalent to %i bottles of water\n",x*12);
}
 