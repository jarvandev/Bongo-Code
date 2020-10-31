#include <iostream>
#include <math.h>

using namespace std;

double f(double x); // Retorna la funcion evaluada en x
double dfdx(double x); // Retorna la derivada de la funcion evaluada en x
void solucion(double x); // Retorna el valor aprox. para la raíz de f

int main()
{
    double x0; // Dato inicial
    double x1; // Dato siguiente aproximado
    double steps; // Cantidad de pasos
    
    cout<<"Método de Newton"<< endl;
    cout<<"f(x) = e^x + x + 1"<< endl;
    cout<<"\nIngrese una aproximación inicial x0: ";
    cin >> x0;
    cout<<"Ingrese la cantidad de pasos:";
    cin >> steps;
    
    for(int i = 1; i <= steps; i++){
        x1 = x0 - ( f(x0) / dfdx(x0) );
        
        cout<< "\nPaso #" << i << endl;
        cout<< "x" << i << " = " << x1 <<endl;
        cout<< "f(x" << i << ") = " << f(x1) <<endl;
        cout<< "f'(x" << i << ") = " << dfdx(x1) <<endl;
        
        x0 = x1;
    }
    
    solucion(x1);
    
    return 0;
}

double f(double x){
    return exp(x) + x + 1;
}
double dfdx(double x){
    return exp(x) + 1;
}
void solucion(double x){
    cout<< "\n La raíz de f(x) es aproximadamente " << x << endl;
}
