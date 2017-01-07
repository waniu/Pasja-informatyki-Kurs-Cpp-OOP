//
//  event.h
//  C++ OOP 03
//
//  Created by Jakub Wanowski on 26.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>

using namespace std;

class Event
{
    //Atrybuty
    int day, month, year;
    int hour, minutes;
    string name;
 
public:             //Atrybuty są prywatne a metody publiczne
    Event(string = "brak",int=1,int=1,int=2016,int=12,int=0);   //Konstruktor z wartościami domyślnymi
    ~Event();                          //Destruktor
    void load();                        
    void show();
};
