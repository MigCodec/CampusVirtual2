#pragma once
#include <string>
class Estudiante
{
private:
	std::string nombre;
	int edad;
	std::string rut;
public:
	Estudiante(std::string rut, std::string nombre, int edad);
	std::string get_nombre();
	std::string get_rut();
	int get_edad();
	void set_nombre(std::string nombre);
	void set_rut(std::string rut);
	void set_edad(int edad);
};

