// Write a program that takes a real number and produces is ceiling and floor
// integers as output.
#include <stdio.h>
#include <math.h>

int main()
{
    float value;
    float floor_value, ceil_value;
    printf("Enter a Vlaue:");
    scanf("%f", &value);

    floor_value = floor(value);
    ceil_value = ceil(value);
    printf("Floor Value:%.3f\n", floor_value);
    printf("Ceiling  Value:%.3f\n", ceil_value);
}