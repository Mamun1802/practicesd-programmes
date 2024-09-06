#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,remainder;
    printf("Enter the first number:");
    scanf("%d",&num1);
     printf("Enter the second number:");
    scanf("%d",&num2);

    if(num1>num2)
    {
        do
        {
            remainder=num1%num2;
            num1=num2;
            num2=remainder;
        }
        while(num2!=0);
        printf("GCD is=%d",num1);

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
        printf("GCD is=%d",num2);

    }
    return 0;

}
