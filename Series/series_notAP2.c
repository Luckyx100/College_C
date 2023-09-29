// Incrementation of +1, +2, +3, +4, .........
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int j = 1; 
    for (int i = 0; i <= n;)
    {
        printf("%d ", j);
        j = ++j + i++;
    }
    /* 
    Explanation : 
--------------------------------------
       j = (++j) + (i++);

    1. j = 1;
    2. j = (++1) + (0++) = 1 + 0 = 2
    3. j = (++2) + (1++) = 3 + 1 = 4
    4. j = (++4) + (2++) = 5 + 2 = 7
    5. j = (++7) + (3++) = 8 + 3 = 11
    .........
    */
    return 0;
}