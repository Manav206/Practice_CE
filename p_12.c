/*  A company organizes events on even days of the month, from day 1 to day 100.
    The management wants to calculate the total budget allocated for these events.
    Each even day costs 200 Rs. Write a C program to compute the total budget
    allocated for all even-day events. */
    #include<stdio.h>
    void main()
    {
        int Total_Day=100 , Cost=200 , Budget=0,day;
        printf("\n Tota days = %d ,\nEach even day cost : %d Rs",Total_Day,Cost);
        for(day=2 ;day<=Total_Day ; day+=2)
        {
            Budget+=Cost;
        }
        printf("\n Total budget for even day events : %d Rs",Budget);

        printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
        printf("\n Student I'd : 24TCELIK ");

    } 