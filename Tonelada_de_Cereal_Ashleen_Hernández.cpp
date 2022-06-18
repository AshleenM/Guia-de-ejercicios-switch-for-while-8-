#include<iostream> 
using namespace std;

int main ()
{
    int cajas, peso, toneladas;
    
    cout << "Ingrese el peso de la caja: ";
    cin >> peso;
    cout << "Ingrese el numero de cajas: ";
    cin >> cajas;
    
    toneladas = peso * cajas;
    
    cout << "El peso total de la tonelada es: " << toneladas << " onzas" << endl;
    
    return 0;
}
