#include <iostream>
using namespace std;
int main() {
    // ZADANIE 1 kod 02_01
    //przy zmianie warunku na i<=10 wyświetlają się liczby od 0 do 10 włącznie
    /*
    for (int i = 5; i <=7; i++) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    */
    /*
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    */
    /*
    for (int i = 0; i <= 10; i+=2) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    */
    /*
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;

    */

    //ZADANIE 2/3/5 kod 02_13
    /*
        int fahr, celsius; //zmienne typu int
        int start, limit, krok; //zmienne typu int

        start = 0; //przypisz 0 do start
        limit = 200; //przypisz 200 do limit
        krok = 20; //przypisz 20 do krok

        fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
        for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
        {
            float celsius = (5/ 9) * (fahr - 32.0);
            cout << fahr << "\t" << celsius << endl;
            printf("%3.0f \t %6.1f \n", fahr, celsius);
            //przy zmianie z 5.0 9.0 na 5/9 wynik stopni celsjusza wynosi zawsze 0

        }*/
        //Zadanie 6
         /*   int fahr;
            float celsius;
            int start, limit, krok;

            cout << "Podaj wartość początkową (start): ";
            cin >> start;
            cout << "Podaj wartość końcową (limit): ";
            cin >> limit;
            cout << "Podaj krok: ";
            cin >> krok;

            for (fahr = start; fahr <= limit; fahr = fahr + krok) {
                celsius = (5.0 / 9.0) * (fahr - 32.0);
                cout << fahr << "\t" << celsius << endl;
            }


        } */
        //Zadanie 7
    /*
        for (int i = 0; i < 10; i++) {
            float x;
            cout << "Podaj liczbę rzeczywistą:";
            cin >> x;

            if (x > 0) {
                cout << x;
            }

        } */

        //Zadanie 8
    /*
        for (int i = 0; i <= 100; i++) {
            if (i % 2 == 0) {
                cout << i;
            }
        }
        return 0;
        */

        // Zadanie 9
        /*
        int n;
        cout << "Podaj wartość zmiennej n:";
        cin >> n;

        for (int i = 0; i <= 100; i++) {
            if (i % n == 0) {
                cout << i;
            }
        } */

        // Zadanie 10
    /*
        int n;
        int count = 0;
        cout << " Podaj wartość zmiennej n:";
        cin >> n;

        for (int i = 0; i <=100; i++) {
            if (i % n == 0) {
                count++;
            }
        }

        cout << count;
    */
    // Zadanie 11
/*
    int a, b;
    cout << "Podaj wartość liczby całkowitej a:";
    cin >> a;
    cout << "Podaj wartość liczby całkowitej b:";
    cin >> b;

    if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 3 == 0) {
                cout << i;
            }
        }
    }

    else {
        for (int i = b; i <= a; i++) {
            if (i % 3 == 0) {
                cout << i;
            }
        }


    } */

    // Zadanie 12
/*
int n;
float liczba;
float suma = 0;

cout << "Podaj ile liczb chcesz wprowadzić:";
cin >> n;

for (int i = 0; i < n; i++) {
    cout << "Podaj liczbę nr " << i + 1 << ":";
    cin >> liczba;
    suma += liczba;
}
double średnia = suma / n;
cout << "Średnia arytmetyczna podanych liczb wynosi" << średnia;
*/


// Zadanie 13
/*
    for (int i = 100; i >= 0; i--) {
        cout << i;
    }
    */

// Zadanie 14
/*
int a, b, c;
cout << "Podaj pierwszą liczbę:";
cin >> a;
cout << " Podaj drugą liczbę:";
cin >> b;
cout << " Podaj trzecią liczbę:";
cin >> c;

if (a <= b && a <= c) {
    cout << a;
}
if (b <= a && b <= c) {
    cout << b;
}
else
cout << c;
*/

//Zadanie 15
/*
#include <cstdlib>
int n, m;
cout << "Podaj ile liczb chcesz wylosować: ";
cin >> n;
cout << "Podaj górną granicę przedziału [0;m]: ";
cin >> m;
for (int i = 0; i < n; i++) {
    int los = rand() % (m);
    cout << los;
    }
} */

//Zadanie 16
#include <cstdlib>
int numer;
int licznik = 0;
cout << "Podaj szczęśliwy numerek (1–10): ";
cin >> numer;
for (int i = 0; i < 10; i++) {
     int los = rand() % 10 + 1;
     cout << los << " ";
        if (los == numer) {
            licznik++;
        }
    }

cout << "Szczęśliwy numerek pojawił się " << licznik << " razy.";

    return 0;
}


