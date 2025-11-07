#include <iostream>

using namespace std;

int silnia(int n){
    int x = 1;
    for(int i = 2; i <= n; i++){
        x *= i;
    }
    return x;
}

int main() {
    int a, b, k;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cin >> wyjscie;
        if(wyjscie == 1){
            cout << "Podaj liczbe ";
            cin >> k;
            cout << "Silnia z " << k << " to " << silnia(k) << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
