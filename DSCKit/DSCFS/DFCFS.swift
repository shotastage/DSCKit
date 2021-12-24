//
//  DFCFS.swift
//  DSCKit
//
//  Created by Shota Shimazu on 2021/12/20.
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
