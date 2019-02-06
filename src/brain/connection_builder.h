// Copyright (c) 2019, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// license that can be found in the LICENSE file.
#ifndef BRAIN_CONNECTION_BUILDER_H
#define BRAIN_CONNECTION_BUILDER_H

#include "connection.hpp"

namespace brain
{
    template<unsigned long NInputs, unsigned long NOutputs>
    class connection_builder
    {
    public:
        template<unsigned long B_Out>
        connection <NInputs, NInputs, NOutputs, B_Out> to(layer <NOutputs, B_Out> other) const;


    private:
        connection_builder(layer <NInputs, NOutputs> &m_layer);

        layer <NInputs, NOutputs> &m_layer;

    };

    template<unsigned long NInputs, unsigned long NOutputs>
    connection_builder<NInputs, NOutputs> connect(layer <NInputs, NOutputs> &m_layer);
}

#endif //BRAIN_CONNECTION_BUILDER_H
