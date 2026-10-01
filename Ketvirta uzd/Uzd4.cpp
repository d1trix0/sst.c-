#include <iomanip>
#include <iostream>
using namespace std;//
int main() {
/*
 //pirma uzd
    const int studentu_kiekis =10;
    const int min =1;
    const int max = studentu_kiekis;
    int pazymiai[studentu_kiekis];
    int dazniai [max+1] ={0};

    for (int i = 0; i < studentu_kiekis; i++) {
        int pazymys;
        do {
            cout << "iveskite " << i+1 << "studento pazymys (1-10)"<< endl;
            cin>>pazymys;

        }
        while (pazymys < min || pazymys > max);
        pazymiai[i] = pazymys;
    }
    for (int i = 0; i < studentu_kiekis; i++) {
        dazniai[pazymiai[i]]++;
    }

cout <<"Pazymiai dazniai"<< endl;
for (int pazymys = min; pazymys <= max; pazymys++) {
    if (dazniai[pazymys] > 0) {
        cout << "pazymys :"<< pazymys<< "pasikartoja"<< dazniai[pazymys]<<endl;
    }

}*/
//antra uzd
string sakinis;
    cout << "Please enter your sakinis: ";
    cin >> sakinis;
    getline(cin, sakinis);


    int aKiekis = 0;
    int tarpukiekis = 0;
    int zodziukiekis = 0;
    bool zodyje = false;
    for (size_t i = 0; i < sakinis.length(); i++) {
        char simbolis = sakinis[i];

        if (simbolis == 'a'|| simbolis == 'A') aKiekis++;
        if (simbolis == ' ') {

            tarpukiekis++;
            zodyje = false;
        }
        else if (!zodyje) {
            zodyje = true;
            zodziukiekis++;
        }
    }
    cout <<"Raidziu A kiekis"<< aKiekis << endl;
cout << "Tarpu kiekis"<< tarpukiekis << endl;
    cout << "Zodyje kiekis"<< zodyje<< endl;


    return 0;


}