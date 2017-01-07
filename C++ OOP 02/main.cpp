//
//  main.cpp
//  C++ OOP 02
//
//  Created by Jakub Wanowski on 25.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include "pytanie.h"

using namespace std;

int suma = 0;

int main()
{
    Pytanie p[5];               //Tablica obiektów
    
    for(int i=0; i<=4; i++ )
    {
        p[i].nr_pytania = i+1;
        
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        
        suma+=p[i].punkt;
    }
    
    cout<<"TWOJ WYNIK TO: "<<suma<<endl;
    
    return 0;
}
