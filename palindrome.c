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
    {original_number=num;
        do
        {
            remainder=num%10;
            result=result*10+remainder;
            num=num/10;


        }
        while(num!=0);
        if(result==original_number)
        {
            printf("It is a palindrome number");
        }
        else
        {
            printf("It is not a palindrome number");
        }
    }

    return 0;
}

