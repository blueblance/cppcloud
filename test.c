#include <stdio.h>


main() {
    int *ptra;
    int b = 3;
    int c = 4;
    ptra = &b;
    //printf("ptra address = %X \n" , &b);
    //printf("ptra address = %d \n" , *ptra);
    //printf("ptra address = %X \n" , ptra);
    //printf("ptra address = %d \n" , FA(4));
    printf("b = %d \n" , b);
    printf("c = %d \n" , c);
    printf("b adress = %X \n" , &b);
    printf("c adress = %X \n" , &c);
    swap(&b , &c);
    printf("b = %d \n" , b);
    printf("c = %d \n" , c);
        printf("b adress = %X \n" , &b);
    printf("c adress = %X \n" , &c);
    
    
    
}

int FA(int a){
    return a == 0 ? 1 : FA(a-1) * a;
    
}

void swap(int *a , int *b) {
    int *temp;
    temp = *a;
    printf("temp adress = %X \n" , &temp);
    printf("a adress = %X \n" , &a);
    printf("b adress = %X \n " , b);
    *a = *b;
    *b = temp;
    printf("temp adress = %X \n" , &temp);
    printf("a adress = %X \n" , a);
    printf("b adress = %X \n " , b);
    
}