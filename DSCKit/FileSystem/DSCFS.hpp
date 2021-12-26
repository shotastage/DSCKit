//
//  DSCFS.hpp
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/26.
//

#ifndef DSCFS_hpp
#define DSCFS_hpp

#include <stdio.h>
#include <string>
#include <vector>

typedef struct DSBrick {
    std::string identifier;
    std::string previous;
    std::string next;
    double data;
} DSBrick;

typedef struct DSFile {
    std::string name;
    int64_t blockSize;
    std::vector<DSBrick> bricks;
} DSFile;

class DSFileManager {
public:
    void write();
    void read();
    void find();
    void clear();


private:
    void joinBricks();
    void recover();
};

#endif /* DSCFS_hpp */
