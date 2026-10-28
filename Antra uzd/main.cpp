#include <iomanip>
#include <iostream>
using namespace std;//
int main() {

    /*  Pirma uzd
    int a;
    cout << "Enter a taig skaic: "<< endl;
    cin >> a;
    while (a<=0){
        cout << "sk yra netinkamas"<< endl;
        cout << "Enter a taig skaic: "<< endl;
        cin >> a;

    }
    cout << a<<" yra taigamas"<< endl;
*//* 2 uzd
    double saving =100.0;
    const double target = 500.0,mdeposit= 75.0;
    int month=0;
    while(saving < target) {
        month++;
        saving += mdeposit;
        cout<<month<< "menuo"<< fixed<<setprecision(2)<<saving<<"EUR"<<endl;


    }
    cout << "tikslas pataiktas"<< month<<endl;

    */
    // 3uzd
    /*
    string password;
    do {cout << "Enter your password min 8 simbols: "<< endl;
        cin >> password;
        if (password.length() < 8) {
            cout << "Password length less than 8" << endl;
        }


    }
while (password.length() < 8);
    cout << "password is korect" <<1 endl;
*/
    // 4 uzd
    /*
 int balance =100;
int choise;
    do
    {
    cout<<"Saskaitos menu : "<< endl;
        cout << "1.perziureti saskaitos likutis"<< endl;
        cout << "2.papilditi saskaitos"<< endl;
        cout << "3. atlikti  mokejimo" <<endl;
        cout << "01. baigti program"<< endl;
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
    */
    // 5 uzd
    const int  stgrades= 5;
    int grades;
    int sum=0;
    int maxgredse=0;
    for (int i=1;i<=stgrades;i++ ) {
        cout<<"iveskite "<<i<< " stud pazims"<<endl;
    cin >> grades;
        sum+=grades;

        maxgredse= (grades>maxgredse)?grades:maxgredse;

    }
    double average=static_cast<double>(sum)/stgrades;
    cout<< fixed << setprecision(2)<< "Pazimis vid"<<average << endl;
    cout << "Max  = " << maxgredse << endl;
    return 0;
}