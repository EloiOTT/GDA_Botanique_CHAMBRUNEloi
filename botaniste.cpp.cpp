#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "botaniste.h"
#include "plante.h"

// std::string _playerName;
  
  
    void botaniste::tailler(plante * cible){
        cible->entretien();
    }
    
    void botaniste::hydrater(plante * cible){
        cible->arroser(20);
    }
    
    void botaniste::engrais(plante * cible){
        cible->pousser(1);
    }
    
    
    botaniste::botaniste(std::string nomPlayer): _playerName(nomPlayer) {}
    
#endif