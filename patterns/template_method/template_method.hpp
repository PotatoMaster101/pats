////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Template method pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TEMPLATE_METHOD_HPP
#define TEMPLATE_METHOD_HPP
#include <iostream>

// Base class containing outline of the algorithm.
struct an_algorithm {
    virtual void step_1() noexcept { std::cout << "step 1 from base\n"; }
    virtual void step_2() noexcept = 0;
    virtual void step_3() noexcept = 0;
    virtual void step_4() noexcept { std::cout << "step 4 from base\n"; }
    virtual void step_5() noexcept = 0;
};

// An implementation of the algorithm.
struct derived : public an_algorithm {
    void step_2() noexcept override { std::cout << "step 2 from derived\n"; }
    void step_3() noexcept override { std::cout << "step 3 from derived\n"; }
    void step_4() noexcept override { std::cout << "step 4 from derived (override)\n"; }
    void step_5() noexcept override { std::cout << "step 5 from derived\n"; }
};

#endif    // TEMPLATE_METHOD_HPP
