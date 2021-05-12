#include <iostream>

using namespace std;

int main()
{
    double m1,m2,b1,b2,Xint,Yint;
    cout << "Ingresar la pendiente (m1) y la ordenada al origen (b1) de la primera recta respectivamente : " << endl;
    cin >> m1 >> b1;
    cout << "Ingresar la pendiente (m2) y la ordenada al origen (b2) de la segunda recta respectivamente : " << endl;
    cin >> m2 >> b2;
    if  (m1 == m2) {
        if (b2 ==  b1) {
            cout << "Las rectas son iguales";
        }
        else    {
            cout << "No hay interseccion entre las rectas";
        }
    }
    else {
    Xint = (b2-b1)/(m1-m2) ;
    Yint = m1*Xint + b1 ;
    cout << "La interseccion de las rectas se encuentra en el punto : (" << Xint << ";" << Yint << ")" << endl;
    }
    return 0;
}
