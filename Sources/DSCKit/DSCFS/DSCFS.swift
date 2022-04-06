//
//  DSCFS.swift
//  
//
//  Created by Shota Shimazu on 2022/04/06.
//

import Foundation

enum DataRWPermission {
    case writable
    case readable
    case wrable
}

struct DasFSPermission {
    let owner: String
    let rwPermission: DataRWPermission
}

struct DasFSDataBrick {
    let blockSize: Int
    let dataBody: Data
}

struct DasFileSystem {
    let DE: String
    let bricks: Array<DasFSDataBrick>
}
