#include"pila.h"
void push(struct pila **pila,int dato){
	struct pila *nuevo=NULL;
	struct pila *anterior=NULL;
	nuevo=(struct pila *)malloc(sizeof(struct pila));
	if(nuevo==NULL){
		return;
	}
	if(*pila==NULL){
		nuevo->dato=dato;
		(*pila)=nuevo;
		(*pila)->anterior=NULL;
		(*pila)->siguiente=NULL;
		return;
	}
	anterior=*pila;
	nuevo->dato=dato;
	anterior->anterior=nuevo;
	(*pila)=nuevo;
	(*pila)->anterior=NULL;
	(*pila)->siguiente=anterior;
	return;
}
void pop(struct pila **pila){
	struct pila *tope=NULL;
	struct pila *siguiente;
	if(*pila==NULL){
		return;
	}
	tope=*pila;
	if(tope->siguiente==NULL){
		(*pila)=NULL;
		return;
	}
	siguiente=tope->siguiente;
	siguiente->anterior=NULL;
	(*pila)=siguiente;
	free(tope);
	return;
}
void mostrar(struct pila *pila){
	struct pila *tmp=NULL;
	struct pila *pila1=NULL;
	struct pila *ultimo=NULL;
	if(pila==NULL){
		return;
	}
	tmp=pila;
	while(tmp!=NULL){
		ultimo=tmp;
		tmp=tmp->siguiente;
	}
	tmp=ultimo;
	while(tmp!=NULL){
		push(&pila1,tmp->dato);
		tmp=tmp->anterior;
}
while(pila1!=NULL){
printf("%d ",pila1->dato);
pop(&pila1);
}
return;
}
