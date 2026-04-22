#include<stdio.h>
int main(void){
    int counter=0;
    printf("Simple counter:\n");
    do{
        printf("%d",counter);
        counter++;
    }while(counter<=10);


    return(0);
}
