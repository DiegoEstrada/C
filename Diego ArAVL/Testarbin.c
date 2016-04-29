#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "Arbin.h"


int main (void)
{
Arbin a=vacio();
a=cons(10,cons(16,vacio(),cons(8,vacio(),vacio())),cons(19,vacio(),cons(17,vacio(),vacio())));
postorder(a);
return 0;
}
