#include "SmartTV.h"
#include <iostream>


SmartTV::SmartTV(unsigned int espacioEnDisco) {
this->aplicaciones = new Vector<Aplicacion *>(espacioEnDisco + 1, NULL);
    for (int i = 0; i <= this->aplicaciones->getLongitud(); ++i) {
        this->aplicaciones->agregar(i, new Aplicacion(i, ""));
    }
    this->aplicacionActual = this->aplicaciones->obtener(1);
}

SmartTV::~SmartTV() {
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        delete this->aplicaciones->obtener(i);
    }
}


void SmartTV::agregarApp(std::string nombre) {
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        if(this->aplicaciones->obtener(i)->getNombre()==""){
            this->aplicaciones->obtener(i)->setNombre(nombre);
            break;
        }
    }
}

void SmartTV::abrirAplicacion(std::string nombre) {
    for (int i = 0; i < this->aplicaciones->getLongitud(); ++i) {
        if(this->aplicacionActual[i].getNombre()== nombre){
          std::cout <<"La app se acaba de abrir" + this->aplicacionActual[i].getNombre()<< std::endl;
        return;
        }
    }
    throw "La app es inexistente";
}

