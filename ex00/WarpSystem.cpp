//
// EPITECH PROJECT, 2019
// WarpSystem.cpp
// File description:
// ex00
//

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

WarpSystem::Core::Core(QuantumReactor *reactor)
{
    this->_coreReactor = reactor;   
}

WarpSystem::Core::~Core()
{

}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
 return this->_coreReactor;
}

bool WarpSystem::QuantumReactor::isStable()
{
    return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}
