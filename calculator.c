#include <stdio.h>
int main()
{
    int i1,i2;
    float f1,f2;
    double d1,d2;
    char op;

    printf("\n******************");
    printf("\n    CALCULATOR    ");
    printf("\n******************");
    printf("\n enter value of i1 and i2 if the desired number is integer type PRESS 0 IF THE DESIRED NUMBER IS NOT OF INTEGER TYPE");
    scanf("%d %d",&i1,&i2);
    printf("\n enter the value of f1 f2 if the desired number is either integer or decimal type, PRESS 0 IF THE NUMBER IS NOT FLOAT TYPE DECIMAL ");
    scanf("%f %f",&f1,&f2);
    printf("\n enter the value of d1 and d2 if the desired number is of type of long float type, PRESS 0 IF NUMBERS ARE NOT OF FORM OF LONG FLOAT. ALSO STATE THE OPERATION U WANT TO CONDUCT ");
    scanf("%lf %lf %c",&d1,&d2,&op);
    
    

    switch(op){
        case '+':
        printf("\n%d + %d = %d",i1,i2,i1+i2);
        printf("\n%f + %f = %f",f1,f2,f1+f2);
        printf("\n%lf + %lf = %lf",d1,d2,d1+d2);
        break;
        case '-':
        printf("\n%d - %d = %d",i1,i2,i1-i2);
        printf("\n%f - %f = %f",f1,f2,f1-f2);
        printf("\n%lf - %lf = %lf",d1,d2,d1-d2);        
        break;
        case '*':
        printf("\n%d * %d = %d",i1,i2,i1*i2);
        printf("\n%f * %f = %f",f1,f2,f1*f2);
        printf("\n%lf * %lf = %lf",d1,d2,d1*d2);        
        break;
        case '/':
        printf("\n%d / %d = %d",i1,i2,i1/i2);
        printf("\n%f / %f = %f",f1,f2,f1/f2);
        printf("\n%lf / %lf = %lf",d1,d2,d1/d2);        
        break;
        default:
        printf("please enter the operation from +, -, * or /"); 
        break;   
    }
    return 0;

}