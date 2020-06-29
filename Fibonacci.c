#include <stdio.h> 
int main()
{
    int a, i, m, n;
    do{scanf("%d", &a);
    {
    n=1;
    m=0;
    i=0 ;
    while( i!=a ){
        if(i==0 && a==1)printf("0");
        else if(i==0 && a!=1)printf("0 ");
        else if(i==1 && a==2)printf("1");
        else if(i==1 && a!=2)printf("1 ");
        else if(i%2==0 && i!=0 && i==a-1)
        {
            m=n+m;
            printf("%d", m);
        }
        else if(i%2==0 && i!=0 && i<a-1)
        {
            m=n+m;
            printf("%d ", m);
        } 
        else if(i%2!=0 && i!=1 && i<a-1)
        {
            n=n+m;
            printf("%d ", n);
        } 
        else if(i%2!=0 && i!=1 && i==a-1)
        {
            n=n+m;
            printf("%d", n);
        } 
        i=1+i;
    }
    printf("\n");
    }
    
    }while(a!=0);
    return 0;
}