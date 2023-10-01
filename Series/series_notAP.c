// Incrementation of +3, +4, +5, +6, ...........
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int j = 0;
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", j);
        j = ++j + i;
    }
    /* 
    Explanation : 
--------------------------------------
       j = (++j) + (++i);

    1. j = 0;
    2. j = (++0) + (++1) = 1 + 2 = 3
    3. j = (++3) + (++2) = 4 + 3 = 7
    4. j = (++7) + (++3) = 8 + 4 = 12
    5. j = (++12) + (++4) = 13 + 5 = 18
    .........
    */
    return 0;
}