#include<iostream>
using namespace std;

const float PI = 3.14159;

struct PersegiPanjang {
    float panjang;
    float lebar;
};

struct Lingkaran {
    float radius;
};

struct Kerucut {
    float radius;
    float tinggi;
};

struct Bola {
    float radius;
};

float hitungLuasPersegiPanjang(PersegiPanjang pp) {
    return pp.panjang * pp.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return PI * lingkaran.radius * lingkaran.radius;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0/3.0) * PI * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola) {
    return (4.0/3.0) * PI * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5;
    pp.lebar = 3;

    Lingkaran lingkaran;
    lingkaran.radius = 4;

    Kerucut kerucut;
    kerucut.radius = 2;
    kerucut.tinggi = 6;

    Bola bola;
    bola.radius = 3;

    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(pp) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}




