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

bool Borg::Ship::move()
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (qr->isStable() == true && this->_location != this->_home) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(int warp, Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(int warp)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != this->_home && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}
