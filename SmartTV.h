#ifndef TDA_SMARTTV_SMARTTV_H
#define TDA_SMARTTV_SMARTTV_H
#include "Vector.h"
#include "Aplicacion.h"

class SmartTV {
    Vector<Aplicacion *> *aplicaciones;
    Aplicacion* aplicacionActual;
    
bool conectarInternet;
public:
    SmartTV(unsigned int espacioEnDisco);
    virtual ~SmartTV();
    void agregarApp(std::string nombre);
    void abrirAplicacion(std::string nombre);
    void cerrarAplicacion();
};


#endif //TDA_SMARTTV_SMARTTV_H
