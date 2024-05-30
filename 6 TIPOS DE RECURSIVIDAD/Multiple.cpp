#include <iostream>
#include <ctime>
using namespace std;


void delivery(string repartidor, int entregas){
    if(entregas == 0){
        cout << "Repartidor: " << repartidor << " ha terminado sus entregas" << endl;
    }else if(entregas > 10){

        cout << "Las entregas están sobresaturadas, se necesita otro repartidor" << endl;
        delivery(repartidor, entregas/2);
        delivery(repartidor.append(" Reborn"), entregas/2);
    }else if(entregas > 0 || entregas <= 10){
        cout << "Repartidor: " << repartidor << " ha entregado un paquete" << endl;
        cout << "Quedan " << entregas << " por entregar" << endl;
        delivery(repartidor, entregas-1);
    }
}



int main(){
    string nombre;
    //srand(time(NULL));
    //int entregas = rand() % 20 + 5;
    int entregas = 15;

    cout<<"Ingrese un nombre: ";
    getline(cin, nombre);
    delivery(nombre, entregas);
    return 0; 
}
