//
//  main.cpp
//  C++ OOP 01
//
//  Created by Jakub Wanowski on 25.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream> //Dodanie bibloiteki <iostream>

using namespace std;    //Podpięcie przestrzeni nazw

class Zwierze   //Definicja klasy Zwierze
{
    public:     //Przyznanie dostępu do atrybutów i metod wszystkim funkcjom
    
    //Atrybuty obiektu klasy Zwierze
    string gatunek;
    string imie;
    int wiek;
    
    //Metody obiektu klasy Zwierze
    void dodaj_zwierze()
    {
        cout<<"DODAWANIE NOWEGO ZWIERZECIA DO BAZY:"<<endl;
        cout<<"Podaj gatunek: ";
        cin>>gatunek;
        cout<<"Podaj imie: ";
        cin>>imie;
        cout<<"Podaj wiek: ";
        cin>>wiek;
    }
    
    void daj_glos()
    {
        if(gatunek == "kot") {cout<<imie<<", "<<wiek<<" lat. MIAUU!!!"<<endl;}
        if(gatunek == "krowa") {cout<<imie<<", "<<wiek<<" lat. MUUU!!!"<<endl;}
        if(gatunek == "koza") {cout<<imie<<", "<<wiek<<" lat. BEEE!!!"<<endl;}
        else {cout<<"Nieznany gatunek! Moze jakies UFO!!"<<endl;}
    }
    
};

int main()  //Funkcja główna
{
    Zwierze z1;         //Utworzenie obiektu "z1" klasy Zwierze
    z1.dodaj_zwierze(); //Wywołanie metody "dodaj_zwierze" na rzecz obiektu "z1"
    z1.daj_glos();      //Wywołanie metody "daj_glos" na rzecz obiektu "z1"
    
    return 0;
}
