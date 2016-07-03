#ifndef MOUSEMANAGER_H
#define MOUSEMANAGER_H
#include "../includes.h"

class mouseManager
{
    sf::Mouse mouse;

    public:
        mouseManager();
        virtual ~mouseManager();

        sf::Vector2i mousePos(sf::RenderWindow &window, sf::Mouse &mouse);
    protected:

    private:
};

#endif // MOUSEMANAGER_H
