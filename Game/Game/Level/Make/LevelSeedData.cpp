#include <global_header.h>

//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Linq;


namespace CloudberryKingdom
{

	const bool &LockableBool::getval() const
	{
		return _val;
	}

	void LockableBool::setval( const bool &value )
	{
		_val = value;
	}

	void LockableBool::InitializeInstanceFields()
	{
		_val = false;
	}
}
