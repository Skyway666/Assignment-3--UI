#include "j1App.h"
#include "Entity.h"
#include "j1Collisions.h"
#include "j1Render.h"

Entity::Entity(int x, int y) : position(x, y)
{

}

Entity::~Entity()
{
	if (collider != nullptr)
		collider->to_delete = true;
}

const Collider* Entity::GetCollider() const
{
	return collider;
}

void Entity::Draw(SDL_Texture* sprites)
{
	//App->render->Blit(sprites, position.x, position.y, scale, &(animation->GetCurrentFrame()));
}
