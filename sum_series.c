#include<stdio.h>
#include<math.h>


int main(){
    int number,sum=0,n;

    //Input the last number of the series
    printf("Enter the last number of the series 1+2+3...+(n terms):");
    scanf("%d",&n);

    //loop through the series to count the sum
    for(number=1;number<=n;number++){
    sum=sum+number;
    }
   //Print the sum of the series
   printf("sum=%d",sum);

   return 0;

}
