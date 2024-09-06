//Que 30) If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-


#include <stdio.h>
int main() 
{
    int customerID, unitsConsumed;
    char name[100];
    float billAmount, finalBill;
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);  
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    if (unitsConsumed <= 350) 
    {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed < 600) 
    {
        billAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed < 800) 
    {
        billAmount = unitsConsumed * 1.80;
    } 
    else 
    {
        billAmount = unitsConsumed * 2.00;
    }

    if (billAmount > 800) 
    {
        billAmount += billAmount * 0.18;  
    }
    if (billAmount < 256) 
    {
        billAmount = 256;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Bill Amount: %.2f\n", billAmount);
    return 0;
}
