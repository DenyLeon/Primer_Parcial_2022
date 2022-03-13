#include <iostream>
using namespace std;
class Alumno{
	
	protected : string nombre, apellido, curso;
				
				
	protected :
		Alumno(){
		}
		Alumno (string nom, string ape, string cur){
			nombre = nom;
			apellido = ape;
			curso = cur;
		
		}	
		
		
		void mostrar(); 		
};
