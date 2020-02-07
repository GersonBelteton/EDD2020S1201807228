#include <iostream>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




class Estudiante{
	private:
		string nombre;
		string carnet;
		int id;
	public:
	
		Estudiante(){
			
		}	
		Estudiante (int _id, string _nombre, string _carnet){
			nombre = _nombre;
			carnet = _carnet;
			id = _id;
		}
		
		string getNombre(){
			return nombre;
		}
		
		string getCarnet(){
			return carnet;
		}
		
		void setNombre(string _nombre){
			nombre = _nombre;
		}
		
		void setCarnet(string _carnet){
			carnet = _carnet;
		}
		
		int getId(){
			return id;
		}
		
			
};


class Nodo{
	protected:
		Estudiante es;
		Nodo* siguiente;
		
	public:

		Nodo(Estudiante _es){
			es = _es;
		}
		Nodo(Estudiante _es, Nodo* _sig){
			es = _es;
			siguiente = _sig;
		}
		
	
		
		Estudiante getEstudiante(){
			return es;
		}
		
		Nodo* getSiguiente(){
			return siguiente;
		}
		
		void setEstudiante(Estudiante _es){
			es = _es;
		}
		
		void setSiguiente(Nodo* _sig){
			siguiente = _sig;
		}
		
		
		
};

class Lista{
	 private :
	 
	 	Nodo* cabeza;
	
     public: 
	 
		 Lista(){
	     	cabeza = NULL;
		 }
		 
		  int isEmpty(){
		 	if(cabeza == NULL){
		 		return 1;
			 }else{
			 	return 0;
			 }
		 }
	 
		 void insertar(int id, string nombre, string carnet){
		 	Estudiante es =  Estudiante(id, nombre, carnet);
		 	if(isEmpty()== 1){
		 		cabeza = new Nodo(es);
			 }else{
				Nodo* nuevo;
				nuevo = new Nodo(es);
				nuevo->setSiguiente(cabeza);
				cabeza = nuevo;
		
			 }
		 }
		 
		 void eliminar(Nodo n){
		 	Nodo* actual;
		 	Nodo* anterior;
		 	actual = cabeza;
		 	bool encontrado = false;
		 	if(isEmpty() == 0){
		 		while((actual != NULL)&& !encontrado ){
		 			if(actual->getEstudiante().getId() == n.getEstudiante().getId()){
		 			
		 				encontrado = true;
					 }else{
					 	anterior = actual;
		 				actual = actual->getSiguiente();
					 	//actual = actual.getSiguiente();					 
						 
					}
				}
				
				if(actual!= NULL){
					if(actual == cabeza){
						cabeza = actual -> getSiguiente();
					}else{
						anterior->setSiguiente(actual->getSiguiente());
					}
					
				}
				
				delete actual;
		 	 }
		 }
		 
		 
		 
		 Nodo* buscar(int n){
		 	Nodo* actual;
		 	Nodo* anterior;
		 	actual = cabeza;
		 	bool encontrado = false;
		 	if(isEmpty() == 0){
		 		while((actual != NULL)&& !encontrado ){
		 			if(actual->getEstudiante().getId() == n){
		 			
		 				encontrado = true;
		 				
					 }else{
					 	anterior = actual;
		 				actual = actual->getSiguiente();
					 	//actual = actual.getSiguiente();					 
						 
					}
				}
				
				if(!encontrado){
					return NULL;
				}else{
					return actual;
				}
			 }else{
			 	return NULL;
			 }
	 
	}
};

int main(){
	
	/*Estudiante e = Estudiante("Juan","20119");
	
	cout<<e.getNombre()<<e.getCarnet()<<endl;
	
	e.setNombre("Pedro");
	
	cout<<e.getNombre()<<e.getCarnet()<<endl;*/
	//System("pause");
	return 0;
}
