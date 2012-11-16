#include "CampaignHelper.h"
#include "Game/Localization.h"
#include "Core/Text/EzText.h"

using namespace Microsoft::Xna::Framework;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Linq;

namespace CloudberryKingdom
{

	std::wstring CampaignHelper::GetName( int difficulty )
	{
		return EzText::ColorToMarkup( DifficultyColor[ difficulty ] ) + Localization::WordString( DifficultyNames[ difficulty ] ).ToLower() + EzText::ColorToMarkup(Color::White);
	}

const Color tempVector[] = { Color( 44, 44, 44 ), Color( 144, 200, 225 ), Color( 44, 203, 48 ), Color( 248, 136, 8 ), Color( 90, 90, 90 ), Color( 0, 255, 255 ) };
std::vector<Color> CampaignHelper::DifficultyColor = std::vector<Color>( tempVector, tempVector + sizeof( tempVector ) / sizeof( tempVector[ 0 ] ) );
const Localization::Words tempVector2[] = { Localization::Words_CUSTOM, Localization::Words_TRAINING, Localization::Words_UNPLEASANT, Localization::Words_ABUSIVE, Localization::Words_HARDCORE, Localization::Words_MASOCHISTIC };
std::vector<Localization::Words> CampaignHelper::DifficultyNames = std::vector<Localization::Words>( tempVector2, tempVector2 + sizeof( tempVector2 ) / sizeof( tempVector2[ 0 ] ) );
}