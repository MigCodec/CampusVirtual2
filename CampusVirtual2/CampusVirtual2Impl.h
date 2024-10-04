#pragma once
#include <string>
#include "CampusVirtual2Impl.h"
#include "ListaEnlazada.h"
#include "Sala.h"
#include "IteratorSimple.h"
class CampusVirtual2Impl
{
private:
	ListaEnlazada<Sala>* lista_sala;
public:
	CampusVirtual2Impl();
	bool cargar_salas(std::string path_salas);
	bool cargar_estudiantes(std::string path_estudiantes);
	bool crear_sala(std::string identificador, int capacidad);
	IteratorSimple<std::string>* obtener_salas();
	

};

