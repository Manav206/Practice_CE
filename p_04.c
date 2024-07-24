/*  Home Ministry of Bharat want to calculate the count illiterate men and women, 
    Bharat population for year 2024 is 1,441,981,744. Out of them 48.4% are women. 
    Total literacy rate is 85.95%. Literacy rate of male population is 80.95% and 
    62.84% for female population. Write a program to get desired output for Home 
    Ministry. */
#include<stdio.h>
void main()
{
    double Population,Total_men,Total_Women,Toatal_Literacy,Illiterate_Men,Illiterate_Women;
    Population=1441981744;
    Total_men=(Population*51.6)/100;
    Total_Women=(Population*48.4)/100;
    Toatal_Literacy=(Population*85.95)/100;
    Illiterate_Men=((100-80.95)/100)*Total_men;
    Illiterate_Women=((100-62.84)/100)*Total_Women;
    printf("Bharat population for year 2024 is : %.0lf",Population);
    printf("\nThere are '%.0lf' men are illiterate. ",Illiterate_Men);
    printf("\nThere are '%.0lf' women are illiterate. ",Illiterate_Women);
    printf("\n\n Name : Lakhani Manav Pareshbhai ");
    printf("\n Student I'd : 24TCELIK ");
}





