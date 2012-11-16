﻿#ifndef BLOCKGROUP
#define BLOCKGROUP

#include <unordered_map>
#include <vector>

namespace CloudberryKingdom
{
	class PieceQuad;
}

namespace CloudberryKingdom
{
	class Rand;
}


//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::IO;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Collections::Generic;
//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System::Linq;

using namespace Microsoft::Xna::Framework;

namespace CloudberryKingdom
{
	class BlockGroup
	{
	public:
		std::unordered_map<int, std::vector<PieceQuad*> > Dict;
		std::vector<int> Widths;

		BlockGroup();

		void Add( const std::shared_ptr<PieceQuad> &piece );

		void Add( int width, const std::shared_ptr<PieceQuad> &piece );

		std::shared_ptr<PieceQuad> Choose( int width );

		std::shared_ptr<PieceQuad> Choose( int width, const std::shared_ptr<Rand> &rnd );

		void SortWidths();

		int SnapWidthUp( float width );
		void SnapWidthUp( Vector2 &size );

		static int SnapWidthUp( float width, std::vector<int> Widths );
	};
}


#endif	//#ifndef BLOCKGROUP