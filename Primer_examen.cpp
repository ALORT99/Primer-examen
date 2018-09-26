//aLEXANDER GONZALEZ ORTEGA//
#include<iostream>
using namespace std;
int arreglo[0];
struct Arreglo{
	int dato;
	struct Arreglo *siguiente;
}*inicio,*aux,*actual, *anterior;
void mostrarArreglo(); //prototipos de la funcion
int main(){
	int *p;
	int Datos=6;
	ptr=new int[Datos];
	//para generar una memoria dinamica
	for (int i=0; i<Datos; i++){
		ptr=&arreglo[0];
		cout<<"IngresaR el numero: "<<endl;
		cin>>ptr[i];
		
	}
	//cout<<arreglo[Datos];
	delete[] p;
	mostrarArreglo;
	return 0;
}

void mostrarArreglo(){
	actual=inicio;
	while(actual!=NULL){ //actual diferente de NULL
	cout<<" ->"<<actual->dato<<" ";
	actual=actual->siguiente;
	}
}
