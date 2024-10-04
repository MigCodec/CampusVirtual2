#pragma once
#include "CampusVirtual2Impl.h"
class MenuSala
{
private:
	CampusVirtual2Impl* sistema;
public:
	MenuSala(CampusVirtual2Impl* sistema);
	void agregar();
	void mostrar();
	void eliminar();
	~MenuSala();
};

