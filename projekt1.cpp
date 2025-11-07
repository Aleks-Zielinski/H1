#include <iostream>

using namespace std;

int silnia(int n){
    int x = 1;
    for(int i = 2; i <= n; i++){
        x *= i;
    }
    return x;
}

bool pierwsza(int x){
    for(int i = 2; i < x; i++){
        if(x%i == 0) return false;
    }
    return true;
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
        cout << "2. Pierwsza" << endl;
        cin >> wyjscie;
        if(wyjscie == 1){ // WCZESNIEJ TO DODALEM DO MENU CO TERAZ PANIKA POLECENIE 4 AAAAA
            cout << "Podaj liczbe ";
            cin >> k;
            cout << "Silnia z " << k << " to " << silnia(k) << endl;
        }
        if(wyjscie == 2){
            cout << "Podaj liczbe " << endl;
            cin >> k;
            if(pierwsza(k)){
                cout << "Liczba " << k << " jest pierwsza" <<endl;
            } else{
                cout << "Liczba " << k << " nie jest pierwsza" <<endl;
            }
        }
    } while(wyjscie != 0);
    return 0;
}
