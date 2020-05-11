#ifndef plante_CPP
#define plante_CPP

#include <iostream>
#include "plante.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void plante::entretien(){    }
    
    void plante::arroser(int eau){    }
    
    void plante::pousser(int cm){    }
    
    void plante::afficher(){
        std::cout << _nom << " est une plante, a une soif de " 
                << _soif << "/100, une pousse de "
                << _grow << "/100, et une quantité de feuille morte de " << _feuillemorte << "/100." << std::endl;
    }
    
    plante::plante(std::string name) : _nom(name), _feuillemorte(0), _grow(0), _soif(0)  {}

#endif