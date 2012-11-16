﻿#ifndef _CODE_CASTLE
#define _CODE_CASTLE

#include "../Game/Tilesets/Backgrounds/Background.h"
#include <string>

namespace CloudberryKingdom
{
	class Background;
}


using namespace Microsoft::Xna::Framework;

namespace CloudberryKingdom
{
	class Background_Castle : public BackgroundTemplate
	{
	public:
		Background_Castle( const std::wstring &Name );

		virtual void Code( const std::shared_ptr<Background> &b );
	};

}


#endif	//#ifndef _CODE_CASTLE