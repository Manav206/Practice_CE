#include<stdio.h>
void main()
{                  // i for row and j for column.
    int n,i,j;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++ )
    {
        for(j=1 ; j<=n ; j++)
        {
            if(j<=i)
            {
                if(j%2!=0)
                {
                    printf(" 1 ");
                }
                else
                {
                    printf(" 0 ");
                }    
            }
        }
       printf("\n"); 
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");

}