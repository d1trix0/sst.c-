#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.


   /* string varda , pavarda , marks_car,tip_car,grupe,kursas,studija;
    float years ;
    cout << "enter your Varda"<<endl;
    cin >> varda;
    cout << "enter your Pavarda"<<endl;
    cin >> pavarda;


    double svoris = 99.77;


    string name_clubs;
cout <<"enter your faivorite football club " << endl;
    cin >> name_clubs;


double svorisKonv = static_cast<double>(svoris);



    cout << "enter how old are you"<<endl;
    cin >> years;
    cout << "enter your grupe"<<endl;
    cin>> grupe;
    cout << "enter your kursas"<<endl;
    cin >> kursas;
    cout << "enter your studija"<<endl;
    cin >> studija;
    cout << "enter your kursas"<<endl;
    cin >> kursas;

cout << name_clubs<< endl;
cout << "Jusu Vardas: "<<varda<< endl<<"Jusu Pavarda : "<< pavarda<< endl<<"your age are :"<<years << endl;
cout << "Jusu grupe : " << grupe << endl;
    cout << "Jusu Kursas: " << kursas << endl;
    cout << "Jusu studija : " << studija << endl;
*/


    int a;
    cout << "Enter a taig skaic: "<< endl;
    cin >> a;
    while (a<=0){
        cout << "sk yra netinkamas"<< endl;
        cout << "Enter a taig skaic: "<< endl;
        cin >> a;

    }
    cout << a<<" yra taigamas"<< endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}