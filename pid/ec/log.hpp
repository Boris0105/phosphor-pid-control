#pragma once

#include <iostream>
#include <sstream>
#include <initializer_list>

void log_internal(std::ostream& stream);

template <typename T, typename... Args>
void log_internal(std::ostream& stream, const T& first, const Args&... args);

void Log(const std::initializer_list<const char*>& args);

