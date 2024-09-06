Que 19) Write a program in C to calculate and print the electricity bill of a given
    customer. The customer ID, name, and unit consumed by the user should
    be captured from the keyboard to display the total amount to be paid to the
    customer. The charge are as follow :
    20. Unit 21. Charge/unit
    22. upto 350 23. @1.20
    24. 350 and above but less than 600 25. @1.50
    26. 600 and above but less than 800 27. @1.80
    28. 800 and above 29. @2.00

#include <stdio.h>
int main(){
    int customer_id;
    char customer_name[20];
    float consumed_units;
    float charge_per_unit;
    printf("Enter Customer Id:");
    scanf("%d",&customer_id);
    printf("Enter Customer Name:");
    scanf("%s",&customer_name);
    printf("Enter Consumed Units:");
    scanf("%f",&consumed_units);


    if(consumed_units > 0 && consumed_units < 350){
        charge_per_unit = 1.20;
    }
    else if(consumed_units >= 350 && consumed_units < 600){
        charge_per_unit = 1.50;   
    }
    else if(consumed_units >= 600 && consumed_units < 800){
        charge_per_unit = 1.80;   
    }
    else if(consumed_units >= 800){
        charge_per_unit = 2.00;   
    }
    else{
        printf("Enter Valid units..");
    }

        printf("Units  : @%.2f\n",consumed_units);
        float bill = charge_per_unit * consumed_units; 
        float surface_charge;
        printf("Bill charge = %.2f \n",bill);
        if(bill > 800){
            surface_charge = (bill*18)/100;
            printf("surface charge = %f\n",surface_charge);
        }
        else{
            surface_charge = 0;
            printf("surface charge = %.f\n",surface_charge);
        }
        printf("total = @%.2f",bill+surface_charge);

}