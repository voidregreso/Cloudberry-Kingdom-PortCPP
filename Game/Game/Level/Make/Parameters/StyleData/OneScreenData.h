﻿#ifndef ONESCREENDATA
#define ONESCREENDATA

#include "StyleData.h"

namespace CloudberryKingdom
{
	class Rand;
}


using namespace Microsoft::Xna::Framework;

namespace CloudberryKingdom
{
	class OneScreenData : public StyleData
	{
	public:
		Vector2 CamShift;

		OneScreenData( const std::shared_ptr<Rand> &Rnd );

		virtual void Randomize();

	private:
		void InitializeInstanceFields();
	};
}


#endif	//#ifndef ONESCREENDATA