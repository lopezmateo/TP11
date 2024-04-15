#include <iostream>
using namespace std;
int main (){
	
	int dia;

	 cout << "Diga un dia de la semana del 1 al 7: ";
    cin >> dia;

    if (dia == 1) {
        cout << "Lunes" << endl;
    } else if (dia == 2) {
        cout << "Martes" << endl;
    } else if (dia == 3) {
        cout << "Miercoles" << endl;
    } else if (dia == 4) {
        cout << "Jueves" << endl;
    } else if (dia == 5) {
        cout << "Viernes" << endl;
    } else if (dia == 6) {
        cout << "Sabado" << endl;
    } else if (dia == 7) {
        cout << "Domingo" << endl;
    } else {
        cout << "ERROR, PONGA UN NUMERO DE LA SEMANA DEL 1 AL 7" << endl;
    }
		return 0;
		
	}
