#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

// Tarifas y descuentos
const double TARIFA_BASE = 2.50; // Costo por hora
const double DESCUENTO = 0.85;   // 15% menos para alquileres largos

// Declaración de funciones
double calcularTiempo(int hInicio, int mInicio, int hFin, int mFin);
double calcularCosto(double horas);
void mostrarRecibo(const string& nombre, double horas, double total);

int main() {
    vector<string> clientesRegistrados = {"Juan", "Maria", "Carlos"};

    cout << "** Sistema de Alquiler EcoMovil **\n\n";

    // Datos del cliente
    string nombre;
    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);

    // Verificar si es cliente frecuente
    bool esFrecuente = false;
    for (const auto& cliente : clientesRegistrados) {
        if (cliente == nombre) {
            esFrecuente = true;
            break;
        }
    }

    if (esFrecuente) {
        cout << "¡Bienvenido de nuevo, " << nombre << "! Tienes descuento por ser cliente frecuente.\n";
    } else {
        cout << "Hola " << nombre << ", gracias por usar EcoMovil.\n";
    }

    // Entrada de tiempos
    int hInicio, mInicio, hFin, mFin;
    cout << "\nHora de inicio (hh mm): ";
    cin >> hInicio >> mInicio;
    cout << "Hora de entrega (hh mm): ";
    cin >> hFin >> mFin;

    // Cálculos
    double horas = calcularTiempo(hInicio, mInicio, hFin, mFin);
    double total = calcularCosto(horas);

    // Aplicar descuento si es cliente frecuente
    if (esFrecuente) {
        total *= DESCUENTO;
    }

    // Mostrar resultados
    mostrarRecibo(nombre, horas, total);

    return 0;
}

// Implementación de funciones
double calcularTiempo(int hInicio, int mInicio, int hFin, int mFin) {
    // Convertir todo a minutos
    int inicioMin = hInicio * 60 + mInicio;
    int finMin = hFin * 60 + mFin;

    // Calcular diferencia en horas
    double diferencia = (finMin - inicioMin) / 60.0;

    // Redondear a 2 decimales
    return round(diferencia * 100) / 100;
}

double calcularCosto(double horas) {
    double total = horas * TARIFA_BASE;

    // Descuento por alquiler largo
    if (horas > 3.0) {
        total *= 0.9; // 10% de descuento
    }

    return round(total * 100) / 100;
}

void mostrarRecibo(const string& nombre, double horas, double total) {
    cout << "\n----- RECIBO -----\n";
    cout << "Cliente: " << nombre << "\n";
    cout << "Tiempo de uso: " << horas << " horas\n";
    cout << "Total a pagar: $" << total << "\n";
    cout << "¡Gracias por elegir EcoMovil!\n";
    cout << "------------------\n";
}
