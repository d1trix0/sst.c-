#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
//uzd 1
    
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
    }


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}