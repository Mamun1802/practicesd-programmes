#include<stdio.h>
#include<math.h>


int main(){
    int factorial=1,n;

    //Input a number to find its factorial
    printf("Enter any positive number:");
    scanf("%d",&n);

    //loop runs to count the factorial
    for(int i=1;i<=n;i++){
    factorial=factorial*i;
    }

   //Print the sum of the series
   printf("Factorial of %d =%d",n,factorial);

   return 0;

}
