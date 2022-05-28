#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void fileSave1()
{
    FILE* fp = NULL;
    fp = fopen("E:\\plik.txt", "wt");

    if (fp != NULL)
    {
        for (char chr = 'a'; chr < 'z'; chr++)
        {
            fputc(chr, fp);
        }
        fclose(fp);
    }
}

void fileRead1()
{
    FILE* fp = NULL;

    fp = fopen("E:\\plik.txt", "rt");

    if (fp != NULL)
    {
        while (!feof(fp))
        {
            putchar(fgetc(fp));
        }

        fclose(fp);
    }
}

void fileSave2()
{
    string line = "basia ma psa";
    fstream dataFile; //dataFile taką nazwę zmiennej se dałem ale nie musi być taka

    dataFile.open("E:\\plik.txt", ios::out | ios::app); // ios::out to jest do wpisywania, a  ios::in do zapisu, ios::app dodaje na koniec pliku a ios::trunc najpierw wszystko wymazuje

    if (dataFile.good())
    {
        dataFile << line << endl;
    }
}

void fileRead2()
{
    string line;
    fstream otworzplik;

    otworzplik.open("E:\\plik.txt", ios::in);

    if (otworzplik.good())
    {
        while(!otworzplik.eof())
        {
            getline(otworzplik, line);
            cout << line << endl;
        }
    }
}


int main()
{
   // fileSave1();
   // fileSave2();
   // fileRead1();
    fileRead2();
    return 0;
}
/*
APLIKACJA ZALICZENIOWA: nauczyciel poleca buildera
-dopuszcza możliwość zrobienia w konsoli ale max 3.0
-baza samochodów - marka, model, 
-dodawanie nowego samochodu, edycja któregoś który istnieje, usuniecie samochodu
chodzi o to żeby wykorzystać rekordy, procedury, funkcje i to co w programie powyżej, 
składowanie danych w pliku tekstowym, wymyślić sobie jakiś separator żeby potem wrzucać do rekordu to sobie

borland fajne gotowe komponenty żeby fajna forma graficzna była, żeby było menu

oddać na ostatnich zajęciach

*/



