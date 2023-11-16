#include <iostream>
#include <vector>

using namespace std;

void generate_permutationen(const string& ziffern, const unsigned int& len, const string& kette = "");

int main() {

    cout << "Geben Sie die Ziffern ein: ";
    string ziffern; cin >> ziffern;

    generate_permutationen(ziffern, size(ziffern));

    return 0;
}

void generate_permutationen(const string& ziffern, const unsigned int& len, const string& kette) {
    if (size(kette) == len)
        cout << kette << endl;
    else
        for (char buchstabe : ziffern)
            generate_permutationen(ziffern, len, kette + buchstabe);
}