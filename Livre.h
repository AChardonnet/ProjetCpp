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
    int ISBN;
    string public_cible;
    string etat;
    public:
    virtual Livre(int id, string auteur, string titre, string editeur, int ISBN, string public_cible, string etat);
};


#endif //LIVRE_H
