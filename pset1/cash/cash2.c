#include <cs50.h>
#include <stdio.h>
#include <math.h>

// coin denominations
const int QUARTERS = 25;
const int DIMES = 10;
const int NICKELS = 5;
const int PENNIES = 1;

int main(void)
{
    float dollars;
    int cents;
    int counter = 0;

    // make sure that we get the allowed values
    do
    {
        dollars = get_float("change owed: ");
        cents = round(dollars * 100);
    }
    while (cents <= 0);

    // initializes the greedy algorithm
    do
    {
        // as long as the cents are geq than a quarter
        if (cents >= QUARTERS)
        {
            do
            {
                cents = cents - QUARTERS;
                counter += 1;
            }
            while (cents >= QUARTERS);
        }

        // as long as the cents are geq than a dime
        if (cents >= DIMES && cents <= QUARTERS)
        {
            do
            {
                cents = cents - DIMES;
                counter += 1;
            }
            while (cents >= DIMES);
        }

        // as long as the cents are geq than a nickel
        if (cents >= NICKELS && cents <= DIMES)
        {
            do
            {
                cents = cents - NICKELS;
                counter += 1;
            }
            while (cents >= NICKELS);
        }

        // as long as the cents are geq than a pennie
        if (cents >= PENNIES && cents <= NICKELS)
        {
            do
            {
                cents = cents - PENNIES;
                counter += 1;
            }
            while (cents >= PENNIES);
        }

    }
    while (cents > 0);

    printf("%i\n", counter);

}