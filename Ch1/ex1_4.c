#include <stdio.h>

int main()
{
    float fahr, celsius;
    float multiplier = 9.0/5;
    int lower_limit, upper_limit, step_value;

    lower_limit = 0;
    upper_limit = 300;
    step_value = 30;

    celsius = lower_limit;

    printf("%7s %5s\n", "Celsius", "Fahr");

    while (celsius <= upper_limit){

        fahr = ((celsius * multiplier) + 32);
        printf("%7.0f %5.1f\n", celsius, fahr);

        celsius = celsius + step_value;

    }


}