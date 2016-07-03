#include "menuScreen.h"
mouseManager mouse;

menuScreen::menuScreen()
{
    //ctor
if (!arial.loadFromFile("arial.ttf")){
        //Error
    }
    Start.setCharacterSize(100);

    Start.setColor(sf::Color::Black);
    Start.setFont(arial);
    Start.setString("Start");
    Exit.setCharacterSize(100);

    Start.setColor(sf::Color::Black);
    Start.setFont(arial);
    Start.setString("Start");

}

menuScreen::~menuScreen()
{
    //dtor
}
void menuScreen::run(sf::RenderWindow &window, sf::Event &event){
    mouseManager Mouse;
    std::cout << "Mouse pos: " << Mouse.mousePos(window, mouse ).x << Mouse.mousePos(window, mouse).y << std::endl;
    window.draw(Start);

}


