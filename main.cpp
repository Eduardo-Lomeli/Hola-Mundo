#include <iostream>

#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
#include <Animacion.hpp>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais, mascota;
    Alimento carne(10);

    firulais.Comer(carne);

    firulais.Jugar();
    firulais.Jugar();
    firulais.Jugar();

    cout
        << "Vida de firulais "
        << firulais.LeerVida()
        << endl;
    Dibujo dibujo("./assets/Dog.txt");

    Dibujo dibujo2("./assets/Fish.txt");
    list<Dibujo>dibujos;
    dibujos.push_back(dibujo);
    dibujos.push_back(dibujo2);
    Animacion anim(dibujos);

    return 0;
}
