#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "persona.h"
using namespace std;

fstream archivo;

void leer() {
	archivo.open("me.txt", ios::in);
	if (archivo.is_open()) {
		char a;
		while (!archivo.eof()) {
			a = archivo.get();
			cout << a;
		}
		archivo.close();
	}
	else
		cout << "No hay";
}

void lee(string m) {
	archivo.open(m.c_str(), ios::in);
	string texto;
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!archivo.eof) {
		getline(archivo, texto);
	}
	archivo.close();
}



/*void leer_hasta() {
	archivo.open("me.txt", ios::in);
	if (archivo.is_open()) {
		char	 a;
		while (!archivo.eof()) {
			a = archivo.get();
			if (a != int()) {
				a = archivo.get();
				cout << a;
			}
		}
		archivo.close();
	}
	else
		cout << "No hay";
}*/