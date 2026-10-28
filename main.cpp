#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_MOKINIU = 100;
const int MAX_PAZYMIU = 10;

int nuskaitytiSkaiciu(string pranesimas, int nuo, int iki)
{
    int skaicius;

    while (true)
    {
        cout << pranesimas;
        cin >> skaicius;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (skaicius >= nuo && skaicius <= iki)
        {
            return skaicius;
        }

        cout << "Neteisinga ivestis. Iveskite skaiciu nuo "
             << nuo << " iki " << iki << ".\n";
    }
}

int pasirinktiMokini(string vardai[], int mokiniuKiekis)
{
    cout << "Mokiniai:\n";
    for (int i = 0; i < mokiniuKiekis; i++)
    {
        cout << i + 1 << ". " << vardai[i] << endl;
    }

    return nuskaitytiSkaiciu(
        "Mokinio numeris: ", 1, mokiniuKiekis) - 1;
}

void ivestiMokini(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int& mokiniuKiekis)
{
    if (mokiniuKiekis == MAX_MOKINIU)
    {
        cout << "Mokiniu sarasas pilnas.\n";
        return;
    }

    cin.ignore(1000, '\n');
    cout << "Iveskite mokinio varda: ";
    getline(cin, vardai[mokiniuKiekis]);

    pazymiuKiekiai[mokiniuKiekis] = nuskaitytiSkaiciu(
        "Kiek mokinys turi pazymiu (0-10)? ", 0, MAX_PAZYMIU);

    for (int i = 0; i < pazymiuKiekiai[mokiniuKiekis]; i++)
    {
        pazymiai[mokiniuKiekis][i] = nuskaitytiSkaiciu(
            "Iveskite pazymi nuo 1 iki 10: ", 1, 10);
    }

    mokiniuKiekis++;
    cout << "Mokinys pridetas.\n";
}

void perziuretiVisusMokinius(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int mokiniuKiekis)
{
    if (mokiniuKiekis == 0)
    {
        cout << "Mokiniu sarasas tuscias.\n";
        return;
    }

    for (int i = 0; i < mokiniuKiekis; i++)
    {
        cout << i + 1 << ". " << vardai[i] << " | Pazymiai: ";

        if (pazymiuKiekiai[i] == 0)
        {
            cout << "pazymiu nera";
        }

        for (int j = 0; j < pazymiuKiekiai[i]; j++)
        {
            cout << pazymiai[i][j] << " ";
        }

        cout << endl;
    }
}

void perziuretiMokini(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int mokiniuKiekis)
{
    if (mokiniuKiekis == 0)
    {
        cout << "Mokiniu sarasas tuscias.\n";
        return;
    }

    int mokinioNumeris = pasirinktiMokini(vardai, mokiniuKiekis);
    cout << vardai[mokinioNumeris] << " pazymiai: ";

    if (pazymiuKiekiai[mokinioNumeris] == 0)
    {
        cout << "pazymiu nera";
    }

    for (int i = 0; i < pazymiuKiekiai[mokinioNumeris]; i++)
    {
        cout << pazymiai[mokinioNumeris][i] << " ";
    }

    cout << endl;
}

void atnaujintiPazymi(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int mokiniuKiekis)
{
    if (mokiniuKiekis == 0)
    {
        cout << "Mokiniu sarasas tuscias.\n";
        return;
    }

    int mokinioNumeris = pasirinktiMokini(vardai, mokiniuKiekis);

    if (pazymiuKiekiai[mokinioNumeris] == 0)
    {
        cout << "Sis mokinys pazymiu neturi.\n";
        return;
    }

    int pazymioNumeris = nuskaitytiSkaiciu(
        "Pazymio numeris: ", 1, pazymiuKiekiai[mokinioNumeris]) - 1;
    pazymiai[mokinioNumeris][pazymioNumeris] =
        nuskaitytiSkaiciu("Iveskite nauja pazymi (1-10): ", 1, 10);

    cout << "Pazymys atnaujintas.\n";
}

void apskaiciuotiVidurki(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int mokiniuKiekis)
{
    if (mokiniuKiekis == 0)
    {
        cout << "Mokiniu sarasas tuscias.\n";
        return;
    }

    int mokinioNumeris = pasirinktiMokini(vardai, mokiniuKiekis);

    if (pazymiuKiekiai[mokinioNumeris] == 0)
    {
        cout << "Sis mokinys pazymiu neturi.\n";
        return;
    }

    int suma = 0;
    for (int i = 0; i < pazymiuKiekiai[mokinioNumeris]; i++)
    {
        suma += pazymiai[mokinioNumeris][i];
    }

    double vidurkis =
        (double)suma / pazymiuKiekiai[mokinioNumeris];

    cout << vardai[mokinioNumeris] << " pazymiu vidurkis: "
         << fixed << setprecision(2) << vidurkis << endl;
}

void pasalintiMokini(
    string vardai[],
    int pazymiai[][MAX_PAZYMIU],
    int pazymiuKiekiai[],
    int& mokiniuKiekis)
{
    if (mokiniuKiekis == 0)
    {
        cout << "Mokiniu sarasas tuscias.\n";
        return;
    }

    int mokinioNumeris = pasirinktiMokini(vardai, mokiniuKiekis);

    for (int i = mokinioNumeris; i < mokiniuKiekis - 1; i++)
    {
        vardai[i] = vardai[i + 1];
        pazymiuKiekiai[i] = pazymiuKiekiai[i + 1];

        for (int j = 0; j < MAX_PAZYMIU; j++)
        {
            pazymiai[i][j] = pazymiai[i + 1][j];
        }
    }

    mokiniuKiekis--;
    cout << "Mokinys pasalintas.\n";
}
int main()
{
    string vardai[MAX_MOKINIU];
    int pazymiai[MAX_MOKINIU][MAX_PAZYMIU] = {};
    int pazymiuKiekiai[MAX_MOKINIU] = {};
    int mokiniuKiekis = 0;
    int pasirinkimas;

    do
    {
        cout << "\n--- Mokiniu pazymiu sistema ---\n";
        cout << "1. Ivesti mokini ir jo pazymius\n";
        cout << "2. Perziureti visu mokiniu pazymius\n";
        cout << "3. Perziureti konkretaus mokinio pazymius\n";
        cout << "4. Atnaujinti pazymi\n";
        cout << "5. Apskaiciuoti mokinio vidurki\n";
        cout << "6. Pasalinti mokini\n";
        cout << "7. Iseiti\n";

        pasirinkimas = nuskaitytiSkaiciu(
            "Pasirinkite veiksma (1-7): ", 1, 7);

        switch (pasirinkimas)
        {
            case 1:
                ivestiMokini(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 2:
                perziuretiVisusMokinius(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 3:
                perziuretiMokini(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 4:
                atnaujintiPazymi(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 5:
                apskaiciuotiVidurki(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 6:
                pasalintiMokini(
                    vardai, pazymiai, pazymiuKiekiai, mokiniuKiekis);
                break;
            case 7:
                cout << "Programa baigta.\n";
                break;
        }

    } while (pasirinkimas != 7);



    return 0;
}