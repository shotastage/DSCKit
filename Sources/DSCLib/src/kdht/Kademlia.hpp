//
//  Kademlia.hpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/27.
//

#ifndef Kademlia_hpp
#define Kademlia_hpp

#include <future>

namespace DSC::Kademlia
{

    class Kademlia
    {
    public:
        void ping();
        void store();
        void findNode();
        void findValue();
    };

}

#endif /* Kademlia_hpp */
