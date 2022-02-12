//
// Created by nafkh on 12/02/2022.
//

#include "Auteur.h"

Auteur::Auteur(int id, const string &nom, const string &prenom, int annee, const string &pays, int nbLivre) : Personne(
        id, nom, prenom, annee, pays), nb_livre(nbLivre) {}

Auteur::Auteur() {}
