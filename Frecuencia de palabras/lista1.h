typedef struct Nodo{Elem dato;
   struct Nodo* sig;}* lista;


//~~~~~~~~~~~~~~~~~~~~~VACIA~~~~~~~~~~~~~
lista vacia(){return NULL; }

//~~~~~~~~~~~~~~~~~~~~~CONS~~~~~~~~~~~~~
lista cons(Elem e,lista l){
	lista temp =(lista) malloc (sizeof(struct Nodo));
	temp->dato=e;//mete el valor de dato del nodo al que apunta temp
	temp->sig=l;
    return temp;
}
//~~~~~~~~~~~~~~~~~~~~~ESVACIA~~~~~~~~~~~~~
int esvacia(lista l){return l==NULL;}

//~~~~~~~~~~~~~~~~~~~~~CABEZA~~~~~~~~~~~~~
Elem cabeza(lista l){return l->dato;}

//~~~~~~~~~~~~~CabezaNumero~~~~~~~~~~~~~~~

//~~~~~~~~~~~~~~~~~~~~~RESTO~~~~~~~~~~~~~
lista resto(lista l){return l->sig;}

//~~~~~~~~~~~~~~~~~~~~~IMPRIME~~~~~~~~~~~~~
lista insordpalabra(Elem e, lista l){
      if(esvacia(l))
           return cons(e,l);
      else if(esmenor_igual(e,cabeza(l)))
              return cons(e,l);
           else
              return cons(cabeza(l),insordpalabra(e,resto(l)));
}

lista insordnumero(Elem e, lista l){
      if(esvacia(l))
           return cons(e,l);
      else if(esmenor_igualnumero(e,cabeza(l)))
              return cons(e,l);
           else
              return cons(cabeza(l),insordnumero(e,resto(l)));
}

lista ordenapalabras(lista l){
      if(esvacia(l))
          return l;
      else
          return insordpalabra(cabeza(l),ordenapalabras(resto(l)));
}
lista ordenanumeros(lista l){
      if(esvacia(l))
          return l;
      else
          return insordnumero(cabeza(l),ordenanumeros(resto(l)));
}

/*void implistaarch(lista l, FILE *in){
     if(!esvacia(l)){
          impelem(cabeza(l),in);
          implistaarch(resto(l),in);
          }
}*/
/*void implista(lista l){
     if(!esvacia(l)){
          impelem(cabeza(l));
          implista(resto(l));
          }
}*/

int numelem(lista l){
    if(esvacia(l))
        return 0;
    else
        return 1+numelem(resto(l));
}

lista pega(lista l1, lista l2){
      if(esvacia(l1))
          return l2;
      else
          return cons(cabeza(l1),pega(resto(l1),l2));
}

lista invierte(lista l){
      if(esvacia(l))
          return l;
      else
          return pega(invierte(resto(l)),cons(cabeza(l),vacia()));
}
