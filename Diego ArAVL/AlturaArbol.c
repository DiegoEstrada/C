#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Elem.h"
#include "AVL X.h"
#include "Enteros.h"

int main(){
    int i,n,elemento,nuevoval,j;
    Dicbin a=vacio();
    Dicbin aux=vacio();
    printf("Introduce el numero de elementos del arbol:\n" );
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    printf("Introduce la raiz [%d]",i+1);
        scanf("%d",&elemento);
        a=insord(elemento,a);
    }


    puts("Los elementos del arbol son:");
    inorder(a);
    puts("---------------");
    printf ("La altura del arbol anterior es %d \n", Altura(a));
    puts("---------------");
   (EsAVL(a))? printf("\tEl arbol anterior es AVL \n\t") : printf("\tEl arbol  anterior no es AVL \n\t");
   printf("El facotor de balanceo es %d \n",factbal(a));
   puts("------------------------------------");


        if (EsAVL(a))
    {
        printf("Ahora introduce un  nuevo elemento y trataremos de balancear el arbol si lo requiere\n");
        scanf("%d",&nuevoval);
        a=insord(nuevoval,a);
        if (EsAVL(a))
            printf("El arbol sigue siendo AVL \n");
        else
            a=hazAVL(a);

        printf("\tFactor de balanco del arbol rotado %d ",factbal(a));

    }
    else
    {
        printf("Trataremos de balancear el arbol anterior\n");
        a=hazAVL(a);
        printf("El nuevo factor de balanceo es %d ",factbal(a));
    }



   /*puts("Ahora consideraremos un arbol AVL definido anteriormente: 50,25,30,45 (Orden de insord) e insertaremos otro elemento.");
   scanf("%d",&nuevoval);
    AVL prueba=vacio();
    prueba=insord(50,insord(25,insord(30,insord(45,prueba))));
    //puts("EL arbol:");
    //inorder(prueba);
    printf("Factor de balanceo = %d\t\n\n\n",factbal(prueba));
    printf("\tAl insertar %d  Tenemos\n\t", nuevoval);
    prueba=insord(nuevoval,prueba);
    (EsAVL(prueba))?  printf("El arbol anterior no es AVL\n Factor de balanceo=%d",factbal(a)) : printf("El arbol anterior es AVL \n Factor de balanceo=%d",factbal(a)) ;
    */

    return 0;
}
void EsAVLmiarbol(Dicbin b)
{
    int nuevoval;

}
