#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Take a string variable as an input
    string name = get_string("What's your name?\n");
    
    // Returns a string with a greet using the name variable
    printf("Hello, %s!\n", name);
}