#include "Logger.hpp"
#include <mutex>

namespace Logger
{
//////////////////////////////////////////////////////////////////////////////
std::mutex loggerMutex;
Logger::Logger( const std::string &logPath )
{
	
}
//////////////////////////////////////////////////////////////////////////////
void Logger::LogMessage( ELogLevel logLevel, const std::string &message )
{

}
//////////////////////////////////////////////////////////////////////////////
} // namespace Logger