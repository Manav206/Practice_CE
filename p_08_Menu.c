/*
Foodies is a restaurant established in 2020. Due to rush of customers, the waiters 
are not able to manage the food supply appropriately. To help them, create a 
menu ordering system, which allows customers to select the items from the 
menu and compute the total cost of their order. Use switch case for menu 
ordering and item selection. 
Menu includes the following:  
 Burger - ₹150 
 Pizza - ₹200 
 Pasta - ₹120 
 Sandwich - ₹100 
 French Fries - ₹80 
Display the menu to user and allow them to enter the number they wish to order. 
Calculate the total amount after selection of all items. Ask user to enter ‘0’ after 
finishing the ordering of items.  */
#include<stdio.h>
void main()
{
    int Burger=0,Pizza=0,Pasta=0,Sandwich=0,FrenchFries=0,Option=1,Amount;
    while (Option!=0)
    {   
        printf("\n----------------------");
        printf("\n|1|Burger       - 150");
        printf("\n|2|Pizza        - 200");
        printf("\n|3|Burger       - 150");
        printf("\n|4|Sandwich     - 100");
        printf("\n|5|French Fries - 80");
        printf("\n----------------------");
        printf("\n-------------------------------------------");
        printf("\n If you not order any one....so type :'0'");
        printf("\n-------------------------------------------");
        printf("\n\n Choose one of these :");
        scanf("%d",&Option);
        if(Option!=0)
        {
            switch(Option)
            {
                case 1:
                    printf("\nBurger's prize is 150 rupees.");
                    Burger+=150;
                    break;
                case 2:
                    printf("\nPizza's prize is 200 rupees.");
                    Pizza+=200;
                    break;
                case 3:
                    printf("\nPasta's prize is 120 rupees.");
                    Pasta+=120;
                    break;
                case 4:
                    printf("\nSandwich's prize is 100 rupees.");
                    Sandwich+=100;
                    break;
                case 5:
                    printf("\nFrench Fries's prize is 80 rupees.");
                    FrenchFries+=80;
                    break;                
            }
        }
    }
    Amount=Burger+Pizza+Pasta+Sandwich+FrenchFries;
    printf("\n\n Your bill is : %d",Amount);

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
} 