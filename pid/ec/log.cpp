#include "log.hpp"
#include <iomanip> 

void log(LogLevel level, const std::string& msg, const void* pointer, double value) {
    std::string prefix;
    
    switch (level) {
        case DEBUG:
            prefix = "[DEBUG] ";
            break;
        case INFO:
            prefix = "[INFO] ";
            break;
        case WARNING:
            prefix = "[WARNING] ";
            break;
        case ERROR:
            prefix = "[ERROR] ";
            break;
        default:
            break;
    }

    std::cout << prefix << msg;
    
    /**
    if (pointer != nullptr) {
        std::cout << " Pointer Address: " << pointer;
    }
    **/

    // 如果有 double 值，輸出 double
    if (value != 0.0) {
        std::cout << " Double Value: " << std::fixed << std::setprecision(2) << value;
    }

    std::cout << std::endl;
}
