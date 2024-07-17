#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void leer2(string ruta){
	ifstream archivo(ruta);
	string linea;
	if (archivo.is_open()){
		while (getline(archivo,linea)){
			cout<<linea<<endl;
		}
		archivo.close();
	}else{
		cerr<<" error al tratar de abrir el archivo "<<endl;
	}
}

void leer(string ruta){
	ifstream archivo(ruta);
	string contenido;
	if (archivo.is_open()){
		stringstream buffer;
		buffer<<archivo.rdbuf();
		contenido=buffer.str();
		cout<<contenido<<endl;
		archivo.close();
	}else {
		cerr<<" no se pudo abrir el archivo para lectura. "<<endl;
	}
}
void escribir(string ruta,string informacion){
	ofstream archivo(ruta);
	if (archivo.is_open()){
		archivo<<informacion;
		archivo.close();
		cout<<" Archivo creado y datos escritos exitozamente. "<<endl;
	}else{
		cerr<< " no se pudo abrir el archivo."<<endl;
	}
}
void escritura(string ruta,string informacion){
	fstream archivo(ruta,ios::out);
	if (archivo.is_open()){
		archivo<<informacion<<endl;
		archivo.close();
	}else{
		cerr<<" No se  pudo abrir el archivo para escritura."<<endl;
	}
}
void actualizacion(string ruta,string info){
	fstream archivo(ruta, ios::in| ios::out);
	if(archivo.is_open()){
		archivo.seekp(0,ios::end);
		archivo<<info;
		archivo.close();
	}else{
		cerr<<"no se pudo abrir el archivo para lectura y escritura."<<endl;
	}
}
void actualizacion2(string ruta,string info){
	fstream archivo(ruta, ios::in| ios::out |ios::app);
	if(archivo.is_open()){
		archivo.seekp(0,ios::end);
		archivo<<info;
		archivo.close();
	}else{
		cerr<<"no se pudo abrir el archivo para lectura y escritura."<<endl;
	}
}
int main(){
//	leer("C:/Users/PROGRAMACION/Desktop/ivan.txt");
//	leer2("C:/Users/PROGRAMACION/Desktop/hola.txt");
//	leer2("C:/Users/PROGRAMACION/Desktop/que.txt");
//	leer2("C:/Users/PROGRAMACION/Desktop/hace.txt");
//	escribir("C:/Users/PROGRAMACION/Desktop/archivo.txt","Hoy es miercoles!\n Este es un archivo creado en c++.\n");
//	escritura("C:/Users/PROGRAMACION/Desktop/archivo2.txt","Escritura con fsteam.*-*");
//	actualizacion("C:/Users/PROGRAMACION/Desktop/archivo110.txt"," linea 1 añadida. \n linea 2 añadida.");
	actualizacion2("C:/Users/PROGRAMACION/Desktop/archivo110.txt"," linea 1 añadida. \n linea 2 añadida.");
	return 0;
}
