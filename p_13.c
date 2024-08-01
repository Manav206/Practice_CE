#include<stdio.h>
void main()
{
    int i,m,n,j;
    printf("Enter the size of table vertically :");
    scanf("%d",&m);
    printf("\nEnter the size of table horizontally :");
    scanf("%d",&n);
    printf("\n Multiplication Table ( %d * %d )",m,n);
    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            
            printf("  %3d ",i*j);
            
        }
        printf("\n");
        
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");

}