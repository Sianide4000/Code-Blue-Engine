#ifndef STATEMANAGER_H
#define STATEMANAGER_H
#include "../includes.h"

class stateManager
{
    bool runonce = true; // Boolean for running testing conditions only once (otherwise they'd run non stop alongside window.)

    int stateValue = 0;
    sf::Clock clock;
    float elapsed;

    public:
        stateManager();

        virtual ~stateManager();
        void setState(int State);
        int getState();
        void selectState(sf::RenderWindow &window, sf::Event &event);


    protected:

    private:
};

#endif // STATEMANAGER_H
