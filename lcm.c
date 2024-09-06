#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,remainder,lcm,a,b;
    printf("Enter the first number:");
    scanf("%d",&num1);
     printf("Enter the second number:");
    scanf("%d",&num2);
    a=num1;
    b=num2;
    if(num1>num2)
    {
        do
        {
            remainder=num1%num2;
            num1=num2;
            num2=remainder;
        }
        while(num2!=0);
        lcm=(a*b)/num1;
        printf("LCM is=%d",lcm);

    }
    else
    {
       do
        {
            remainder=num2%num1;
            num2=num1;
            num1=remainder;
        }
        while(num1!=0);
        lcm=(a*b)/num2;
        printf("LCM is=%d",lcm);

    }
    return 0;

}
