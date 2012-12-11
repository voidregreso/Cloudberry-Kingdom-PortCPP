#ifndef HINTGIVER
#define HINTGIVER

#include <global_header.h>

namespace CloudberryKingdom
{
	struct HintGiver;
}




namespace CloudberryKingdom
{
	struct Hints
	{
	
		static int YForHelpNum;
		static void SetYForHelpNum( int val );
		static void IncrYForHelpNum();

		static int QuickSpawnNum;
		static void SetQuickSpawnNum( int val );
		static void IncrQuickSpawnNum();

		static std::shared_ptr<HintGiver> CurrentGiver;
	};

	struct HintGiver : public GUI_Panel
	{
	
		struct Check_QuickSpawnHelper : public Lambda
		{
		
			std::shared_ptr<HintGiver> hg;

		
			Check_QuickSpawnHelper( const std::shared_ptr<HintGiver> &hg );

			void Apply();
		};

	
		struct Check_YForHelpHelper : public Lambda
		{
		
			std::shared_ptr<HintGiver> hg;

		
			Check_YForHelpHelper( const std::shared_ptr<HintGiver> &hg );

			void Apply();
		};

	
		HintGiver();

	
		virtual void ReleaseBody();

		virtual void MyPhsxStep();

	
		void Check_QuickSpawn();

		const static std::wstring getQuickSpawnHint();

		const static std::wstring getPowerupHint();

		void Check_YForHelp();
	};
}


#endif	//#ifndef HINTGIVER
