#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H
#include "../includes.h"

class splashScreen
{
private:
    sf::Font arial;
    sf::Image splashImg;
    sf::Texture splashTex;
    sf::Sprite splashSpr;
    bool runOnce = true;
    public:
        splashScreen();
        virtual ~splashScreen();




        void run(sf::RenderWindow &window);


    protected:

    private:
};

#endif // SPLASHSCREEN_H
