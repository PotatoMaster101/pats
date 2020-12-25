////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Observer pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <memory>
#include <vector>
#include <algorithm>
#include <iostream>

// Observer implementation. Simple example only, in real life there might be an abstract observer base class.
struct observer {
    inline void notify() const
    { std::cout << std::addressof(*this) << ": state change notified\n"; }
};

// Contains list of observers.
class subject {
public:
    // Adds a new observer.
    inline void subscribe(std::unique_ptr<observer>&& obs)
    { observers_.push_back(std::move(obs)); }

    // Notifies all observer about state change.
    inline void notify() const
    { std::for_each(observers_.begin(), observers_.end(), [](const auto& obs){ obs->notify(); }); }

private:
    // List of observers.
    std::vector<std::unique_ptr<observer>> observers_;
};

#endif    // OBSERVER_HPP
