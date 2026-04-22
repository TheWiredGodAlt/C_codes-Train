//Basic train code about functions and math library.
#include<stdio.h>
#include<math.h>
//Making and the homemade function.
int square(int y){
    return y*y;
}
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
int main(void){
//Basic square root calculus made using sqrt function from the math lib. 
    printf("basic usage for the math lib %.2f\n",sqrt(900));
    printf("Hello, and welcome to our first function test\n");
    int x;
//the variables used in the second homemade function test
    int number1, number2, number3;
    for(x=0;x<=10;x++){
        printf("%d\n", square(x));
    };
//Basicc scanf of the the variables that are gonna be used by the function
    printf("Hello again, and welcome to the second homemade function learning test\nPlease insert three interger numbers");
    scanf("%d %d %d",&number1,&number2,&number3);
    printf("The biggest integer is %d",max(number1,number2,number3));
    return(0);
}

