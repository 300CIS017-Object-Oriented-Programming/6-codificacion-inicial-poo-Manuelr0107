//
// Created by lufe and Gonzo.
//

#include "Perro.h"

void Perro::ladrar() {

    std::cout << " Esta ladrando " << nombre << " tengo " << edad << " anios " << std::endl;
}

void Perro::saludar() {
    int veces = 5; // veces es una variable local
    for (int i = 0; i < veces; i++) {
       // Esta linea combina variables locales con atributos de instancia
        std::cout << nombre << " saluda." << std::endl;
    }
}
void Perro::alimentar() {
    float alimento = 0;

    if (tamanio == "Grande") {
        alimento = 1 * edad;
        std::cout << nombre << " debe comer " << alimento << "Kg" << std::endl;
    }
    if (tamanio == "Mediano") {
        alimento = 0.5 * edad;
        std::cout << nombre << " debe comer " << alimento << "Kg" << std::endl;
    }
    if (tamanio == "Pequenio") {
        alimento = 0.25 * edad;
        std::cout << nombre << " debe comer " << alimento << "Kg" << std::endl;
    }
    else {
        std::cout << "tamaño no valido" << std::endl;
    }
}
