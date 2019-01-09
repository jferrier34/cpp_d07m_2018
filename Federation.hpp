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
#include "Borg.hpp"

namespace Federation
{
    namespace Starfleet {

          class Captain {
            private:
                std::string _name;
                int _age;
                Starfleet::Captain *captain;

            public:
                Captain(std::string _name);
                ~Captain();
                std::string getName();
                int getAge();
                void setAge(int age);
        };

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
            void checkCore();
            void promote(Starfleet::Captain *captain);
        };

        class Ensign {
            private:
                std::string _name;
            public:
                Ensign(std::string name);
                ~Ensign();
                std::string getName();
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
}


#endif
