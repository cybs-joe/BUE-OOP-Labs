#include <iostream>
#include "Engine-secC-p2.h"
#include <string>
using namespace std;

Engine::Engine(){
    horsePower = 0;
    type = "";
}
Engine::Engine(int hp , string ty){
    horsePower = hp;
    type = ty;
}

void Engine::printEngineDetails(){
    cout << horsePower << " HP " << type;
}
