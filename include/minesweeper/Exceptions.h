#pragma once

#include <stdexcept>

class application_error: public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class load_font_error: public application_error {
public:
    load_font_error() : application_error("Font cannot be loaded! Check CMake!\n") {}
};

class load_img_error: public application_error {
public:
    load_img_error(): application_error("Image cannot be loaded! Check CMake.\n") {}
};

class load_texture_error: public application_error {
public:
    load_texture_error(): application_error("Texture cannot be loaded! Check CMake.\n") {}
};
