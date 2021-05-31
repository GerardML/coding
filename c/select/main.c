#include<stdio.h>

int main(){
    char sel;

    printf("a) Nombre\n");
    printf("b) Apellido\n");
    printf("c) Edad\n");
    scanf("%c",&sel);
    switch (sel)
    {
    case 'a': printf("Gerardo\n");
    break;
    case 'b': printf("Meneses\n");
    break;
    case 'c': printf("22 anios\n");
    break;
    
    default: printf("opcion indefinida\n");
    break;
    }
    return 0;
}