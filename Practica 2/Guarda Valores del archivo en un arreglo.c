#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
int main(void)
{
int i,a;
int valores[1000];
FILE *arquivo;
arquivo=fopen("Numeros.txt","w");
if (arquivo==NULL)
printf("Error al abrir el archivo\n");
else
{
printf("Esos son los valores del archivo en el arreglo\n");

    for(i=0; i<1000,feof(arquivo)==0;i++)
    {
        fscanf(arquivo,"%d",&valores[i]);
        printf("%d en la posicion [%d]\n",valores[i],i+1);
    }
}
system("pause");
}
