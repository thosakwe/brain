// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#ifndef BRAIN_NETWORK_BUILDER_H
#define BRAIN_NETWORK_BUILDER_H

#include "layer.hpp"

namespace brain
{
    template<unsigned long NInputs, unsigned long NOutputs>
    class network;

    template<unsigned long Start_In, unsigned long A_In, unsigned long A_Out, unsigned long B_Out>
    struct connection
    {
        layer<A_In, A_Out> &from;
        layer<A_Out, B_Out> &to;

        template<unsigned long C_Out>
        connection<Start_In, A_Out, B_Out, C_Out> add(layer<B_Out, C_Out> &layer);

        network<Start_In, B_Out> to_network();
    };
}

#endif //BRAIN_NETWORK_BUILDER_H
