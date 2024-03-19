#include<stdio.h>
int main(){
    int unit;
    float m;
    float km;
    float cm;
    float kg;
    float g;
    float sec;
    float min;
    float hr;
    float usd;
    float inr;
    float euro;
    int type;
    printf("<!--------UNIT CONVERTOR--------!>\n");
    printf("Enter type of conversion :\n1.)Length \n2.)Weight \n3.)Time \n4.)Currency\n");
    scanf("%d",&type);

    switch(type){
        case 1 :
        printf("Choose your unit for conversion :\n 1.)meter to kilometer\n 2.)kilometer to meter\n 3.)meter to centimeter\n 4.)centimemter to meter\n");
        scanf("%d",&unit);
        switch(unit){
            case 1 : 
            printf("enter meter : ");
            scanf("%f",&m);
            printf("%f m = %f km",m,m/1000);
            break;
            
            case 2 :
            printf("enter kilometer : ");
            scanf("%f",&km);
            printf("%f km = %f m",km,km*1000);
            break;

            case 3 :
            printf("enter meter : ");
            scanf("%f",&m);
            printf("%f m = %f cm",m,m*100);
            break;

            case 4 :
            printf("enter centimeter : ");
            scanf("%f",&cm);
            printf("%f cm = %f m",cm,cm/100);
            break;

            default :
            printf("Invalid syntax!");
        
        }
        break;

        case 2 :
        printf("Choose your unit for conversion :\n1.)kilogram to gram\n 2.)gram to kilogram\n");
        scanf("%d",&unit);
        switch(unit){
            case 1 :
            printf("enter kilogram :");
            scanf("%f",&kg);
            printf("%f kg = %f g",kg,kg*1000);
            break;

            case 2 :
            printf("enter gram :");
            scanf("%f",&g);
            printf("%f g = %f kg",g,g/1000); 
            break;

            default :
            printf("Invalid syntax!");
        }
        break;

        case 3 :
        printf("Choose your unit for conversion :\n1.)second to minute\n 2.)minute to second\n 3.)minute to hour\n 4.)hour to minute\n 5.)second to hour\n 6.)hour to second\n");
        scanf("%d",&unit);
        switch(unit){
            case 1 :
            printf("enter second :");
            scanf("%f",&sec);
            printf("%f sec = %f min",sec,sec/60);
            break;

            case 2 :
            printf("enter minute :");
            scanf("%f",&min);
            printf("%f min = %f sec",min,min*60);
            break;

            case 3 :
            printf("enter minute:");
            scanf("%f",&min);
            printf("%f min = %f hour",min,min/60);
            break;

            case 4 :
            printf("enter hour :");
            scanf("%f",&hr);
            printf("%f hour = %f min",hr,hr*60);
            break;

            case 5 :
            printf("enter second :");
            scanf("%f",&sec);
            printf("%f sec = %f hour",sec,sec/3600);
            break;

            case 6 :
            printf("enter hour :");
            scanf("%f",&hr);
            printf("%f hr = %f sec",hr,hr*3600);
            break;

            default :
            printf("Invalid syntax!");
        }
        break;

        case 4 :
        printf("Choose your unit for conversition :\n1.)USD to INR\n 2.)INR to USD\n 3.)INR to EURO\n 4.)EURO to INR\n 5.)USD to EURO\n 6.)EURO to USD\n");
        scanf("%d",&unit);
        switch(unit){
            case 1:
            printf("enter USD :");
            scanf("%f",&usd);
            printf("%f USD = %f INR",usd,usd*83.81);
            break;

            case 2:
            printf("enter INR :");
            scanf("%f",&inr);
            printf("%f INR = %f USD",inr,inr*0.012);
            break;

            case 3:
            printf("enter INR :");
            scanf("%f",&inr);
            printf("%f INR = %f EURO",inr,inr*0.011);
            break;

            case 4:
            printf("enter EURO :");
            scanf("%f",&euro);
            printf("%f EURO = %f INR",euro,euro*91.23);
            break;

            case 5:
            printf("enter USD :");
            scanf("%f",&usd);
            printf("%f USD = %f EURO",usd,usd*0.94);
            break;

            case 6:
            printf("enter EURO :");
            scanf("%f",&euro);
            printf("%f EURO = %f USD",euro,euro*1.06);
            break;

            default :
            printf("Invalid syntax!");
        }
        break;

        default :
        printf("Invalid syntax!");
    }
    
    return 0;
}

/*Programmer :- Udit Sharma*/