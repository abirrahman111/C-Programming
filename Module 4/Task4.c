#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i;
    int n;
    scanf("%d", &n);
    for(i=1;i<=n;i+=1)
    {
        if(i%3==0 && i%7==0)
        {
            printf("%d\n", i );
        }
        else
        {
            continue;
        }
    }
    return 0;
}
