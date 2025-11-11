#include<stdio.h>

void modificarX(int *p){
    *p = *p + 2718;
}


int main(void){
    int x = 3141;
    int *p;
    p = &x;
    modificarX(p);

    printf("%d",x);
}

