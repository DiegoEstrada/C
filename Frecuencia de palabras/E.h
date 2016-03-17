/*typedef struct {
    char *palabra;
    int frec;
} datos;
*/
typedef struct {char *palabra; int frec;} Elem;

int esmayor(Elem e1, Elem e2){return strcmp(e1.palabra,e2.palabra)>0;}

int esmenor(Elem e1, Elem e2){return strcmp(e1.palabra,e2.palabra)<0;}

int esigual(Elem e1, Elem e2){return strcmp(e1.palabra,e2.palabra)==0;}

int esmayor_igual(Elem e1, Elem e2){return ((esmayor(e1,e2))||(esigual(e1,e2)));}

int esmenor_igual(Elem e1, Elem e2){ return ((esmenor(e1,e2))||(esigual(e1,e2)));}

void impelem(Elem e, FILE *in ){fprintf(in,"%s\n",e.palabra);}




int esmenor_igualnumero(Elem e1, Elem e2){ return ((esmenornumero(e1,e2))||(esigualnumero(e1,e2)));}
int esmenornumero(Elem e1, Elem e2){return e1.frec<e2.frec;}
int esigualnumero(Elem e1, Elem e2){return e1.frec==e2.frec;}









void impelemsolod(Elem e){printf("%s\n",e.palabra);}

void impelemsolof(Elem e){printf("%d\n",e.frec);}
