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
#include "Destination.hpp"

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
            Destination _location;
            Destination _home;

            public:
            Ship(int length, int width, std::string name, short maxWarp);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            void promote(Starfleet::Captain *captain);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
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
            int _maxWarp;
            WarpSystem::Core *_core;
            Destination _location;
            Destination _home;


        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
        };
}


#endif
