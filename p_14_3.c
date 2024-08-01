#include<stdio.h>
void main()
{
    int i,n,j,charecter=65,c;
    c=charecter;
    printf("Enter a number of last line number :");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(j<=i && i+j>=n+1 )
            {
                if(j==i || i+j==n+1)
                {
                    printf(" %c ",c);
                }
                else
                {
                    printf(" %c ",++charecter);
                }
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        charecter=65;
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");

}