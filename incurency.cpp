
#include <iostream>
#include <iomanip>
using namespace std;

const double GBP_Bendras = 0.8729;
const double GBP_Pirkti = 0.8600;
const double GBP_Parduoti = 0.9220;

const double USD_Bendras = 1.1793;
const double USD_Pirkti = 1.1460;
const double USD_Parduoti = 1.2340;

const double INR_Bendras = 104.6918;
const double INR_Pirkti = 101.3862;
const double INR_Parduoti = 107.8546;

int main() {
    cout << "\n===== EXCHANGE RATES =====\n";

    cout << "USD: 1 EUR = " << USD_Bendras << " USD;" << " 1 USD = " << 1.0 / USD_Bendras << " EUR\n";

    cout << "GBP: 1 EUR = " << GBP_Bendras << " GBP;" << " 1 GBP = " << 1.0 / GBP_Bendras << " EUR\n";

    cout << "INR: 1 EUR = " << INR_Bendras << " INR;" << " 1 INR = " << 1.0 / INR_Bendras << " EUR\n";
    int money;
    int valuet = -1;
    int getValuet;
    double eur;
    double result;
    double buyRate, sellRate;

    cout << fixed << setprecision(2);

    while (valuet != 0) {
        cout << "\n===== CURRENCY EXCHANGE =====" << endl;
        cout << "Enter amount: ";
        if (!(cin >> money) || money < 0) {
            cout << "Invalid amount!" << endl;
            return 1;
        }

        cout << "\nChoose currency to exchange:" << endl;
        cout << "1 - EUR" << endl;
        cout << "2 - USD" << endl;
        cout << "3 - GBP" << endl;
        cout << "4 - INR" << endl;
        cout << "0 - Exit" << endl;
        cout << "Your choice: ";
        cin >> valuet;

        if (valuet == 0) {
            cout << "Program stopped." << endl;
            break;
        }

        switch (valuet) {
            case 1: //eur
                buyRate = 1.0;
                sellRate = 1.0;
                break;
            case 2: //usd
                buyRate = USD_Pirkti;
                sellRate = USD_Parduoti;
                break;
            case 3: //gbp
                buyRate = GBP_Pirkti;
                sellRate = GBP_Parduoti;
                break;
            case 4: //inr
                buyRate = INR_Pirkti;
                sellRate = INR_Parduoti;
                break;
            default:
                cout << "Invalid currency!" << endl;
                continue;
        }

        cout << "\nChoose currency to receive:" << endl;
        cout << "1 - EUR" << endl;
        cout << "2 - USD" << endl;
        cout << "3 - GBP" << endl;
        cout << "4 - INR" << endl;
        cout << "Your choice: ";
        cin >> getValuet;

        if (getValuet < 1 || getValuet > 4) {
            cout << "Invalid currency!" << endl;
            continue;
        }
        // Convert the original amount to EUR
        switch (valuet) {
            case 1: //eur
                eur = money;
                break;
            case 2: //usd
                eur = money / USD_Parduoti;
                break;
            case 3: //gbp
                eur = money / GBP_Parduoti;
                break;
            case 4:  //inr
                eur = money / INR_Parduoti;
                break;
        }

        // Convert EUR to the selected currency
        switch (getValuet) {
            case 1: //eur
                result = eur;
                break;
            case 2: //usd
                result = eur * USD_Pirkti;
                break;
            case 3: //gbp
                result = eur * GBP_Pirkti;
                break;
            case 4: //inr
                result = eur * INR_Pirkti;
                break;
        }

        cout << "\nExchanged amount: " << money << endl;
        cout << "Result: " << result << endl;
        cout << "your proces was finished." << endl;
    }

    return 0;
}