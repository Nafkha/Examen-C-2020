//
// Created by nafkh on 12/02/2022.
//

#ifndef REVISION_LIVRE_H
#define REVISION_LIVRE_H
#include "Auteur.h"

class Livre {
private:
    string titre;
    int nb_aut;
    Auteur aut[3];
    int annee;
    string genre;
    string langue;
    int nb_page;
public:
    Livre();
    Livre(const string &titre, int nbAut, int annee, const string &genre, const string &langue, int nbPage);
    void Afficher(){
        cout<<"Titre : "<<titre<<endl;
        cout<<"Nombre d'auteurs : "<<nb_aut<<endl;
        cout<<"Auteurs : "<<endl;
        for(int i=0;i<nb_aut;i++){
            aut[i].Afficher();
        }
        cout<<"Annee : "<<annee<<endl;
        cout<<"Genre : "<<genre<<endl;
        cout<<"Langue : "<<langue<<endl;
        cout<<"Nombre de pages : "<<nb_page<<endl;
    }
    void ajouterAuteur(Auteur a){
        if(nb_aut>=3){
            cout<<"Il existe deja 3 auteurs"<<endl;
            return;
        }
        for(int i=0;i<nb_aut;i++){
            if(a.getId()==aut[i].getId()){
                cout<<"Cet auteur existe déja"<<endl;
                return;
            }
        }
        aut[nb_aut]= a;

        nb_aut++;

    }
    friend void AfficherAut(Livre l){
        for(int i=0;i<l.nb_aut;i++){
            l.aut[i].Afficher();
        }
    }
    void supprimerAut(Auteur a){

        if(aut[nb_aut-1].getId()==a.getId()){
            nb_aut = nb_aut-1;
        }else {
            for (int i = 0; i < nb_aut; i++) {
                if (a.getId() == aut[i].getId()) {
                    for(int j=i;j<nb_aut-1;j++)
                    aut[j] = aut[j + 1];
                    nb_aut = nb_aut - 1;
                    break;
                }

            }
        }

    }
};


#endif //REVISION_LIVRE_H
