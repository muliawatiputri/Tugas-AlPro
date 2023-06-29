#include <iostream>

enum Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai,
    Salju,
};

int main() {
    Cuaca kondisiCuaca = Badai;

    switch (kondisiCuaca) {
        case Cerah:
            std::cout << "Cuaca cerah, langit terang" << std::endl;
            break;
        case Mendung:
            std::cout << "Cuaca mendung, awan menutupi langit" << std::endl;
            break;
        case Hujan:
            std::cout << "Hujan turun dengan deras" << std::endl;
            break;
        case Badai:
            std::cout << "Badai datang, angin kencang dan hujan lebat" << std::endl;
            break;
        case Salju:
            std::cout << "Salju turun, permukaan tertutup oleh salju" << std::endl;
            break;
    }

    return 0;
}





