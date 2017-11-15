#pragma once
#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "p2Point.h"
#include "Animation.h"

//Parent class to all the entities

struct SDL_Texture;
struct Collider;
enum ENTITY_TYPES;

class Entity //: public Path
{
protected:
	Animation* animation;

public:
	fPoint position; //Top left position
	iPoint center; //Used for pathfinding
	fPoint contact;
	fPoint speed_modifier;
	fPoint speed;
	Collider* collider = nullptr; //Collider
	float scale; //Scale to blit
	ENTITY_TYPES type; //Knowing which type of enemy
	bool flip = false; //Flip to blit
	

public:
	Entity(int x, int y);
	virtual ~Entity();

	const Collider* GetCollider() const;
	
	void Draw(SDL_Texture* sprites); // Draw and update collider position

	virtual void Update(float dt) {}; // Update enemy logic
	virtual void ManagePhysics(float dt) {}; // Manage Physics of grounded entities
	virtual void OnCollision(Collider* collider) {}; // Every entity has its own "OnCollision"
};

#endif // __ENEMY_H__