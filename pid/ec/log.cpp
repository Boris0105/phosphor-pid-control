#include "log.hpp"
#include <sstream>

void Log(bool debugEnabled, const std::initializer_list<const char*>& args) {
    if (debugEnabled) {
        std::ostringstream oss;
        for (const auto& arg : args) {
            oss << arg << " ";
        }
        log_internal(std::cout, oss.str());
    }
}

