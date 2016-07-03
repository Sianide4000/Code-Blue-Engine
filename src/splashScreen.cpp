#include "splashScreen.h"

splashScreen::splashScreen()

{
    if (!arial.loadFromFile("arial.ttf")){
        //Error
    }

    if (!splashTex.loadFromFile("splashscreen.png")){
        //Error
    }

    splashSpr.setTexture(splashTex);
    //ctor
}

splashScreen::~splashScreen()
{
    //dtor
}


void splashScreen::run(sf::RenderWindow &window){

    window.draw(splashSpr);



}


