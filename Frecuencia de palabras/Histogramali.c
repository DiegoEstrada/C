#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "E.h"
#include "lista1.h"


void implista(lista l){
     if(!esvacia(l)){

        impelemsolod(cabeza(l));

        impelemsolof(cabeza(l));


          implista(resto(l));
          }
}

int estaen(Elem e, lista l)
{
    if (esvacia(l))
        return l!=NULL;
    else
    {
     if(esigual(cabeza(l),e))
     return 1;
    else
     return estaen(e,resto(l));
    }
}

int repeticion(Elem e, lista l)
{
    int ac=0;
    while(!esvacia(l))
    {
        if (esigual(e,cabeza(l)))
            ac=ac+1;
        else
            ac=ac;
            l=resto(l);
    }
    return ac;
}



    int main (int argc, char *argv[])
 {

     lista l=vacia();
     lista aux=vacia();
     lista palabras=vacia();
     lista histograma =vacia();
     lista uno=vacia();
     Elem t;
     FILE *texto=fopen(*(argv+1),"r"),*imp=fopen(*(argv+2),"w");
     char pala1[40],*pala2;
     int i=0,j=0,co=0;

 while(fscanf(texto,"%s",pala1)>0){
        pala2=(char*)malloc(40);
        strcpy(pala2,pala1);
        t.palabra=pala2;
        l=cons(t,l);
        if(esigual(t,cabeza(l)) || esigual(t,cabeza(resto(l))))
        {

            if(estaen(t,palabras)){
                //co=repeticion(t,l);
                //printf("%d\n",co);
                palabras=palabras;

            }
            else{

            palabras=cons(t,palabras);

            }
        }


     }
     /*Elem y1;
     y1.palabra="dos";
     printf("Hay %d palabras en total y %d paabras sin repetir \n",numelem(l),numelem(palabras));
printf("La palabra cuatro se repite %d veces\n");*/



Elem a;
char * au;
     while (!esvacia(palabras)){
        a.palabra=cabeza(palabras).palabra;
        a.frec=repeticion(a,l);
        histograma=cons(a,histograma);
        palabras=resto(palabras);

     }

     implista(invierte(ordenanumeros(histograma)));

 return 0;
 }
