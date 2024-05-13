#include <iostream>

class GeometrickyObjekt {
public:
    virtual double obsah() = 0;
    virtual double obvod() = 0;
};

class Obdelnik : public GeometrickyObjekt {
private:
    double sirka;
    double vyska;

public:
    Obdelnik(double s, double v) : sirka(s), vyska(v) {}

    double obsah() override {
        return sirka * vyska;
    }

    double obvod() override {
        return 2 * (sirka + vyska);
    }
};

class Ctverec : public GeometrickyObjekt {
private:
    double strana;

public:
    Ctverec(double s) : strana(s) {}

    double obsah() override {
        return strana * strana;
    }

    double obvod() override {
        return 4 * strana;
    }
};
//abstraktní třídy jsou třídy, které obsahují abstraktní metody a implementované metody.
//čistě abstraktní třídy jsou třídy, které obsahují pouze abstraktní metody a neobsahují žádné implementované metody.
//čistě abstraktní třída může být použita jako "prázdný" vzor pro dědičnost 

int main() {
    Obdelnik obdelnik(10, 5);
    Ctverec ctverec(50);

    std::cout << "Obdelnik:" << std::endl;
    std::cout << "Obsah:" << obdelnik.obsah() << std::endl;
    std::cout << "Obvod:" << obdelnik.obvod() << std::endl;

    std::cout << "\nCtverec:" << std::endl;
    std::cout << "Obsah:" << ctverec.obsah() << std::endl;
    std::cout << "Obvod:" << ctverec.obvod() << std::endl;

    return 0;
}