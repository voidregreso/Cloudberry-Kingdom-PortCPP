#ifndef CUSTOMCONTROLS
#define CUSTOMCONTROLS

#include "../Game/Menus/Menu Components/MenuItem.h"
#include "../Game/Localization.h"
#include "../Game/Tools/Resources.h"
#include "../Properties/Resources.Designer.h"
#include "../Game/Menus/CkBaseMenu.h"
#include "../Core/Lambdas/Lambda_1.h"
#include "../Core/Lambdas/LambdaFunc_1.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <tchar.h>

namespace CloudberryKingdom
{
	class QuadClass;
}

namespace CloudberryKingdom
{
	class EzText;
}

namespace CloudberryKingdom
{
	class MenuItem;
}

namespace CloudberryKingdom
{
	class Menu;
}


//C# TO C++ CONVERTER TODO TASK: The .NET System namespace is not available from native C++:
//using namespace System;
using namespace Microsoft::Xna::Framework;
using namespace Microsoft::Xna::Framework::Input;

namespace CloudberryKingdom
{
#if defined(PC_VERSION)
	class ControlItem : public MenuItem
	{
	public:
		std::shared_ptr<QuadClass> MyQuad;
		Keys MyKey;
		std::shared_ptr<Lambda_1<Keys> > SetSecondaryKey;
		std::shared_ptr<Lambda_1<ControlItem*> > Reset;

		ControlItem( Localization::Words description, Keys key );

		void SetKey( Keys key );

		void SetQuad();
	};

	class CustomControlsMenu : public CkBaseMenu
	{
	private:
		class ResetProxy : public Lambda_1<MenuItem*>
		{
		private:
			std::shared_ptr<CustomControlsMenu> ccm;

		public:
			ResetProxy( const std::shared_ptr<CustomControlsMenu> &ccm );

			void Apply( const std::shared_ptr<MenuItem> &_item );
		};

	private:
		class KeyQuickspawn_KeyboardKey : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyHelp_KeyboardKey : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyLeft_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyRight_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyUp_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyDown_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyReplayPrev_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyReplayNext_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeyReplayToggle_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class KeySlowMoToggle_Secondary : public Lambda_1<Keys>
		{
		public:
			void Apply( Keys key );
		};

	private:
		class ResetQuickspawn_KeyboardKey : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetHelp_KeyboardKey : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetLeft_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetRight_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetUp_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetDown_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetReplayPrev_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetReplayNext_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetReplayToggle_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class ResetSlowMoToggle_Secondary : public Lambda_1<ControlItem*>
		{
		public:
			void Apply( const std::shared_ptr<ControlItem> &_item );
		};

	private:
		class InitOnButtonHelper : public LambdaFunc_1<Menu*, bool>
		{
		private:
			std::shared_ptr<CustomControlsMenu> ccm;

		public:
			InitOnButtonHelper( const std::shared_ptr<CustomControlsMenu> &ccm );

			bool Apply( const std::shared_ptr<Menu> &_m );
		};

	public:
		static Color SecondaryKeyColor;
	protected:
		virtual void ReleaseBody();

	private:
		void Save();

	protected:
		virtual void SetTextProperties( const std::shared_ptr<EzText> &text );

		virtual void SetItemProperties( const std::shared_ptr<MenuItem> &item );

		virtual void AddItem( const std::shared_ptr<MenuItem> &item );

	public:
		CustomControlsMenu();

	protected:
		std::shared_ptr<QuadClass> Backdrop;
	public:
		virtual void MakeBackdrop();

		void MakeInstructions();

	private:
		void Reset( const std::shared_ptr<MenuItem> &_item );

		void MakeBack();



	public:
		virtual void Init();

	private:
		void SetPos();

		void ItemSetup();

	protected:
		virtual void MyPhsxStep();
	};
#endif
}


#endif	//#ifndef CUSTOMCONTROLS