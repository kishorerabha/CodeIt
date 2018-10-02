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


void ram()
{
    int n,i,j,k,m=0;
    int ar[10000];

    printf("Enter upper limit:\t");
    scanf("%d",&n);

    int x = pow(n,(float)1/3)+1;
    printf("%d\n",x);


    for(i=1729;i<=n;++i)
    {
        for(j=1;j<=x;++j)
        {
            for(k=1;k<=x;++k)
            {
                if(!(j==k))
                {
                    if((pow(j,3)+ pow(k,3))==i)
                    {
                        ar[m++]=i;
                        printf("%d^3 + %d^3 = %d\n",j,k,i);
                    }
                }


            }
        }
    }

    printf("\nRamanujan Numbers are\n");
    printf("%d",ar[i]);

    for(i=0;i<m;++i)
    {
        for(j=i+1;j<m;++j)
        {
            if(i!=j)
            {
                    if(ar[i]==ar[j])
            printf("%d  ",ar[i]);

            }
                    }
    }
}
