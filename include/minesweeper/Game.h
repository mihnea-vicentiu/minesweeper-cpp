#pragma once

#include "Entity.h"
#include "GameBoard.h"
#include "Smiley.h"

#include <SFML/Graphics.hpp>

#include <memory>

class Game: public Entity {
private:
    std::shared_ptr<GameBoard> board;
    Smiley smiley;
    sf::View view;
    int row, col, nr;
    bool pushed;
public:
    Game(int _row, int _col, int _nr);
    Game& operator=(const Game& other);
    void draw() override;
    void update() override;
    void checkIfEnded();
    int Type() const;
    bool gameStatus() const;
};
