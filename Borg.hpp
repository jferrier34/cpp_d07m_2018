/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP_
#define BORG_HPP_
#include "WarpSystem.hpp"
#include "Destination.hpp"
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
            Destination _location;
            Destination _home;

        public:
            Ship();
            ~Ship();
            void setupCore(WarpSystem::Core *);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
    };
}

#endif
