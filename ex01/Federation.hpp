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
            WarpSystem::Core *_core;

        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
        };

        class Captain {
            private:
            std::string _name;
            int _age;

            public:
            Captain(std::string name);
            ~Captain();
            std::string getName();
            int getAge();
            void setAge(int age);
        };

        class Ensign {
            private:
            std::string _name;

            public:
            Ensign(std::string _name);
            ~Ensign();
        };
}


#endif