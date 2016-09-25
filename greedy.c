/**
 * greedy.c
 *
 * Yevgeniya Deysner
 * j.deysner@gmail.com
 *
 * problem set1 of CS50
 * problem greedy
 */
 
#include <cs50.h>
#include <stdio.h>
#include <math.h>

float GetPositiveFloat(void)
{
    float n;
    do
    {
        printf("Please enter the positive float for the change: ");
        n = GetFloat();
    }
    while (n < 0);
    return n;
}

int main (void)
{
    //ask user for input
    float change = GetPositiveFloat();
    int wholePart = change;
    float decimalPart = change-wholePart;
    int changeInCents = roundf(decimalPart*100);
    
    //calculating the number of coins using greedy algorythm
    int numberOfCoins = wholePart*4;
    while(changeInCents > 0)
    {
        if(changeInCents >= 25)
        {
           changeInCents = changeInCents-25;
           numberOfCoins++; 
        }
        else if(changeInCents >= 10)
        {
            changeInCents = changeInCents-10;
            numberOfCoins++;
        }
        else if(changeInCents >= 5)
        {
            changeInCents = changeInCents-5;
            numberOfCoins++;
        }
        else
        {
            changeInCents = changeInCents-1;
            numberOfCoins++;
        }
    }
    printf("%i\n", numberOfCoins);
}
