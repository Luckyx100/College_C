#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is Even number", n) : printf("%d is Odd number", n);

    return 0;
}