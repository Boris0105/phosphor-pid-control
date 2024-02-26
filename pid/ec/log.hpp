#pragma once
#include <iostream>
#include <string>
#include <cstdarg>

template <typename T, typename... Args>
void log_internal(std::ostream& stream, const T& first, const Args&... args) {
    stream << first << " ";
    (void)std::initializer_list<int>{((stream << args << " "), 0)...};
    stream << std::endl;
}

void Log(bool debugEnabled, const std::initializer_list<const char*>& args);
