#include <stdio.h>

int main() {

    int n, i, count = 0;

    scanf("%d", &n);

    while(count<1000)
    {
        for (i=0; i<n; i++)
       {
           if (count<1000)
                printf("N[%d] = %d\n", count, i);
            count++;
       }

    }

    return 0;
}
