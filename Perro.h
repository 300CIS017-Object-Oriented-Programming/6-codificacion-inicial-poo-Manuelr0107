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


class Veterinario {

public:
    std::string nombreVeterinario;
    int aniosExperiencia;
    //constructor
    Veterinario(std::string nomVet = "",int aniosExp = 0 ) {
        nombreVeterinario = nomVet;
        aniosExperiencia = aniosExp;

    }


    //get
    std::string getnombreVeterinario(){return nombreVeterinario;}
    int getaniosExperiencia(){return aniosExperiencia;}
    //set
    void setnombreVeterinario(std::string nomVet){nombreVeterinario = nomVet ; }
    void setaniosExperiencia(int aniosExp){aniosExperiencia = aniosExp ;}


};

class Dueno {

public:
    std::string nombreDueno;
    int numeroTelefono;

    Dueno(std::string nombreD = "", int numeroTelefono = 0) {
        nombreDueno = nombreD;
        numeroTelefono = numeroTelefono;
    }

    std::string getnombreDueño() {return nombreDueno;}
    int getnumeroTelefono(){return numeroTelefono;}

    void setnombreDueño(std::string nombreD) {nombreDueno = nombreD;}
    void setnumeroTelefono(int numeroT) {numeroTelefono = numeroT;}

    void saludarperro(std::string) {
        std::cout << nombreDueno << "dice => Hola" << std::endl;
    }

};

class Perro {

public:
    std::string nombre;
    std::string color;
    std::string tamanio;
    int edad;
    Raza raza;
    Veterinario veterinario;
    Dueno dueno;
    //Metodos///
    void ladrar();
    void saludar();
    void alimentar();

};

#endif //INC_1_CLASEOBJETO_PERRO_H
