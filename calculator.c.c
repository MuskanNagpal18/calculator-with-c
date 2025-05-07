/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int count,i;
    double number,result,num1;
    char operator;
    printf("how many numbers you want to calculate");
    scanf("%d",&count);
     printf("enter num1");
    scanf("%lf",&num1);
    for(int i=2;i<=count;i++){
    printf("enter the number %d",i);
    scanf("%lf",&number);
    printf("enter the operators (+,-,/,*):");
    scanf(" %c",&operator);
    switch (operator)
    {
        case '+':
        num1 += number;
        break;
         case  '-':
        num1 -= number;
        break;
         case  '*':
        num1 *= number;
        break;
         case '/':
        if(number !=0){
           num1 /= number; 
        }
         else {
             printf("error: in devision zero is not allowed  ");
         }
        break;
        default:
        printf("invalid operators");
        break;
    }
    }
   
    printf("Final result: %.2lf\n", num1);
    return 0;
}

