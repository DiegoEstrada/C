#include "Dicbin.h"
typedef Dicbin AVL;

int factbal (Dicbin a)
{
if (esvacio(a)) return 0;
else return (Altura(izq(a)))-(Altura(der(a)));

}

int EsAVL(AVL a)
{
if (esvacio(a)) return 1;
else
return ((absoluto(factbal(a))<=1)&&(EsAVL(izq(a)))&& (EsAVL(der(a)))) ? 1:0;
}

AVL rotarderecha(Dicbin (a) )
{
	 return cons(raiz(izq(a)),izq(izq(a)),cons(raiz(a),der(izq(a)),der(a)));
}

AVL rotarizquierda(Dicbin (a) )
{
	return cons(raiz(der(a)),cons(raiz(a),izq(a),izq(der(a))),der(der(a)));
}

AVL rotaderizq(Dicbin a){
	return rotaderecha(cons(raiz(a),izq(a),rotaizquierda(der(a))));
}

AVL rotaizqder(Dicbin a){
	return rotaizquierda(cons(raiz(a),rotaderercha(izq(a)),der(a)));
}


AVL hazAVL (Dicbin a)
{
	AVL aux=vacio();

	if (EsAvl(a))
		return a;
		else if (facbal(a)>0)
			if (factbal(izq(a))>0)
				{
					a = rotaderecha(a);
				}
			else
					a=rotaderizq(a);
	else if (factbal(der(a))<0)
				 a=rotaizquierda(a);
			else
			 	 a=rotaizqder(a);

	return cons(raiz(a),hazAVL(izq(a)),hazAVL(der(a)));
}


