#include <iostream>
using namespace std;
int main (){
	
	int dia;
	
	cout<<"ingrese un dia de la semana (del 1 al 7)"<<endl;
	cin>>dia;
	
	switch (dia){
		
		case 1:
            std::cout << "Lunes" << std::endl;
            break;
        case 2:
            std::cout << "Martes" << std::endl;
            break;
        case 3:
            std::cout << "Miércoles" << std::endl;
            break;
        case 4:
            std::cout << "Jueves" << std::endl;
            break;
        case 5:
            std::cout << "Viernes" << std::endl;
            break;
        case 6:
            std::cout << "Sábado" << std::endl;
            break;
        case 7:
            std::cout << "Domingo" << std::endl;
            break;
        default:
            std::cout << "Error: Por favor, introduzca un número del 1 al 7." << std::endl;
            break;
        }
        
            cout << "Error: Por favor, introduzca un número del 1 al 7." << std::endl;
            break;
    }
			
	}
	
	  
		
		return 0;
		
	}