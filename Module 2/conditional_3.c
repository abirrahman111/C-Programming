#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox\n");
        
        if (tk>=10000)
        {
            printf("Saint Martin\n ");
        }
        else
        {
            printf("Come back\n");
        }
    }
    else
    {
        printf("Jaboi na\n");
    }
    
    return 0;
}