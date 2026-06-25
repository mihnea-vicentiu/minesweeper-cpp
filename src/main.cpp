#include "minesweeper/Application.h"
#include "minesweeper/Entity.h"
#include "minesweeper/Exceptions.h"
#include "minesweeper/MenuFactory.h"

#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<Application> minesweeper = MenuFactory<Application>::createApp();
    minesweeper->setCurrent(MenuFactory<Application>::createApp());
    try {
        minesweeper-> processEvents();
    } catch(load_font_error& err) {
        std::cout << err.what();
    } catch(application_error& err) {
        std::cout << err.what();
    }
    return 0;
}
