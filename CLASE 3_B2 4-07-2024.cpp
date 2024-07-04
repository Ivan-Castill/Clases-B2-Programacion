#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



void matriz(){
	int arreglo_A [4][4]={{1,2,5,8},{1,2,4,5},{1,2,7,7},{8,9,7,9}};
	int arreglo_B [4][4]={{1,2,5,8},{1,2,4,5},{1,2,7,7},{1,1,1,1}};
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			cout<<arreglo_A[i][j]+arreglo_B[i][j]<<"  ";
		}
		cout<<"\n \n";
	}
}
void matriz2(){
	int arreglo_A [4][4];
	int arreglo_B [4][4];
 	cout << "Ingrese los valores para arreglo A (4x4):\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Ingrese el valor para arreglo_A[" << i << "][" << j << "]: ";
            cin >> arreglo_A[i][j];
        }
    }
    cout << "Ingrese los valores para arreglo B (4x4):\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Ingrese el valor para arreglo_B[" << i << "][" << j << "]: ";
            cin >> arreglo_B[i][j];
        }
    }
     cout << "La suma de las dos matrizes de (4x4):\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout<<arreglo_A[i][j]+arreglo_A[i][j]<<" ";
        }
        cout<<"\n \n";
    }
}
void ejercicio_factura(){
	double productos[3][3]={{2,10.5,0},{5,7.2,0},{3,15.0,0}};
	for(int i=0;i<3;++i){
		productos[i][2]= productos[i][0]*productos[i][1];
	}
	cout<<" Cantidad\tPrecio Unitario\tTotal"<<endl;
	for(int i=0;i<3;++i){
		for (int j=0;j<3;++j){
			cout<<productos[i][j]<<"\t\t";
		}
		cout<<endl;
	}	
}

int main(){
//	int arreglo[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	for(int i=0;i<3;++i){
//		for(int j=0;j<3;++j){
//			cout<<"fila "<<i<<", columna"<<j<<": "<<arreglo[i][j]<<endl;
//		}
//	}
//	ejer1();
//	matriz();
//	matriz2();
	ejercicio_factura();
	return 0;
}
