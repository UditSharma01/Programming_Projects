#include<stdio.h>

void topping(){
    int top;
    printf("Choose your topping below :\n\n[1]zucchini flowers\n[2]potatoes and radicchio\n[3]onion\n[4]mushrooms\n[4]All of the above\n\n");
    scanf("%d",&top);
    printf("Thank you!\n\n");
}

void your_sides(){
    int s;
    printf("Choose your sides below :\n\n[1]GARLIC BREADSTICKS\n[2]CHEESE BALLS\n[3]STUFFED GARLIC BREAD\n[4]CHEESE PASTA\n[5]All of the above\n\n");
    scanf("%d",&s);
    printf("Thank you!\n\n");
}

void your_drink(){
    int d;
    printf("Choose your drink below :\n\n[1]Pepsi\n[2]Coke\n[3]Thumbs up\n[4]Spride\n[5]All of the above\n\n");
    scanf("%d",&d);
    printf("Thank you!\n\n");
}

int main(){
    int type;
    char top_yes_no;
    char sides;
    char drink;
    int qty;
    printf("     *************************\n      WELCOME TO VEGGIE PIZZA\n     *************************\n\n");
    printf("Choose type of pizza below :\n\n[1]MARGHERITA\n[2]PEPPY PANEER\n[3]CHEESE N CORN\n[4]MEXICAN GREEN WAVE\n\n");
    scanf("%d",&type);
    switch(type){
        case 1 : 
        printf("Enter Qunatity :");
        scanf("%d",&qty);
        printf("Would you like to add toppings Yes[Y], No[N]?\n\n");
        scanf("%s",&top_yes_no);
        if(top_yes_no=='Y' || top_yes_no=='y'){
            topping();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to add some sides Yes[Y], No[N]?\n\n");
        scanf("%s",&sides);
        if(sides=='Y' || sides=='y'){
            your_sides();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to drink something Yes[Y], No[N]?\n\n");
        scanf("%s",&drink);
        if(drink=='Y' || drink=='y'){
            your_drink();
        }
        else{
            printf("OK!\n");
        }
        printf("Thank you for your order! Your order will be ready soon.");
        break;

        case 2 : 
        printf("Enter Qunatity :");
        scanf("%d",&qty);
        printf("Would you like to add toppings Yes[Y], No[N]?\n\n");
        scanf("%s",&top_yes_no);
        if(top_yes_no=='Y' || top_yes_no=='y'){
            topping();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to add some sides Yes[Y], No[N]?\n\n");
        scanf("%s",&sides);
        if(sides=='Y' || sides=='y'){
            your_sides();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to drink something Yes[Y], No[N]?\n\n");
        scanf("%s",&drink);
        if(drink=='Y' || drink=='y'){
            your_drink();
        }
        else{
            printf("OK!\n");
        }
        printf("Thank you for your order! Your order will be ready soon.");
        break;

        case 3 : 
        printf("Enter Qunatity :");
        scanf("%d",&qty);
        printf("Would you like to add toppings Yes[Y], No[N]?\n\n");
        scanf("%s",&top_yes_no);
        if(top_yes_no=='Y' || top_yes_no=='y'){
            topping();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to add some sides Yes[Y], No[N]?\n\n");
        scanf("%s",&sides);
        if(sides=='Y' || top_yes_no=='y'){
            your_sides();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to drink something Yes[Y], No[N]?\n\n");
        scanf("%s",&drink);
        if(drink=='Y' || drink=='y'){
            your_drink();
        }
        else{
            printf("OK!\n");
        }
        printf("Thank you for your order! Your order will be ready soon.");
        break;

        case 4 : 
        printf("Enter Qunatity :");
        scanf("%d",&qty);
        printf("Would you like to add toppings Yes[Y], No[N]?\n\n");
        scanf("%s",&top_yes_no);
        if(top_yes_no=='Y' || top_yes_no=='y'){
            topping();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to add some sides Yes[Y], No[N]?\n\n");
        scanf("%s",&sides);
        if(sides=='Y' || top_yes_no=='y'){
            your_sides();
        }
        else{
            printf("OK!\n");
        }
        printf("Would you like to drink something Yes[Y], No[N]?\n\n");
        scanf("%s",&drink);
        if(drink=='Y' || drink=='y'){
            your_drink();
        }
        else{
            printf("OK!\n");
        }
        printf("Thank you for your order! Your order will be ready soon.");
        break;
    
    
    
    }
    return 0;
}

/*Programmer :- Udit Sharma*/