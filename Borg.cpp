//
// EPITECH PROJECT, 2019
// Borg.cpp
// File description:
// ex00
//

#include "Borg.hpp"

Borg::Ship::Ship()
{
    this->_maxWarp = 9;
    this->_side = 300;
    
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated" << std::endl;
    std::cout << "Resistance is futile" << std::endl;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
}

void Borg::Ship::checkCore()
{
     bool stable_or_not = this->_core->checkReactor()->isStable();
     std::string table = stable_or_not ? "Everything is in order." : "Critical failure imminent";
}