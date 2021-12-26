//
//  DSCFS.cpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/26.
//

#include "DSCFS.hpp"
#include <iostream>

// Constructor
DSFileManager::DSFileManager(DSFile target) {
    targetFile = target;
};

void DSFileManager::write() {
    std::cout << "Write file section" << std::endl;
};

void DSFileManager::read() {
    std::cout << "Read file section" << std::endl;
};

void DSFileManager::find() {
    std::cout << "Find file section" << std::endl;
};

void DSFileManager::clear() {
    std::cout << "Clear file section" << std::endl;
};

void DSFileManager::joinBricks() {
    std::cout << "Join brick section" << std::endl;
};

void DSFileManager::recover() {
    std::cout << "Recover brick section" << std::endl;
};
