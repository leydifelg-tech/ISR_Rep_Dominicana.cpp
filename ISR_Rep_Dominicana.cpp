#include <iostream>
using namespace std;

int main() {
    double sueldoMensual, sueldoAnual, isrAnual = 0, descuentoMensual;

    cout << "Ingrese el sueldo mensual (RD$): ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00) {
        isrAnual = 0;
    } else if (sueldoAnual <= 624329.00) {
        isrAnual = (sueldoAnual - 416220.01) * 0.15;
    } else if (sueldoAnual <= 867123.00) {
        isrAnual = 31216.00 + (sueldoAnual - 624329.01) * 0.20;
    } else {
        isrAnual = 79776.00 + (sueldoAnual - 867123.01) * 0.25;
    }

    descuentoMensual = isrAnual / 12.0;

    cout << "\nSueldo mensual: RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual: RD$ " << sueldoAnual << endl;
    cout << "Descuento mensual de ISR: RD$ " << descuentoMensual << endl;

    return 0;
}
