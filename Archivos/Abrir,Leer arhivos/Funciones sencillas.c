#include <stdio.h>
#include <stdlib.h>

int main (void)
{
char cad [50];
char nom[150];
int res,edad,op;
do{
FILE *ar;
ar = fopen("cadenas.txt","a");
// printf("%x\n",ar); Imprimimos en la consola la direccion del archivo creado
printf("Selecciona un numero.\n1.-Imprimir cadena en el texto\n2.-Leer de un archivo\n");
scanf("%d",&op);
switch (op)
{
case 1:
    printf("Hola. Introduce tu edad:\n");
fflush(stdin);
scanf("%d",&edad);
printf("Por favor inntroduce tu nombre:\n");
fflush(stdin);
gets(nom);
if (ar==NULL)
printf("No se pudo abrir el archivo \n");
else
{
    printf("Abre el archivo generado en la direccion de el progrma para ver el texto \n");
    fprintf(ar,"Hola %s con %d años\n", nom,edad);
}
fclose(ar);
    break;
case 2:
    ar =fopen("cadenas.txt","r");


    if (ar==NULL)
        printf("Error al arir el archivo");
    else
        {
            while (feof(ar)==0)
            {
                fflush(stdin);
                fscanf(ar,"%s",cad);
                fflush(stdin);
                fgets(cad,40,ar);
                printf("%s",cad);
            }
        }
        fclose(ar);
    break;
default:
    puts("Solo escribe uno o dos\n");
    break;
}
system ("pause");
} while(op==2 || op==1);
}
