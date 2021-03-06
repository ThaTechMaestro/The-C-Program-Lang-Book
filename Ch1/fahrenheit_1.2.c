#include <stdio.h>

/*
Problem definition:
    Display the equivalent celsius value for a 
    fahrenheit value

    The fahrenheit value increases in steps of 20

Loop invariants:
    When fahrenheit value = upper_limit

Measure of progress
    Fahrenheit value starts at zero
    Then increases in step of 20

Think about each iteration as a mini-dept
    at every point in time
    It provides state output for the next
        iteration
*/


int main()
{

    float fahr, celsius;
    int lower_limit, upper_limit, step_value;

    /* Temperature scales*/
    lower_limit = 0;
    upper_limit = 300;
    step_value = 20;

    fahr = lower_limit;

    while (fahr <= upper_limit){

        celsius = ((5.0/9.0) * (fahr-32) );
        printf("%3.0f %8.1f\n", fahr, celsius);

        fahr = fahr + step_value;


    }
}