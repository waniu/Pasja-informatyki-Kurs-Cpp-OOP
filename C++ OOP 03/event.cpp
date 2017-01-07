//
//  event.cpp
//  C++ OOP 03
//
//  Created by Jakub Wanowski on 26.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include "event.h"      //Załączenie pliku nagłówkowego

using namespace std;

Event::Event(string n, int d, int m, int y, int h, int mins)    //Ciało konstruktora
{
    name = n;
    day = d;
    month = m;
    year = y;
    hour = h;
    minutes = mins;
}

Event::~Event() //Ciało destruktora (Chwilowo zbędny ale jest)
{
    cout<<endl<<"Ja, destruktor na razie nie mam czego sprzatac!"<<endl;;
}

void Event::load()  //Ciało metody load()
{
    cout<<endl<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<endl<<"Dzien: ";
    cin>>day;
    cout<<endl<<"Miesia: ";
    cin>>month;
    cout<<endl<<"Rok: ";
    cin>>year;
    cout<<endl<<"Godzina: ";
    cin>>hour;
    cout<<endl<<"Minut: ";
    cin>>minutes;
}

void Event::show()  //Ciało metody show()
{
    cout<<endl<<name<<" "<<day<<"."<<month<<"."<<year<<" "<<hour<<":"<<minutes<<endl;
}
