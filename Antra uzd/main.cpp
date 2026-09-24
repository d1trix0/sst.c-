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
*/
    double saving =100.0;
    const double target = 500.0,mdeposit= 75.0;
    int month=0;
    while(saving < target) {
        month++;
        saving += mdeposit;
        cout<<month<< "menuo"<< fixed<<setprecision(2)<<saving<<"EUR"<<endl;


    }
    cout << "tikslas pataiktas"<< month<<endl;

    

    return 0;
}
