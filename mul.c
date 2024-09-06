#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,result;
    printf("Enter any number from 1 to 10:");
    scanf("%d",&num);
    if(num<0 || num>10)
    {
        printf("Invalid number");
    }
    else
    {
        for(i=1; i<=10; i++)
        {
            result=num*i;
            printf("%d x %d = %d\n",num,i,result);
        }
    }
    return 0;
}
