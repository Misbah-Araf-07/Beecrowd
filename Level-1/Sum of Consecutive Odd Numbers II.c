/*
#include <stdio.h>

int main() {

    int N,t, X,Y ;
    N=0,t=0, X=0 , Y=0 ;
    int sum=0;



    scanf("%d",&N);

    for (; t<N; t++)
    {
      scanf("%d %d", &X, &Y);


      if (X>Y)
        {
        int temp;
        temp= X;
        X=Y;
        Y=temp;
        }

      if (X==Y) sum=0;

    for (int z=(X+1); z<Y ;  )
        {
        if (z%2!=0) sum+=z;
        z++;
        }
         printf("%d\n",sum);
         sum=0;
    }

    return 0;
}
*/


#include <stdio.h>

int main() {

    int N,t, X,Y ;
    N=0,t=0, X=0 , Y=0 ;
    int sum=0;



    scanf("%d",&N);

    for (; t<N; t++)
    {
      scanf("%d %d", &X, &Y);


      if (X>Y)
        {
        int temp;
        temp= X;
        X=Y;
        Y=temp;
        }

      if (X==Y) sum=0;

    for (int z=(X+1); z<Y ;  )
        {
        if (z%2!=0) sum+=z;
        z++;
        }
         printf("%d\n",sum);
         sum=0;
    }

    return 0;
}
