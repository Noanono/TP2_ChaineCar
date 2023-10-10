#include<iostream>
using namespace std;

#include"ChaineCar.h"

/*int main(){

    ChaineCar prenom("Pierre-Ambroise"), nom("Bosse");
    prenom.Affiche();
    cout<<" de longueur "<<prenom.Getlen()<<endl;
    nom.Affiche();
    cout<<" de longueur "<<nom.Getlen()<<endl;
    nom.MintoMaj();
    nom.Affiche();
    cout<<endl;
    //On aimerait ecrire les lignes suivantes:
    //debut partie a decommenter
    ChaineCar name=nom;//ou ChaineCar name(nom);//qui est equivalent
    name.Affiche();
    cout<<endl;
    name.MintoMaj();
    name.Affiche();
    cout<<endl;
    system("pause");
    nom.Affiche();
    cout<<endl;
    cout<<"Est ce normal?"<<endl;
    system("pause");
    ChaineCar firstname;
    firstname=prenom;
    firstname.MintoMaj();
    firstname.Affiche();
    cout<<endl;
    system("pause");
    prenom.Affiche();
    cout<<endl;
    cout<<"Est ce normal?"<<endl;
    system("pause");
    cout<<"adresse de prenom "<<(void*)prenom.Getstr()<<endl;
    cout<<"adresse de firstname "<<(void*)firstname.Getstr()<<endl;
    system("pause");
    //fin partie a decommenter
    return 0;
}*/

int main(){

    ChaineCar nom("MAYER"), prenom("Kevin");
    ChaineCar specialite("Decathlon");
    ChaineCar sportif;

    sportif = nom + " " + prenom + ": " + specialite;//concatenation
    cout << sportif<<endl;//affichage

    return 0;
}
