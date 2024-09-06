#include<stdio.h>
#include<math.h>


int main(){
    int n,quotient,result;

    //Input number of stairs
    printf("Enter the number of stairs:");
    scanf("%d",&n);

    quotient=n/2;

   //Count the total ways
   result=quotient+1;


   //Print the number of ways
   printf("Number of ways to reach top is = %d",result);

   return 0;

}
