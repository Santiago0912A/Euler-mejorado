#include <iostream>
#include <cmath>
#include <iomanip>


class Metodo {
private:
    double x;
    double y;
    double h;
    double x_objetivo;

public:
    double funcion(double x, double y) {
        return x-y+5;
    }

    double eulerModif() {
        double y_actual = y;
        double x_actual = x;

        while (x_actual < x_objetivo) {
            double k1 = h * funcion(x_actual, y_actual);
            double k2 = h * funcion(x_actual + h, y_actual + k1);
            y_actual = y_actual + (k1 + k2) / 2.0;
            x_actual = x_actual + h;
        }

        return y_actual;
    }

    void setVariables(double x0, double y0, double h, double x_objetivo) {
        x = x0;
        y = y0;
        this->h = h;
        this->x_objetivo = x_objetivo;
    }
};
