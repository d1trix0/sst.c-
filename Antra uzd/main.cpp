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
    string password;
    do {cout << "Enter your password min 8 simbols: "<< endl;
        cin >> password;
        if (password.length() < 8) {
            cout << "Password length less than 8" << endl;
        }


    }
while (password.length() < 8);
    cout << "password is korect" <<1 endl;


    return 0;
}
