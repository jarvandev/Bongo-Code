#include <iostream>

using namespace std;

int Revolver(int x, int n = 52)
{
    if(x <= n/2)
    {
        return 2 * x;
    }else if(x > n/2 && x <= n){
        return (2 * (x - n/2)) - 1;
    }else{
        return 0;
    }
}

int Componer(int k, int x){
    for (int i = 0; i < k; i++) {
        x = Revolver(x);
    }
    return x;
}

int main()
{
  	int cartas[52]; // Cantidad de cartas

    int k; // Revolver k veces
    cout << "Ingrese cuantas veces quiere revolver:";
    cin >> k;
   
    cout << "------------------------" << endl;
    cout << "Pos Inicial | Pos Final" << endl;
    cout << "------------------------" << endl;
    
 	for(int i = 0; i < sizeof(cartas)/sizeof(cartas[0]); i++){
      
        cartas[i] = i + 1; // Posición inicial
    	int pfinal = Componer(k, cartas[i]); // Posición final
      
        cout << "       " << cartas[i] << "   |    " << pfinal<<endl;
    }
    cout << endl;
    
    return 0;
}
