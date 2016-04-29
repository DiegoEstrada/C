#include "Dicbin.h"

typedef Arbin AVL;

int EsAVL(AVL a){
	if(esvacio(a))
		return 1;
	else if((absoluto(factbal(a))<=1)&& EsAVL(izq(a))&& EsAVL(der(a)))
		    return 1;
	else return 0;
}

int factbal(AVL a){
	return Altura(izq(a))-Altura(der(a));
}


AVL rotader(Dicbin a){
	return cons(raiz(izq(a)),izq(izq(a)),cons(raiz(a),der(izq(a)),der(a)));
}


AVL rotaizq(Dicbin a){
	return cons(raiz(der(a)),cons(raiz(a),izq(a),izq(der(a))),der(der(a)));
}

AVL rotaderizq(Dicbin a){
	return rotader(cons(raiz(a),izq(a),rotaizq(der(a))));
}

AVL rotaizqder(Dicbin a){
	return rotaizq(cons(raiz(a),rotader(izq(a)),der(a)));
}


AVL hazAVL(Dicbin a){
	if(EsAVL(a)){
		return a;
	}
	else if(factbal(a)>0){
				if(factbal(izq(a))>0)
					a= rotader(a);
						else
							a= rotaderizq(a);
		}
	else{
			if(factbal(der(a))<0)
				a= rotaizq(a);
					else
						a= rotaizqder(a);
	}

	return cons(raiz(a),hazAVL(izq(a)),hazAVL(der(a)));
}
