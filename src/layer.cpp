#include "layer.hpp"

template<unsigned long NInputs, unsigned long NOutputs>
brain::layer<NInputs, NOutputs>::layer(const brain::activation &a)
        :m_activation(a)
{

}

template<unsigned long NInputs, unsigned long NOutputs>
const std::array<const brain::neuron<NInputs>, NOutputs> &brain::layer<NInputs, NOutputs>::neurons() const
{
    return m_neurons;
}

template<unsigned long NInputs, unsigned long NOutputs>
const std::array<double, NInputs> &brain::layer<NInputs, NOutputs>::weights() const
{
    return m_weights;
}