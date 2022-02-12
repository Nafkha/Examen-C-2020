//
// Created by nafkh on 12/02/2022.
//
#include <string>
#include <iostream>
using namespace std;
#ifndef REVISION_PERSONNE_H
#define REVISION_PERSONNE_H
class Personne{
protected:
    int id;
    string nom;
    string prenom;
    int annee;
    string pays;
public:
    Personne(int id, const string &nom, const string &prenom, int annee, const string &pays);

    Personne();
    void Afficher(){
        cout<<"ID : "<<id<<" Nom : "<<nom<<" Prenom : "<<prenom<<" Annee :"<<annee<<" Pays : "<<pays<< endl;
    }

    int getId() const;
};
#endif //REVISION_PERSONNE_H
