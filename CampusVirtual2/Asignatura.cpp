#include "Asignatura.h"

Asignatura::Asignatura(std::string nombre)
{
	this->nombre = nombre;
	this->profesor = nullptr;
	this->lista_estudiante = new ListaEnlazada<Estudiante>();
}

Profesor* Asignatura::get_profesor()
{
	return this->profesor;
}

ListaEnlazada<Estudiante>* Asignatura::get_lista_estudiante()
{
	return this->lista_estudiante;
}

std::string Asignatura::get_nombre()
{
	return this->nombre;
}
