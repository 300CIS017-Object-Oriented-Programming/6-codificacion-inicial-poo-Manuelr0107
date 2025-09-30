//
// Created by lufe and Gonzo.
//

#ifndef INC_1_CLASEOBJETO_PERRO_H
#define INC_1_CLASEOBJETO_PERRO_H

#include <string>
#include <iostream>

class Raza {

public:
    std::string nombre;
    std::string paisOrigen;

    //constructor
    Raza(std::string nom = "", std::string pai = "") {
        nombre = nom;
        paisOrigen = pai;
    }

    std::string getnombre(){ return nombre; }
    std::string getpaisOrigen(){ return paisOrigen; }

    void setnombre(std::string nom){ nombre = nom; }
    void setpaisOrigen(std::string pai){ paisOrigen = pai; }
};

class Perro {

public:
    std::string nombre;
    std::string color;
    std::string tamanio;
    int edad;
    Raza raza;
    //Metodos///
    void ladrar();
    void saludar();
    void alimentar();

};



#endif //INC_1_CLASEOBJETO_PERRO_H
