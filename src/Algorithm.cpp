#include "Algorithm.h"
#include <random>
#include <algorithm>
#include <time.h>

Algorithm::Algorithm() {

}

//Each algorithm needs a drawer to draw the new window when changes are made in the algorithm.
Algorithm::Algorithm(Drawer new_draw) {
    draw = new_draw;
}

//Initialise and run the algorithm, this arbitrary test case is bubble sort. 
void Algorithm::init(std::vector<int>& nums, sf::RenderWindow& window) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                //We call draw everytime a change is made when our algorithm runs.
                draw.draw(nums, window);
            }
        }
    }
}


std::vector<int> Algorithm::generate_nums(int n, int height) {
    std::vector<int> nums;
    for (int i = 0; i < n; i++) {
        nums.push_back(0+height/n * i);
    }
    auto rng = std::default_random_engine {};
    std::random_shuffle(nums.begin(), nums.end());
    
    return nums; 
}