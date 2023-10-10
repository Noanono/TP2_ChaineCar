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

void ChaineCar::Affiche() const {
    cout << p_str;
}

void ChaineCar::MintoMaj() {
    for (int i = 0; i < len; ++i) {
        if (p_str[i] >= 'a' && p_str[i] <= 'z') {
            p_str[i] = p_str[i] - 'a' + 'A';
        }
    }
}

ChaineCar ChaineCar::Ajoute(const ChaineCar &chaineCar) {
    char *tmp = new char[len + chaineCar.len + 1];
    strcpy(tmp, p_str);
    strcat(tmp, chaineCar.p_str);
    ChaineCar chaineCar1(tmp);
    delete[] tmp;
    return chaineCar1;
}

ChaineCar ChaineCar::Ajoute(const char *chaineCar) {
    char *tmp = new char[len + strlen(chaineCar) + 1];
    strcpy(tmp, p_str);
    strcat(tmp, chaineCar);
    ChaineCar chaineCar1(tmp);
    delete[] tmp;
    return chaineCar1;
}
