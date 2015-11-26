# include <stdio.h>
# include <conio.h>
int main ()
{

    float nc, prom, conta, nct, cont;
     cont=1;
     conta=0;
    printf("Por favor ingresa el numero de clificaciones que deseas calcular\n Recuerda que si la cantidad que ingreas es menor o igual a cinco el programa aumentara una unidad (Un punto extra a la clase\n)");
    scanf("%f",&nct);
    do
    {

        printf("Ingresa las calificaciones son:\n");
        scanf("%f",&nc);
        cont++;
        if (nc<=5)
    {
        nc++;
        conta=conta+nc;
    }
    else
    {
          nc=nc;
          conta=conta+nc;
    }
    }
    while(cont<=nct);
    prom=conta/nct;
    printf( "De %f. elementos El promedio es: %f", nct,prom);
    getch();
}
