#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class plante{
  protected:
    int _feuillemorte;
    int _grow;
    int _soif;
    std::string _nom;
  
  public:
  
    void virtual entretien();
    void virtual arroser(int eau);
    void virtual pousser(int cm);
    
    void afficher();
    
    plante(std::string name);
    
};

#endif