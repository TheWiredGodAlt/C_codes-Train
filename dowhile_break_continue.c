#include<stdio.h>
int main(void){
    int counter=-1;
    printf("Simple counter:\n");
    do{
        counter;
        counter++;
        if (counter==5){
            continue;
        }
//In this scenario, the computer ignores the value of 5, jumps to 6, and prints until 11 (it ignores the value of the first memory position too)
        printf("%d",counter);
    }while(counter<=10);

//The difference between the continue function is visible here.
//This code is gonna show just the normal sequence, ignoring the 5, without any value jumps.
    printf("\nSimple counter 2:\n");
    for(counter=0;counter<=10;counter++){
        if(counter==5){
            continue;
        }
        printf("%d",counter);
    };
    return(0);
}
