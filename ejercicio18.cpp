#include <iostream>

using namespace std;

int main() {
    double pesoGramos;
    int opcion;

    cout <<"Ingrese el peso en gramo:";
    cin >> pesoGramos;

    cout <<"Seleccione la unidad a la cual desea convertir:"<< endl;
    cout <<"1. Kilogramos" << endl;
    cout <<"2. Hectogramos" << endl;
    cout <<"3. Decagramos" << endl;
    cout <<"4. Decigramos" << endl;
    cout <<"5. Centigramos" << endl;
    cout <<"6. Miligramos" << endl;
    cout << "Ingrese el numero de la opcion deseada:";
    cin >> opcion;

    switch (opcion) {
        case 1:
          cout <<"El peso en Kilogramos es:" << pesoGramos / 1000 << "Kg" << endl;
          break;
        case 2:
           cout <<"El peso en Hectograma es:" << pesoGramos / 100 << "hg" << endl;
          break;
        case 3:
           cout <<"El peso en Decagramo es:" << pesoGramos / 10 << "dag" << endl;
           break;
         case 4:
           cout <<"El peso en Decigramos es:" << pesoGramos * 10 << "dg" << endl;
           break;
         case 5:
           cout <<"El peso en Centigramos es:" << pesoGramos * 10 << "cg" << endl;
           break;
         case 6:
            cout <<"El peso en Miligramos es:" << pesoGramos * 1000 << "mg" << endl;
            break;
        default:
           cout <<" Opcion invalida." << endl;
           
    }

    return 0;
}














