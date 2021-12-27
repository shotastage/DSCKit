//
//  DSCFS.cpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/26.
//

#include "DSCFS.hpp"
#include <iostream>

using std::cout;
using std::endl;

// Constructor
DSFileManager::DSFileManager(DSFile target) {
    targetFile = target;
};

void DSFileManager::write() {
    cout << "Write file section" << endl;
};

void DSFileManager::read() {
    cout << "Read file section" << endl;
};

void DSFileManager::find() {
    cout << "Find file section" << endl;
};

void DSFileManager::clear() {
    cout << "Clear file section" << endl;
};

void DSFileManager::joinBricks() {
    cout << "Join brick section" << endl;
};

void DSFileManager::recover() {
    cout << "Recover brick section" << endl;
};
