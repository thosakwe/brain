#ifndef BRAIN_LAYER_H
#define BRAIN_LAYER_H

#include <array>
#include <functional>
#include <vector>
#include "activation.hpp"
#include "neuron.hpp"

namespace brain
{
    template<unsigned long NInputs, unsigned long NOutputs>
    class layer
    {
    public:
        layer(const activation &a);

        const std::array<const neuron<NInputs>, NOutputs> &neurons() const;

        const std::array<double, NInputs> &weights() const;

    private:
        const activation &m_activation;
        std::array<neuron<NInputs>, NOutputs> m_neurons;
        std::array<double, NInputs> m_weights;
//    std::vector<neuron<NInputs>> m_neurons;
//    std::vector<double> m_weights;
    };
} // namespace brain

#endif