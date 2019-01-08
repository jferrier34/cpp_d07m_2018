//
// EPITECH PROJECT, 2019
// Federation.cpp
// File description:
// ex00
//

#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    std::cout << "The ship USS " << this->_name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
    std::cout << "The independant ship Greok just finished its construction." << std::endl;
}

Federation::Starfleet::Ship::~Ship(void)
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;   
}

void Federation::Starfleet::Ship::checkCore(void)
{
    bool stable_or_not = this->_core->checkReactor()->isStable();
    std::string table = stable_or_not ? "stable" : "unstable";
    std::cout << "USS " << this->_name <<  ": The core is " << table << " at the time." << std::endl;
}




Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
}

Federation::Ship::~Ship(void)
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;   
}

void Federation::Ship::checkCore(void)
{
    bool stable_or_not = this->_core->checkReactor()->isStable();
    std::string table = stable_or_not ? "stable " : "unstable ";
    std::cout << "USS " << this->_name <<  ": The core is " << table << "at the time." << std::endl;
}





