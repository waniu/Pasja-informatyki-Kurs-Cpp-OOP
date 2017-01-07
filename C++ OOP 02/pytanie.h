//
//  pytanie.h
//  C++ OOP 02
//
//  Created by Jakub Wanowski on 25.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#ifndef pytanie_h
#define pytanie_h

#include <iostream>

using namespace std;

class Pytanie
{
    public:
    
    string tresc;
    string a, b, c, d;
    int nr_pytania;
    string odpowiedz;
    string poprawna;
    int punkt;          //1 lub 0
    
    void wczytaj();     //Wczytuje dane z pliku
    void zadaj();       //Zadaje pytanie i zczytuje odpowiedź
    void sprawdz();     //Sprawdza poprawność odpowiedzi
    
};

#endif /* pytanie_h */

