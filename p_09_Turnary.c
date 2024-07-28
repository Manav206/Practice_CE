/*
Determine the grade of a student based on their marks using the conditional 
(ternary) operator. Take student’s marks as input and display the corresponding 
grade as output according to the following criteria: 
 Marks >= 90: Grade A 
 Marks >= 80 and < 90: Grade B 
 Marks >= 70 and < 80: Grade C 
 Marks >= 60 and < 70: Grade D 
 Marks < 60: Grade F 
Validate the input by ensuring user is entering marks between 0-100, else 
declare that the entered input is invalid. */
#include<stdio.h>

void main() {
    int Marks;
    printf("\n Enter your marks out of hundred :"); 
    scanf("%d", &Marks);

    if (Marks >= 0 && Marks <= 100)
    {
        (Marks >= 90) ? printf("\nCONGRATULATION !! You obtain 'A' Grade.") :
        (Marks >= 80 && Marks < 90) ? printf("\nYou obtain 'B' Grade.") :
        (Marks >= 70 && Marks < 80) ? printf("\nYou obtain 'C' Grade.") :
        (Marks >= 60 && Marks < 70) ? printf("\nYou obtain 'D' Grade.") :
        printf("\nYou obtain 'F' Grade.");
    } 
    else 
    {
        printf("\n You should enter marks between 0 and 100.");
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
}
