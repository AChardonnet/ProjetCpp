//
// Created by antoi on 07/01/2025.
//

#ifndef LIVRE_H
#define LIVRE_H
#include <string>

using namespace std;

struct Livre {
    int id;
    string auteur;
    string titre;
    string editeur;
    string ISBN;
    string publicCible;
    string etat;

public:
    Livre();

    Livre(int id, string auteur, string titre, string editeur, string ISBN, string publicCible, string etat);

    void setEtat(string etat);

    int getId();

    string getEtat();

    void Afficher();
};


#endif //LIVRE_H
