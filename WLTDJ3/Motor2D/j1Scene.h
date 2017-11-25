#ifndef __j1SCENE_H__
#define __j1SCENE_H__

#include "j1Module.h"
#include "Pathfinding.h"
#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Input.h"
#include "j1Textures.h"
#include "j1Audio.h"
#include "j1Render.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1Entities.h"
#include "Player.h"

struct SDL_Texture;

class j1Scene : public j1Module
{
public:

	SDL_Texture* win_screen;

	int time;

	bool time_gotten;

	j1Scene();

	// Destructor
	virtual ~j1Scene();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
    
	void Change_to_map(int);

private:
	
};

#endif // __j1SCENE_H__