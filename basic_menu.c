#include<stdio.h>
/*Functions*/
int menu();
int credits();
/*Basic global var*/
int test=0;
/*Main function*/ 
int main(void){
    while(test==0){
    printf("===========DeltaX First Menu===========\n");
    menu();
    }
return(0);
}

/*Menu logic, it's a function*/
int menu(void){
/*Variaveis logicas*/
    int varmenu=0;
    int mode=-1;
/*Loop que faz o menu todo funcionar*/
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
        }
break;
    }
}
/*Credits logic (also a function)*/
int credits(){
  int creditmode=0;
    while(creditmode!=1){
    printf("\n====Made by Wired God====\nPress(1) to come back.\n");
    scanf("%d",&creditmode);
    }
}
