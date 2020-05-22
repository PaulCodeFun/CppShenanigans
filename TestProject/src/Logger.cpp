/*
 * Logger.cpp
 *
 *  Created on: May 16, 2020
 *      Author: gifritz
 */

#include "Logger.h"
#include <iostream>

void Log::SetLevel(Level level) {
	m_LogLevel = level;
}


void Log::Error(const char* message1){
	if (m_LogLevel >= Errors){
		std::cout << "[ERROR]: " << message1 << std::endl;
	}
}

void Log::Warn(const char* message2){
	if (m_LogLevel >= Warnings){
		std::cout << "[WARNING]: " << message2 << std::endl;
	}
}

void Log::Info(const char* message3){
	if (m_LogLevel >= Infos){
		std::cout << "[INFO]: " << message3 << std::endl;
	}
}

//in main():
//	Log log;
//	log.SetLevel(log.Infos);
//	log.Warn("Hello!");
//	log.Error("Hello!");
//	log.Info("Hello!");
//	std::cout << Log::a << std::endl; //Better use class than instance to read out static class variables


