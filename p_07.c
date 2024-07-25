/*  Raman and Suman, siblings residing in different cities in Karnataka, each own 
    multiple properties. Raman's assets include a bungalow valued at ₹12,000,000, a 
    plot valued at ₹6,000,000, and a car valued at ₹3,000,000. Meanwhile, Suman 
    owns an apartment valued at ₹11,000,000, a hotel valued at ₹8,000,000, and a car 
    valued at ₹8,000,000. Determine who possesses the greater total wealth between 
    them or whether they are equally wealthier. */ 

#include<stdio.h>
void main()
{
    long R_Bungalow=12000000,R_Plot=6000000,R_Car=3000000,S_Apartment=11000000,S_Hotel=8000000,S_Car=8000000;
    long R_Properties,S_Properties;
    R_Properties=R_Bungalow+R_Plot+R_Car;
    S_Properties=S_Apartment+S_Car+S_Hotel;

    printf("\nRaman's total prperties is : %ld",R_Properties);
    printf("\nSuman's total propertis is : %ld",S_Properties);

    if(R_Properties>S_Properties)
    {
        printf("\n\n Roman has more properties then Suman.");
    }
    else if(S_Properties>R_Properties)
    {
        printf("\n\n Suman has more properties then Roman.");
    }
    else
    {
        printf("\n\n They have equal properties .");
    }

    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
}