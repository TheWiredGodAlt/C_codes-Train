//Basic train code about functions and math library.
#include<stdio.h>
#include<math.h>
int square(int y);
int main(void){
//Basic square root calculus made using sqrt function from the math lib. 
    printf("basic usage for the math lib %.2f\n",sqrt(900));
    int x;
    printf("Hello, and welcome to our first function test\n");
    for(x=1;x<=10;x++){
        printf("%d\n", square(x), "\n");
    }
    return(0);
}
//Ending of Main function.
int square(int y){
    return y*y;
}
