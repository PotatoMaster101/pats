#include <iostream>
#include <memory>
#include "observer.hpp"

int main(int argc, const char *argv[]) {
    subject sub{};

    // add a few observers
    sub.subscribe(std::make_unique<observer>());
    sub.subscribe(std::make_unique<observer>());
    sub.subscribe(std::make_unique<observer>());
    sub.subscribe(std::make_unique<observer>());
    sub.subscribe(std::make_unique<observer>());

    // notify all subscribed observers
    sub.notify();
    return 0;
}
