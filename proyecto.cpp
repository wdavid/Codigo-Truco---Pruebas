#include <iostream>

using namespace std;

void pedirDatos();

int main()
{
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int eeuu[4], rusia[4];
    double totalEEUU, totalRusia, total; // 1 solados, 2 tanques, 3 aviones, 4 barcos
    //1 tanque = 50 soldados
    //1 avion = 75 soldados
    //1 barco = 250 soldados
    cout << "===========EEUU vs Rusia================" << endl;
    cout << "Ingrese los datos de EEUU: " << endl;
    cout << "Numero de soldados: ";
    cin >> eeuu[1];
    cout << "Numero de tanques: ";
    cin >> eeuu[2];
    cout << "Numero de aviones: ";
    cin >> eeuu[3];
    cout << "Numero de barcos: ";
    cin >> eeuu[4];
    cout << "========================= " << endl;
    cout << "Ingrese los datos de Rusia: " << endl;
     cout << "Numero de soldados: ";
    cin >> rusia[1];
    cout << "Numero de tanques: ";
    cin >> rusia[2];
    cout << "Numero de aviones: ";
    cin >> rusia[3];
    cout << "Numero de barcos: ";
    cin >> rusia[4];
    totalEEUU = eeuu[1] + eeuu[2]*50 + eeuu[3]*75 + eeuu[4]*250;
    totalRusia = rusia[1] + rusia[2]*50 + rusia[3]*75 + rusia[4]*250;
    total = totalEEUU + totalRusia;
    cout << endl;
    cout << endl;

    if (totalEEUU > totalRusia){
        cout << "EEUU tiene mas posibilidades de ganar la guerra con el " << (totalEEUU/total)*100 << "%" << endl;
        cout << "Mientras que Rusia tiene posibilidades del " << (totalRusia/total)*100 << "%" << endl;
        cout << endl;
    }
    else if (totalRusia > totalEEUU){
        cout << "Rusia tiene mas posibilidades de ganar la guerra con el " << (totalRusia/total)*100 << "%" << endl;
        cout << "Mientras que EEUU tiene posibilidades del " << (totalEEUU/total)*100 << "%" << endl;
        cout << endl;
    }
    else{
        cout << "Ambos paises tienen las mismas posibilidades de ganar la guerra, EEUU " <<(totalEEUU/total)*100 << "% y Rusia " << (totalRusia/total)*100 << "%" << endl;
        cout << endl;
    }
}

