#ifndef TDA_SMARTTV_APLICACION_H
#define TDA_SMARTTV_APLICACION_H
#include <string>

class Aplicacion {
    unsigned int id;
    std::string nombre;
public:
    Aplicacion(unsigned int id, std::string nombre);
    virtual ~Aplicacion();
    void setNombre(std::string nombreApp);
    std::string getNombre();

};


#endif //TDA_SMARTTV_APLICACION_H
