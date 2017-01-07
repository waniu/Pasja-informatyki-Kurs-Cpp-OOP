//
//  klasy.h
//  C++ OOP 04
//
//  Created by Jakub Wanowski on 27.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
    string nazwa;
    float x,y;
    
public:
    Punkt(string="A",float=0,float=0);
    void wczytaj();
    
    friend void sedzia(Punkt &pkt, Prostokat &p); //Deklaracja przyjaźni z f-cją sedzia()
};

class Prostokat
{
    string nazwa;
    float x,y;
    float szerokosc;
    float wysokosc;
    
public:
    Prostokat(string="A",float=0,float=0,float=1,float=1);
    void wczytaj();
    void czyJestemKopia();
    
    friend void sedzia(Punkt &pkt, Prostokat &p); //Deklaracja przyjaźni z f-cją sedzia()
};
