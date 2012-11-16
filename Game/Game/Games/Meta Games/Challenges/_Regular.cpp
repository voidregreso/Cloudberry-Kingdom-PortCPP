﻿#include "_Regular.h"
#include "Game/Level/Make/CloudberryKingdom.LevelSeedData.h"
#include "Game/Player/Hero Physics/Normal.h"
#include "Game/Player/Hero Physics/Base.h"
#include "Core/Lambdas/Lambda_1.h"
#include "Game/Level/Make/DifficultyGroups.h"
#include "Game/Level/Make/PieceSeedData.h"
#include "Game/Games/NormalGame.h"

//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;

namespace CloudberryKingdom
{

	RegularLevel::RegularLevel()
	{
	}

	void RegularLevel::StandardInit( const std::shared_ptr<LevelSeedData> &data )
	{
		data->setSeed( data->Rnd->Rnd->Next() );

		data->SetTileSet( 0 );

		data->DefaultHeroType = BobPhsxNormal::getInstance();
	}

	std::shared_ptr<LevelSeedData> RegularLevel::HeroLevel( float Difficulty, const std::shared_ptr<BobPhsx> &Hero, int Length )
	{
		std::shared_ptr<LevelSeedData> data = std::make_shared<LevelSeedData>();

		StandardInit( data );

		data->DefaultHeroType = Hero;

		//LevelSeedData.CustomDifficulty custom = DifficultyGroups.FixedPieceMod(Difficulty, data);
		std::shared_ptr<Lambda_1<PieceSeedData*> > custom = DifficultyGroups::FixedPieceMod( Difficulty, data );
		data->Initialize( NormalGameData::Factory, LevelGeometry_RIGHT, 1, Length, custom );

		return data;
	}
}