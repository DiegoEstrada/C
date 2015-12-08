#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char nombre [30];
	double precio;
	int existencia;
	int id;
}articulo;
void alta(articulo *a );
void baja(articulo *a );
void imprime(articulo *a );
void buscapornombre(articulo *a );
void cambio(articulo *a );
int main (void)
{
	articulo stock [2];
	int op=0;
 do{
	
	printf("\t\t Selecciona una opcion \t\t  ");
	printf("\n1.-Dar de alta articulos\n2.-Dar de baja articulos\n3.-Imprimir el inventario\n4.-Modificar articulos\n5.-Buscar el articulo\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: 
		alta(stock);
		break;
		case 2: 
		baja(stock);
		break;
		case 3: 
		imprime(&stock[0]);
		break;
		case 4: 
		cambio(&stock[0]);
		break;
		/*case 5: 
		buscapornombre(&stock[0]);
		break;*/
		default: printf("\nOpcion incorrecta introduce solo los valores especificados");
		system("cls");
		scanf("%d",&op);
		break;
	}
  }while(op<=5);
}
void alta(articulo *a )
{
	int i=0;
	if (a->existencia>0)
	{
	for (i=0;i<2;i++)
	{
		printf("Escribe el identificador:\n");
		scanf("%d",&(a->id));
		printf("Escribel el nombre del articulo:\n");
		fflush(stdin);
		gets(a->nombre);
		printf("Introduice el precio del articulo:\n");
		scanf("%lf",&(a->precio));
		printf("Existencia :\n");
		scanf("%d",&(a->existencia));
		system ("cls");
	}
	}
}
void baja(articulo *a )
{
	a->existencia=0;
}
void imprime(articulo *a )
{
	int j=0;
	for (j=0;j<2;j++)
	{
	printf("\nId:%d Nombre: %d Precio:$ %lf Exittencias: %d\n",a->id,a->nombre,a->precio,a->existencia);	
	}
	
}
/*void buscapornombre(articulo *a )
{
	printf("\nIngresa el nombre del articulo a buscar:\n");
	fflush(stdin);
	gets(a->nombre);
	for(i=0;i<7;i++)}
	{
		if(strcmp(&(a->nombre),nombre)==0)
	}
}*/
void cambio(articulo *a )
{
	printf("\nIngrese el nuevo precio:\n");
	scanf("%lf",a->precio);
}
