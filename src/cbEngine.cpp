#include "cbEngine.h"

cbEngine::cbEngine(int screenWidth, int screenHeight)
: mWindow(sf::VideoMode(screenWidth, screenHeight, 32), "App")

{


}

cbEngine::~cbEngine()
{
    //dtor
}

sf::RenderWindow& cbEngine::getWindow()
{
    if (runonce == true){
    std::cout << "Window Created" << std::endl;
    }

   return  mWindow;
}
sf::Event& cbEngine::getEvent(){
    return e;
}
void cbEngine::eventLoop(sf::RenderWindow &window, sf::Event event){
    if(runonce == true){

    std::cout << "Event Loop Initialized" << std::endl;
}
    while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            window.close();
            std::cout << "Window Exited by User." << std::endl;
        }

    }
}
void  cbEngine::runGame(sf::RenderWindow &window, sf::Event &event){
    stateManager sManager; //Create instance of stateManager class
    splashScreen splaScreen;


    while(window.isOpen()){
            if (runonce == true){
            std::cout << "Window open" << std::endl;
            }
            //---Do Only if Debugging---//
    // Check to see if runonce is true; if true output to console that game is starting. //
    while (debug == true){
        if (runonce != false){
            std::cout << "Starting game..." << std::endl;
            runonce = false;
        }
        break;
    }
    // End of Debug Section //

    // Loop Structure 1.Clear window (Color = black) 2. Call stateManager 3. Display window //
    eventLoop(window, e); // Call event loop Initialize it with window and Event object
    window.clear(sf::Color::White); //Clear window black
    sManager.selectState(window, event);
    window.display(); // Display everything to screen
    }
}


