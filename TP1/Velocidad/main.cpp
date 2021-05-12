#include <iostream>

using namespace std;

int main()
{
    double kmh;
    cout << "Ingresar velocidad en Km/h : ";
    cin >> kmh;
    cout << "Velocidad en m/s : " << kmh*10/36 << endl;    //Se multiplica la variable km por el factor de conversión de km/h a m/s "1000m*1h/3600s*1km" de manera simplificada.
    return 0;
}
