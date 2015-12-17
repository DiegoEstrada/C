#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
int main (void)
{
FILE *arquivo;
int i,num,b;
arquivo = fopen("Numeros.txt","r");
if (arquivo==NULL)
printf("Error de apertura");
else
{
    printf("Los valores del archivo son:\n");
while(feof(arquivo)==0)
{
    fscanf(arquivo,"%d",&b);
    printf("%d\n",b);
}
fclose(arquivo);
}
system("pause");
}
