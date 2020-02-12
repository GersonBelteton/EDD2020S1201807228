#pragma once

#include<iostream>
using namespace std;
class Nodo
{

private:
	char caracter;
	Nodo* siguiente;
	Nodo* anterior;

public:

	 Nodo(char caracter) {
		 this->caracter = caracter;
	 }

	 char getCaracter() {
		 return caracter;
	 }

	 Nodo* getSiguiente() {
		 return siguiente;
	 }

	 Nodo* getAnterior() {
		 return anterior;
	 }

	 void setCaracter(char caracter) {
		 this->caracter = caracter;
	 }

	 void setSiguiente(Nodo* _siguiente) {
		 siguiente = _siguiente;
	 }

	 void setAnterior(Nodo* _anterior) {
		 anterior = _anterior;
	 }




};

