#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("1.");

        for (int j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    
    return 0;
}