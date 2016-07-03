#ifndef CBENGINE_H
#define CBENGINE_H
#include "../includes.h"


class cbEngine
{
private:

        //Declare Core Variables
        sf::RenderWindow mWindow;  //Create Base window object
        sf::Event e; // Initialize system event object
        bool runonce = true; // Boolean for running testing conditions only once (otherwise they'd run non stop alongside window.)
        bool debug = 1; //If Debug True certain conditions will be met and testing variables will be output to screen(Exclusive to Engine class)

public:
        cbEngine(int screenWidth, int screenHeight); // Initialize Engine with integer screenWidth, screenHeight
        virtual ~cbEngine();
        //Declare core functions//
        //----------------------//
        sf::RenderWindow &getWindow();  //Returns main copy of window object
        sf::Event &getEvent();  //Returns main copy of event object
        void runGame(sf::RenderWindow &window, sf::Event &event); // Game Loop Runs through logic and displays everything to window
        void eventLoop(sf::RenderWindow &window, sf::Event event); //Runs through events


        //---End Declaration---//

    protected:

    private:
};

#endif // CBENGINE_H
