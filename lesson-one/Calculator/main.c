#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, som, sub, mul, div;

    printf("\t***************[ Calculator ONE ]*********************\n\n\n");

    printf("Enter a number (1) \n\n");
    scanf("%i", &n1);
    printf("Enter a number (2) \n\n");
    scanf("%i", &n2);

    som =   n1 + n2;
    sub =   n1 - n2;
    mul =   n1 * n2;
    div =   n1 / n2;

    printf("The sum is : %i \n\n" , som);
     printf("Subtraction is: %i \n\n" , sub);
      printf("The product is: %i \n\n" , div);
       printf("Multiplication is: %i\n\n" , mul);

    return 0;
}
