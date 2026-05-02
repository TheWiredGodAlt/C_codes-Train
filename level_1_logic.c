#include<stdio.h>
/*Functions*/
int boss_counter();
/*Basic global var*/
int test=0;
int main(void){
    int levelstart=0;
    printf("\nPress (1) to begin:\n");
    scanf("%d",&levelstart);
    if(levelstart==1){boss_counter();}
    else{printf("Invalid value, try again\n");}
    return(0);
}

int boss_counter(){
    int counter;
    for(counter=0;counter<=1000;counter++){
    printf("\ntest");
    };
    return(0);
};
