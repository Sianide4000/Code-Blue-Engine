#ifndef MENUSCREEN_H
#define MENUSCREEN_H
#include "../includes.h"
#include "cbEngine.h"

class menuScreen
{
    sf::Text Start;
    sf::Text Exit;
    sf::Font arial;
    sf::Mouse mouse;
    public:
        menuScreen();
        virtual ~menuScreen();
        void run(sf::RenderWindow &window, sf::Event &event);


    protected:

    private:
};

#endif // MENUSCREEN_H
