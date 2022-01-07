#include <iostream>
#include <ctime>

using namespace std;

int pytanie_1();
int pytanie_2();
int pytanie_3();
int pytanie_4();
int pytanie_5();
int pytanie_6();

int odpowiedzi(int n);

int main()
{
    int punkty = 0, nr_pytania;
    int tablica[6] = {0};
    int index = 0;

    srand(time(NULL));

    while(index < 6 )
    {

        losuj:
        nr_pytania = rand()%6+1;

        for(int i = 0; i <6; i++)
            {
                if(tablica[i]==nr_pytania)
                goto losuj;
            }

        tablica[index] = nr_pytania;

        switch (nr_pytania)
        {
            case 1:
                punkty = punkty + pytanie_1();
                break;
            case 2:
                punkty = punkty + pytanie_2();
                break;
            case 3:
                punkty = punkty + pytanie_3();
                break;
            case 4:
                punkty = punkty + pytanie_4();
                break;
            case 5:
                punkty = punkty + pytanie_5();
                break;
            case 6:
                punkty = punkty + pytanie_6();
                break;
            default:
                break;
        }

        index++;
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << endl;
    }

    cout << "\n Ilosc punktow: " << punkty << endl;

    if(punkty<=2)
        cout << "\n Slabo - warto byloby powtorzyc wiadomosci o cyberbepieczenstwie" << endl;
    else if(punkty<=4)
        cout << "\n Niezle, ale mogloby byc lepiej" << endl;
    else
        cout << "\n Brawo - duzo wiesz o cyberbezpieczenstwie" << endl;

    return 0;
}

int pytanie_1()
{
    char odpowiedz;

    cout << "Tresc pytania 1" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(0);
}
int pytanie_2()
{
    char odpowiedz;

    cout << "Tresc pytania 2" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(1);
}
int pytanie_3()
{
    char odpowiedz;

    cout << "Tresc pytania 3" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(2);
}
int pytanie_4()
{
    char odpowiedz;

    cout << "Tresc pytania 4" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(3);
}
int pytanie_5()
{
    char odpowiedz;

    cout << "Tresc pytania 5" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(4);
}
int pytanie_6()
{
   char odpowiedz;

    cout << "Tresc pytania 6" << endl;
    cout << "a - " << endl;
    cout << "b - " << endl;
    cout << "c - " << endl;

    return odpowiedzi(5);
}

int odpowiedzi(int n)
{
    char tablica[6] = {'a', 'b', 'c', 'a', 'b', 'c'};
    char odpowiedz;

    cout << "\n Odpowiedz: ";
    cin >> odpowiedz;

    if(odpowiedz == tablica[n]) return 1;
    else return 0;
}


