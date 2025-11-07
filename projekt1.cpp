#include <iostream>

using namespace std;

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
        cout << "1. Pierwsza" << endl;
        cin >> wyjscie;
        if(wyjscie == 1){
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
