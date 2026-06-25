#pragma once

#include "Entity.h"

#include <vector>

class Application: public Entity {
private:
    std::vector <sf::Text> difficulty;
    std::vector <char> key;
    bool STEXT;
    int idx;
public:
    Application();
    void clear();
    void inc();
    void dec();
    void setTextExplicit();
    static void click(sf::Text& font);
    void draw() override;
    void update() override;
};
