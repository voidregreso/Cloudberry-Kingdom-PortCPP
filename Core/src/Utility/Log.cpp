#include <Utility/Log.h>

#include <algorithm>
#include <cstdarg>

// Single instance of the log.
template<> Log *Singleton< Log >::singleton_ = 0;

Log::Log()
{
}

Log::~Log()
{
}

void Log::AddListener( LogListener &listener )
{
	listeners_.push_back( &listener );
}

void Log::RemoveListener( LogListener &listener )
{
	ListenerList::iterator end = std::remove( listeners_.begin(), listeners_.end(), &listener );
	listeners_.erase( end, listeners_.end() );
}

void Log::Write( const char *fmt, ... )
{
	char buffer[ 512 ];

	va_list args;
	va_start( args, fmt );
	vsprintf( buffer, fmt, args );
	va_end( args );

	std::string str( buffer );

	for( ListenerList::iterator i = listeners_.begin(); i != listeners_.end(); ++i )
		( *i )->Write( str );
}

Log &Log::GetSingleton()
{
	assert( singleton_ );
	return *singleton_;
}