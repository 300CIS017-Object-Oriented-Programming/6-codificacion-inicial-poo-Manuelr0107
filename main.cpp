#include <iostream>
#include "Perro.h"


int main() {

    std::cout << "Interfaz de la clase perro" << std::endl;

    Raza mastin("Mastin Napolitano", "Italia");
    Raza maltes("Maltes" , "Italia");

    Veterinario drperez("DrPerez" , 15 );
    Veterinario drgomez("DrGomez" , 5 );


    // Instanciar
    Perro firulais;
    firulais.nombre = "Firulais";
    firulais.color = "Negro";
    firulais.edad = 5;
    firulais.tamanio = "Grande";
    firulais.raza = mastin;
    firulais.veterinario = drperez;

    std::cout << firulais.nombre << " es de raza "
    << firulais.raza.getnombre() << " de "
    << firulais.raza.getpaisOrigen() << " su veterinario es "
    << firulais.veterinario.getnombreVeterinario() << " que cuenta con "
    << firulais.veterinario.getaniosExperiencia() << " anios de experiencia. " << std::endl;


    std::cout << "Que ladre" << std::endl;
    firulais.ladrar();
    firulais.saludar();
    firulais.alimentar();


    Perro luna;
    luna.nombre = "Luna";
    luna.color = "Blanco";
    luna.edad = 2;
    luna.tamanio = "Pequeno";

    std::cout << "Que ladre" << std::endl;
    luna.ladrar();
    luna.alimentar();

    return 0;
}
