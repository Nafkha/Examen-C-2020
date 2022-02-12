//
// Created by nafkh on 12/02/2022.
//

#include "Livre.h"

Livre::Livre(const string &titre, int nbAut, int annee, const string &genre, const string &langue, int nbPage) : titre(
        titre), nb_aut(nbAut), annee(annee), genre(genre), langue(langue), nb_page(nbPage) {}

Livre::Livre() {}
