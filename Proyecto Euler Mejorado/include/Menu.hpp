#include <iostream>
#include <cmath>
#include <iomanip>
#include "Metodo.hpp"



class Menu {
private:
    Metodo metodo;
    double x0;
    double y0;
    double h;
    double x_objetivo;

public:
    void mostrarMenu() {
        std::cout << "Ingrese el valor de x0: ";
        std::cin >> x0;

        std::cout << "Ingrese el valor de y0: ";
        std::cin >> y0;

        std::cout << "Ingrese el valor de h: ";
        std::cin >> h;

        std::cout << "Ingrese el objetivo: ";
        std::cin >> x_objetivo;

        metodo.setVariables(x0, y0, h, x_objetivo);

        double resultado = metodo.eulerModif();

        std::cout << "Aproximacion de la raiz hasta y(" << x_objetivo << "): " << std::setprecision(6) << resultado << std::endl;
    }
};
