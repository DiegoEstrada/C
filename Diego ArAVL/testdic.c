#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "Dicbin.h"

int main(){
    int i,n,elemento;
    Dicbin a=vacio();
    printf("Introduce el numero de elementos del arbol:\n" );
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&elemento);
        a=insord(elemento,a);
    }


    puts("Los elementos del arbol son:");
    inorder(a);

    return 0;
}
