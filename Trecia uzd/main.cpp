#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
//uzd 1 ir antras
    /*
   cout  << "enter 5 sk"<< endl;
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    double Average;
    Average = (a1+a2+a3+a4+a5)/5;
cout  << "average = " << Average<<endl;
    if (Average < 5) {
        cout << "tavo pazimis ne geras" << endl;
    }
    else {
        cout << "tavo pazimis geras" << endl;
    }*/
    //2 uzd;
  /*
    cout << "Entre your score : "<< endl;
    int score;
    cin >> score;
    if (score ==10) {cout<< "puiku"<< endl;}
    else if (score ==9) {cout<< "labai gerai"<< endl;}
    else if (score >=7 &&score<9) {cout<< "normal"<< endl;}
    else if (score<7 &&score >=4){cout<<"tu islalai egza"<<endl;}
else if (score <4){cout << "Tu ne islakai egza"<< endl;}
    else {cout<< "Tokios pazimes nera"<< endl;}
*/
//3 uzd


            int balance =100;
            int choise;
            do
            {
            cout<<"Saskaitos menu : "<< endl;
            cout << "1.perziureti saskaitos likutis"<< endl;
            cout << "2.papilditi saskaitos"<< endl;
            cout << "3. atlikti  mokejimo" <<endl;
            cout << "0. baigti program"<< endl;
            cout  << "Pasirinkite funcijos " << endl;
            cin >>  choise;
            switch(choise) {
            case 1:
            cout<<"saskaitos likutis"<<endl;
            break;
            case 2: {
            int amount;
            cout << "Papildimo suma" << endl;
            cin >>  amount;
            if(amount > 0) {
            balance += amount;
            cout << "saskaita yra papildita" << endl;


            }
            else {
            cout << "netinkama suma"<< endl;
            }
            break;
            }
            case 3: {

            int amount;
            cout << "mokejimo suma" << endl;
            cin >>  amount;
            if(amount <= 0) {
            cout << "netinkama suma"<< endl;
            }
            else if (amount > balance) {
            cout << "nepakankama likutis saskaitoja"<< endl;

            }
            else {
            balance -= amount;
            cout << "mokejomasa atlktas"<< endl;
            }
            break;
            }
            case 0:
            cout << "program baigta" << endl;
            break;

            default:
            cout << "tokios operacijos nera" << endl;








            }


            }

            while (choise !=0);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}