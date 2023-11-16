#pragma once

#include <iostream>
#include <sstream> 

template <typename... Args>
void log(const std::string& msg, Args... args);
