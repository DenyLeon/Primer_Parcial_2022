#include "Alumnos.cpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

 int main(){
		
	string nombre,apellido,curso;
	int codigo, nota,p1,p2,p3,p4;
	char opcion='S';
	while(opcion =='s' || opcion=='S') 	
	{
	
	cout<<"Ingresar Codigo: ";
	cin>>codigo;
	cin.ignore();
	cout<<"Ingresar Nombre: ";
	getline(cin,nombre);
	cout<<"Ingresar Apellido: ";
	getline(cin,apellido);
	cout<<"Ingresar Curso: ";
	getline(cin,curso);;
	cout<<"Ingresar Nota 1: ";
	cin>>p1;
	cout<<"Ingresar Nota 2: ";
	cin>>p2;
	cout<<"Ingresar Nota 3: ";
	cin>>p3;
	cout<<"Ingresar Nota 4: ";
	cin>>p4;
	
	nota =(p1+p2+p3+p4)/4;

	
	Alumnos d = Alumnos(nombre,apellido,curso,codigo,nota);
	d.mostrar();
	
	cout<<"\n Desea ingresar otro dato de alumno?: (s) o (n)";
	cin>>opcion;
	}
	system("cls");
	return 0;
	
}
