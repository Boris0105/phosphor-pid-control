#pragma once

#include <iostream>

enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

void log(LogLevel level, const std::string& msg, const void* pointer = nullptr, double value = 0.0);
