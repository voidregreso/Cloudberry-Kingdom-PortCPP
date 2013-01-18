#ifndef _FORWARD_DECLARATIONS_CK_H_
#define _FORWARD_DECLARATIONS_CK_H_

namespace CloudberryKingdom
{
	struct Particle;
	struct MyOwnVertexFormat;
	struct ColData;
	struct Phsx;
	struct ObjectBase;
	struct BlockBase;
	struct FallingBlock;
	struct TileInfoBase;
	struct FallingBlockTileInfo;
	struct Bob;
	struct BobMove;
	struct Resources;
	struct Level;
	struct MakeData;
	struct Metric;
	struct CleanupCallback;
	struct FillCallback;
	struct MakeAt;
	struct ModBlockCallback;
	struct Generators;
	struct ObjectIcon;
	struct PictureIcon;
	struct CustomHoverIcon;
	struct AutoGen_Parameters;
	struct Laser_Parameters;
	struct AutoGen;
	struct Laser_AutoGen;
	struct BlockEmitter_Parameters;
	struct BlockEmitter_AutoGen;
	struct BouncyBlock_Parameters;
	struct _Special;
	struct BouncyBlock_AutoGen;
	struct VerifySaveDialog;
	struct GameObject;
	struct LevelConnector;
	struct SavedSeeds;
	struct CircleBox;
	struct ParticleEmitter;
	struct DifficultyFunc;
	struct DifficultyGroups;
	struct Cheer;
	struct MenuItem;
	struct ControlItem;
	struct GUI_Panel;
	struct CkBaseMenu;
	struct CustomControlsMenu;
	struct Waiting;
	template<class T> struct Set;
	struct MovingBlock;
	struct MovingBlockTileInfo;
	struct Cast;
	struct MenuB;
	struct Menu;
	struct DefaultMenuInfo;
	struct _Obstacle;
	struct _Death;
	struct _LineDeath;
	struct Laser;
	struct LaserTileInfo;
	struct SwarmRecord;
	struct FallingBlock_Parameters;
	struct FallingBlock_AutoGen;
	struct GameData;
	struct StringWorldGameData;
	struct StringWorldEndurance;
	struct Pendulum_Parameters;
	struct Pendulum_AutoGen;
	struct VerifyBaseMenu;
	struct SaveSeedAs;
	struct BobPhsx;
	struct DefaultInfo;
	struct CustomPhsxData;
	struct DataBounds;
	struct BobPhsxNormal;
	struct BobPhsxInvert;
	struct SimpleBox;
	struct TileSetInfo;
	struct TileSets;
	struct StartMenu_MW_Black;
	struct SaveLoad;
	struct ScoreDatabase;
	struct CloudberryKingdomGame;
	struct BmpWriter;
	struct TextureOrAnim;
	struct ParticleEffects;
	struct TileSet;
	struct BackgroundFloater;
	struct BackgroundFloater_Stationary;
	struct RichLevelGenData;
	struct LevelGenData;
	struct BlockDialog;
	struct CharacterSelectManager;
	struct StyleData;
	struct ModParams;
	struct VerticalData;
	struct DownData;
	struct _CircleDeath;
	struct SpikeyLine;
	struct SpikeyLineTileInfo;
	struct Listener;
	struct ExplodeBobs;
	struct PerfectScoreObject;
	struct Challenge;
	struct Rush;
	struct Challenge_HeroRush;
	struct RegularLevel;
	struct BobPhsxBouncy;
	struct BobPhsxDouble;
	struct XnaGameClass;
	struct SimpleVector;
	struct SimpleQuad;
	struct AlertBaseMenu;
	struct GamerTag;
	struct CustomizeMenu;
	struct EzTextureWad;
	struct IntVector2;
	struct SaveGroup;
	struct EzStorage;
	struct BackgroundFloaterList;
	struct VectorParamFunc;
	struct VectorParam;
	struct ParamFunc;
	struct Param;
	struct UpData;
	struct Ceiling_Parameters;
	struct _Special;
	struct Ceiling_AutoGen;
	struct TextFloat;
	struct GUI_Score;
	struct GUI_CampaignScore;
	struct GUI_Level;
	struct GUI_CampaignLevel;
	struct ConveyorBlock_Parameters;
	struct ConveyorBlock_AutoGen;
	struct LoadSeedAs;
	struct MiniMenu;
	struct CampaignChapterItem;
	struct StartMenu;
	struct StartMenu_MW_Campaign;
	struct LevelItem;
	struct StartLevelMenu;
	struct ListSelectPanel;
	struct SpaceshipLevel;
	struct SubTexture;
	struct PackedTexture;
	struct SubTexture;
	struct InstancePlusName;
	struct TextList;
	struct NormalGameData;
	struct FlyingBlob;
	struct FlyingBlobTileInfo;
	struct Checkpoint;
	struct CheckpointTileInfo;
	struct ClrTextFx;
	struct Fireball_Parameters;
	struct Fireball_AutoGen;
	struct Toolbox;
	struct FancyVector2;
	struct ProgressBar;
	struct InitialLoadingScreen;
	struct CampaignHelper;
	struct DoorIcon;
	struct ConveyorBlock;
	struct Challenge_Escalation;
	struct Challenge_HeroFactoryEscalation;
	struct EzSongWad;
	struct Background;
	struct StartMenu_MW_Backpanel;
	struct MenuSliderBase;
	struct MenuSlider;
	struct PhsxSlider;
	struct EzTexture;
	struct RecycleBin;
	template<class T> struct Bin;
	struct Recycler;
	struct Prototypes;
	struct OscillateParams;
	struct Oscillate;
	struct Cloud;
	struct CloudTileInfo;
	struct BobPhsxSpaceship;
	struct BobPhsxBox;
	struct Upgrades;
	struct ParamInfo;
	struct FireSpinner_Parameters;
	struct FireSpinner_AutoGen;
	struct SetNameDialog;
	struct LengthSlider;
	struct MenuSliderNoSlide;
	struct _BoxDeath;
	struct LevelTitle;
	struct GUI_NextLife;
	struct SlowMo;
	struct Hints;
	struct HintGiver;
	struct HeroRush_Tutorial;
	struct BobPhsxScale;
	struct BobPhsxSmall;
	struct CkColorHelper;
	struct HeroItem;
	struct ArcadeBaseMenu;
	struct StartMenu_MW_HeroSelect;
	struct ZoneTriggerEvent;
	struct ZoneTrigger;
	struct Unset;
	struct Rand;
	struct BaseQuad;
	struct QuadDrawer;
	struct OneAnim;
	struct AnimationData;
	struct ReplayGUI;
	struct FlyingBlob_Parameters;
	struct _Special;
	struct FlyingBlob_AutoGen;
	struct PieceQuadData;
	struct PieceQuadGroup;
	struct PieceQuad;
	struct FancyColor;
	struct BobPhsxCharSelect;
	struct SingleData;
	struct MakeThing;
	struct CustomUpgrades_GUI;
	struct AggressiveUpgrades_GUI;
	struct PassiveUpgrades_GUI;
	struct Arrow;
	struct SpikeyLine_Parameters;
	struct _Special;
	struct SpikeyLine_AutoGen;
	struct Firesnake;
	struct FiresnakeTileInfo;
	struct Firesnake_Parameters;
	struct _Special;
	struct Firesnake_AutoGen;
	struct VerifyQuitLevelMenu;
	struct HintBlurb;
	struct Escalation_Tutorial;
	struct EzSoundWad;
	struct ResolutionGroup;
	struct GenerationData;
	struct UsedCallback;
	struct BlockExtension;
	struct ObjectData;
	struct AssociatedObjData;
	struct Boulder;
	struct BoulderTileInfo;
	struct ButtonTexture;
	struct ButtonString;
	struct EzText;
	struct EzTextBit;
	struct EzTextPic;
	struct Fireball;
	struct FireballTileInfo;
	struct LineSpriteInfo;
	struct SpriteInfo;
	struct AnimationToolbox;
	struct SpriteAnimGroup;
	struct ToSpriteFunc;
	struct SpriteAnim;
	struct SpikeyGuy;
	struct SpikeyGuyTileInfo;
	struct GUI_Timer_Base;
	struct GUI_Timer;
	struct LoadingScreen;
	struct ArcadeItem;
	struct ArcadeMenu;
	struct ScoreScreen;
	struct MenuScrollBar;
	struct VerifyRemoveMenu;
	struct ShowGuide;
	struct Rumble;
	struct Challenge_TimeCrisis;
	struct EzEffect;
	struct AnimQueueEntry;
	struct BackgroundViewer;
	struct TreeNode_;
	struct TreeNode_List;
	struct TreeNode_Floater;
	struct GUI_Multiplier;
	struct FadeInObject;
	struct GameObjViewer;
	struct ViewableNode;
	struct FieldNode;
	struct CharacterEventArgs;
	struct KeyEventArgs;
	struct CharEnteredHandler;
	struct KeyEventHandler;
	struct EventInput;
	struct WndProc;
	struct FireSpinner;
	struct FireSpinnerTileInfo;
	struct BlockEmitter;
	struct BlockGroup;
	struct LockableBool;
	struct LevelSeedData;
	struct CustomDifficulty;
	struct ImportQuads;
	struct PlayerData;
	struct MakeFinalDoor_Float;
	struct SuperCheer;
	struct GUI_Text;
	struct GUI_TextBox;
	struct GUI_EnterName;
	struct LavaBlock;
	struct CoinMod;
	struct OneAnim_Texture;
	struct AnimationData_Texture;
	struct BobPhsxJetman;
	struct BasePoint;
	struct TitleGameData;
	struct TitleGameData_MW;
	struct StartMenu_MW_Arcade;
	struct EzEffectWad;
	struct GameFactory;
	struct SimpleGameFactory;
	struct GameFlags;
	struct BlockData;
	struct Camera;
	struct RndDifficulty;
	struct ObjectBox;
	struct NormalBlockDraw;
	struct SavedSeedsGUI;
	struct SeedItem;
	struct Awardment;
	struct Awardments;
	struct MenuItemGo;
	struct MenuListExpand;
	struct LavaDrip;
	struct LavaDripTileInfo;
	struct TimerWarning;
	struct BobLink;
	struct EzSound;
	struct BobPhsxTime;
	struct VerifyPurchaseMenu;
	struct ShopMenu;
	struct NewHero;
	struct ActionGameData;
	struct CapeNode;
	struct CapeLink;
	struct Cape;
	struct HeroSpec;
	struct MoveCallback;
	struct ClickCallback;
	struct ObjectVector;
	struct LongMenu;
	struct BigData;
	struct SpikeyGuy_Parameters;
	struct _Special;
	struct SpikeyGuy_AutoGen;
	struct AftermathData;
	struct StatsMenu;
	struct UserPowers;
	struct _SavePlayerData;
	struct PlayerManager;
	struct RezData;
	struct ColorSchemeManager;
	struct MenuToggle;
	struct Brackets;
	struct MenuList;
	struct MenuListAll;
	struct HighScorePanel;
	struct CoinScoreMultiplierObject;
	//struct Sign;
	struct SaveLoadSeedMenu;
	struct ScreenSaver;
	struct BobPhsxRocketbox;
	struct BobPhsxRandom;
	struct SoundMenu;
	struct StartMenu_MW_Options;
	struct HeroLevel;
	struct ToDoItem;
	struct Chunks;
	struct ChunkEnumerator;
	struct Chunk;
	struct WrappedBool;
	struct WrappedInt;
	struct WrappedFloat;
	struct FloatRectangle;
	struct Line;
	struct MovingLine;
	struct CameraZone;
	struct BackgroundType;
	struct BackgroundTemplate;
	struct RegularBackground;
	struct LevelPiece;
	struct ComputerRecording;
	struct GhostBlock_Parameters;
	struct GhostBlock_AutoGen;
	struct HackFont;
	struct HackSpriteFont;
	struct EzFont;
	struct PresetUpgrades;
	struct GameOverPanel;
	struct TunnelFill;
	struct Region;
	struct HeroRush2_Tutorial;
	struct EzSong;
	struct MainVideo;
	struct AwardmentMessage;
	struct VerifyQuitGameMenu2;
	struct StartMenu_MW_Exit;
	struct ArrowMenu;
	struct StringExtension;
	struct Vector2Extension;
	struct StringBuilderExtension;
	struct ListExtension;
	struct ArrayExtension;
	struct DictionaryExtension;
	struct Tools;
	struct Globals;
	struct Coin;
	struct CoinTileInfo;
	struct Quad;
	struct ControlScreen;
	struct KeyboardExtension;
	struct ButtonStatistics;
	struct ButtonStats;
	struct ButtonClass;
	struct ButtonData;
	struct ButtonCheck;
	struct Boulder_Parameters;
	struct _Special;
	struct Boulder_AutoGen;
	struct OneScreenData;
	struct GUI_LivesLeft;
	struct DrawPile;
	struct ScrollBar;
	struct MenuListSelect;
	struct GUI_Blobs;
	struct GUI_BlobQuota;
	struct Wall;
	struct WallTileInfo;
	struct Pendulum;
	struct PendulumTileInfo;
	struct StringWorldTimed;
	struct HeroDoll;
	struct DifficultyHelper;
	struct LevelSequence;
	struct CampaignSequence;
	struct CoreMath;
	struct MovingPlatform;
	struct ElevatorTileInfo;
	struct SwarmBundle;
	struct Recording;
	struct ClosingCircle;
	struct Spike_Parameters;
	struct Spike_AutoGen;
	struct BobInput;
	struct InGameStartMenu;
	struct Challenge_HeroRush2;
	struct TutorialHelper;
	struct Resources;
	struct ScoreEntry;
	struct CharSelectBackdrop;
	struct AABox;
	struct BouncyBlock;
	struct BouncyBlockTileInfo;
	struct MovingBlock_Parameters;
	struct MovingBlock_AutoGen;
	struct QuadClass;
	struct HsvQuad;
	struct SteamManager;
	struct Template_GameObject;
	struct PlayerStats;
	struct MakeFinalDoorVertical;
	struct MakeDarkBottom;
	struct LavaDrip_Parameters;
	struct LavaDrip_AutoGen;
	struct HelpMenu;
	struct SimpleObject;
	struct JoinText;
	struct CharacterSelect;
	struct DoorAction;
	struct Door;
	struct DoorTileInfo;
	struct Spike;
	struct SpikeTileInfo;
	struct EzReader;
	struct Cloud_Parameters;
	struct Cloud_AutoGen;
	struct BlockExtendCallback;
	struct NormalBlock;
	struct NormalBlock_Parameters;
	struct NormalBlock_AutoGen;
	struct BobPhsxWheel;
	struct CustomLevel_GUI;
	struct Coin_Parameters;
	struct _Special;
	struct Coin_AutoGen;
	struct Serpent;
	struct SerpentTileInfo;
	struct Serpent_Parameters;
	struct Serpent_AutoGen;
	struct GUI_Timer_Simple;
	struct VerifyDeleteSeeds;
	struct TimeCrisis_Tutorial;
	struct PhsxData;
	struct BobPhsxMeat;
	struct MainClass;
	struct LavaBlock_Castle;
	struct StartMenu_MW;
	struct StartMenu_MW_PressStart;
	struct StartMenu_MW_CustomLevel;
	struct HeroSelectOptions;
	struct HelpBlurb;
	struct CustomHero_GUI;
	struct ColorHelper;
	struct MainRender;
	struct GhostBlock;
	struct GhostBlockTileInfo;
	struct ObjectClass;
	struct WriteReadTools;
	struct ModifyPieceSeedData;
	struct ModifyMakeData;
	struct PieceSeedData;
	struct BackgroundCollection;
	struct MakeFinalDoor;
	struct PressNote;
	struct ScoreList;
	struct MenuListItem;
	struct Hat;
	struct ColorScheme;
	struct GUI_Lives;
	struct BobPhsxBig;
	struct MultiplierUp;
	struct CinematicsLevelItem;
	struct StartMenu_MW_Cinematics;
	struct SimpleMenuBase;
	struct SimpleMenu;
	struct Doll;
	struct Localization;
	struct LanguageInfo;
	struct SubtitleAction;
	struct Version;
}

#endif
