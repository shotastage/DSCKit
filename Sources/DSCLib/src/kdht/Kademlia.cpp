//
//  Kademlia.cpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/27.
//

#include <iostream>
#include <future>
#include "Kademlia.hpp"

void Kademlia::ping() {
    std::cout << "KD::PING" << std::endl;
};

void Kademlia::store() {
    std::cout << "KD::STORE" << std::endl;
};

void Kademlia::findNode() {
    std::cout << "KD::FIND_NODE" << std::endl;
};

void Kademlia::findValue() {
    std::cout << "KD::FIND_VALUR" << std::endl;
};
