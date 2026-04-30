#include<stdio.h>
/*Functions*/
int menu();
int credits();
/*Variaveis logicas*/
int creditmode=-1, varmenu=0,  mode=-1;
int test=0;
/*Main function*/ 
int main(void){
    while(test==0){
    printf("===========DeltaX First Menu===========\n");
    mode=-1;
    creditmode=-1;
    menu();
    }
return(0);
}

/*Menu logic, it's a function*/
int menu(void){
   while(varmenu!=1){
    printf("(0)Iniciar\n(1)Creditos\n(2)Sair\n");
    scanf("%d",&mode);
    switch(mode){
        case 1:
            credits();
            break;
        case 0:
            printf("Iniciando....\n");
            break;
        case 2:
            printf("O usuario escolheu sair\n");
            test=1;
            break;
        }
break;
    }
}
/*Credits logic (also a function)*/
int credits(){
    while(creditmode!=1){
    printf("\n====Made by Wired God====\n");
    printf("Press(1) to come back.\n");
    scanf("%d",&creditmode);
    }
}
