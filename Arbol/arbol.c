#include"arbol.h"
struct arbol * insertar(struct arbol *raiz,int dato){
	if(raiz==NULL){
		struct arbol *nuevo=NULL;
		nuevo=(struct arbol *)malloc(sizeof(struct arbol));
		if(nuevo==NULL){
			return NULL;
		}
		nuevo->dato=dato;
		nuevo->derecho=NULL;
		nuevo->izquierdo=NULL;
		return nuevo;
	}
	if(raiz->dato==dato){
		return raiz;
	}
	if(dato<raiz->dato){
		raiz->izquierdo=insertar(raiz->izquierdo,dato);
	}else{
		raiz->derecho=insertar(raiz->derecho,dato);
	}
	return raiz;
}
void mostrar(struct arbol *raiz){
	if(raiz==NULL){
		return;
	}
	mostrar(raiz->izquierdo);
	printf("%d, ",raiz->dato);
	mostrar(raiz->derecho);
}
int buscar(struct arbol *raiz,int dato){
	if(raiz==NULL){
		return 0;
	}
	if(dato==raiz->dato){
		return 1;
	}
	if(dato<raiz->dato){
		return buscar(raiz->izquierdo,dato);
	}
	return buscar(raiz->derecho,dato);
}
struct arbol * buscarHijo(struct arbol *raiz,int dato){
	if(raiz==NULL){
		return NULL;
	}
	if(raiz->dato==dato){
		return raiz;
	}
	if(dato<raiz->dato){
		return buscarHijo(raiz->derecho,dato);
	}
	return buscarHijo(raiz->izquierdo,dato);
}
struct arbol * buscarPadre(struct arbol *raiz,struct arbol *hijo,int dato){
	if(raiz==NULL){
		return NULL;
	}
	if(raiz->derecho==hijo||raiz->izquierdo==hijo){
		return raiz;
	}
	if(dato<raiz->dato){
		return buscarPadre(raiz->derecho,hijo,dato);
	}
	return buscarPadre(raiz->izquierdo,hijo,dato);
}
struct arbol * buscarMenorMayores(struct arbol *raiz){
	if(raiz==NULL){
		return NULL;
	}
	if(raiz->izquierdo==NULL){
		return raiz;
	}
	return buscarMenorMayores(raiz->izquierdo);
}
struct arbol * buscarMayorMenores(struct arbol *raiz){
	if(raiz==NULL){
		return NULL;
	}
	if(raiz->derecho==NULL){
		return raiz;
	}
	return buscarMenorMayores(raiz->derecho);
}
void eliminar(struct arbol *raiz, int dato){
	if(raiz==NULL){
		return;
	}
	struct arbol *hijo;
	struct arbol *padre;
	struct arbol *mayor;
	struct arbol *menor;
	hijo=(struct arbol *)malloc(sizeof(struct arbol));
	padre=(struct arbol *)malloc(sizeof(struct arbol));
	mayor=(struct arbol *)malloc(sizeof(struct arbol));
	menor=(struct arbol *)malloc(sizeof(struct arbol));
	if(hijo==NULL||padre==NULL||mayor==NULL||menor==NULL){
		return;
	}
	if(1==buscar(raiz,dato)){
		hijo=buscarHijo(raiz,dato);
	}else{
		return;
	}
	if(hijo->derecho==NULL && hijo->izquierdo==NULL){
		free(hijo);
		return;
	}
	if(hijo->derecho!=NULL && hijo->izquierdo==NULL){
		menor=buscarMenorMayores(raiz->derecho);
		menor->derecho=hijo->derecho;
		if(padre->izquierdo==hijo){
			padre->izquierdo=menor;
			free(hijo);
			return;
		}else{
			padre->derecho=menor;
			free(hijo);
			return;
		}
	}
	if(hijo->derecho==NULL && hijo->izquierdo!=NULL){
		mayor=buscarMayorMenores(raiz->derecho);
		mayor->izquierdo=hijo->izquierdo;
		if(padre->izquierdo==hijo){
			padre->izquierdo=mayor;
			free(hijo);
			return;
		}else{
			padre->derecho=mayor;
			free(hijo);
			return;
		}
	}
	if(hijo->derecho!=NULL && hijo->izquierdo!=NULL){
	mayor=buscarMayorMenores(raiz->derecho);
		mayor->izquierdo=hijo->izquierdo;
		if(padre->izquierdo==hijo){
			padre->izquierdo=mayor;
			free(hijo);
			return;
		}else{
			padre->derecho=mayor;
			free(hijo);
			return;
		}	
	}
}
