/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Ejercicio de insertar y quitar elementos de una pila con menu 
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
struct Nodo{
int dato;
Nodo *siguiente;
};
void agregarPila(Nodo *&, int); 
void sacarPila(Nodo *&, int &);

int main()
{ 

Nodo *pila=NULL; //igualar pila a un valor vac?o. 
Nodo *aux=NULL;
int dato, s;
int NumE;
char selec;
char letra;
for (int i=1; i<=8; i++)
{	system ("cls");
cout<<"insertar elementos en la pila (presione A): "<<endl;
cout<<"Eliminar elementos en la pila (presione B): "<<endl;
cout<<"Salir del programa (presione C): "<<endl;
cin>>letra;
selec=toupper(letra);
switch(selec)
{case 'A': 
cout<<"Cuantos elementos agregar a la pila:";
cin>>NumE;
	system ("cls");
	if (NumE==0)
	{
	cout<<"No se agregaron elementos.";
	}
	else{	
for (int i=1; i<=NumE; i++){

	cout<<"\n ingrese elemento: "<<i<<" para insertar: "<<endl;
	cin>>dato;
	agregarPila(pila, dato);}
}
getch();
break;
case 'B':
if (dato==NULL)
{	cout<<"No hay elementos por eliminar";
	getch();
	return main();
}
else{
cout<<"Eliminando datos...\n";
   while (pila != NULL)
	{	if (pila != NULL){
		sacarPila(pila, dato);
		cout<<dato<<" , "; 
		}
		else if (pila ==NULL)
		{
		cout<<"los datos se han eliminado.";
		}
	}
	cout<<"Los datos se han eliminado.";

}   getch();
	return main();
	
	case 'C': 
	return 0;
	break;
	
	default:
	cout<<"Elige por favor una opcion que sea valida"<<endl;
	getch();
}
}
}
void agregarPila(Nodo *&pila, int n) 
 {
 	Nodo *nuevoNodo = new Nodo();
 	nuevoNodo -> dato = n; 
 	nuevoNodo -> siguiente = pila;
 	pila=nuevoNodo;
 	
 	cout<<n<<" agregado correctamente a la pila"<<endl;
 }
 
 void sacarPila(Nodo *& pila, int &n){ 
 	Nodo *aux=pila;
 	n = aux ->dato;
 	pila = aux ->siguiente;
 	delete aux; 
 }
