//
//  klasy.cpp
//  C++ OOP 04
//
//  Created by Jakub Wanowski on 27.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include "klasy.h"

//PUNKT

Punkt::Punkt(string n, float xx, float yy)
{
    nazwa = n;
    x = xx;
    y = yy;
}

void Punkt::wczytaj()
{
    cout<<"Podaj nazwe punktu: "; cin>>nazwa;
    cout<<"Podaj rzędną X: "; cin>>x;
    cout<<"Podaj rzędną Y: "; cin>>y;
}

//PROSTOKĄT

Prostokat::Prostokat(string n, float xx, float yy, float sz, float wys)
{
    nazwa = n;
    x = xx;
    y = yy;
    szerokosc = sz;
    wysokosc = wys;
}

void Prostokat::wczytaj()
{
    cout<<"Podaj nazwe prostokata: "; cin>>nazwa;
    cout<<"Podaj rzędną X: "; cin>>x;
    cout<<"Podaj rzędną Y: "; cin>>y;
    cout<<"Podaj szerokosc: "; cin>>szerokosc;
    cout<<"Podaj wysokosc: "; cin>>wysokosc;
}

void Prostokat::czyJestemKopia()
{
    cout<<nazwa<<endl;
}




