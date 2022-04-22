#include "Drawer.h"

static int TIME_DELAY = 0; 

Drawer::Drawer() {
}

Drawer::Drawer(int new_width, int new_height) {
    width = new_width;
    height = new_height; 
}

void Drawer::draw(std::vector<int>& nums, sf::RenderWindow& window) {
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
            return;
    }
    window.clear();
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        sf::RectangleShape rectangle(sf::Vector2f(float(width)/n,nums[i]));
        rectangle.setFillColor(sf::Color(150,50,250));
        rectangle.setPosition(0 + float(width)/n * i,height - nums[i]);
        window.draw(rectangle);
    }
    window.display();
    sf::sleep(sf::milliseconds(TIME_DELAY));
}