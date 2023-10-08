#include <stdio.h>
void printDigit(int a){
    switch ( a )
    {
    case 0:
        printf("Zero ");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0,digit;
    // reverse
    while ( n != 0 )
    {
        sum = sum*10 + (n%10);
        n /= 10;
    }
    
    while ( sum != 0 )
    {
        digit = sum % 10;
        printDigit(digit);
        sum = sum / 10;
    }
    
    return 0;
}