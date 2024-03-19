//Calculating Electric Bill
#include<stdio.h>
int main(){
    printf("     *************************\n      ELECTRIC BILL CALCULATOR\n     *************************\n\n");
    float current_month_unit;
    printf("enter current month unit (in kwh) :");
    scanf("%f",&current_month_unit);
    float previous_month_unit;
    printf("enter previous month unit (in kwh) :");
    scanf("%f",&previous_month_unit);
    float unit_consumption = current_month_unit - previous_month_unit;
    printf("Your total unit consumption of month = %f\n\n",unit_consumption);
    float unit_rate;
    printf("Now,\nenter unit rate :");
    scanf("%f",&unit_rate);
    float energy_charge = unit_consumption*unit_rate;
    printf("Therefore,\nYour energy charge of month = %f\n\n",energy_charge);
    int fixed_charge;
    printf("enter fixed charge :");
    scanf("%d",&fixed_charge);
    int electric_duty;
    printf("enter electric duty :");
    scanf("%d",&electric_duty);
    float total_bill = energy_charge+fixed_charge+electric_duty;
    printf("Your total electric bill cost = %f",total_bill);
    return 0;
}

/*Programmer :- Udit Sharma*/