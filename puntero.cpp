#include<iostream>
using namespace std;
 main(){
int valor, valor2, *p_valor;
valor = 20;
p_valor = &valor;
cout<<"valor"<<*p_valor<<endl;
cout<<"direccion "<<*p_valor<<endl;
cout<<"direccion2"<<*p_valor<<endl;
cout<<"----------------------";
valor2 = 25;
p_valor= &valor2;
cout<<"direccion2"<<p_valor<<endl;

 }
