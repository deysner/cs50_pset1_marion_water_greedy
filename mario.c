/**
 * mario.c
 *
 * Yevgeniya Deysner
 * j.deysner@gmail.com
 *
 * problem set1 of CS50
 * problem mario
 */
 
#include <cs50.h>
#include <stdio.h>

void printRow(int rowNumber, int height)
{
    for(int spaceCount=1; spaceCount<=height-rowNumber; spaceCount++)
    {
        printf(" ");
    }
    for(int hashCount=1; hashCount<=rowNumber+1; hashCount++)
    {
        printf("#");
    }
    printf ("\n");
}

int getIntWithinRange_0_23(void)
{
    int x;
    do
    {
        x = GetInt();
        if (x<0 || x>23)
        {
            printf ("Retry\n");
        } else {
            return x;
        }
    }
    while(true);
}

int main (void)
{
    //ask user for input
    printf("Enter the height from 0 to 23: ");
    
    int height = getIntWithinRange_0_23();
    
    for(int rowNumber=1; rowNumber<=height; rowNumber++)
    {
        printRow(rowNumber, height);
    }
}



