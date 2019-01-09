//
// EPITECH PROJECT, 2019
// WarpSystem.hpp
// File description:
// ex00
//

#ifndef WARPSYSTEM_HPP
#define WARPSYSTEM_HPP

#include <iostream>
#include <string>

namespace WarpSystem
{
        class QuantumReactor {
            private:
            bool _stability;

            public:
            ~QuantumReactor();
            QuantumReactor();
            bool isStable();
            void setStability(bool);
        };

        class Core {
            private:
                QuantumReactor *_coreReactor;
            public:
                ~Core();
                Core(QuantumReactor * reactor);
                QuantumReactor *checkReactor();
        };
}

#endif

