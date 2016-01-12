#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct agenda{
	char nombre[20];
	char telefono[12];
	struct agenda*siguiente;
};

struct agenda *primero,*ultimo;

void menu();
void agregar();
void borrar();
int mostrar();

FILE *contactos;
void menu(){
	printf("\nMenu\n====\n");
	printf("1.- Agregar elemento\n");
	printf("2.- Borrar elemento\n");
	printf("3.- Mostrar la lista\n");
	printf("4.- Leer el inventario desde un archivo\n");
	printf("5.- Salir\n");
	printf("Elige una opcion:\t");
}//termina menu
void leerarchivo()
{
	struct agenda*nuevo;
	int i;
	contactos=fopen("contactos.txt","r");
	if (contactos==NULL)
    printf("Error al abrir el archivo\n");
else
    {


    for (i=0;feof(contactos)==0;i++)
    {
         
	    fflush(stdin);
        fscanf(contactos,"%s",nuevo->nombre);
        fflush(stdin);
        fscanf(contactos,"%s",nuevo->telefono);
    }
    fclose(contactos);
    }
	system("pause");
}
void agregar(){
	struct agenda*nuevo;
	nuevo=(struct agenda*)malloc(sizeof(struct agenda));
	if(nuevo==NULL){
		system("cls");
		printf("\n\nMemoria agotada\n");
		return;
	}
	else{
		system("cls");
		printf("\nNombre:\t");
		fflush(stdin);
		gets(nuevo->nombre);
		printf("\nTelefono:\t");
		fflush(stdin);
		gets(nuevo->telefono);
		nuevo->siguiente=NULL;
	}//vacia
	if(primero==NULL){
		primero=nuevo;
		ultimo=nuevo;
	}
	else{//Ya existen elementos
		ultimo->siguiente=nuevo;
		ultimo=nuevo;
	}
}//termina agregar

void borrar(){
	struct agenda*auxiliar=primero;
		if (auxiliar==primero)// caso que solo haya un dato
	{
		free(auxiliar);
		primero=ultimo=NULL;
	}
	if(auxiliar==NULL){
		system("cls");
		printf("\nLista vacia\n");
		system("pause");
	
		return;
	}
	
		else{
		while(auxiliar->siguiente!=ultimo){
			auxiliar=auxiliar->siguiente;	
		}
		ultimo=auxiliar;
		free(ultimo->siguiente);
		ultimo->siguiente=NULL;
	}
}//termina borrar

int mostrar(){
	struct agenda*auxiliar;
	auxiliar=primero;
	if(auxiliar==NULL){
		system("cls");
		printf("\n\nLista vacia\n");
	}
	else{
		system("cls");
		while(auxiliar!=NULL){
			printf("\nNombre: %s\n",auxiliar->nombre);
			printf("Telefono: %s\n",auxiliar->telefono);
			auxiliar=auxiliar->siguiente;
		}
	}
}//termina mostrar

int main(){
	primero==NULL;
	ultimo==NULL;
	int op;
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1: 
				agregar();
				break;
			case 2:
				borrar();
				break;
			case 3:
				mostrar();
				system("pause");
				break;
			case 4:
				leerarchivo();
				system("pause");
				break;
			case 5:
				printf("\nFin\n");
				break;
			default: 
				printf("Opcion no valida");
				break;
		}
		system("cls");
	}while(op!=5);
}//fin del main
