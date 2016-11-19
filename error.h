#pragma once

#include <iostream>
#include <string>

// TODO : log !

void setVerbose();
void setNoVerbose();
bool isVerbose();

void warning(std::string msg);
void nonfatal(std::string msg);
void fatal(std::string msg);
void not_enough_memory();
void info(std::string msg);
void verbose_info(std::string msg);
