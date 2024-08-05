#include <iostream>

// Función para intercambiar los jugos
void intercambiarJugos(int& vasoNaranja, int& vasoManzana) {
    int temp = vasoNaranja;
    vasoNaranja = vasoManzana;
    vasoManzana = temp;
}

int main() {
    int vasoNaranja, vasoManzana;

    // Pedir al usuario que ingrese la cantidad de jugo en cada vaso
    std::cout << "Ingrese la cantidad de jugo de naranja: ";
    std::cin >> vasoNaranja;
    std::cout << "Ingrese la cantidad de jugo de manzana: ";
    std::cin >> vasoManzana;

    // Llamar a la función intercambiarJugos
    intercambiarJugos(vasoNaranja, vasoManzana);

    // Mostrar las cantidades después del intercambio
    std::cout << "Después del intercambio:" << std::endl;
    std::cout << "Vaso de naranja: " << vasoNaranja << std::endl;
    std::cout << "Vaso de manzana: " << vasoManzana << std::endl;

    return 0;
}
