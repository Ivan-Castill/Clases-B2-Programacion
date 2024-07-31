#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

struct libro {
    string codigo;
    string titulo;
    int anio;
    bool estado; // true: disponible, false: prestado
};

// Vector de libros inicializado correctamente
vector<libro> listalibros = {
    {"L001", "Una_breve_historia_del_tiempo", 1988, true},
    {"L002", "Don_Quijote_de_la_Mancha", 1682, true},
    {"L003", "La_sombra_del_viento", 1975, true},
    {"L004", "Padre_rico_Padre_pobre", 1458, true},
    {"L005", "El_nombre_de_la_rosa", 1980, true}
};

// Función para devolver la lista de libros
vector<libro> leer(){
	vector<libro> libros;
	libros = listalibros;
	return libros;
}
libro buscar(const string& codigo){
	libro libroB;
	libroB.codigo="No encontrado";
	for (const auto&li:leer()){
		if(codigo==li.codigo){
		libroB=li;
		break;
		}
	}
	return libroB;
}

void agregar(const libro& nuevoLibro){
	auto it=find_if(listalibros.begin(), listalibros.end(),
		[&] (const libro& l) {return l.codigo==nuevoLibro.codigo;} );
		if(it==listalibros.end()){
			listalibros.push_back(nuevoLibro);
			cout<<"Libro con codigo "<<nuevoLibro.codigo<<" ha sido agregado.\n"<<endl;
		}else{
			cout<<"El libro co codigo"<<nuevoLibro.codigo<<"ya Existe."<<endl;
		}
}
void eliminar(const string& codigo){
	auto it= remove_if(listalibros.begin(),listalibros.end(),
		[&](const libro& l) { return l.codigo == codigo;});
		if (it != listalibros.end()){
			listalibros.erase(it,listalibros.end());
			cout<<"\n LIBRO CON EL CODIGO "<<codigo<<" ha sido eliminado.\n"<<endl;
		}else{
			cout<<"\n El libro con el codigo "<< codigo<<" no se encontro.\n"<<endl;
		}
}
void ActualizarLibro(const libro& libroActualizado){
	auto it = find_if(listalibros.begin(), listalibros.end(), 
                      [&](const libro& libro) { return libro.codigo == libroActualizado.codigo; });
    if (it != listalibros.end()){
    	it ->titulo = libroActualizado.titulo;
    	it ->anio= libroActualizado.anio;
    	it ->estado= libroActualizado.estado;
    	cout<<"libro con el codigo "<<libroActualizado.codigo<<" ha sido actualizado\n"<<endl;
	}else{
		cout<<"El libro con el codigo "<<libroActualizado.codigo<<" no se encontró\n"<<endl;
	}
}
void ActualizarLibro2(const libro& libroActualizado){
	auto it = find_if(listalibros.begin(), listalibros.end(), 
                      [&](const libro& libro) { return libro.codigo == libroActualizado.codigo; });
    if (it != listalibros.end()){
    	it ->titulo = libroActualizado.titulo;
    	it ->anio= libroActualizado.anio;
    	it ->estado= libroActualizado.estado;
    	cout<<"libro con el codigo "<<libroActualizado.codigo<<" esta ["<<(libroActualizado.estado ? "Disponible" : "Prestado")<<"]\n"<<endl;
	}else{
		cout<<"El libro con el codigo "<<libroActualizado.codigo<<" no existe"<<endl;
	}
}

int main() {
    // Mostrar los libros leídos desde la función leer()
    for (const auto& li : leer()) {
        cout << li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") << endl;
    }
    libro li = buscar("L001");
    cout <<"\n"<< li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") <<"\n"<< endl;
             
    agregar ({"L006","Nuevo_Libro",2024,true});
    for (const auto& li : leer()) {
        cout << li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") << endl;
    }
    
    eliminar("L100");
    for(const auto& li :leer()){
    	cout << li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") << endl;
	}
	
	cout<<"---------------------------------------------------------------------"<<endl;
	ActualizarLibro ({"L003","La_sombra_del_viento",2024,false});
	for (const auto& li : leer()) {
        cout << li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") << endl;
    }
    cout<<"---------------------------------------------------------------------"<<endl;
	ActualizarLibro2 ({"L003","La_sombra_del_viento",2024,false});
	for (const auto& li : leer()) {
        cout << li.codigo << "; " << li.titulo << ", " << li.anio << "; " 
             << (li.estado ? "Disponible" : "Prestado") << endl;
    }
    return 0;
}

