#include<stdio.h>
#include<math.h>

int main(){
   int arr[]={1,3,4,5};
   for(int i=1; i<=5; i++){

      //Condition to find the missing number
      if(arr[i-1]==i){
       continue;
      }

      //Print the missing number
      printf("The missing number is = %d",i);
      break;
   }

 return 0;
}
