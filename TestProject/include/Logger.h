/*
 * Logger.h
 *
 *  Created on: May 16, 2020
 *      Author: gifritz
 */

#ifndef LOGGER_H_
#define LOGGER_H_

class Log{
public:
	enum Level{
		Errors, Warnings, Infos
	};
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LoglevelInfo = 2;
	static int a, b;

private:
	Level m_LogLevel = Infos;
//	int m_LogLevel= LoglevelInfo;

public:
	void SetLevel(Level);

	void Error(const char*);

	void Warn(const char*);

	void Info(const char*);
};

//int Log::a; //Have to be defined
//int Log::b;

#endif /* LOGGER_H_ */
