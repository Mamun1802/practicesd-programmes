#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int num1,num2,n,i,sum=0,isPrime;
    printf("Enter the beginning number of the range:");
    scanf("%d",&num1);
    printf("Enter the ending number of the range:");
    scanf("%d",&num2);
    if(num1<2){
            num1=2;
    }
    for(n=num1; n<=num2; n++){
        isPrime=1;

         for(i=2; i<=sqrt(n); i++){
            if(n%i==0){
                isPrime=0;
                break;
            }
         }
         if(isPrime){
            printf("%d ",n);
            sum=sum+1;
         }
        }
        printf("\n");
        printf("Total number of prime number is =%d",sum);
        return 0;
    }
