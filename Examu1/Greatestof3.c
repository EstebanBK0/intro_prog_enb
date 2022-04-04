//Design the algorithm for a program that find the greatest number within given 3 numbers by the user. 
#include <stdio.h>
int A, B, C;

int main()
{
    int A, B, C;
  
    printf("Enter the numbers A, B and C:");
    scanf("%d %d %d", &A, &B, &C);
  
    if (A >= B && A >= C)
        printf("%d is the greatest number.\n", A);
  
    if (B >= A && B >= C)
        printf("%d is the greatest number.\n", B);
  
    if (C >= A && C >= B)
        printf("%d is the greatest number.\n", C);
  
    return 0;
}