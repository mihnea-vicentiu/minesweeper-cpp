#pragma once

#include "GameTextures.h"
#include "WindowManager.h"

#include <SFML/Graphics.hpp>

class Smiley {
private:
    sf::Sprite smiley, settings;
    bool PRESSED, PRESSED2;
public:
    Smiley();
    ~Smiley() = default;

    void pressCellSmiley();
    void pressCellSettings();
    bool containsSmiley(const sf::Vector2i& pos);
    bool containsSettings(const sf::Vector2i& pos);

    void setSmiley();
    void setIDK();
    void setWin();
    void setLoss();
    void setPos();
    void drawSmiley(sf::RenderWindow& app);
};
