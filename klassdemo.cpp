#include <iostream>
#include <string>

using namespace std;

class MinKlass {
    public:
    int alder;
    string fnamn;
    string enamn;

    void minMetod() {
        cout << "\nInne i klassen\n";
    }
};

int main() {

    MinKlass mittObjekt;
    cout << "Ange ålder: ";
    cin >> mittObjekt.alder;

    cout << "Ange förnamn: ";
    cin >> mittObjekt.fnamn;

    cout << "Ange efternamn: ";
    cin >> mittObjekt.enamn;

    cout << "Jaså minsann! Du är " << mittObjekt.alder << "år gammal\n";
    cout << "och heter " << mittObjekt.fnamn << " med det fina efternamnet " << mittObjekt.enamn << "\n\n";

    mittObjekt.minMetod();

    return 0;
}