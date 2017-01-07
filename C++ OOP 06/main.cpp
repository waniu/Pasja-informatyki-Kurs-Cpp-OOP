//
//  main.cpp
//  C++ OOP 06
//
//  Created by Jakub Wanowski on 29.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream> //Implementacja podstawowej biblioteki
#include <math.h>   //Implementacja biblioteki obsługującej stałe matematyczne

using namespace std;    //Dodanie standardowej przestrzeni nazw

class Ksztalt   //Klasa podstawowa
{
public:
    //Czysta funkcja wirtualna
    virtual void oblicz_pole()=0;   //Potrzenbe do stosowania polimorficznego wskaźnika
};

class Kwadrat :public Ksztalt   //Klasa pochodna dziedzicząca z klasy Ksztalt
{
    float a;    //Atrybut okreslajacy dlugosc boku kwadratu
    
public:
    Kwadrat(float x=1)  //Konstruktor klasy Kwardat z bazową długością boku
    {
        a=x;
    }
    
    virtual void oblicz_pole()  //Metoda obliczająca pole
    {
        cout<<"Pole kwadratu: "<<a*a<<endl;
    }
    
};

class Kolo :public Ksztalt  //Klasa pochodna dziedzicząca z klasy Ksztalt
{
    float r;    //Atrybut okreslajacy dlugosc promienia koła
    
public:
    Kolo(float x=1)  //Konstruktor klasy Kolo z bazową długością promienia
    {
        r=x;
    }
    
    virtual void oblicz_pole()  //Metoda obliczająca pole
    {
        cout<<"Pole kola: "<<M_PI*r*r<<endl;    //M_PI - stała pi z biblioteki math.h
    }
};

/////////////////////

void obliczenia(Ksztalt *x) //Funkcja przyjmująca jako argument wskaźnik
{
    x -> oblicz_pole(); //Funkcja wywołuje metodę na rzecz obiektu na który ustawiony jest wskaźnik
}

/////////////////////

int main()  //Funkcja główna
{
    Kolo k(1);  //Inicjacja obiektu klasy Kolo o promieniu = 1
    Kwadrat kw(2);  //Inicjacja obiektu klasy Kawdrat o długości boku =2
    
    Ksztalt *wsk;   //Inicjacja polimorficznego wskaźnika o nazwie "wsk"
    wsk = &kw;  //Ustawienie wskaźnika "wsk" na oryginalny obiekt klasy Kwardat
    
    obliczenia(wsk);    //Wywołanie funkcji obliczenia przyjmującej jako argument polimorficzny wskaźnik "wsk"
    
    
    return 0;
}







