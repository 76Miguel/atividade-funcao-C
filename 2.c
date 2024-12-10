#include <stdio.h>

int verificaMaior(int x, int y){
    int maior;

    if(x > y){
        maior = x;
    } else{
        maior = y;
        }
    return maior;
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    int maior=verificaMaior(x,y);

    printf("\n%d", maior);

    return 0;
}
