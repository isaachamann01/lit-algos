#ifndef ALGORITHM
#define ALGORITHM

#include <vector>
#include "Drawer.h"

class Algorithm {
    public:
        Algorithm();
        Algorithm(Drawer new_drawer);
        //init will run the algorithm.
        //algorithms will draw on each array access and comparison. 
        void init(std::vector<int>& nums, sf::RenderWindow& window);
        std::vector<int>generate_nums(int n, int height);
    private:
        Drawer draw;
};

#endif