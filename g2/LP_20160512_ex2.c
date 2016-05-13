#include<stdio.h>
#include<stdlib.h>

void teste(int * p){
    printf("p = %d \n", p);
    *p = *p + 2;
}

int main(){
    int x = 10;
    int * ptr = &x;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);
    *ptr = *ptr + 2;
    printf("*ptr = %d \n", *ptr);
    printf("ptr = %d \n", ptr);
    printf("&ptr = %d \n", &ptr);
    printf("&x = %d \n", &x);
    system("pause");
    teste(&x);
    printf("x = %d \n", x);
}
