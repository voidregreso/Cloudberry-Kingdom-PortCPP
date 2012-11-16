﻿#ifndef AWARDMENTMESSAGE
#define AWARDMENTMESSAGE

#include "../Game/Menus/CkBaseMenu.h"
#include "../Game/Objects/Game Objects/GameObjects/GUI_Panel.h"
#include <string>
#include <tchar.h>

namespace CloudberryKingdom
{
	class QuadClass;
}

namespace CloudberryKingdom
{
	class Awardment;
}

namespace CloudberryKingdom
{
	class EzText;
}


using namespace Microsoft::Xna::Framework;

namespace CloudberryKingdom
{
	class AwardmentMessage : public CkBaseMenu
	{
	protected:
		std::shared_ptr<QuadClass> Backdrop;

	public:
		AwardmentMessage( const std::shared_ptr<Awardment> &award );

	protected:
		virtual void MakeBackdrop();

	public:
		virtual void SlideIn( int Frames );

		virtual void SlideOut( const std::shared_ptr<PresetPos> &Preset, int Frames );

	protected:
		std::shared_ptr<EzText> Text;
	public:
		void SetText( const std::shared_ptr<Awardment> &award );

	protected:
		virtual void SizeAndPosition();

		int Step;
		virtual void MyPhsxStep();

	private:
		static const int Duration = static_cast<int>( 2.3 * 62 );
	protected:
		bool ShouldDie();

	public:
		void Kill();
		void Kill( bool sound );

	private:
		void InitializeInstanceFields();
	};
}


#endif	//#ifndef AWARDMENTMESSAGE