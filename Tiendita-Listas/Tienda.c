#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct producto {
	int clave;
	int existencia;
	double precio;
	char nombreprod [70];
	struct producto *siguiente;
};
struct producto *primero,*ultimo;
void menu();
void llenar();
void borraruno();
void imprimir();
void imprimeuno();
void buscar();
void estadodecuenta();
void resurtirm();
void leerinventario();
void escribedoc();
FILE *inventario;
int main()
{
primero==NULL;
ultimo==NULL;
	int op;
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
                    llenar();
				break;
			case 2:
				imprimir();
				break;
			case 3:
				borraruno();
				system("pause");
				break;
			case 4:
				buscar();
				system("pause");
				break;
			case 5:
				estadodecuenta();
				system("pause");
				break;
            case 6:
                resurtirm();
                system("pause");
                break;
                case 7:
                leerinventario();
                system("pause");
                break;
                case 8:
                    escribedoc();
                    system("pause");
                    break;
            default: printf("\tIngresa solo numeros del uno al seis\n\n");
            system("pause");
            break;
		}
	}while(op>=1 && op <=8);
}
void menu()
{
    printf("\t\tBienvenido a la tienda \t\t\n");
	printf("Introduuce el nombre del menu.\n1.-Llenar el inventario. \n2.- Ver todo el inventario \n3.- Borrar un elemento\n4.-Buscar por la primer letra\n5.-Ver la cantidad total de productos en pesos\n6.- Resurtir magicamnete\n7.- Leer el inventario desde un archivo\n8 .-Reescribir en el inventario\n   ");

}
void llenar()
{
struct producto *nuevo;
nuevo=(struct producto*)malloc(sizeof(struct producto));
if(nuevo==NULL){
		system("cls");
		printf("\n\nMemoria agotada\n");
		return;
                }
                else
                {
                    system("cls");
                    printf("Ingresa la clave del producto \n");
	                fflush(stdin);
	                scanf("%d",&nuevo->clave);
	                printf("Ingresa la cantidad de piezas en existencia\n");
	                fflush(stdin);
	                scanf("%d",&nuevo->existencia);
	                printf("Ingresa el precio del producto en pesos mexicanos\n");
	                fflush(stdin);
	                scanf("%lf",&nuevo->precio);
	                printf("Teclea el nombre del producto sin espoacios\n");
	                fflush(stdin);
	                gets(nuevo->nombreprod);
	                printf("///////////////////////////////////");
	                nuevo->siguiente=NULL;
                } // abajo caso vacio
                if(primero==NULL){
		primero=nuevo;
		ultimo=nuevo;
	}
	else{//Ya existen elementos
		ultimo->siguiente=nuevo;
		ultimo=nuevo;
	}
}// cierra llenar
void imprimir()
{
    struct producto *auxiliar;
    auxiliar=primero;
    int u=1;
	if(auxiliar==NULL)
    {
		system("cls");
		printf("\n\nLista vacia\n");
	}
	else
    {
        system("cls");
		while(auxiliar!=NULL)

            {
            printf("--------------------------\n");
			printf("\t\tEl producto numero : %d  \n Clave del producto %d \n Existencias: %d\n Precio %lf \n Nombre: %s\n",u,auxiliar->clave,auxiliar->existencia,auxiliar->precio,auxiliar->nombreprod );
			auxiliar=auxiliar->siguiente;
            printf("--------------------------\n");
            u++;
            }
	}

}//Fin  de la funicon imorimir
void borraruno()
{
    struct producto *auxiliar=primero;
		if (auxiliar == ultimo)// caso que solo haya un dato
	{
		free(auxiliar);
		primero=ultimo=NULL;
		system("cls");
	}
	if(auxiliar==NULL){
		printf("\nLista vacia\n");
		system("pause");

		return;
	}

		else{
                auxiliar = primero;
		while(auxiliar->siguiente!=ultimo){
			auxiliar=auxiliar->siguiente;
		}

        ultimo = auxiliar;
		free(ultimo->siguiente);
		ultimo->siguiente = NULL;
	}
}// Termina la funicon borraruno

