#ifndef YUCCA_CPP
#define YUCCA_CPP

#include <iostream>
#include "yucca.h"
#include "plante.h"

  

    void yucca::entretien(){
        _feuillemorte-=10;
        if(_feuillemorte<0) _feuillemorte=0;
        _soif+=20;
        _grow+=30;
    }
    
    void yucca::arroser(int eau){
        _soif-=eau;
        if(_soif<0) _soif=0;
        _feuillemorte+=10;
        _grow+=30;
    }
    
    void yucca::pousser(int cm){
        _grow-=cm*10;
        if(_grow<0) _grow=0;
        _feuillemorte+=10;
        _soif+=30;
    }
    
    void yucca::afficher(){
        std::cout << _nom << " est une plante, a une soif de " 
                << _soif << "/100, une pousse de "
                << _grow << "/100, et une quantité de feuille _feuillemorte de " << _feuillemorte << "/100." << std::endl;
    }
    
    yucca::yucca(std::string name) : plante(name) {}

#endif