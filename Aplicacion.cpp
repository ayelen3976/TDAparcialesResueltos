//
// Created by ayelen on 20/05/24.
//

#include "Aplicacion.h"
Aplicacion::Aplicacion(unsigned int id, std::string nombre) {
    this->nombre = nombre;
    this->id = id;

}

void Aplicacion::setNombre(std::string nombreApp) {
    this->nombre = nombreApp;
}

std::string Aplicacion::getNombre() {
    return this->nombre;
}