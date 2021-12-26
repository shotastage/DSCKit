//
//  DSCFS.cpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/26.
//

#include "DSCFS.hpp"
#include <iostream>

void DSFileManager::write() {
    std::cout << "Write file section" << '\n';
};

void DSFileManager::read() {
    std::cout << "Read file section" << '\n';
};

void DSFileManager::find() {
    std::cout << "Find file section" << '\n';
};

void DSFileManager::clear() {
    std::cout << "Clear file section" << '\n';
};

void DSFileManager::joinBricks() {
    std::cout << "Join brick section" << '\n';
};

void DSFileManager::recover() {
    std::cout << "Recover brick section" << '\n';
};
