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
	while (!archivo.eof()) {
		getline(archivo, texto);
	}
	archivo.close();
}

void buscar_t() {
	archivo.open("trabajador.txt", ios::in);
	if (archivo.is_open()) {
		char nombre[50];
		char apellido[50];
		int edad;
		int codigo;
		double salario;
		char puesto[50];
		while (!archivo.eof()) {
			archivo >> nombre >> apellido >> edad >> codigo >> salario >> puesto;
			cout << "Nombre: " << nombre << endl;
			cout << "Apellido: " << apellido << endl;
			cout << "Edad: " << edad << endl;
			cout << "Codigo: " << codigo << endl;
			cout << "Salario: " << salario << endl;
			cout << "Puesto: " << puesto << endl;
		}
		archivo.close();
	}
	else
		cout << "El archivo no se pudo leer";
}