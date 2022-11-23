#include <stdio.h>
int getValue()
{
    int n;
    do {
        printf("Donner un entier n>0");
        scanf("%d", &n);
    }while(n<=0);
    return n;
}
int multiplication(int A, int B)
{
    int X,Y, S=0;
    X=A; Y=B;
    while(X>=1)
    {
        if(X%2!=0)
            S+=Y;
        X/=2;
        Y*=2;
    }
    return S;
}
int main() {
    int A,B,res;
    A=getValue();
    B=getValue();
    res= multiplication(A,B);
    printf("%d * %d = %d\n",A,B,res);
    return 0;
}
