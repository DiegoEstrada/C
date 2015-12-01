#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
    char c, cadena[20];
    int i=0;
    printf("Ingresa un caracter\n");
    fflush(stdin); // borra la entrada previa (standar input)
    //c=getchar(); //gets() leeer cadenas
    gets (cadena);
    while (cadena[i]!=NULL)
    {
           if (isdigit(cadena[i])==1) // Expresion booleana que se pregunta si es un digito y devuelve un uno para verdadero y un cero para falso
    {
    printf("%c \tEs un Digito\n",cadena[i]);
    }
    else 
    {
        if (isalpha(cadena[i])==1)
        {
                if (islower(cadena[i])==1)
                {
                    printf("\t %c es una letra minuscula\n",cadena[i]);
                }
                else
                {
                    if (isupper(cadena[i])==1)
                    {
                        printf("\t %c es una letra mayuscula\n",cadena[i]);
                    }
                }
        }
    }
    i++;
    }
    system("pause");
}
