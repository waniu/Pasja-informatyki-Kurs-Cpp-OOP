//
//  main.cpp
//  C++ OOP 05
//
//  Created by Jakub Wanowski on 28.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
    float x,y;
    string nazwa;
    
public:
    Punkt(string n="S",float xx=0,float yy=0)
    {
        nazwa = n;
        x = xx;
        y = yy;
    }
    
    void wyswietl()
    {
        cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
    }
};

class Kolo :public Punkt
{
protected:
    
    float r;
    string nazwa;
    
public:
    
    Kolo(string nk="Kolko",string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)//Lista inicjalizacyjna (preambuła konstruktora)
    {
        nazwa = nk;
        r = pr;
    }
    
    void wyswietl()
    {
        cout<<"Kolo o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kola: "<<endl;
        Punkt::wyswietl();
        cout<<"Promien: "<<r<<endl;
        cout<<"Pole kola: "<<M_PI*r*r<<endl;
    }
};

//ZADANIE DOMOWE

class Kula :public Kolo
{
    string nazwa;
    
public:
    
    Kula(string nkul="Kulka",string nk="Kolko",string np="S", float a=0, float b=0, float pr=1)
    :Kolo(nk,np,a,b,pr)
    {
        nazwa = nkul;
    }
    
    void wyswietl()
    {
        Kolo::wyswietl();
        cout<<"Objetosc kuli o nazwie: "<<nazwa<<" = "<<(4.0/3.0)*M_PI*r*r*r<<endl;
    }
};

int main()
{
    Kula k1;
    k1.wyswietl();
    
    
    return 0;
}





