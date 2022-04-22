#include <SFML/Graphics.hpp>
#include "Algorithm.h"
#include "Drawer.h"
#include <iostream>

int main()
{
    //We initiate in fullscreen, can add other support later but fullscreen + AltF4 works fine for now.
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML works!", sf::Style::Fullscreen);

    //Get Width and Height of fullscreen mode. (Resolution of computer)
    auto temp = sf::VideoMode::getDesktopMode();
    unsigned int width = temp.width;  
    unsigned int height = temp.height;

    //Initiate algorithm and drawer.
    //TODO #1 Add virtual algorithm support, support for polymorphism.
    Drawer Drawer(width, height);
    Algorithm Algorithm(Drawer);
    
    //Generate nums using algorithm method. Maybe doesnt nee to be in algorithm class?
    std::vector<int> nums = Algorithm.generate_nums(1000, height);

    //Main sfml loop
    while (window.isOpen())
    {
        //Check if window is closed.
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //SFML sub loop -> Algorithm runs which will call draw everytime data is updated. 
        Algorithm.init(nums, window);
    }

    return 0;
}