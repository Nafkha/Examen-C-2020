#include <iostream>
#include "Livre.h"


int main() {

    Auteur a(1,"Youssef","Nafkha",1998,"Tunisie",5);
    Auteur a1(2,"Syrine","Ghattas",2001,"Tunisie",1);
    Auteur a2(3,"Aziz","Ferah",1999,"Tunisie",90);
    Auteur a3(4,"Youssef","Nafkha",1998,"Tunisie",5);
    Livre l("C++",0,1998,"Horror","English",666);
    l.ajouterAuteur(a);
    l.ajouterAuteur(a1);
    l.ajouterAuteur(a2);
    l.ajouterAuteur(a3);
    AfficherAut(l);
    l.Afficher();
    l.supprimerAut(a);
    AfficherAut(l);
    return 0;
}
