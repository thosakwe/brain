#ifndef BRAIN_ACTIVATION_HPP
#define BRAIN_ACTIVATION_HPP

namespace brain
{
class activation
{
    virtual double operator()(double) const = 0;
};
} // namespace brain

#endif