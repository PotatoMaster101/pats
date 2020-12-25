////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Strategy pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef STRATEGY_HPP
#define STRATEGY_HPP
#include <iostream>

// Strategy base class.
struct strat_base {
    virtual void do_work() noexcept = 0;
};

// Derived strategies.
struct strat_1 : public strat_base {
    void do_work() noexcept override { std::cout << "strat 1\n"; }
};

struct strat_2 : public strat_base {
    void do_work() noexcept override { std::cout << "strat 2\n"; }
};

struct strat_3 : public strat_base {
    void do_work() noexcept override { std::cout << "strat 3\n"; }
};

struct strat_4 : public strat_base {
    void do_work() noexcept override { std::cout << "strat 4\n"; }
};

#endif    // STRATEGY_HPP
