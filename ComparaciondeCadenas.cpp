#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (void)
{
    char cadena1[20], cadena2[20];
    int i=0;
    printf("Ingresa la primer cadena: \n");
    fflush(stdin); // borra la entrada previa (standar input)
    //c=getchar(); //gets() leeer cadenas
    gets (cadena1);
    fflush(stdin);
    system ("cls");
    printf("Ingresa la segunda cadena: \n");
    gets(cadena2);
    if (strcmp(cadena1,cadena2)==0)    
        printf(" %s es igual a %s\n",cadena1,cadena2);
        else 
        printf("\n %s es distinta a %s\n ",cadena1,cadena2);
    system("pause");
}
