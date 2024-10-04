#include "Sala.h"

Sala::Sala(std::string identificador, int capacidad)
{
	this->identificador = identificador;
	this->capacidad = capacidad;
}

std::string Sala::get_identificador()
{
	return this->identificador;
}

int Sala::get_capacidad()
{
	return this->capacidad;
}

void Sala::set_identificador(std::string identificador)
{
	this->identificador = identificador;
}

void Sala::set_capacidad(int capacidad)
{
	this->capacidad = capacidad;
}
