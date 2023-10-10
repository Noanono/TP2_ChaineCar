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
    ChaineCar(const ChaineCar &chaineCar);
    ~ChaineCar(){delete []p_str;};
    unsigned int Getlen() const {return len;};
    char *Getstr() const {return p_str;};
    void Affiche() const;
    void Affiche(ostream &) const;
    void MintoMaj();
    ChaineCar Ajoute(const ChaineCar &) const;
    ChaineCar Ajoute(const char *) const;

    ChaineCar& operator=(const ChaineCar &);
    ChaineCar& operator=(const char *);

};

ostream &operator<<(ostream &, const ChaineCar &);
ChaineCar operator+(const ChaineCar &, const ChaineCar &);
ChaineCar operator+(const ChaineCar &, const char *);


#endif //TP2_CHAINECAR_CHAINECAR_H
