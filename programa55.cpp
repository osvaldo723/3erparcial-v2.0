#include <iostream>
using namespace std;
int main(){
  char opc;
  char identificacion;
  cout<<"Seleccione el tipo de usuario: \n"<<endl;
  cout<<"1) ** Administrador ** \n"<<endl;
  cout<<"2) ** Usuario Registrado ** \n"<<endl;
  cout<<"3) ** Anonimo **\n"<<endl;
  cin>>opc;
  switch(opc) {
    case 1:
   cout<< " Usted a accedido como administrador \n"<<endl;
   cout<<"Identifiquese para continuar: \n"<<endl;
    break;
    case 2:
  cout<<" Usted a accedido como un Usuario Registrado \n"<<endl;
  cout<<" Identifiquese para continuar \n"<<endl;
  cout<<"Ingrese su nombre y apellido"<<endl;
  
    break;
    case 3: 
    cout<< "Usted accedio como anonimo" <<endl;
    break;
    }
  return 0;
} 
