//
//  main.cpp
//  C++ OOP 03
//
//  Created by Jakub Wanowski on 26.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include "event.h"  //Plik nagłówkowy klasy Event

int main()
{
    Event e1("Wydarzenie w1", 26, 12, 2016, 21, 43);    //Inicjalizacja obiektu przy pomocy konstruktora
                                                    //Bez nawiasu z danymi kanstruktor stworzy obiekt
                                                    //z wartościami domyślnymi z pliku *.h
    
    e1.show();  //Wywołanie metody pokazującej wydarzenie
    
    
    return 0;
}
