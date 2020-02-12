#pragma once
#include "Nodo.h"

class Lista
{


private:
	Nodo* primero;
	Nodo* ultimo;
	int size;


public:

	Lista() {
		primero = NULL;
		ultimo = NULL;
		size = 0;
	}



	bool isEmpty() {
		return primero == NULL;
	}


	void insertarPrimero(char c) {
		Nodo* nuevo = new Nodo  (c);
		if (isEmpty()) {
			primero = nuevo;
			ultimo = nuevo;
		}
		else {
			primero->setAnterior(nuevo);
			nuevo->setSiguiente(primero);
			primero = nuevo;
		}
	}

	void eliminarUltimo() {
		if (!isEmpty()) {
			ultimo->getAnterior()->setSiguiente(NULL);
		}
		
	}

	Nodo* buscar(char s) {
		Nodo* aux = primero;

		while (aux->getCaracter() != s) {
			aux = aux->getSiguiente();
		}


		return aux;

	}


};

