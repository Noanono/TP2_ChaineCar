//
// Created by noah on 10/10/23.
//
#include <iostream>
#include <cstring>

using namespace std;

#include "ChaineCar.h"

ChaineCar::ChaineCar(const char *pp_str) {
    len = strlen(pp_str);
    p_str = new char[len + 1];
    strcpy(p_str, pp_str);
}

ChaineCar::ChaineCar(const ChaineCar &chaineCar) {
    len = chaineCar.len;
    p_str = new char[len + 1];
    strcpy(p_str, chaineCar.p_str);
}

void ChaineCar::Affiche() const {
    cout << p_str;
}

void ChaineCar::Affiche(ostream &os) const {
    os << p_str;
}

void ChaineCar::MintoMaj() {
    for (int i = 0; i < len; ++i) {
        if (p_str[i] >= 'a' && p_str[i] <= 'z') {
            p_str[i] = p_str[i] - 'a' + 'A';
        }
    }
}

ChaineCar ChaineCar::Ajoute(const ChaineCar &chaineCar) const{
    char *tmp = new char[len + chaineCar.len + 1];
    strcpy(tmp, p_str);
    strcat(tmp, chaineCar.p_str);
    ChaineCar chaineCar1(tmp);
    delete[] tmp;
    return chaineCar1;
}

ChaineCar ChaineCar::Ajoute(const char *chaineCar) const{
    char *tmp = new char[len + strlen(chaineCar) + 1]; // +1 pour le \0
    strcpy(tmp, p_str); // On copie la chaine de base
    strcat(tmp, chaineCar); // On ajoute la chaine en paramètre
    ChaineCar chaineCar1(tmp); // On crée un objet ChaineCar avec la chaine concaténée
    delete[] tmp; // On supprime la chaine temporaire
    return chaineCar1; // On retourne l'objet
}

ChaineCar& ChaineCar::operator=(const ChaineCar &c2) {
    // On va recopier la chaine de c2 dans this
    delete []p_str; // On commence par supprimer l'ancienne chaine

    len = c2.len;                       //
    p_str = new char[len + 1];          // On recopie la chaine
    strcpy(p_str, c2.p_str);   //

    return *this; // On retourne l'objet pour permettre les affectations en cascade on met l'etoile pour avoir la valeur
}

ChaineCar& ChaineCar::operator=(const char *c2) {
    // On va recopier la chaine de c2 dans this
    delete []p_str; // On commence par supprimer l'ancienne chaine

    len = strlen(p_str);                       //
    p_str = new char[len + 1];          // On recopie la chaine
    strcpy(p_str, p_str);   //

    return *this; // On retourne l'objet pour permettre les affectations en cascade on met l'etoile pour avoir la valeur
}

ostream &operator<<(ostream &os, const ChaineCar &chaineCar) {
    chaineCar.Affiche(os);
    return os;
}

ChaineCar operator+(const ChaineCar &c1, const ChaineCar &c2) {
    return c1.Ajoute(c2);
}

ChaineCar operator+(const ChaineCar &c1, const char *c2) {
    return c1.Ajoute(c2);
}
