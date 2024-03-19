#include<stdio.h>

void Scince(){
    int choice_sci;
    int score_sci = 0;
    printf("Starting Science Quiz:-\nYou will get 1 mark on each correct answer.\n\n");
    //Q1
    printf("Q1.How many bones does an adult human have?\n1.206\n2.308\n3.150\n4.290\n");
    scanf("%d",&choice_sci);
    switch(choice_sci){
        case 1 : printf("Congratulations! Your answer is correct\n\n");
        score_sci++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q2
    printf("Q2.how much time does light take to travel from Sun to Earth?\n1.50 min\n2.20 min\n3.8 min\n4.90 min\n");
    scanf("%d",&choice_sci);
    switch(choice_sci){
        case 3 : printf("Congratulations! Your answer is correct\n\n");
        score_sci++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q3
    printf("Q3.Who invented telescope?\n1.Issac newton\n2.James watt\n3.Roger bacon\n4.Gallelli galileo\n");
    scanf("%d",&choice_sci);
    switch(choice_sci){
        case 4 : printf("Congratulations! Your answer is correct\n\n");
        score_sci++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q4
    printf("Q4.Animals that only consume other animals are called?\n1.carnivores\n2.omnivores\n3.herbivores\n4.none of these\n");
    scanf("%d",&choice_sci);
    switch(choice_sci){
        case 1 : printf("Congratulations! Your answer is correct\n\n");
        score_sci++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q5
    printf("Q5.Fire can not burn without?\n1.Hydrogen\n2.Nitrogen\n3.Oxygen\n4.none of these\n");
    scanf("%d",&choice_sci);
    switch(choice_sci){
        case 3 : printf("Congratulations! Your answer is correct\n\n");
        score_sci++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    printf("Thank you for playing this science quiz. I hope you enjoyed.\nYour score is %d out of 5",score_sci);
}
void GK(){
    int choice_gk;
    int score_gk = 0;
    printf("Starting GK Quiz:-\nYou will get 1 mark on each correct answer.\n\n");
    //Q1
    printf("Q1.For which of the following disciplines is nobel prize awarded?\n1.physics & chemistry\n2.physiology & medicine\n3.literature & peace\n4.all of the above\n");
    scanf("%d",&choice_gk);
    switch(choice_gk){
        case 4 : printf("Congratulations! Your answer is correct\n\n");
        score_gk++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q2
    printf("Q2.Who was india's first president?\n1.Jawaharlal nehru\n2.Rajendra prasad\n3.Sardar vallabhbhai patel\n4.Sonia gandhi\n");
    scanf("%d",&choice_gk);
    switch(choice_gk){
        case 2 : printf("Congratulations! Your answer is correct\n\n");
        score_gk++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q3
    printf("Q3.What does a 'Black flag' signifies?\n1.truce\n2.revolution/danger\n3.peace\n4.protest\n");
    scanf("%d",&choice_gk);
    switch(choice_gk){
        case 4 : printf("Congratulations! Your answer is correct\n\n");
        score_gk++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q4
    printf("Q4.Thomas Cup is associated with?\n1.Badminton\n2.Swimming\n3.Hockey\n4.table tennis\n");
    scanf("%d",&choice_gk);
    switch(choice_gk){
        case 1 : printf("Congratulations! Your answer is correct\n\n");
        score_gk++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    //Q5
    printf("Q5.Who is known as 'Father of computer'?\n1.Bill gates\n2.Sam altman\n3.Charles babbage\n4.Charles francis jenkins\n");
    scanf("%d",&choice_gk);
    switch(choice_gk){
        case 1 : printf("Congratulations! Your answer is correct\n\n");
        score_gk++;
        break;
        default : 
        printf("Sorry! Your answer is incorect\n\n");
    }

    printf("Thank you for playing this science quiz. I hope you enjoyed.\nYour score is %d out of 5",score_gk
    );

}
int main(){
    int type;
    printf("<-----WELCOME TO MY QUIZ----->\n\nChoose type of quiz :\n1.Science quiz\n2.GK quiz\n\n");
    scanf("%d",&type);
    switch(type){
        case 1 : Scince();
        break;
        case 2 : GK();
        break;
        default : printf("Invalid syntax!");
    }
    return 0;
}

/*Programmer :- Udit Sharma*/