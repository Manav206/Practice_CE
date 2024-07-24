/*  The Meteorological Department of India needs to convert temperature readings 
    from Celsius to Fahrenheit for their weather reports. Given a temperature in 
    Celsius, write a program to convert it to Fahrenheit  and display the result.*/
#include<stdio.h>
void main()
{
    float  Fahrenheit,Celsius;
    printf("Enter temperature in celsius :");
    scanf("%f",&Celsius);
    Fahrenheit=(1.8*Celsius)+32;
    printf("Temperature in fahrenheit is : %.2f",Fahrenheit);

    printf("\n\n Name : Lakhani Manav Pareshbhai ");
    printf("\n Student I'd : 24TCELIK ");
}
