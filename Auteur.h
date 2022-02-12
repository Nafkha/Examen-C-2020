//
// Created by nafkh on 12/02/2022.
//

#ifndef REVISION_AUTEUR_H
#define REVISION_AUTEUR_H
#include "Personne.h"


class Auteur:public Personne {
private:
    int nb_livre;
public:
    Auteur();
    Auteur(int id, const string &nom, const string &prenom, int annee, const string &pays, int nbLivre);
    void Afficher(){
        cout<<"ID : "<<id<<" Nom : "<<nom<<" Prenom : "<<prenom<<" Annee :"<<annee<<" Pays : "<<pays<< "nb_livres : "<<nb_livre<<endl;
    }
    int getAn(){
        return annee;
    }


};


#endif //REVISION_AUTEUR_H
