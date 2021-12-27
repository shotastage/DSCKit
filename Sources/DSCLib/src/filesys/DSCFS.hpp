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

using std::string;
using std::vector;

typedef struct DSBrick {
    std::string identifier;
    std::string previous;
    std::string next;
    double data;
} DSBrick;

typedef struct DSFile {
    string name;
    int64_t blockSize;
    vector<DSBrick> bricks;
} DSFile;

class DSFileManager {
public:
    // Properties
    DSFile targetFile;

    // Initializer
    DSFileManager(DSFile target);

    // Public methods
    void write();
    void read();
    void find();
    void clear();

private:
    void joinBricks();
    void recover();
};

#endif /* DSCFS_hpp */
