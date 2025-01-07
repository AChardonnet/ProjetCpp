//
// Created by antoi on 07/01/2025.
//

#include "Bibliotheque.h"
#include "Livre.h"
#include <iostream>
using namespace std;

Bibliotheque::Bibliotheque() {
    id = nbTotBibliotheques+1;
    nbTotBibliotheques++;
    nom = "";
    adresse = "";
    nbLivres = 0;
    nbLivresMax = 100;
    livres = new Livre*[100];
}

void Bibliotheque::augmenterCapacite(){
    Livre ** var = new Livre * [nbLivresMax*2];
    for(int i = 0; i<nbLivresMax; i++){
        var[i] = livres[i];
    }
    nbLivresMax *=2;
    livres = var;
}

void Bibliotheque::ajoutLivre(Livre* livre){
    if(nbLivres>nbLivresMax){
        augmenterCapacite();
    }
    livres[nbLivres] = livre;
    nbLivres++;
}

void Bibliotheque::Afficher(){
    cout<<nom<<endl;
    cout<<adresse<<endl;
    for(int i = 0; i<nbLivres; i++){
        livres[i]->Afficher();
    }
}

Livre* Bibliotheque::trouveLivre(int id){
    for(int i = 0; i<nbLivres; i++){
        int id_livre = livres[i]->getId();
        if(id_livre==id){
            return livres[i];
        }
    }
    return nullptr;
}

