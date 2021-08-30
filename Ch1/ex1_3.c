#include <stdio.h>


int main()
{
    float fahr, celsius;
    int lower_limit, upper_limit, step_value;

    lower_limit = 0;
    upper_limit = 300;
    step_value = 20;

    fahr = lower_limit;

    printf("%3s %8s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper_limit){
        
        celsius = ((5.0/9.0) * (fahr-32));

  

        printf("%10.0f %8.1f\n", fahr, celsius);

        fahr = fahr + step_value;


    }





}