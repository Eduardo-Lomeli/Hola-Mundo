#include<iostream>
using namespace std;

class Personaje
{
private:
    
public:
    Personaje() {}
    ~Personaje() {}
    void Hablar(){
        cout<<"Hola enanx"<<endl;
    }
};



class Enano : public Personaje
{
private:
    float altura;
    int edad;
    int vida;
public:
    Enano() {}
    ~Enano() {}
    void Inicializar(){
        this->altura=2;
        this->edad=150;
        this->vida=10;
    }
    void Comer(){
        this->vida += 1;
    }
};

class Duende : public Personaje
{
private:
int salud;
public:
    Duende() {}
    ~Duende() {}
};

int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout<<"Tamaño tipos de datos nativos:"<<endl;
    cout<<"Tamaño int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Tamaño bool: "<<sizeof(bool)<<" bytes"<<endl;
    cout<<"Tamaño float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Tamaño double: "<<sizeof(double)<<" bytes"<<endl;
    cout<<"Tamaño char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"Tamaño enano: "<<sizeof(Enano)<<" bytes"<<endl;
    
    cout<<endl;
    cout<<"Memoria estatica en C/C++"<<endl;
    cout<<"Direccion de int:"<<&i <<endl;
    cout<<"Direccion de bool:"<<&b <<endl;
    cout<<"Direccion de float:"<<&f <<endl;
    cout<<"Direccion de double:"<<&d <<endl;
    cout<<"Direccion de char:"<<static_cast<void *>(&c) <<endl;
    cout<<"Direccion de Enano:"<<&e <<endl;

    cout<<endl;
    cout<<"Memoria Dinamica en C"<<endl;
    cout<<"Direccion Dinamica:"<<malloc(2)<<endl;
    cout<<"Direccion Dinamica int:"<<malloc(sizeof(int))<<endl;

    //casteo de punteros
    Enano* direccion = (Enano*)malloc(sizeof(int));
    direccion->Inicializar();

    //Punteros en C++
    Enano* instacia = new Enano();

    //Operador ->
    instacia->Comer();
    instacia->Hablar();

    //Polimorfismo
    Personaje* P = new Duende();
    Personaje* Q = new Enano();

    P->Hablar();
    Q->Hablar();

    cout<<"Direccion de P:"<<P<<endl;

    //Arreglos
    Duende duendes[10];

    cout<<endl;
    cout<<&duendes[0]<<endl;
    cout<<&duendes[1]<<endl;
    cout<<&duendes[2]<<endl;
    cout<<&duendes[1]<<endl;
    cout<<&duendes[4]<<endl;

    //Conversion a Direccion
    cout<<endl;
    cout<<&duendes[0]+0<<endl;
    cout<<&duendes[0]+1<<endl;
    cout<<&duendes[0]+2<<endl;
    cout<<&duendes[0]+3<<endl;
    cout<<&duendes[0]+4<<endl;

    cout<<endl;
    cout<<duendes+0<<endl;
    cout<<duendes+1<<endl;
    cout<<duendes+2<<endl;
    cout<<duendes+3<<endl;
    cout<<duendes+4<<endl;

    return 0;
}
