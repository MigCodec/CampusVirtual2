#include <iostream>
#include <fstream>
#include <sstream>
#include "CampusVirtual2Impl.h"
CampusVirtual2Impl::CampusVirtual2Impl()
{
    this->lista_sala = new ListaEnlazada<Sala>();
}
bool CampusVirtual2Impl::cargar_salas(std::string path_salas)
{
    std::ifstream archivo(path_salas);
    if (!archivo.is_open()) {
        return false;
    }
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::stringstream ss(linea);
        std::string identificador;
        std::string capacidad;
        std::getline(ss, identificador, ',');
        std::getline(ss, capacidad, ',');
        this->lista_sala->agregar(new Sala(identificador, std::stoi(capacidad)));

    }
    return true;
}

bool CampusVirtual2Impl::crear_sala(std::string identificador, int capacidad)
{
    this->lista_sala->agregar(new Sala(identificador, capacidad));
    return true;
}

IteratorSimple<std::string>* CampusVirtual2Impl::obtener_salas()
{
    ListaEnlazada<std::string>* lista_sala = new ListaEnlazada<std::string>();
    IteratorSimple<Sala>* iterator = this->lista_sala->iterator();
    while (iterator->tiene_siguiente()) {
        Sala* sala = iterator->siguiente();
        lista_sala->agregar(new std::string(sala->get_identificador() +" - " + std::to_string(sala->get_capacidad())));
    }
    return lista_sala->iterator();
}
