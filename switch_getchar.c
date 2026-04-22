#include<stdio.h>
int main(void){

//basic variables
    int grade;
    int a_count=0, b_count=0;
    printf("Hello World, please insert your grade in american format \n(EOF for ending the process)");

//Get char function, takes a character and puts it inside an int type variable 
    while((grade=getchar())!= EOF){
        switch(grade){
//Basic case functions, with focus on counting the number of A's and B's
            case 'A':
            case 'a':
                ++a_count;
                    break;
            case 'B':
            case 'b':
                    ++b_count;
                    break;

//Prevents the default message from looping
            case '\n':
            case '\t':
            case ' ':
                    break;
//Makes easier for declaring case variables without repeating 
            default:
                    printf("Wrong letter try again:\n");
                    break;
        }

    }
    printf("\nThe number of A's is:%d",a_count);
    printf("\nThe number of B's is:%d",b_count);
    return(0);
}
