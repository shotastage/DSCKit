//
//  Kademlia.hpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/27.
//

#ifndef Kademlia_hpp
#define Kademlia_hpp

#include <stdio.h>
#include <future>

class Kademlia {
public:
    void ping();
    void store();
    void findNode();
    void findValue();

private:
    std::future<int> tryPing();
};

#endif /* Kademlia_hpp */
