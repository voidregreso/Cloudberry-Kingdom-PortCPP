﻿#ifndef CEILING__AUTO
#define CEILING__AUTO

#include "../Game/Objects/AutoGen.h"
#include "../Game/Objects/Game Objects/GameObjects/GUI_Text.h"
#include "../Game/Objects/In Game Objects/Obstacles/BlockEmitter__Auto.h"
#include "../Core/Text/EzText.h"
#include "../Game/Objects/In Game Objects/Grab/Coin__Auto.h"
#include "../Game/Objects/In Game Objects/Obstacles/Firesnake__Auto.h"
#include "../Game/Objects/In Game Objects/Obstacles/SpikeyLine__Auto.h"
#include "../Game/Objects/In Game Objects/Obstacles/SpikeyGuy__Auto.h"
#include "BouncyBlock__Auto.h"
#include "../Game/Objects/In Game Objects/Obstacles/FlyingBlob__Auto.h"
#include "../Game/Objects/In Game Objects/Obstacles/Boulder__Auto.h"
#include "../Game/Level/Make/Parameters/Param.h"
#include <cmath>

namespace CloudberryKingdom
{
	class PieceSeedData;
}

namespace CloudberryKingdom
{
	class Level;
}

namespace CloudberryKingdom
{
	class AutoGen_Parameters;
}


//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
using namespace Microsoft::Xna::Framework;

namespace CloudberryKingdom
{
	class Ceiling_Parameters : public AutoGen_Parameters
	{
	public:
		enum Style
		{
			Style_NORMAL,
			Style_SKIP_ONE,
			Style_SPARSE,
			Style_RANDOM
		};
	public:
		class _Special
		{
			/// <summary>
			/// One straight cement block for the ceiling.
			/// </summary>
		public:
			bool CementCeiling;

			/// <summary>
			/// One straight block for the ceiling.
			/// </summary>
			bool LongCeiling;
		};
		/// <summary>
		/// Whether to make the ceiling or not.
		/// </summary>
	public:
		bool Make;

		Param BufferSize;
		VectorParam HeightRange, WidthRange;

		Style MyStyle;

		_Special Special;

		void SetLongCeiling();
		void SetCementCeiling();

		virtual void SetParameters( const std::shared_ptr<PieceSeedData> &PieceSeed, const std::shared_ptr<Level> &level );

	private:
		void InitializeInstanceFields();

public:
		Ceiling_Parameters()
		{
			InitializeInstanceFields();
		}
	};

	class Ceiling_AutoGen : public AutoGen
	{
	private:
		static const std::shared_ptr<Ceiling_AutoGen> instance;
	public:
		const static std::shared_ptr<Ceiling_AutoGen> &getInstance() const;

//C# TO C++ CONVERTER TODO TASK: Static constructors are not allowed in native C++:
		static Ceiling_AutoGen();
	private:
		Ceiling_AutoGen();

	public:
		std::shared_ptr<AutoGen_Parameters> SetParameters( const std::shared_ptr<PieceSeedData> &data, const std::shared_ptr<Level> &level );

		void MakeLongCeiling( const std::shared_ptr<Level> &level, Vector2 BL, Vector2 TR );

		void PreFill_1( const std::shared_ptr<Level> &level, Vector2 BL, Vector2 TR );

		void MakeCeiling( const std::shared_ptr<Level> &level, Vector2 BL, Vector2 TR, float MaxStartY );
	};
}


#endif	//#ifndef CEILING__AUTO