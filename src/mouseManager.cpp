#include "mouseManager.h"

mouseManager::mouseManager()
{
    //ctor
}

mouseManager::~mouseManager()
{
    //dtor
}

sf::Vector2i mouseManager::mousePos(sf::RenderWindow &window, sf::Mouse &Mouse){
    return mouse.getPosition(window);
}