void escribedoc()
{
    inventario=fopen("Inventario.txt","a+");
    if (inventario==NULL)
        puts("Error al tratar de abrir el documento\n");
    else
    {
    struct producto*nuevo;
	nuevo = (struct producto*)malloc(sizeof(struct producto));
   if(nuevo==NULL){
		system("cls");
		printf("\n\nMemoria agotada\n");
		return;
                }
                else
                {
                    system("cls");
                    printf("\tRecuerda que esatas agregando cosas al invenatrio\t\a\n");
                    printf("Ingresa la clave del producto \n");
	                fflush(stdin);
	                scanf("%d",&nuevo->clave);
	                fprintf(inventario,"%d\n",nuevo->clave);
	                printf("Ingresa la cantidad de piezas en existencia\n");
	                fflush(stdin);
	                scanf("%d",&nuevo->existencia);
	                fprintf(inventario,"%d\n",nuevo->existencia);
	                printf("Ingresa el precio del producto en pesos mexicanos\n");
	                fflush(stdin);
	                scanf("%lf",&nuevo->precio);
	                fprintf(inventario,"%lf\n",nuevo->precio);
	                printf("Teclea el nombre del producto sin espoacios\n");
	                fflush(stdin);
	                gets(nuevo->nombreprod);
	                fprintf(inventario,"%s\n",nuevo->nombreprod);
	                printf("///////////////////////////////////");
	                fclose(inventario);
	                nuevo->siguiente=NULL;
                } // abajo caso vacio
                if(primero==NULL){
		primero=nuevo;
		ultimo=nuevo;
	}
	else{//Ya existen elementos
		ultimo->siguiente=nuevo;
		ultimo=nuevo;
	}
}
}//Termina fucnion imprimir a documento
void leerinventario()
{
    primero == NULL;
	ultimo == NULL;
	struct producto*nuevo;
	nuevo = (struct producto*)malloc(sizeof(struct producto));
    inventario=fopen("Inventario.txt","r");
    if (inventario==NULL)
        puts("Error al tratar de abrir el documento de texto\n");
    else
    {
        while(!feof(inventario))
        {
            fflush(stdin);
            fscanf(inventario,"%d",&nuevo->clave);
            fflush(stdin);
            fscanf(inventario,"%d",&nuevo->existencia);
            fflush(stdin);
            fscanf(inventario,"%lf",&nuevo->precio);
            fflush(stdin);
            fscanf(inventario,"%s",&nuevo->nombreprod);
            nuevo->siguiente==NULL;
            if(primero==NULL)
		    primero=nuevo;
		if (ultimo!=NULL)
        {
            ultimo->siguiente=nuevo;
            ultimo=nuevo;
        }
        }
    }
    fclose(inventario);
}

int determinarelementos() //recordar que si no existen  productos u es igual a cro pero al definr el arreglo sera necesario suamr uno al valor que retone para construir el arreglo de la estrucutura
{
    struct producto *auxiliar;
    auxiliar=primero;
    int u=0;
	if(auxiliar==NULL)
    {

    }
    else
    {
		while(auxiliar!=NULL)

            {
			auxiliar=auxiliar->siguiente;
            u++;
            }

    }
    return u;
}
void buscar()
{
    system("cls");
    struct producto *auxiliar;
    auxiliar=primero;
    int h=0;
    char letra;
    printf("Introduce la letra que deseas buscar\n");
    scanf("%s",&letra);
    if (auxiliar==NULL)// no hay refgistros
        printf("No existen elementos con los cuales realizar la busqueda\n");
    else
    {

        while(auxiliar!=NULL)
        {
            if (auxiliar->nombreprod[0]==letra)
            {
                printf("Nombre: %s \nClave: %d \nNumero de unidades: %d \nPrecio %lf\n",auxiliar->nombreprod,auxiliar->clave,auxiliar->existencia,auxiliar->precio);
                h++;
            }
            printf ( (h==0) ? "\n\tNo hay existencias\n\t" : "");
            auxiliar=auxiliar->siguiente;
        }
    }

}// fin de buscar
void estadodecuenta()
{
    system("cls");
    struct producto *auxi;
    auxi=primero;
    int i;
    double total=0.0;
    if (auxi==NULL)
        puts("No tienes productos registrados\nRegistra Productos\n");
    else
    {
        while(auxi!=NULL)
        {
        total=total+((auxi->precio)*(auxi->existencia));
        auxi=auxi->siguiente;
        }
    }
    printf("\tEn tu inventario hay un total de %2lf pesos mexicanos, recuerdalo\t\n\a",total);
}//termina Dinero en caja
void resurtirm()
{
    system("cls");
    struct producto *auxiliar;
    auxiliar=primero;
    printf("Observa tu inventario antes de continuar con el rebastecimeiento\n");
    imprimir();
   printf("\n\n");
    while(auxiliar!=NULL)
    {
        if((auxiliar->existencia)<=10)
        {
            auxiliar->existencia=(auxiliar->existencia+100);
        }
        auxiliar=auxiliar->siguiente;
    }
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    imprimir();
}
