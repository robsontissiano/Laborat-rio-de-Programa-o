#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int y = 20;
    int aux;
    int * ptr1 = &x;
    int * ptr2 = &y;

    aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
    printf("x = %d e Y = %d \n", x, y);


    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("x = %d e Y = %d \n", x, y);
}
