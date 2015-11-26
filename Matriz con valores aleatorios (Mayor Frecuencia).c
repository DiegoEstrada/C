#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main (void)
{
int a,b,i,j,val,aux,co=0,mayor=0,numero,op,conta=0,nume=0;;
int matriz[10][10],compa[11];
int c[11];
system("color F0" );
printf(" Este programa genera valaores aleatorios entre el 0 y el 10  en una matriz de 10X10 \n");
printf("Determinando que valor generado se repite mas veces en los elementos de la matriz \n");
system("pause");
system("cls");
do {
        system("cls");
 srand(time(NULL));
 printf("Los valores de la matriz son:\n\n\n\n");
for (a=0;a<11;a++)//Llenado de la frecuencia en cero
 {
     c[a]=0;
 }
 /*for (a=0;a<11;a++)//llenado de vlores del uno al diez paracomparar poscion por posicion
    {
        compa[a]=a;
    }*/
for(i=0;i<10;i++) // Asignacion de valores al azar a la matriz
{
  for(j=0;j<10;j++)
    {
    aux=rand()%11;
    matriz[i][j]=aux;
    printf("%d \t",matriz[i][j]);
    switch(aux)
    {
    case 0:
        c[0]++;
    break;
    case 1:
        c[1]++;
    break;
    case 2:c[2]++;
    break;
    case 3: c[3]++;
    break;
    case 4: c[4]++;
    break;
    case 5: c[5]++;
    break;
    case 6: c[6]++;
    break;
    case 7: c[7]++;
    break;
    case 8: c[8]++;
    break;
    case 9: c[9]++;
    break;
    case 10: c[10]++;
    break;
    }
    }
    printf("\n");
}
printf("\n\n\n");
for(b=0;b<11;b++)
{
    printf(" El valor %d se repite %d veces \n",b,c[b]);

}
printf("\n\n\n");

/*for (b=1;b<11;b++){
for (a=0;a<10;a++)//ordenamiento de menor a mayor para solo imprimir la ultima posicion
 {
        if(c[a]>c[b+1])
        {
            co=c[a];
            c[a]=c[a+1];
            c[a+1]=co;

        }
 }
}*/
system("pause");
system("cls");
system("color F1");
numero=0;

for(b=0;b<11;b++)
{
    if (c[b]>=mayor)
    {
        mayor=c[b];
       numero=b;
    }
}

printf("\n\n\n\t\t\t%d es el numero que mas veces se repite con %d veces \t\t\t\a\n\n",numero,mayor);

system("pause");
system("cls");
printf("Deseas volvera ejecutar el programa \nEscribe 1 para afirmar \nEscribe 0 para negar\n");
scanf("%d",&op);
if (op==1)
    continue;
else
    break;
}
while(op==1);
system("color F2");
system("pause");
}


