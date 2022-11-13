#include <iostream>
#include <string.h>

using namespace std;

int primerPais[4], segundoPais[4];
float totalPrimPais, totalSegPais, total;
string primpais, segpais;

void pedirDatos();
void calculos();
void resultados();

int main()
{
    cout <<"==========Bienvenido al simulador de guerra================" << endl;
    pedirDatos();
    calculos();
    resultados();
    return 0;
}

void pedirDatos(){
     // 1 tanque = 50 soldados
    // 1 avion = 75 soldados
    // 1 barco = 250 soldados
    cout << "Ingrese los datos que se solicitan."<<endl;
    cout <<"==========================================================="<<endl;
    cout <<"Ingresa el nombre del primer pais del enfrentamiento: ";
    getline(cin, primpais);
    cout <<"Ingresa el nombre del segundo pais del enfrentamiento: ";
    getline(cin, segpais);
    cout << "===========" << primpais << " vs " << segpais << "=============" << endl;
    //datos primer pais
    cout << "Ingrese los datos de "<<primpais<<":" << endl;
    cout << "Numero de soldados: ";
    cin >> primerPais[0];
    cout << "Numero de tanques: ";
    cin >> primerPais[1];
    cout << "Numero de aviones: ";
    cin >> primerPais[2];
    cout << "Numero de barcos: ";
    cin >> primerPais[3];
    cout << "========================= " << endl;
    //datos segundo pais
    cout << "Ingrese los datos de "<<segpais<<":" << endl;
    cout << "Numero de soldados: ";
    cin >> segundoPais[0];
    cout << "Numero de tanques: ";
    cin >> segundoPais[1];
    cout << "Numero de aviones: ";
    cin >> segundoPais[2];
    cout << "Numero de barcos: ";
    cin >> segundoPais[3];
};


void calculos(){
    totalPrimPais = primerPais[0] + (primerPais[1]*50) + (primerPais[2]*75) + (primerPais[3]*250);
    totalSegPais = segundoPais[0] + (segundoPais[1]*50) + (segundoPais[2]*75) + (segundoPais[3]*250);
    total = totalPrimPais + totalSegPais;
};

void resultados(){
    if (totalPrimPais > totalSegPais){
        cout <<  primpais << " tiene mas posibilidades de ganar la guerra con el " << (totalPrimPais/total)*100 << "%" << endl;
        cout << "Mientras que " << segpais << " tiene posibilidades del " << (totalSegPais/total)*100 << "%" << endl;
        cout << endl;
    }else if (totalSegPais > totalPrimPais){
        cout << segpais <<" tiene mas posibilidades de ganar la guerra con el " << (totalSegPais/total)*100 << "%" << endl;
        cout << "Mientras que " << primpais << " tiene posibilidades del " << (totalPrimPais/total)*100 << "%" << endl;
        cout << endl;
    }else{
        cout << "Ambos paises tienen las mismas posibilidades de ganar la guerra, con el " <<(totalPrimPais/total)*100 << "% cada uno.\n";
        cout << endl;
    }
};