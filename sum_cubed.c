#include<stdio.h>
#include<math.h>


int main(){
    int number,sum=0,n;

    //Input the last number of the series
    printf("Enter the last number of the series:");
    scanf("%d",&n);

    //loop through the series to count the sum
    for(int i=1;i<=n;i++){
    number=i*i*i;
    sum=sum+number;
    }
   //Print the sum of the series
   printf("sum=%d",sum);

   return 0;

}
