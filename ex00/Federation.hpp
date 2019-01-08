//
// EPITECH PROJECT, 2019
// Federation.hpp
// File description:
// ex00
//

#ifndef FEDERATION_HPP
#define FEFERATION_HPP

#include <iostream>
#include <string>
#include "WarpSystem.hpp"

namespace Federation 
{
    namespace Starfleet {
        class Ship {
            private:
            std::string _name;
            int _length;
            int _width;
            short _maxWarp;
            WarpSystem::Core *_core;

            public:
            Ship(int length, int width, std::string name, short maxWarp);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
        };
}

class Ship {
            private:
            std::string _name;
            int _length;
            int _width;
            short _maxWarp;
            WarpSystem::Core *_core;

            public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
        };
}


#endif