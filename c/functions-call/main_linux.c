#define  suma(a) a[0] + a[1]
#define resta(a) a[0] - a[1]
#define multi(a) a[0] * a[1]
#include<stdio.h>



void caso_option(char *caso){
    printf("a) SUMA\n");
    printf("b) RESTA\n");
    printf("c) MULTIPLICACION\n");
    printf("Que desea realizar?: ");
    *caso = getchar();
}

void message(int *a){

    //FORMA #1 ---->*
    printf("\nIngrese valor #1: ");
    scanf("%d",a);
    printf("Ingrese valor #2: ");
    scanf("%d",a+1);

    //FORMA #2 ---->*
    /*printf("Ingrese valor #1: ");
    scanf("%d",a);
    printf("Ingrese valor #2: ");
    scanf("%d",&a[1]);*/
}

int main(){
    int again;
    int a[2];
    char caso;
    
    printf("\nBIENVENIDO A CALCULADORA, LAS OPCIONES A CONTINUACION\n");
        
        caso_option(&caso);
        switch (caso)
        {
        case 'a':
            message(a);
            printf("El resultado es: %d\n\n",suma(a));
            break;
        case 'b':
            message(a);
            printf("El resultado es: %d\n\n",resta(a));
            break;
        case 'c':
            message(a);
            printf("El resultado es: %d\n\n",multi(a));
            break;
        
        default: printf("Valor no valido.\n");
            break;
        }

        printf("Desea hacer otra operacion? -> si = 1 : ");
	scanf("%d",&again);
        if(again == 1) main();

    return 0;
}
