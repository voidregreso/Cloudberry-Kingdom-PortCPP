#ifndef HERORUSH2_TUTORIAL
#define HERORUSH2_TUTORIAL

#include <global_header.h>

namespace CloudberryKingdom
{
	class Challenge_HeroRush2;
}



//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;

namespace CloudberryKingdom
{
	class HeroRush2_Tutorial : public HeroRush_Tutorial
	{
	private:
		std::shared_ptr<Challenge_HeroRush2> HeroRush2;
	public:
		HeroRush2_Tutorial( const std::shared_ptr<Challenge_HeroRush2> &HeroRush2 );

	protected:
		virtual void Title();
	};
}


#endif	//#ifndef HERORUSH2_TUTORIAL
