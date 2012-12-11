#ifndef _CONTENTMANAGER_H_
#define _CONTENTMANAGER_H_

#include "Hacks/XNA/GameServiceContainer.h"
#include <Hacks/XNA/SoundEffect.h>
#include <Hacks/XNA/Song.h>
#include <Hacks/XNA/Texture2D.h>
#include <Hacks/XNA/SpriteFont.h>
#include <Hacks/XNA/Effect.h>

struct ContentManager
{

	ContentManager( const std::wstring &ContentRootDirectory ) :
		RootDirectory( ContentRootDirectory )
	{
	}

	ContentManager( const std::shared_ptr<GameServiceContainer> &container, const std::wstring &root ) :
		RootDirectory( root )
	{
	}

	template<class T>
	std::shared_ptr<T> Load( const std::wstring &name )
	{
		assert( !"Can't touch this." );
		return std::shared_ptr<T>();
	}

	void Unload(  )
	{
		// FIXME
	}

	// FIXME: set equal to something
	std::wstring RootDirectory;

};

template<> std::shared_ptr<SoundEffect> ContentManager::Load<SoundEffect>( const std::wstring &name );
template<> std::shared_ptr<Song> ContentManager::Load<Song>( const std::wstring &name );
template<> std::shared_ptr<Texture2D> ContentManager::Load<Texture2D>( const std::wstring &name );
template<> std::shared_ptr<SpriteFont> ContentManager::Load<SpriteFont>( const std::wstring &name );
template<> std::shared_ptr<Effect> ContentManager::Load<Effect>( const std::wstring &name );

#endif
