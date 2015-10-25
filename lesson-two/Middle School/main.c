#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, average, bn;
    n1 = n2 = n3 = n4 = average = 0;

    printf(" *¨¨**¨¨**¨¨**¨¨* Middle Scholl *¨¨**¨¨**¨¨**¨¨* \n\n");

    printf("\nEnter first note:");
    scanf("%f", &n1);
    printf("\nEnter second note:");
    scanf("%f", &n2);
    printf("\nEnter third note:");
    scanf("%f", &n3);
    printf("\nEnter fourth note:");
    scanf("%f", &n4);

    average = (n1 + n2 + n3 + n4) / 4;

    printf("%f :", average);

    if(average >= 7)
    {
    printf("\n Passed the examination!!");
    }
    else if(average <= 7)
    {
    printf("\nEnter note Bonus:");
    scanf("%f", &bn);
    if(bn < 8)
    {
    printf("\n Failed the examination!!");
    }
    else
    {
    printf("\n Passed the examination!!");
    }
    }
    else if(average <=4)
    {
    printf("\n Failed the examination!!");
    }

    return 0;

}
