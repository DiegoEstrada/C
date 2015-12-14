#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5
typedef struct {
	int clave;
	int existencia;
	double precio;
	char nombreprod [70];
}producto;
void llenar (producto x[N]);
void imprimir (producto x[N]);
void buscar (producto x[N]);
void EstadoCuenta (producto x[N]);
void  resurtir (producto x[N]);
int main (void)
{
	producto x[N];
	int op;
	printf("\t\tBienvenido a la tienda \t\t\n");
	do{
	printf("Introduuce el nombre del menu.\n1.-Llenar el inventario. \n2.- Ver todo el inventario \n3.- Buscar los productos por primer letra\n4.-Ver la cantidad total de productos en pesos\n5.-Resutir magicamente\n ");
	scanf("%d",&op);

	switch (op)
	{
		case 1:
			llenar (x);
		break;
		case 2:
			imprimir(x);
		break;
		case 3:
		break;
		case 4:
		break;
		case 5:
		break;
		default: puts("Ingresa solo numeros entre el uno y el cinco");
		break;
	}
} 
while (op>=1 && op <=5);
return 0;
}


void llenar (producto x[N])
{
	int i,au;
	system ("cls");
	for (i=0;i<5;i++)
	{
	printf("Ingresa la clave del producto [%d]\n",i+1);
	fflush(stdin);
	scanf("%d",&x[i].clave);
	printf("Ingresa cuantas piezas tienes: [%d]\n",i+1);
	fflush(stdin);
	scanf("%d",&x[i].existencia);
	printf("Ingresa el precio del producto [%d]\n",i+1);
	fflush(stdin);
	scanf("%lf",&x[i].precio);
	printf("Ingresa el nombre del producto [%d]\n",i+1);
	fflush(stdin);
	gets(x[i].nombreprod);
	printf("//////////////////\n");
    }
}


void imprimir (producto x[N])
{
	int j;
	system ("cls");
	printf("\tEstos son los productos\t\n");
	for (j=0;j<5;j++)
	{
	printf("\t\tEl producto numero : %d  \n Clave del producto %d \n Existencias: %d\n Precio %lf \n Nombre:",j+1,x[j].clave,x[j].existencia );	
	puts(x[j].nombreprod);
	}
}


void buscar (producto x[N])
{
	
}


void EstadoCuenta (producto x[N])
{
	
}



void  resurtir (producto x[N])
{
}


