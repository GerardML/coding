#define  suma(a) a[0] + a[1]
#define resta(a) a[0] - a[1]
#define multi(a) a[0] * a[1]
#include <stdio.h>

void again();
void caso_option(char *caso);
void message(int *a);
    
int main(){
    system("cls");
    int a[2];
    char caso;
    
    //printf("\nagain: %c",again);
    printf("\nBIENVENIDO A CALCULADORA, LAS OPCIONES A CONTINUACION\n");
        
        caso_option(&caso);
        switch (caso)
        {
        case 'a':
            message(a);
            printf("El resultado es: %d\n",suma(a));
            break;
        case 'b':
            message(a);
            printf("El resultado es: %d\n",resta(a));
            break;
        case 'c':
            message(a);
            printf("El resultado es: %d\n",multi(a));
            break;
        
        default: printf("Valor no valido.\n");
            break;
        }
        
        again();

    return 0;
}

void again(){
    char again;
    printf("\nDesea hacer otra operacion? -> si = y : ");
    scanf("%c", &again);
    if (again == 'Y' || again == 'y') main();
    else
    {
        scanf("%c", &again);
        if (again == 'Y' || again == 'y') main();
    }
}

void caso_option(char *caso){
    printf("a) SUMA\n");
    printf("b) RESTA\n");
    printf("c) MULTIPLICACION\n");
    printf("Que desea realizar?: ");
    *caso = getchar();
    if(*caso != 'a' && *caso != 'b' && *caso != 'c'){ //necesario ya que al llamar a la funcion de nuevo "*caso" modifica su valor
        *caso = getchar();
    }
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