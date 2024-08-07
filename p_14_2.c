#include<stdio.h>
void main()
{
    int n,i,j,a;   // i for row and j for column.
    printf("Enter  number of lines :");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++ )
    {a=1;
        for(j=1 ; j<=n ; j++)
        {
           
            if(i+j>n)
            {
               printf(" %d ",a++); 
            }
            else
            {
               printf("   ");
            }
            
        }
       printf("\n"); 
    }
    
    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");

}