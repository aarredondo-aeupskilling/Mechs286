#include <iostream>

class Calculadora {
public:
    // Constructor
    Calculadora() {}

    // Métodos para las operaciones básicas
    double sumar(double a, double b) {
        return a + b;
    }

    double restar(double a, double b) {
        return a - b;
    }

 double multiplicar(double a, double b) {
        return a * b;
    }

 double dividir(double a, double b) {
     if (b != 0) {
        return a / b;
    } else {
       std::cout << "Error: División por cero." << std::endl;
            return 0;
    }
 }

};

int main() {
     Calculadora calc;
     double num1, num2;
     char operacion;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;
    std::cout << "Introduce la operación (+, -, *, /): ";
    std::cin >> operacion;
    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

     double resultado;

switch (operacion) {
        case '+':
            resultado = calc.sumar(num1, num2);
            break;
        case '-':
            resultado = calc.restar(num1, num2);
            break;
        case '*':
            resultado = calc.multiplicar(num1, num2);
            break;
        case '/':
            resultado = calc.dividir(num1, num2);
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
            return 1;
    }
     std::cout << "El resultado es: " << resultado << std::endl;
    return 0;

}