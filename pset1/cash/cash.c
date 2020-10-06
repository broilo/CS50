#include <cs50.h>
#include <stdio.h>
#include <math.h>

// coin denominations
const int QUARTERS = 25;
const int DIMES = 10;
const int NICKELS = 5;
const int PENNIES = 1;

float dollars;
int cents;
int counter = 0;

int main(void)
{
    // make sure that we get the allowed values
    while (dollars <= 0)
    {
        dollars = get_float("change owed: ");
    }

    cents = round(dollars * 100);

    // initializes the greedy algorithm

    // as long as the cents are geq than a quarter
    while (cents >= QUARTERS)
    {
        cents = cents - QUARTERS;
        counter += 1;
    }

    // as long as the cents are geq than a dime
    while (cents >= DIMES)
    {
        cents = cents - DIMES;
        counter += 1;
    }

    // as long as the cents are geq than a nickel
    while (cents >= NICKELS)
    {
        cents = cents - NICKELS;
        counter += 1;
    }

    // as long as the cents are geq than a pennie
    while (cents >= PENNIES)
    {
        cents = cents - PENNIES;
        counter += 1;
    }

    printf("%i\n", counter);

}