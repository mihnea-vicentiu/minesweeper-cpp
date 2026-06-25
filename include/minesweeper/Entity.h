#pragma once

#include "Timer.h"
#include "WindowManager.h"

#include <sstream>
#include <algorithm>
#include <chrono>
#include <fstream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

class Entity: public std::enable_shared_from_this<Entity> {
protected:
    WindowManager* windowManager; // So I don't use WindowManager::getInstance() every time I need it
    std::shared_ptr <Entity> currInstance;
    static std::string playerName;
private:
    std::shared_ptr <Entity> curr;
    std::vector <std::shared_ptr <Entity>> games;
    std::vector <std::chrono::seconds> times;
    std::vector <bool> isRunning;
public:
    Entity();
    Entity& operator = (const Entity& other) = default;
    virtual ~Entity() = default;
    virtual void draw() = 0;
    virtual void update() = 0;
    std::shared_ptr<Entity> getInstance() const;
    static void pushHighScore(const std::string& GameType);
    void processEvents();
    void setCurrent(std::shared_ptr<Entity> newCurr);
};
