#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "Arbin.h"

int main(){
    Arbin a1=cons(50,cons(25,vacio(),vacio()),cons(75,vacio(),vacio()));
    Arbin a2=cons(150,cons(125,vacio(),vacio()),cons(200,vacio(),vacio())); 
    Arbin a3;
      
    printf("El arbol prueba tiene %d datos.\n",numelem(a1));
    
    printf("El arbol prueba tiene %d datos.\n",numelem(a3=cons(100,a1,a2)));    

    puts("Inorder:");
    inorder(a3);
    puts("Preorder:");
    preorder(a3);
    puts("Postorder:");
    postorder(a3);


    
    return 0;   
}
