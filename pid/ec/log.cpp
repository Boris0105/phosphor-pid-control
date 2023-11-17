#include "log.hpp"

void log(const std::string& msg, ...) {
    std::cout << msg;

    va_list args;
    va_start(args, msg);

    const char* arg;
    while ((arg = va_arg(args, const char*)) != NULL) {
        std::cout << " " << arg;
    }

    va_end(args);

    std::cout << std::endl;
}
