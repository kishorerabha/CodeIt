#include <stdio.h>
#include <stdlib.h>

int main()
{
    ram();

    return 0;
}

void pattern()
{
    int i,j,x;
    scanf("%d",&x);

    for (i=1;i<=2*x-1;++i)
    {
        for (j=1;j<=2*x-1;++j)
        {
            if (j<=i) printf("%d ",j<=x?j:2*x-j); //for continous flow 12345 till center and invert higher numbers
            else if(2*x-j<=i) printf("%d ", 2*x-j); //for inverting the numbers after center
            else printf("%d ",i<=x?i:2*x-i); //reapeting same number
        }
        printf("\n");
    }
}
