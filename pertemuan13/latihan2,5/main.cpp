#include<iostream>
#include<string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda;

    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = "2.000.000";

    ptrSepeda = &sepeda;

    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << sepeda.type << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: " << sepeda.harga << endl;

    cout << "Merk: " << ptrSepeda->merk << endl;
    cout << "Type: " << ptrSepeda->type << endl;
    cout << "Tahun: " << ptrSepeda->tahun << endl;
    cout << "Harga: " << ptrSepeda->harga << endl;

    return 0;
}






