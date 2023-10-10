//
// Created by noah on 10/10/23.
//

#ifndef TP2_CHAINECAR_CHAINECAR_H
#define TP2_CHAINECAR_CHAINECAR_H


class ChaineCar {
private:
    char *p_str;
    unsigned int len;

public:
    ChaineCar(const char *pp_str = "");
    ~ChaineCar(){delete []p_str;};
    unsigned int Getlen() const {return len;};
    char *Getstr() const {return p_str;};
    void Affiche() const;
    void MintoMaj();
    ChaineCar Ajoute(const ChaineCar &);
    ChaineCar Ajoute(const char *);

};


#endif //TP2_CHAINECAR_CHAINECAR_H
