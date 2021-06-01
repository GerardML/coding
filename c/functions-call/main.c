#include<stdio.h>

void caso_option(char *caso){
    printf("a) SUMA\n");
    printf("b) RESTA\n");
    printf("c) MULTIPLICACION\n");
    printf("Que desea realizar?: ");
    scanf("%c",caso);
}

void message(int *a){

    //FORMA #1 ---->*
    printf("Ingrese valor #1: ");
    scanf("%d",a);
    printf("Ingrese valor #2: ");
    scanf("%d",a+1);

    //FORMA #2 ---->*
    /*printf("Ingrese valor #1: ");
    scanf("%d",a);
    printf("Ingrese valor #2: ");
    scanf("%d",&a[1]);*/
}

int suma(int *a){
    return *a+(*(a+1));
}
int resta(int *a){
    return *a-(*(a+1));
}
int multi(int *a){
    return *a*(*(a+1));
}
int res,a[2];
    char caso;
    char again= 'Y';
    char *p = &caso;

int main(){
    

    printf("BIENVENIDO A CALCULADORA, LAS OPCIONES A CONTINUACION\n");
        
        caso_option(p);
        switch (*p)
        {
        case 'a':
            message(a);
            res = suma(a);
            printf("El resultado es: %d\n",res);
            scanf("%c",p);
            break;
        case 'b':
            message(a);
            res = resta(a);
            printf("El resultado es: %d\n",res);
            break;
        case 'c':
            message(a);
            res = multi(a);
            printf("El resultado es: %d\n",res);
            break;
        
        default: printf("Valor no valido.\n");
            break;
        }

        printf("Desea hacer otra operacion? -> Y|N : ");
        scanf("%c",&again);
        if(again=='Y' || again=='y') main();
        //printf("Otra? %c\n",again);

    return 0;
}