﻿#include <global_header.h>


//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;

namespace CloudberryKingdom
{

	void BobPhsxScale::Set( const std::shared_ptr<BobPhsx> &phsx )
	{
		phsx->Oscillate_Renamed = true;
		phsx->ForceDown = -7.5f;
		phsx->CapePrototype = Cape::CapeType_NORMAL;

		phsx->DollCamZoomMod = .535f;
	}

	void BobPhsxScale::InitSingleton()
	{
		BobPhsxNormal::InitSingleton();

		Specification = HeroSpec( 0, 2, 0, 0 );
		Name = Localization::Words_PHASE_BOB;
		Adjective = _T( "phasing" );
		Icon = std::make_shared<PictureIcon>( Tools::TextureWad->FindByName( _T( "HeroIcon_Phase" ) ), Color::White, 1.1f * DefaultIconWidth );
	}

const std::shared_ptr<BobPhsxScale> BobPhsxScale::instance = std::make_shared<BobPhsxScale>();

	const std::shared_ptr<BobPhsxScale> &BobPhsxScale::getInstance() const
	{
		return instance;
	}

	BobPhsxScale::BobPhsxScale()
	{
		Set( this );
	}
}
