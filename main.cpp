#include "includes.h"

int main(){

    cbEngine Engine(800, 600);

    std::cout << "Main" << std::endl;
    Engine.runGame(Engine.getWindow(), Engine.getEvent());


    return 0;
}
