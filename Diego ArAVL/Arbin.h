typedef struct Nodo{
            struct Nodo *i;
            Elem r;
            struct Nodo *d;
            }*Arbin;

Arbin vacio(){return NULL;}
Arbin cons(Elem r, Arbin i, Arbin d){

      Arbin t = (Arbin)malloc(sizeof(struct Nodo));

      t->r=r;
      t->i=i;
      t->d=d;

      return t;
}

int esvacio(Arbin a){return a==NULL;}
Elem raiz(Arbin a){return a->r;}
Arbin izq(Arbin a){return a->i;}
Arbin der(Arbin a){return a->d;}

int Altura (Arbin a)
{
    if (esvacio(a))
        return 0;

    else  
                return  1+ mayor(Altura(der(a)),Altura(izq(a)));

} 


int eshoja (Arbin a){ return (esvacio(der(a))&& esvacio(izq(a)))? 1:0;}

int numelem(Arbin a){
      if(esvacio(a))
            return 0;
      else
            return 1+numelem(izq(a))+numelem(der(a));
    }

void inorder(Arbin a){
       if(!esvacio(a)){
              inorder(izq(a));
              impelem(raiz(a));
              inorder(der(a)) ;
        }
}

void postorder(Arbin a){
       if(!esvacio(a)){
              postorder(izq(a));
              postorder(der(a)) ;
              impelem(raiz(a));
        }
}

void preorder(Arbin a){
       if(!esvacio(a)){
              impelem(raiz(a));
              preorder(izq(a));
              preorder(der(a)) ;
        }
}

