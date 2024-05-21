#ifndef TDA_SMARTTV_VECTOR_H
#define TDA_SMARTTV_VECTOR_H
#include <string>
template<typename T> class Vector {
    T* datos;
    unsigned int longitud;
    T datoInicial;
private :
    void validarPosicion(unsigned int posicion);

public:
    //pre:
    //post: inicializamos el vector con la longitud y el dato inicial
    Vector( unsigned int longitud, T datoInicial);

    //pre:
    //post: Elimina el vector de datos
    virtual ~Vector();

    //pre:
    //post:
    int getLongitud();

    //pre:
    //post:
    void agregar(int posicion, T dato);

    int agregar(T dato);

    T obtener( unsigned int posicion);

    void remover(unsigned int posicion);


};

template<typename T>Vector<T>::Vector(unsigned int longitud, T datoInicial) {
    if(longitud<1) {
        throw " La longitud debe ser mayor o igual a 1";
    }
    this->datos= new T[longitud];
    this->longitud= longitud;
    this ->datoInicial=datoInicial;
    for (int i = 0; i < longitud; ++i) {
        this->datos[i] = datoInicial;

    }

}
template <typename T> Vector<T>::~Vector(){
    delete [] this->datos;
}
template<typename T> int Vector<T>::getLongitud() {
    return this->longitud;
}

template<typename T>

void Vector<T>::agregar(int posicion, T dato) {
    validarPosicion(posicion);
    this->datos[posicion-1] = dato; //evita de que la persona normal empieza a colocar en la pos 0
}

template<typename T>
void Vector<T>::validarPosicion(unsigned int posicion) {
    if(posicion < 1 || posicion > this->longitud){
        throw "La " + std::to_string(posicion) + " no esta en el rango 1 y " + std::to_string(this->longitud) + " inclusive";
    }
}

template<typename T>
T Vector<T>::obtener(unsigned int posicion) {
    validarPosicion(posicion);
    return this->datos[posicion-1];
}

template<typename T>
void Vector<T>::remover(unsigned int posicion) {
    validarPosicion(posicion);
    delete this->datos[posicion-1];
    return this->datos[posicion-1]=NULL;

}

#endif //TDA_SMARTTV_VECTOR_H
