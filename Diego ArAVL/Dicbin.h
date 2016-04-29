#include "Arbin.h"

typedef Arbin Dicbin;

Dicbin insord(Elem e, Dicbin d){
       if(esvacio(d))
            return cons(e,vacio(),vacio());
       else if(esmenor(e,raiz(d)))
               return cons(raiz(d),insord(e,izq(d)),der(d));
            else
               return cons(raiz(d),izq(d),insord(e,der(d)));
}
                    
