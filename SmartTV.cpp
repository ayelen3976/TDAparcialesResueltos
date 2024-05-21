#include "SmartTV.h"


SmartTV::SmartTV(unsigned int espacioEnDisco) {
this->aplicaciones = new Vector<Aplicacion *>(espacioEnDisco, NULL);
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        this->aplicaciones->agregar(i, new Aplicacion(i, ""));
    }
}

SmartTV::~SmartTV() {
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        delete this->aplicaciones->obtener(i);
    }
}


void SmartTV::agregarApp(std::string nombre) {
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        std::string nombreApp =  this->aplicacionActual[i].getNombre();
        if(nombreApp == ""){
            this->aplicacionActual[i].setNombre(nombre);
        }
    }
}

void SmartTV::abrirAplicacion(std::string nombre) {

}

