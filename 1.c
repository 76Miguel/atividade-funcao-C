#include <stdio.h>

int calcDelta(int a,int b, int c){
    int conta;
    conta = (b*b)-(4*a*c);
    return conta;


}

int  main(){

    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);

    res=calcDelta(a,b,c);
    printf("\n %d", res);








    return 0;
}
