#include <iostream>

using namespace std;

int main(){
int mes, anio;

cout <<"Ingrese un numero que represente uno de los doce meses del año (1-12):";
cin >> mes;

cout <<"Ingrese un año de su preferencia:";
cin >> anio;

if (mes < 1  || mes > 12){
    cout <<"Error: El numero de mes ingresado no es valido."<< endl;
} else {   
   if (mes == 2){
      if ((anio % 4 == 0 && anio % 100 !=0 ) || (anio % 400 == 0)){
        cout <<"Febrero tiene 28 dias."<< endl;
      }
   } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)  {
      cout << "El mes tiene 30 dias." << endl;
   } else {
      cout <<"El mes tiene 31 dias." << endl;
   }  

}

return 0;

}