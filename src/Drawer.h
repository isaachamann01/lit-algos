#ifndef DRAWER_H
#define DRAWER_H

#include <SFML/Graphics.hpp>
#include <vector>

class Drawer {
    public:
        Drawer();
        Drawer(int new_width, int new_height);
        void draw(std::vector<int>& nums, sf::RenderWindow& window);
    private:
        int width;
        int height;
};


#endif