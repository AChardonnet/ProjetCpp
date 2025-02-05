//
// Created by antoi on 07/01/2025.
//

#ifndef LIVRE_H
#define LIVRE_H
#include <string>

using namespace std;

struct Livre {
    int id;
    int idBibOrig;
    string categorie;
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    string publicCible;
    string etat;

public:
    static int nbTotLivres;

    Livre();

    Livre(string auteur, string titre, string editeur, string ISBN, string publicCible, string categorie);

    void setEtat(string etat);

    void setIdBibOrig(int id);

    int getId();

    string getCategorie();

    string getEtat();

    int getIdBibOrig();

    virtual void Afficher();
};


#endif //LIVRE_H
