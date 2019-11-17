#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "persona.h"
#include "funciones.h"

using namespace std;

int main() {
	leer();
	//persona me("Marco", "Diaz", 15);
	string arch;
	cout << "Usted es trabajador o cliente"<<endl;
	getline(cin, arch);
	if (arch == "trabajador") {
		
		cout << "Buscar por: \n 1)Nombre \n 2)Apellido \n 3)Codigo \n 4)Puesto";
		cin >> 
	}

	//lee(arch);
	//cout << me.get_nombre() << " " << me.get_apellido() << " " << me.get_edad() << endl;
}

