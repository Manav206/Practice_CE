#include<stdio.h>
void main()
{
    int i,n,j,c; // i for row and j for column.
    printf("Enter a number of row :");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {c=64;
        for(j=1 ; j<=(n*2)-1 ; j++)
        {
            if(i+j<n+1)
            {
                printf("   ");
            }
            else if(j>=n+i)
            {
                printf("   ");
            }
            else
            {
                if(j<=n)
                {
                    printf(" %c ",++c);
                }
                else
                {
                    printf(" %c ",--c);
                }
            }
                
        }
        printf("\n");
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");

}