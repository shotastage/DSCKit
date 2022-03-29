#!/usr/bin/env bash

CHECK_SUM="94ced8b72956591c4775ae2207a9763d3600b30d9d7446562c552f0a14a63be7"

curl -OL https://boostorg.jfrog.io/artifactory/main/release/1.78.0/source/boost_1_78_0.tar.gz
tar -zxvf boost_1_78_0.tar.gz

rm boost_1_78_0.tar.gz
