#include<stdio.h>
#include<math.h>
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
