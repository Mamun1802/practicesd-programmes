#include<stdio.h>
#include<math.h>

int main()
{
    int choice;
    float f,c,k;
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("3.Celsius to Kelvin");
    printf("\n \n");
    printf("Enter the choice from the serial number as your demand:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the value in Celsius scale:");
        scanf("%f",&c);
        f=c*1.8+32;
        printf("%.2f Fahrenheit",f);
        break;
    case 2:
        printf("Enter the value in Fahrenheit scale:");
        scanf("%f",&f);
        c=(f-32)/1.8;
        printf("%.2f Celsius",c);
        break;
    case 3:
        printf("Enter the value in Celsius scale:");
        scanf("%f",&c);
        k=273+c;
        printf("%.2f Kelvin",k);
        break;
    default :
        printf("Invalid choice");

    }
    return 0;

}
