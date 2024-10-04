#pragma once
#include <string>
class Profesor
{
private:
	std::string rut;
	std::string nombre;
public:
	Profesor(std::string rut, std::string nombre);
	std::string get_rut();
	std::string get_nombre();
	void set_nombre(std::string nombre);
	void set_rut(std::string rut);

};

