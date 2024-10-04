#pragma once
#include "Profesor.h"
#include "ListaEnlazada.h"
#include "Estudiante.h"
class Asignatura
{
private:
	Profesor* profesor;
	ListaEnlazada<Estudiante>* lista_estudiante;
	std::string nombre;
public:
	Asignatura(std::string nombre);
	Profesor* get_profesor();
	ListaEnlazada<Estudiante>* get_lista_estudiante();
	std::string get_nombre();
	void set_profesor(Profesor* profesor);
	void set_lista_estudiante(ListaEnlazada<Estudiante>* lista_estudiante);
	void set_nombre(std::string nombre);
};

