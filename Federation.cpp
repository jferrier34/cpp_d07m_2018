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
}

Federation::Starfleet::Ship::~Ship(void)
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
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
    std::cout << "The independant ship Greok just finished its construction." << std::endl;
    std::cout << "It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
}

Federation::Ship::~Ship(void)
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{
}

std::string Federation::Starfleet::Captain::getName()
{
    return (this->_name);
}

int Federation::Starfleet::Captain::getAge()
{
    return (this->_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

void Federation::Ship::checkCore()
{
    bool stable_or_not = this->_core->checkReactor()->isStable();
    std::string table = stable_or_not ? "stable " : "unstable ";
    std::cout << "USS " << this->_name <<  ": The core is " << table << "at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Starfleet::Captain *captain)
{
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." <<std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign "  <<  this->_name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}








bool Federation::Starfleet::Ship::move()
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (qr->isStable() == true && this->_location != this->_home) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != this->_home && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}









bool Federation::Ship::move()
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (qr->isStable() == true && this->_location != this->_home) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(int warp, Destination d)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != d && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(int warp)
{
    WarpSystem::Core *ws = this->_core;
    WarpSystem::QuantumReactor *qr = ws->checkReactor();

    if (this->_location != this->_home && warp <= this->_maxWarp && qr->isStable() == true) {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}
