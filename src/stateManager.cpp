#include "stateManager.h"

stateManager::stateManager()
{
    if (runonce == true){
        std::cout << "State Manager Online" << std::endl;
    }
    //ctor
}

stateManager::~stateManager()
{
    //dtor
}

void stateManager::setState(int State){
    stateValue = State;
}
int stateManager::getState(){
    return stateValue;
}
void stateManager::selectState(sf::RenderWindow &window, sf::Event &event){
    //Clock Work
    elapsed = clock.getElapsedTime().asSeconds();
    std::cout << elapsed << std::endl;
    //End Clock
    //Declare screens
    splashScreen splaScreen;
    menuScreen onMenu;
    //End Declaration
    int state = getState(); //Get current state of the union
    switch (state){
        case 0:
            //Display Splash Screen if time is less than 3 When time is over 3 setState to 1 (menu)
            if (elapsed < 3){
        splaScreen.run(window);

            }
            else if (elapsed > 3){
                setState(1);
            }
            break;
        case 1:
            onMenu.run(window, event);

        break;
    }

}


