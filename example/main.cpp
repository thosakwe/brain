// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#include <brain/brain.hpp>
#include <iostream>

int main(int argc, char **argv)
{
    auto layer0 = brain::layer<3, 1>(brain::sigmoid());
    auto layer1 = brain::layer<1, 4>(brain::sigmoid());
    brain::connect(layer0).to(layer1);
    return 0;
}