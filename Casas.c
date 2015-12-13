#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
# define  N 2
typedef struct{
        char zona[30];
        char colonia[50];
        char calle [30];
        }ubgeo;
typedef struct {
        int clave;
        double supCup;//Construida
        double supTer; //No hay construccion
        char caracteristicas[200];
        ubgeo ug;
        double precio;
        int disponibilidad;
        }propiedad;
        void alta(propiedad casas [N]);
        void imprime(propiedad casas [N]);
        void busca( propiedad casas [N],int tipobusq);
        void imprimeunacasa(int pos,propiedad casas [N]);
int main (void)
{
    system("color 1F");
    int op,posicion;
    propiedad casas[N];
    do{
    printf("\t\t \nBienvenido a Las Casas selecciona una funcion:\t\t\a\n");
    printf("1.- Dar de alta casas\n2.-Imprimir los datos\n3.-Buscar casa por zona\n4.-Buscar casa por superfice del terreno construida\n5.-Buscar una posicion del catalogo\n");
    scanf("%d",&op);

    switch(op)
    {
              case 1: alta(casas);
              break;
              case 2: imprime(casas);
              break;
              case 3:busca(casas,op);
              break;
              case 4:busca(casas,op);
              break;
              case 5:
                    puts("Introduce la posicion de calogo de la cual quieres obtener informacion:");
                    scanf("%d",&posicion);
                    imprimeunacasa(posicion,casas);
              break;
              default : printf("Opcion no valida ingresa numeros enteros entre uno y cinco\n");
              break;
    }
    }while (op==4 || op==1 || op== 2 || op==3 || op==5);
system ("pause");
}
void alta(propiedad casas [N])
{
     int i;
     for(i=0;i<N;i++)
     {
        system("color F0");
                     fflush(stdin);
                     printf("\n Ingresa la clave de la casa [%d]\n",i+1);
                     fflush(stdin);
                     scanf("%d",&(casas[i].clave));
                     printf("Ingresa la superficie construida de la casa [%d]\n",i+1);
                     fflush(stdin);
                     scanf("%lf",&casas[i].supCup);
                     printf("Ingresa la superficie del terreno de la propiedad [%d]\n",i+1);
                     fflush(stdin);
                     scanf("%lf",&casas[i].supTer);
                     printf("Ingresa las caracteristicas de la casa [%d]:\n",i+1);
                     fflush(stdin);
                     gets(casas[i].caracteristicas);
                     printf("Ingresa la zona donde se encuentra la casa [%d]\n",i+1);
                     fflush(stdin);
                     gets(casas[i].ug.zona);
                     printf("Ingesa el nombre de la colonia de la casa [%d]\n",i+1);
                     fflush(stdin);
                     gets(casas[i].ug.colonia);
                     printf("Ingresa el nombre de la calle de la casa [%d]\n",i+1);
                     fflush(stdin);
                     gets(casas[i].ug.calle);
     }
}
void imprime(propiedad casas [N])
{
 int i;
 system("color A0");
     system("cls");
     for (i=0;i<N;i++)
     {
         printf("\n-------------------------------------\n Casa [%d]",i+1);
         printf("\n Clave: %d\n Superfice construida: %lf metros cuadrados.\n Superficie total del terreno %lf metros cuadrados.\n Detalles: \n %",casas[i].clave,casas[i].supCup,casas[i].supTer);
         puts(casas[i].caracteristicas);
         printf("Ubicada en la zona  ");
         puts(casas[i].ug.zona);
         printf("En la colonia  ");
         puts(casas[i].ug.colonia);
         printf("En la calle  ");
         puts(casas[i].ug.calle);
         printf("-------------------------------------");
     }
}
void imprimeunacasa(int pos,propiedad casas [N])
{
    printf("Esta es la casa %d" ,pos);
     printf("\n Clave: %d\n Superfice construida: %lf metros cuadrados.\n Superficie total del terreno %lf metros cuadrados.\n Detalles: \n %",casas[pos].clave,casas[pos].supCup,casas[pos].supTer);
         puts(casas[pos].caracteristicas);
         printf("Ubicada en la zona  ");
         puts(casas[pos].ug.zona);
         printf("En la colonia  ");
         puts(casas[pos].ug.colonia);
         printf("En la calle  ");
         puts(casas[pos].ug.calle);
}
void busca( propiedad casas [N] ,int tipobusq)
{
         int resbusq,i;
          double metrosquebusco;
         char busqueda[30];
         switch(tipobusq)
         {
         case 3:
                puts("Escribe el nombre de la zona que deseas buscar:");
                fflush(stdin);
                gets(busqueda);
                for (i=0;i<N;i++)
                {
                    resbusq=(strcmp(busqueda,casas[i].ug.zona));
                        if (resbusq==0)// La busqueda coincidio con los valores
                            {

                            printf("\nEncontramos estas coincidencias de acuerdo con la zona ");
                            puts(casas[i].ug.zona);
                            printf("***********************");
                            imprimeunacasa(i,casas);
                            printf("***********************\n");
                            continue;
                            }

                        else
                            {
                                printf("No hemos podido enontrar casas en la zona  ");
                                puts(busqueda);
                                continue;
                            }
                  }

        break;
        case 4:
            puts("Ingresa la cantidad de metros cuadrados de terreno  que estas buscando:");
                fflush(stdin);
                scanf("%lf",&metrosquebusco);
                for (i=0;i<N;i++)
                {
                        if (metrosquebusco==casas[i].supTer)// La busqueda coincidio con los valores
                        {
                            printf("\nEncontramos estas coincidencias con %lf metros cuadrados",metrosquebusco);
                            printf("***********************");
                            imprimeunacasa(i,casas);
                            printf("***********************\n");
                            continue;
                        }
                        else
                            printf("No hemos podido enontrar casas con %lf metros cuadrados",metrosquebusco);
                }
        break;
        default: printf("Error 404 ;D");
        break;
         }
}
