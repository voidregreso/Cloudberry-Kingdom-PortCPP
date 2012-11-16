﻿#include <global_header.h>

//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;


namespace CloudberryKingdom
{

	Challenge_TimeCrisis::OnSwapLambda::OnSwapLambda( const std::shared_ptr<Challenge_TimeCrisis> &ch )
	{
		this->ch = ch;
	}

	void Challenge_TimeCrisis::OnSwapLambda::Apply( const std::shared_ptr<LevelSeedData> &data )
	{
		data->MyGame->AddGameObject( std::make_shared<TimeCrisis_Tutorial>( ch ) );
	}

const std::shared_ptr<Challenge_TimeCrisis> Challenge_TimeCrisis::instance = std::make_shared<Challenge_TimeCrisis>();

	const std::shared_ptr<Challenge_TimeCrisis> &Challenge_TimeCrisis::getInstance() const
	{
		return instance;
	}

	Challenge_TimeCrisis::Challenge_TimeCrisis()
	{
		GameTypeId = 1;
		MenuName = Name = Localization::Words_TIME_CRISIS;
	}

	std::shared_ptr<BobPhsx> Challenge_TimeCrisis::GetHero( int i )
	{
		return Challenge::ChosenHero;
	}

	void Challenge_TimeCrisis::PreStart_Tutorial( bool TemporarySkip )
	{
		HeroRush_Tutorial::TemporarySkip = TemporarySkip;
		MyStringWorld->OnSwapToFirstLevel->Add( std::make_shared<OnSwapLambda>( this ) );
	}
}
