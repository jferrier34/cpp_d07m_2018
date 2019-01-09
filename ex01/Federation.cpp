//
// EPITECH PROJECT, 2019
// Federation.cpp
// File description:
// ex00
//

#include "Federation.hpp"

Federation::Ship(int length, int width, std::string _name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;

    std::cout << "The independant ship " << name <<  "just finished its construction. It is "
    << length << " m in length and " << width << "m in width." << std::endl;
}

Federation::~Ship() {
}

Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = _core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
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


Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->name = _name;
    str::cout << "Ensign " << this->_name << ", awaiting orders." << str::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{
}

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
    this->_length = length;
    this->_width = width;
    this->_name = name;

    std::cout << "The independant ship " << name <<  "just finished its construction. It is "
    << length << " m in length and " << width << "m in width." << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;   
}

void Federation::Starfleet::Ship::checkCore()
{
    bool stable_or_not = this->_core->checkReactor()->isStable();
    std::string table = stable_or_not ? "stable" : "unstable";
    std::cout << "USS " << this->_name <<  ": The core is " << table << " at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
    this->_age = 0;
}

Federation::Starfleet::Captain::~Captain()
{
}

std::string Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    this->_captain = captain;

    std::cout << captain->getName() << ": I'm glad to be be the captain of the USS "
    << this->_name << "." << std::endl; 
}

std::string Federation::Starfleet::Captain::getName()
{
    return this->_name;
}

int Federation::Starfleet::Captain::getName()
{
}

int:: Federation::Starfleet::Captain::getAge()
{
    return this->_age;
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

int main()
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    Federation::Starfleet::Captain James("James T. Kirk");
    Federation::Starfleet::Ensign Ensign("Pavel Chekov");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core(&QR2);

    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    UssKreog.promote(&James);

    Borg::Ship Cube;
    Cube.setupCore(&core2);
    Cube.checkCore();

    return 0;
}




