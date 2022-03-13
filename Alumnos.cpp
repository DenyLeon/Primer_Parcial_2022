#include "Alumno.cpp"
#include <iostream>
using namespace std;

class Alumnos : Alumno {
	
	private: int codigo, nota;
	
	public: 
	Alumnos  (){
	}
	
	Alumnos (string nom, string ape, string cur, int cod, int n) : Alumno (nom, ape, cur)
	{
		codigo = cod;
		nota = n;
		
	}
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<codigo<<"--"<<nombre<<"--"<<apellido<<"--"<<curso<<"--"<<nota<<endl;
		
			if (nota>=60)
	{
		cout<<("Aprobado");
	}
	else
	{
		cout<<("Reprobado");
	}
	}
};