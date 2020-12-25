#include <iostream>
#include <memory>
#include "strategy.hpp"

// Do work using the chosen strategy.
void work(std::unique_ptr<strat_base>&& strat) {
    strat->do_work();
}

int main(int argc, const char *argv[]) {
    work(std::make_unique<strat_1>());      // prints "strat 1"
    work(std::make_unique<strat_2>());      // prints "strat 2"
    work(std::make_unique<strat_3>());      // prints "strat 3"
    work(std::make_unique<strat_4>());      // prints "strat 4"
    return 0;
}
