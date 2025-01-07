//
// Created by antoi on 07/01/2025.
//

#include "Theatre.h"
#include "Livre.h"


Theatre::Theatre(): Livre() {
};

Theatre::Theatre(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat,
                 int siecle): Livre(id, auteur, titre, editeur, ISBN, publicCible, etat) {
    this->siecle = siecle;
}
