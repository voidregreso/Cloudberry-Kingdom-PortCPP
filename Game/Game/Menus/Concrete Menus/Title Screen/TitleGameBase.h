﻿#ifndef TITLEGAMEBASE
#define TITLEGAMEBASE

#include <global_header.h>

namespace CloudberryKingdom
{
	struct TitleFactory : public GameFactory
	{
	
		virtual std::shared_ptr<GameData> Make( const std::shared_ptr<LevelSeedData> &data, bool MakeInBackground );
	};

	struct TitleGameData : public GameData
	{

	
		static void InitializeStatics();

	
		static std::shared_ptr<GameFactory> Factory;

		virtual void Release();

		TitleGameData();

		virtual void SetToReturnTo( int code );

		virtual void ReturnTo( int code );

	
		std::shared_ptr<CameraZone> CamZone;
		virtual std::shared_ptr<Level> MakeLevel();

	
		virtual void Init();

		virtual void AdditionalReset();

		bool PanCamera;
	
		float PanAcc;
		float PanMaxSpeed;
		float PanMaxDist;
		float PanMinDist;

	
		virtual void PhsxStep();

		virtual void PostDraw();

	
		void InitializeInstanceFields();
	};
}


#endif	//#ifndef TITLEGAMEBASE
