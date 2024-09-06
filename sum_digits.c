#include<stdio.h>
#include<math.h>

int main()
{

    int num,original_number,remainder,result=0;
    printf("Enter any number:");
    scanf("%d",&num);

    if(num>=1 && num<=9)
    {
        printf("Please enter number not digit:");
        return 1;
    }

    else
    {
        original_number=num;
        do
        {
            remainder=num%10;
            result=result+remainder;
            num=num/10;


        }
        while(num!=0);
        printf("Sum of the digits is=%d",result);
    }

    return 0;
}

