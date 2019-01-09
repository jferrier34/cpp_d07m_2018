/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP_
#define BORG_HPP_
#include "WarpSystem.hpp"
#include <string>
#include <iostream>

namespace Borg
{
    class Ship
    {

        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_core;

        public:
            Ship();
            ~Ship();
            void setupCore(WarpSystem::Core *);
            void checkCore();
    };
}

#endif
