#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
int main (void)
{
int num,i,a;
FILE *arquivo;
if (arquivo==NULL)
    printf("Error al abrir el archivo\n");
else
{
arquivo = fopen("Numeros.txt","w");
printf("\tEste programa genera numeros aleatorios y los guarda en un archivo.\nPresiona una tecla para continuar\t\n");
srand(time(NULL));
puts("Estos son los valores");
system("pause");
for (i=0;i<1000;i++)
{
a=rand()%100;
printf("%d\n",a);
fprintf(arquivo,"%d\n",a);
}
fclose (arquivo);
printf("Listo.Puedes abrir el archivo Numeros.txt generado en la direccion de este programa.\n");
}
system ("pause");
return 0;
}
