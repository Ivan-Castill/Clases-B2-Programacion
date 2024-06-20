#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string invertir(){
	string palabra,palabraI;
	cout<<"\n Ingrese una palabra: ";cin>>palabra;
	palabraI=palabra;//usar resize
	for (int i=0;i<palabra.length();i++){
		palabraI[i]=palabra[palabra.length()-1-i];
	}
	cout<<" Palabra Invertida: "<<palabraI<<endl;
}


//arreglo
//tipo_de_dato nombre variable={valor1,valor2,valor3,...,valorN}
void arreglo(){
	double a[6]={25.1,34.2,5.25,7.45,6.09,7.54};
//	        a  =  0   1     2    3    4    5
	cout<<a[2]+a[0];//muy util para finansas......(0w0)
}
void arreglo2(){
	int numeros[6]={10,20,30,40,50,60};
	//otro tipo de arreglos...
	int n[]={3,4,5};//no es neseario declarar el tamaño del arreglo....
	char c[]={'L','u','i','s'};
	string ciudad[]={"Quito","Cuenca","Loja","Tulcan","Mira","Ibarra"};//Los string van entre comilla doble.
	cout<< ciudad[0];
}
void longitud_del_arreglo(){
	char arreglo1[10]={'a','b','c','d'};
	int size=sizeof(arreglo1)/sizeof(arreglo1[0]);
	for(int i=0;i<size;i++){
		cout<<arreglo1[i]<<endl;
	}
}
void longitud_del_arreglo2(){
	string dias[7]={"lunes","martes","miercoles","jueves","viernes"};
	int size=sizeof(dias)/sizeof(dias[0]);
	for(int i=0;i<size;i++){
		cout<<dias[i]<<endl;
	}
}
//ejercicios
void ejer1(){
	int arr;
	cout<<" Ingrese el numero que desea en el arreglo: ";cin>>arr;
	int arreglo[arr];
	int sumar;
	for(int i=0;i<arr;i++){
		cout<<" Ingrese el numero que va sumar: ";
		cin>>arreglo[i];
		sumar+=arreglo[i];
	}
	cout<<" La suma es: "<<sumar;
}
void ejer2(){
	int arreglo[]={1,3,5,7};
	int n;
	cout<<" Ingrese el numero a buscar: ";cin>>n;
	bool resultado=false;
	for(int i=0;i<size;i++){
		if(n==arreglo[i]){
			resultado=true;
		}
	}
	if(resultado){cout<<" El numero esta en la lista";}
	else{cout<<"el numero no esta en la lista",
	}
}
int main(){
	ejer2();
//	ejer1();
//	longitud_del_arreglo2();
//	longitud_del_arreglo();
//	arreglo2();
//	arreglo();
//	invertir();
	return 0;
}
