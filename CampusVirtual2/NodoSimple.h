#pragma once
template <typename T>
class NodoSimple
{
private:
	T* dato;
	NodoSimple<T>* siguiente;
public:
	NodoSimple(T* dato);
	T* get_dato();
	NodoSimple* get_siguiente();
	void set_dato(T* dato);
	void set_siguiente(NodoSimple<T>* siguiente);
};
// Debido a que es un template la implementacion de los metodos estaran en el .h
template<typename T>
inline NodoSimple<T>::NodoSimple(T* dato)
{
	this->dato = dato;
	this->siguiente = nullptr;
}

template<typename T>
inline T* NodoSimple<T>::get_dato()
{
	return this->dato;
}

template<typename T>
inline NodoSimple<T>* NodoSimple<T>::get_siguiente()
{
	return this->siguiente;
}


template<typename T>
inline void NodoSimple<T>::set_dato(T* dato)
{
	this->dato = dato;
}

template<typename T>
inline void NodoSimple<T>::set_siguiente(NodoSimple<T>* siguiente)
{
	this->siguiente = siguiente;
}
