// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#ifndef BRAIN_SIGMOID_H
#define BRAIN_SIGMOID_H

#include "activation.hpp"

namespace brain
{
    class sigmoid : public activation
    {
        double operator()(double d) const override;

    };
}

#endif //BRAIN_SIGMOID_H
