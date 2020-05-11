#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "plante.h"

class botaniste{
  private:
    std::string _playerName;
  
  public:
  
    void tailler(plante * cible);
    void hydrater(plante * cible);
    void engrais(plante * cible);
    
    
    botaniste(std::string nomPlayer);
    
};

#endif