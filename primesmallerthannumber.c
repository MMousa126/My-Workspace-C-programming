#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number,i,flag,n;
    while(1)
    {
        flag=0;
        printf(" please enter the number ");
        scanf("%d",&number);


            for (n=2; n<=number; n++)
            {
                flag=0;

                for (i=2; i<=n/2 && flag == 0; i++)
                {
                    if (n%i == 0)
                        flag=1;
                }
                if (flag==0)
                    printf(" The Number is prime %d\n ",n);

            }
    }
    return 0;
}
