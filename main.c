#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Engine,intensity;

    while(1)
    {


        printf("Enter the Status of Engine\n1==>On\n2==>Off\n");
        scanf("%d",&Engine);
        if(Engine==1)
        {
            printf("Enter the Rain intensity Value in the range 0 - 1023\n");
            scanf("%d",&intensity);
            printf("\n\n");
            if(intensity<100)
            {
                printf("Wiper is Off\n");
                printf("PWM=0 Percent\n");
            }
            else if((intensity>=100)&&(intensity<250))
            {
                printf("Wiper is Operating in Low Mode \n");
                printf("PWM=25 Percent\n");
            }
            else if((intensity>=251)&&(intensity<500))
            {
                printf("Wiper is Operating in Medium Mode\n");
                printf("PWM=50 Percent\n");
            }
            else if(intensity>=500)
            {
                printf("Wiper is Operating in High Mode\n");
                printf("PWM=75 Percent\n");
            }
        }

        printf("\n\n");
    }
    return 0;
}
