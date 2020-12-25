////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Singleton pattern.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

// Singleton implementation.
class singleton {
public:
    // Returns the instance.
    static singleton& instance() {
        static singleton inst{};
        return inst;
    }

    // Don't allow copy or move.
    singleton(const singleton& rhs) = delete;
    singleton& operator=(const singleton& rhs) = delete;
    singleton(singleton&& rhs) noexcept = delete;
    singleton& operator=(singleton&& rhs) noexcept = delete;

private:
    // Private constructor.
    singleton() = default;
};

#endif    // SINGLETON_HPP
