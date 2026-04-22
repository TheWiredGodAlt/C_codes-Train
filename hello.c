#include<stdio.h>
int main(void){
    int grade;
    int a_count=0;
    printf("Hello World, please insert your grade in american format \n(EOF for ending the process)");

    while((grade=getchar())!= EOF){
        switch(grade){

            case 'A':
                ++a_count;
                    break;
        }

    }
    printf("\nThe number of A's is:%d",a_count);
    return(0);
}
