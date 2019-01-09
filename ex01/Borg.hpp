//
// EPITECH PROJECT, 2019
// Borg.hpp
// File description:
// ex01
//

#ifndef _BORG_HPP_
#define _BORG_HPP_

#include "WarpSystem.hpp"
#include <iostream>
#include <string>

namespace Borg {
        class Ship {
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