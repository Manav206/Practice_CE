/*  The Finance Department needs a simple calculator program to perform basic 
    arithmetic operations for internal calculations. Given two fixed numbers write a 
    program to perform addition, subtraction, multiplication, and division based on 
    entered signs +, -, *, / respectively and display the appropriate result.(USING SWICH)*/
    #include<stdio.h>
    int main()
    {
        float First_Number,Second_Number;
        int Option;
        printf("Enter a first number :");
        scanf("%f",&First_Number);
        printf("Enter a second number :");
        scanf("%f",&Second_Number);

        printf("\n----------------------");
        printf("\n|1| Addition       |+|");
        printf("\n|2| Substraction   |-|");
        printf("\n|3| Multiplication |%%|");
        printf("\n|4| Division       |/|");
        printf("\n----------------------");
        printf("\n\nSelect one of these option :");
        scanf("%d",&Option);

        switch (Option)
        {
            case 1:
                printf("\nSum of this two numbers : %.2f",First_Number+Second_Number);
                break;
        
            case 2:
                printf("\nSubstraction of this two numbers : %.2f",First_Number-Second_Number);
                break;
            case 3:
                printf("\nMultiplication of this two numbers : %.2f",First_Number*Second_Number);
                break;
        
            case 4:
                printf("\nDivision of this two numbers : %.2f",First_Number/Second_Number);
                break;  
        }
    printf("\n\n Name : Lakhani Manav Pareshbhai ");
    printf("\n Student I'd : 24TCELIK ");

    }