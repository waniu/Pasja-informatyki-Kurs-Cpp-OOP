//
//  main.cpp
//  C++ OOP 04
//
//  Created by Jakub Wanowski on 27.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>
#include "klasy.h"

void sedzia(Punkt &pkt, Prostokat &p)
{
    p.nazwa = "Jestes oryginalem!";     //Sprawdzenie czy po dodaniu & faktycznie pracujemy na oryginalnych obiektach
    
    if((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) &&
       (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
    {
        cout<<"Punkt "<<pkt.nazwa<<" NALEZY do prostokata: "<<p.nazwa<<endl;
    }
    else cout<<"Punkt "<<pkt.nazwa<<" NIE NALEZY do prostokata: "<<p.nazwa<<endl;
}

int main()
{
    Punkt pkt1("A",3,1);
    //pkt1.wczytaj();
    
    Prostokat p1("Prostokt1",0,0,6,4);
    //p1.wczytaj();
    
    sedzia(pkt1, p1);
    p1.czyJestemKopia();
    
    return 0;
}
