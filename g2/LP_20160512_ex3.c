#include<stdio.h>
#include<stdlib.h>
int main(){
    int v[]={1,2,3,4};
    int * ptr = &v[0];
    int i;

    for (i = 0; i < 4; i++){
        printf("v[%d] = %d \n", i, v[i]);
        printf("&v[%d] = %d\n", i, &v[i]);
        printf("ptr = %d \n", ptr);
    }
    printf("######\n");
    for (i = 0; i < 4; i++){
        printf("ptr = %d \n", *ptr);
        ptr++;
    }
    ptr--;
    for (i = 0; i < 4; i++){
        printf("ptr = %d \n", *ptr);
        ptr--;
    }

}
