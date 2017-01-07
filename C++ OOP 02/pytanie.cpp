//
//  pytanie.cpp
//  C++ OOP 02
//
//  Created by Jakub Wanowski on 25.12.2016.
//  Copyright © 2016 Jakub Wanowski. All rights reserved.
//

#include <iostream>     //Biblioteka strumienia wejścia/wyjścia
#include <cstdlib>      //Biblioteka z funkcją exit()
#include <fstream>      //Biblioteka obsługująca pliki
#include "pytanie.h"    //Plik nagłówkowy do klasy Pytanie

using namespace std;    //Przestrzeń nazw "std"

//Oznaczenie Klasa::metoda() daje informację o metodę jakiej klasy chodzi gdyby więcej klas miało metodę o tej nazwie
void Pytanie::wczytaj() //Ciało metody wycztaj()
{
    fstream plik;   //Obiekt klasy fstream
    plik.open("quiz.txt", ios::in); //Metoda wczytująca dane z pliku do obiektu

    //Jeżeli nie udało się wczytać pliku, pokaż informację i zakończ działanie programu
    if(plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        exit(0);
    }
    
    int nr_linii = (nr_pytania-1)*6+1;
    int aktualny_nr = 1;    //Licznik
    string linia;           //Zmienna przechowująca pobraną, z pliku, linię
    
    while(getline(plik, linia)) //Funkacja pobiera linie z pliku i zwraca prawdę jeżeli ją pobrała
    {
        if(aktualny_nr == nr_linii) tresc = linia;
        if(aktualny_nr == nr_linii + 1) a = linia;
        if(aktualny_nr == nr_linii + 2) b = linia;
        if(aktualny_nr == nr_linii + 3) c = linia;
        if(aktualny_nr == nr_linii + 4) d = linia;
        if(aktualny_nr == nr_linii + 5) poprawna = linia;
        
        aktualny_nr++;
    }
    
    plik.close(); //Metoda zamykająca plik
    
}

void Pytanie::zadaj()
{
    cout<<nr_pytania<<". "<<tresc<<endl;
    cout<<"a) "<<a<<endl;
    cout<<"b) "<<b<<endl;
    cout<<"c) "<<c<<endl;
    cout<<"d) "<<d<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Twoja odpowiedz: ";
    cin>>odpowiedz;
    cout<<endl;
}

void Pytanie::sprawdz()
{
    if(odpowiedz==poprawna) punkt = 1;
    else punkt = 0;
}








