#include "Estudiante.h"

Estudiante::Estudiante(std::string rut, std::string nombre, int edad)
{
	this->rut = rut;
	this->nombre = nombre;
	this->edad = edad;
}

std::string Estudiante::get_nombre()
{
	return this->nombre;
}

std::string Estudiante::get_rut()
{
	return this->rut;
}

int Estudiante::get_edad()
{
	return this->edad;
}

void Estudiante::set_nombre(std::string nombre)
{
	this->nombre = nombre;
}

void Estudiante::set_rut(std::string rut)
{
	this->rut = rut;
}

void Estudiante::set_edad(int edad)
{
	this->edad = edad;
}
