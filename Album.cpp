//
// Created by antoi on 07/01/2025.
//

#include "Album.h"

Album::Album() : Livre() {
}

Album::Album(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat,
             string illustrations) : Livre(id, auteur, titre, editeur, ISBN, publicCible, etat) {
    this->illustrations = illustrations;
}
