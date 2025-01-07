//
// Created by antoi on 07/01/2025.
//

#include "Recueil.h"
#include "Livre.h"


Recueil::Recueil():Livre(){
};

Recueil::Recueil(int id, string auteur, string titre, string editeur, int ISBN, string publicCible, string etat, bool prose, bool vers):Livre(id, auteur, titre, editeur, ISBN, publicCible, etat){
    this->prose = prose;
    this->vers = vers;
}