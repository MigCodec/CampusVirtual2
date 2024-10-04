#pragma once
#include <string>
class Sala
{
private:
	std::string identificador;
	int capacidad;
public:
	Sala(std::string identificador, int capacidad);
	std::string get_identificador();
	int get_capacidad();
	void set_identificador(std::string identificador);
	void set_capacidad(int capacidad);

};

