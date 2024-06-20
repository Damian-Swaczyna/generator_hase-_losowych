#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                              "abcdefghijklmnopqrstuvwxyz"
                              "0123456789"
                              "!@#$%^&*()-_=+[]{}|;:',.<>?/~`";
    std::string haslo;

    for (int i = 0; i < length; ++i) {
        haslo += chars[rand() % chars.size()];
    }

    return haslo;
}

int main() {
    srand(time(0));
    int liczbaHasel, dlugoscHasla;

    std::cout << "Podaj liczbe hasel do wygenerowania: ";
    std::cin >> liczbaHasel;
    std::cout << "Podaj dlugosc hasel: ";
    std::cin >> dlugoscHasla;

    for (int i = 0; i < liczbaHasel; ++i) {
        std::string haslo = generatePassword(dlugoscHasla);
        std::cout << "Haslo " << i + 1 << ": " << haslo << std::endl;
    }

    return 0;
}
