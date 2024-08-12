/*Consider a situation where a user needs to analyze a set of numbers they input into 
a system. Imagine a data entry operator who inputs 25 different numbers via the 
keyboard. The goal is to develop a C program that processes these numbers to 
determine specific characteristics: how many of the numbers are positive, how 
many are negative, how many are even, and how many are odd. */
#include<stdio.h>
void main()
{
    int Array_A[50],i,n,Positive=0,Negative=0,Even=0,Odd=0;
    printf("Enter a size of array :");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        printf("\n Entr array : A[%d]= ",i);
        scanf("%d",&Array_A[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(Array_A[i]%2==0)
        {   Even++;
            if(Array_A[i]>0)
            {
                Positive++;
            }
            else
            {
                Negative++;
            }
        }
        else
        {
            Odd++;
            if(Array_A[i]>0)
            {
                Positive++;
            }
            else
            {
                Negative++;
            }
        }
    }
    printf("\n Total --%d-- numbers are --Positive--.",Positive);
    printf("\n Total --%d-- numbers are --Negetive--.",Negative);
    printf("\n\n Total --%d-- numbers are --Odd--.",Odd);
    printf("\n Total --%d-- numbers are --Even--.",Even);

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
}