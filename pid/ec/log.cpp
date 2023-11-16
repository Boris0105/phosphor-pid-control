#include "log.hpp"

template <typename... Args>
void log(const std::string& msg, Args... args) {
    std::ostringstream oss;
    oss << msg;
    ((oss << " " << args), ...);
    std::cout << oss.str() << std::endl;
}
