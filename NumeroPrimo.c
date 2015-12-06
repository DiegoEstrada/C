#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
int main (void)
{
int n,r,c=2;
bool primo =true;
system ("color 3A");
printf("\t\t\tEste programa determina si un es primo o no \t\t\t\n");
printf("Indroduce un numero entero.\nRecuerda que un numero es primo si es divisible sobre la unidad y el mismo \n");
scanf("%d",&n);
while (n==1 || n<=0){
printf("El %d no cumple con las condicones especificadas, Vuelve  a ingresar un numero diferente:",n);
scanf("%d",&n);
system("cls");
}
    while (c<n)
    {
         r = n%c;
         if (r==0)
                {
                    primo=false;
                    break;
                }
             c++;
    }
    if (primo==false)
        printf("\nEl numero %d no es primo\n",n);
    else
        printf("\nEl numero %d es primo\n",n);
system("pause");
}

