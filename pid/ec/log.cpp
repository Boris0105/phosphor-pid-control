#include "log.hpp"
// void log(const std::string& msg, ...) {
//     std::cout << msg;

//     va_list args;
//     va_start(args, msg);

//     const char* arg;
//     while ((arg = va_arg(args, const char*)) != NULL) {
//         std::cout << " " << arg;
//     }

//     va_end(args);

//     std::cout << std::endl;
// }


void log_internal([[maybe_unused]]std::ostream& stream) {
}

template <typename T, typename... Args>
void log_internal(std::ostream& stream, const T& first, const Args&... args) {
    stream << first << " ";
    log_internal(stream, args...);
}

void Log(const std::initializer_list<const char*>& args) {
    std::ostringstream oss;
    for (const auto& arg : args) {
        oss << arg << " ";
    }
    std::cout << oss.str() << std::endl;
}

