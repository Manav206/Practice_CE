/* State Bank of India wants to calculate the simple interest on savings accounts. The 
   bank offers a principal amount of ₹50,000 at an annual interest rate of 5.5% for a 
   time period of 3 years. Write a program to calculate and display the simple 
   interest.
*/

#include<stdio.h>
void main()
{
    float  InterestRate=0.055,Time=3,Principal_Amount=50000,Interest;
    Interest=Principal_Amount*InterestRate*Time;
    printf(" Principal amount is : %.0f Rupees.",Principal_Amount);
    printf("\n annual interest rate of '%.1f' for a time period of '%.0f' years.",InterestRate*100,Time);
    printf("\n\n Simple Interst is : %.2f.",Interest);

    printf("\n\n Name : Lakhani Manav Pareshbhai ");
    printf("\n Student I'd : 24TCELIK ");
}







