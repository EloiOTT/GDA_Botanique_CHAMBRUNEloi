#ifndef YUCCA_H
#define YUCCA_H

#include <string>
#include "plante.h"

class yucca : public plante {

  
  public:
  
    void entretien();
    void arroser(int eau);
    void pousser(int cm);
    
    void afficher();
    
    yucca(std::string name);
    
};

#endif