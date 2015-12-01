#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main (void)
{
    int des,per,nbol;
    int costo,d;
    printf("Selecciona tu destino: \n \t 1)Yucatan \n \t 2)Guadalajara \n \t 3)Monterrey\n");
    scanf("%d", &des);
    system("cls");
    printf("Que identificacion presnetas: \n \t 1)Estuduiante \n \t 2)Profesor \n \t 3)INSEN\n \t 4)Ninguna \n");
    scanf("%d",&per);
    system("cls");
    printf("Escribe cuantos boletos compraras:\n");
    scanf("%d",&nbol);
    system("cls");


    switch(des)
    {
        case 1: costo = nbol * 1000;
        break;
        case 2 : costo = nbol * 750;
        break;
        case 3: costo = nbol * 980;
        break;
        default : printf("Solo introduce numeros del uno al tres para seleccionar tu destino\n");
        break;
    }
   if (per==1|| per==3)
           costo=costo*0.5;
            else
            if (per==2)
            {
                 d=costo*0.25;
                 costo=costo-d;
            }
            else
                costo=costo;
    printf("\tTu total a pagar por %d boloetos es de %d\n",nbol,costo);
        system("pause");
}
