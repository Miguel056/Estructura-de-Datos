#include"arbol.h"
int main(void){
	struct arbol *raiz=NULL;
	raiz=insertar(raiz,6);
	raiz=insertar(raiz,7);
	raiz=insertar(raiz,100);
	raiz=insertar(raiz,3);
	raiz=insertar(raiz,5);
	mostrar(raiz);
	if(1==buscar(raiz,3)){
		printf("\nHay un 3");
	}else{
		printf("\nNo hay un 3");
	}
}
