#include <iostream>

using namespace std;
float n[3];
float y, k, L;

int main(){
    for(int i=1; i<=3; i++){
        cout << "Masukan nilai array ke-" << i << ":";
        cin >> n[i];
        k = k + n[i];
    }
    y = sizeof(n)/sizeof(n[0]);
    L = k / y;
    cout << "Jumlah Elemen Array: "<< y << endl;
    cout << "Total Array: " << k << endl;
    cout << "Rata-rata Array: " << L << endl;

}
