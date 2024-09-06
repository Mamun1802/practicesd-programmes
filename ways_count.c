#include<stdio.h>
#include<math.h>


int main(){
    int count=1,n,quotient;

    //Input number of stairs
    printf("Enter the number of stairs:");
    scanf("%d",&n);

    quotient=n/2;

    //loop runs to count the total way
    for(int i=quotient;i>=1;i--){
    count=count+1;
    }

   //Print the number of ways
   printf("Number of ways to reach top is = %d",count);

   return 0;

}
