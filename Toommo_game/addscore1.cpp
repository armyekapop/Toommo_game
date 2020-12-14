#include "addscore1.h"


void addscore1::initVariables()
{
	this->pointCount = rand() % 8 + 3; //min = 3 max = 10
	this->type = 0;
	this->speed = static_cast<float>(this->pointCount / 3);
	this->hpMax = static_cast<int>(this->pointCount);
	this->hp = this->hpMax;
	this->damage = 0;
	this->points = this->pointCount;
}

void addscore1::initTexture()
{
	//Load a texture from file
	if (!this->texture.loadFromFile("picture/swim.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could not load texture file." << "\n";
	}
}

void addscore1::initSprite()
{
	//Set the texture to the sprite
	this->sprite.setTexture(this->texture);

	//Resize the sprite
	this->sprite.scale(0.25f, 0.25f);
}

addscore1::addscore1(float pos_x, float pos_y)
{
	this->initVariables();
	this->initTexture();
	this->initSprite();

	this->sprite.setPosition(pos_x, pos_y);
}

addscore1::~addscore1()
{

}

//Accessors
const sf::FloatRect addscore1::getBounds() const
{
	return this->sprite.getGlobalBounds();
}

const int& addscore1::getPoints() const
{
	return this->points;
}

const int& addscore1::getDamage() const
{
	return this->damage;
}

//Functions
void addscore1::update()
{
	this->sprite.move(0.f, this->speed);
}

void addscore1::render(sf::RenderTarget* target)
{
	target->draw(this->sprite);
}