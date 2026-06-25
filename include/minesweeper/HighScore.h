#pragma once

#include "Entity.h"

#include <chrono>
#include <fstream>
#include <vector>

class HighScore: public Entity {
private:
    std::ifstream fin;
    std::vector <sf::Text> v;
    sf::Text NameInput;
    int idx;
public:
    HighScore();
    void inc();
    void dec();
    static bool isLetterKeyPressed(sf::Keyboard::Key keyCode);
    void update() override;
    void draw() override;
};
