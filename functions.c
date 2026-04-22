//Basic train code about functions and math library.
#include<stdio.h>
#include<math.h>
//Making and the homemade function.
int square(int y){
    return y*y;
}
int main(void){
//Basic square root calculus made using sqrt function from the math lib. 
    printf("basic usage for the math lib %.2f\n",sqrt(900));
    printf("Hello, and welcome to our first function test\n");
    int x;
    for(x=0;x<=10;x++){
        printf("%d\n", square(x));
    }
    return(0);
}

