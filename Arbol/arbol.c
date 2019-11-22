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
