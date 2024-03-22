//Aplicatie care afiseaza numele, autorul, anul aparitiei si vechimea unei carti

#include "pch.h"
#include <iostream>

using namespace System; //pt Visual Studio C++/CLI
using namespace std;

struct Carti
{
    unsigned vs;
    unsigned an;
    char nume_carte[20];
    char nume_autor[20];
};

class Carte
{
private:
    unsigned vs;
    unsigned an;
    char nume_carte[20];
    char nume_autor[20];
    

public:
    //2 metode cu acelasi nume cu cel al clasei, adica Pers
    //o metoda cu params si una fara params
    Carte(unsigned vs1, unsigned an, char* numc, char* numa)
    {
        vs = vs1;
        //strcpy(nume, num1);
        //strcpy(prenume, prenum1);
        strcpy_s(nume_carte, 20, numc);
        strcpy_s(nume_autor, 20, numa);

    }
    Carte() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_numec() { return this->nume_carte; }
    char* arata_numea() { return this->nume_autor; }
    unsigned arata_an() { return this->an; }

};


int main()
{

    Console::WriteLine("Introduceti numarul de carti: "); // specific VISUAL C++/CLI
    int nr_carti;
    cin >> nr_carti;
    Carti* carti1 = new Carti[nr_carti];

    for (int i = 0; i < nr_carti; i++)
    {
        Console::WriteLine("Introduceti numele cartii {0}", i + 1);
        char nume_carte[20];
        cin >> nume_carte;
        strcpy_s(carti1[i].nume_carte, 20, nume_carte);

        Console::WriteLine("Introduceti numele autorului {0}", i + 1);
        char nume_autor[20];
        cin >> nume_autor;
        strcpy_s(carti1[i].nume_autor, 20, nume_autor);

        Console::WriteLine("Introduceti anul aparitiei {0}", i + 1);
        char an[20];
        cin >> nume_autor;
        strcpy_s(carti1[i].nume_autor, 20, nume_autor);


        Console::WriteLine("Introduceti vechimea cartii {0}", i + 1);
        unsigned vs;
        cin >> vs;
        carti[i].vs = vs;
    }

    Console::WriteLine("Afisam numele si vechimea cartii: ");

    for (int i = 0; i < nr_carti; i++)
    {
        cout << carti1[i].nume_carte << "\t" << carti1[i].vs << endl;
        cout << carti1[i].nume_autor << "\t" << carti1[i].vs << endl;
    }

    //get_char()
    Console::ReadKey(); // specific Visual C++/CLI

    return 0;
}