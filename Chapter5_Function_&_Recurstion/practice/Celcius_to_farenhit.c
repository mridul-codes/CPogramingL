//write a pogram using  function to convert celcius to fahrenheit
#include <stdio.h>
float fahren(float cel);

int main()
{
    printf("Enter the value of celcius\t");
    float cel;
    scanf("%f", &cel);
    printf("\nThe required value in Farenhit is %f\n", fahren(cel));
    return 0;
}

float fahren(float cel)
{
    float b = 9 / 5;
    cel *= b;
    cel += 32;
    return cel;
}