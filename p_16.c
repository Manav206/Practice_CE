/*Store manager needs to sort the prices of items in inventory to prepare a report. 
The prices are initially listed in an unordered manner, and sorting them in 
ascending order will facilitate easier analysis and decision-making regarding 
pricing strategies and stock management. 
Hint: Let the user decide the number of items */
#include<stdio.h> 
void main()
{
    int i,n,j,Array_A[10],c; //c=temprory variable
    
    printf("Enter a size of inventory storage :");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++ )
    {
        printf("\n Enter inventory's price of something :Index[%d]=  ",i+1);
        scanf("%d",&Array_A[i]);
    }
    printf("\n");  
    for(i=0 ; i<n ; i++ )
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(Array_A[i]>Array_A[j])
            {
            c=Array_A[i];
            Array_A[i]=Array_A[j];
            Array_A[j]=c;
            }
        }
    }
    for(i=0 ; i<n ; i++ )
    {
        printf(" \n Your ascending order of price| %d | = %d ",i+1,Array_A[i]);  
    }
    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
   
}