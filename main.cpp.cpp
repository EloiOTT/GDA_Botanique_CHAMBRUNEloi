#include <iostream>
#include "yucca.h"
#include "botaniste.h"

int choix ;

int main()
{
    
    yucca * yucca1 = new yucca("yucca1");
    yucca1->afficher();
    
    botaniste * myself = new botaniste("Fabiano");
    
    printf("[1] arroser, [2] mettre de l'engrais, [3] tailler \n");
    scanf("%d", &choix);
    
    if(choix == 1){
    myself->hydrater(yucca1);
    printf("vous avez arroser votre yucca \n");
    yucca1->afficher();
   }
   
   if(choix == 2){
    myself->engrais(yucca1);
    printf("vous avez donné de l'engrais a votre yucca \n");
    yucca1->afficher();
   }
   
   if(choix == 3){
    myself->tailler(yucca1);
    printf("vous avez taillé votre yucca \n");
    yucca1->afficher();
   }

    return 0;
}
