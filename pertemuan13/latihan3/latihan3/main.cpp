#include <iostream>

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double radius;
} Lingkaran;

typedef struct {
    double radius;
    double tinggi;
} Kerucut;

typedef struct {
    double radius;
} Bola;

double hitungLuasPersegiPanjang(PersegiPanjang pp) {
    return pp.panjang * pp.lebar;
}

double hitungLuasLingkaran(Lingkaran lingkaran) {
    return 22.0 / 7.0 * lingkaran.radius * lingkaran.radius;
}

double hitungVolumeKerucut(Kerucut kerucut) {
    return 1.0 / 3.0 * 22.0 / 7.0 * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

double hitungVolumeBola(Bola bola) {
    return 4.0 / 3.0 * 22.0 / 7.0 * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    Lingkaran lingkaran;
    lingkaran.radius = 4.0;

    Kerucut kerucut;
    kerucut.radius = 3.0;
    kerucut.tinggi = 6.0;

    Bola bola;
    bola.radius = 2.0;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(pp);
    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    double volumeKerucut = hitungVolumeKerucut(kerucut);
    double volumeBola = hitungVolumeBola(bola);

    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}





