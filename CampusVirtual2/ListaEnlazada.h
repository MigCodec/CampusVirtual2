#pragma once
#include "NodoSimple.h";
#include "IteratorSimple.h";
template <typename T>
class ListaEnlazada
{
private:
	NodoSimple<T>* cabeza;
	int largo;
public:
	ListaEnlazada();
	void agregar(T* dato);
	bool eliminar(int posicion);
	T* obtener(int posicion);
	IteratorSimple<T>* iterator();
};
// Debido a que es un template la implementacion de los metodos estaran en el .h
template<typename T>
inline ListaEnlazada<T>::ListaEnlazada()
{
	this->cabeza = nullptr;
	this->largo = 0;
}

template<typename T>
inline void ListaEnlazada<T>::agregar(T* dato)
{
	if (this->cabeza == nullptr) {
		this->cabeza = new NodoSimple<T>(dato);
		return;
	}
	NodoSimple<T>* auxiliar = this->cabeza;
	while (auxiliar->get_siguiente() != nullptr) {
		auxiliar = auxiliar->get_siguiente();
	}
	auxiliar->set_siguiente(new NodoSimple<T>(dato));
	this->largo += 1;

}

template<typename T>
inline bool ListaEnlazada<T>::eliminar(int posicion)
{
	if (posicion > this->largo) {
		return false;
	}
	int ubicacion_actual = 0;
	NodoSimple<T>* auxiliar = this->cabeza;
	NodoSimple<T>* anterior = auxiliar;
	while (ubicacion_actual < this->largo && ubicacion_actual < posicion) {
		anterior = auxiliar;
		auxiliar = auxiliar->get_siguiente();
	}
	NodoSimple<T>* nodo_a_eliminar = auxiliar;
	anterior->set_siguiente(auxiliar->get_siguiente());
	delete nodo_a_eliminar;
	return true;
	
}

template<typename T>
inline T* ListaEnlazada<T>::obtener(int posicion)
{
	int ubicacion_actual = 0;
	NodoSimple<T>* auxiliar = this->cabeza;
	while (ubicacion_actual < this->largo && ubicacion_actual < posicion) {
		auxiliar = auxiliar->get_siguiente();
	}
	return auxiliar;
}

template<typename T>
inline IteratorSimple<T>* ListaEnlazada<T>::iterator()
{
	return new IteratorSimple<T>(this->cabeza);
}
