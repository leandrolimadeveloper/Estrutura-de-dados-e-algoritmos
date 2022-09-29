#include <stdio.h>

int main()
{
    int x, y, z, i, n;
    x = 0;
    y = 1;
    n = 5;
    for (i = 0; i < n; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    
    printf("%d", z);

    return 0;
}