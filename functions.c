//Basic train code about functions and math library.
#include<stdio.h>
#include<math.h>

//Making the first homemade function.
int square(int y){
    return y*y;
}
//"Complex" function prototype(just a reference so the compiler won't bug)
int max(int a, int b, int c);
int main(void){
//Var used by our first homemade function
    int x;

//the variables used by the "max" function
    int number1, number2, number3;

//Basic square root calculus made using sqrt function from the math lib. 
    printf("basic usage for the math lib %.2f\n",sqrt(900));

//Our first homemade function test
    printf("Hello, and welcome to our first function test\n");
//Logic for printing the numeric sequence for our first homemade function
    for(x=0;x<=10;x++){
        printf("%d\n", square(x));
    };
//Basicc scanf of the the variables that are gonna be used by the function
    printf("Hello again, and welcome to the second homemade function learning test\nPlease insert three interger numbers:\n");
    scanf("%d %d %d",&number1,&number2,&number3);
//Calling the actual function and giving it it's value
    printf("The biggest integer is:%d",max(number1,number2,number3));
    return(0);
}
//The whole math logic beeing executed by the "max" function
int max(int a, int b, int c){
    int max_v=a;
     if(b>max_v){
         max_v=b;
    }
    if(c>max_v){
         max_v=c;
    }
    return max_v;
}
