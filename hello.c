/*My first C code for development*/
#include<stdio.h>
#include<string.h>
/*My first C hello world*/
int main(void){
    int grade,count,total,med;
    const char* sent="n";
    char strinput[1];
    total=0;
    count=0;
    while(strcmp(sent,strinput)!=0){
        printf("Add a new grade(y=yes n=no):\n");
        scanf(" %c",&strinput);
            printf("Insert your bimestral grade\n");
            scanf(" %f",&grade);
            count++;
            total=grade+total;
    };
    med=total/count;
    printf("The med value is:%f",med);
    return(0);
}
/*End of my first C Hello world main function, simple addition*/



