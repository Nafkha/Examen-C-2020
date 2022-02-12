//
// Created by nafkh on 12/02/2022.
//

#include "Personne.h"

Personne::Personne(int id, const string &nom, const string &prenom, int annee, const string &pays) : id(id), nom(nom),
                                                                                                     prenom(prenom),
                                                                                                     annee(annee),
                                                                                                     pays(pays) {}

Personne::Personne() {}

int Personne::getId() const {
    return id;
}
