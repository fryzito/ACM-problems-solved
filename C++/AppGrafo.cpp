#include<cstdio>
#include<iostream>
#include<cstddef>
using namespace std;
class Object {
	//attributos
	string aCodigo;
	string aName;
	int aCreditos;
	string aRequisitos;
	//Metodos
	//Constructores
	public: Object() {
		aCodigo = "";
		aName = "";
		aCreditos = 0;
		aRequisitos = "";
	}
	public: Object(string pCodigo, string pName, int pCreditos, string pRequisitos) {
		aCodigo = pCodigo;
		aName = pName;
		aCreditos = pCreditos;
		aRequisitos = pRequisitos;
	}
	public:
	//propiedades
	void setRequisitos(string pRequisitos) {
		aRequisitos = pRequisitos;
	}
	string getRequisitos(void) {
		return aRequisitos;
	}
	void setCreditos(int pCreditos) {
		aCreditos = pCreditos;
	}
	int getCreditos(void) {
		return aCreditos;
	}
	void setName(string pName) {
		aName = pName;
	}
	string getName(void) {
		return aName;
	}
	void setCodigo(string pCodigo) {
		aCodigo = pCodigo;
	}
	string getCodigo(void) {
		return aCodigo;
	}
};
class CListaOrdenada {
	int a, b;
	public:
	//metodos
	//constructores
};
class CGrafo {
	//atributos
	Object aVertice;
	CListaOrdenada aLista;
	CGrafo *aSubGrafo;
	//metodos
	//constructores
	public: CGrafo(){
		Object newobj;
		aVertice = newobj;
		aLista = CListaOrdenada();
		CGrafo newgrafo;
		aSubGrafo = &newgrafo;
	}
	public: CGrafo(Object pVertice, CListaOrdenada pLista, CGrafo pSubGrafo) {
		aVertice = pVertice;
		aLista = pLista;
		aSubGrafo = &pSubGrafo;
	}
	public:
	//propiedades
	void setSubGrafo(CGrafo pSubGrafo) {
		aSubGrafo = &pSubGrafo;
	}
	CGrafo getGrafo(void) {
		return *aSubGrafo;
	}
	void setLista(CListaOrdenada pLista) {
		aLista = pLista;
	}
	CListaOrdenada getLista(void) {
		return aLista;
	}
	void setVertice(Object pVertice) {
		aVertice = pVertice;
	}
	Object getVertice(void) {
		return aVertice;
	}
	//otros metodos
	bool estabacio() {
		return (aVertice.getCodigo() == "");
	}
	
	bool existevertice(Object vert) {
		if(estabacio() || aVertice.getCodigo() != vert.getCodigo())
			return false;
		else
			if(aVertice.getCodigo() == vert.getCodigo()) 
				return true;
			else{
				CGrafo aux;
				aux = *aSubGrafo;
				return aux.existevertice(vert);
			}
	}
	void AgregarVert(Object vert) {
		if(estabacio() || vert.getCodigo() != aVertice.getCodigo()) {
			CGrafo newgrafo (aVertice, aLista, *aSubGrafo);
			aSubGrafo = &newgrafo;
			aVertice = vert;
			CListaOrdenada newlista;
			aLista = newlista;
		}
	}
	void agregarvertice(Object vert) {
		if(!existevertice(vert)) AgregarVert(vert);
	}
	void MostrarGrafo() {
		//code
	}
	void AgregarArcos(Object vert1, Object vert2) {
		//code
	}
};
int main() {
	Object vert1 ("090264","Algoritmica",4,"pre32");
	Object vert2 ("090654","Algoritmica",5,"pre41");
	Object vert3 ("090452","Algoritmica",3,"pre51");
	Object vert4 ("090227","Algoritmica",2,"pre84");
	int iesimo;
	CGrafo grafo;
	cout << "=========GRAFO DINAMICO ORIENTADO==========" <<endl;
	cout << "==============================================" <<endl;
	grafo.agregarvertice(vert1);
	grafo.agregarvertice(vert2);
	cout << "Grafo con dos vertices" <<endl;
	cout << "===================" <<endl;
	grafo.MostrarGrafo();
	grafo.agregarvertice(vert3);
	grafo.agregarvertice(vert4);
	cout << "Grafo con cuatro vertices" <<endl;
	cout << "===================" <<endl;
	grafo.MostrarGrafo();
	grafo.AgregarArcos(vert2,vert1);
	grafo.AgregarArcos(vert1,vert3);
	grafo.AgregarArcos(vert2,vert4);
	grafo.AgregarArcos(vert1,vert4);
	grafo.AgregarArcos(vert4,vert3);
	cout << "Grafo que representa la figura" <<endl;
	cout << "=======================" <<endl;
	grafo.MostrarGrafo();
}
