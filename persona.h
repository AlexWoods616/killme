#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

class persona {
private:
	string nombre;
	string apellido;
	int edad;
public:
	persona(string n, string a, int e) {
		nombre = n;
		apellido = a;
		edad = e;
	}
		string get_nombre(){return nombre;}
		string get_apellido() {return apellido;}
		int get_edad() {return edad;}
};

class trabajador :public persona {
private:
	string codigo;
	int salario;
	string puesto;
public:
	trabajador(string n, string a, int e, string c, int s, string p) :persona(n, a, e) {
		codigo = c;
		salario = s;
		puesto = p;
	}
	string get_codigo() {return codigo;}
	int get_salario(){return salario;}
	string get_puesto() {return puesto;}
};

class cliente :public persona {
private:
	string num_cuenta;
	int acciones;
public:
	cliente(string n, string a, int e, string num, int acc) :persona(n, a, e) {
		num_cuenta = num;
		acciones = acc;
	}
	string get_num_cuenta() { return num_cuenta; }
	int get_acciones() { return acciones; }
};

class comun :public cliente {
private:
	int cant_deposi;
public:
	comun(string n, string a, int e, string num, int acc, int cant) :cliente(n, a, e, num, acc) {
		cant_deposi = cant;
	}
	int get_cant_deposi() { return cant_deposi; }
};

class deudores :public cliente {
private:
	int debe;
public:
	deudores(string n, string a, int e, string num, int acc, int d) :cliente(n, a, e, num, acc) {
		debe = d;
	}
	int get_debe() { return debe; }
};

