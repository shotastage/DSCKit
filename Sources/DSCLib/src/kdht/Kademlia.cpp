//
//  Kademlia.cpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/27.
//

#include <iostream>
#include <future>
#include "Kademlia.hpp"

using std::cout;
using std::endl;

void Kademlia::ping() {
    cout << "KD::PING" << endl;
};

void Kademlia::store() {
    cout << "KD::STORE" << endl;
};

void Kademlia::findNode() {
    cout << "KD::FIND_NODE" << endl;
};

void Kademlia::findValue() {
    cout << "KD::FIND_VALUR" << endl;
};
