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
	if (arch == "trabajador")
		lee(arch);

	//lee(arch);
	//cout << me.get_nombre() << " " << me.get_apellido() << " " << me.get_edad() << endl;
}

