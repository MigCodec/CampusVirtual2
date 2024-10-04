#pragma once
#include "NodoSimple.h"
template <typename T>
class IteratorSimple
{
private:
	NodoSimple<T>* nodo;
public:
	IteratorSimple(NodoSimple<T>* nodo);
	T* siguiente();
	bool tiene_siguiente();
};

template<typename T>
inline IteratorSimple<T>::IteratorSimple(NodoSimple<T>* nodo)
{
	this->nodo = nodo;
}

template<typename T>
inline T* IteratorSimple<T>::siguiente()
{
	NodoSimple<T>* auxiliar = this->nodo;
	this->nodo = this->nodo->get_siguiente();
	return auxiliar->get_dato();
}

template<typename T>
inline bool IteratorSimple<T>::tiene_siguiente()
{
	if (this->nodo == nullptr) {
		return false;
	}
	return true;
}
