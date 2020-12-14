
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<time.h>

//SFML
#include<SFML/System.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>

#include"Game.h"


int main()
{
	srand(static_cast<unsigned>(time(0)));

	Game game;

	game.run();
	
	

	//End of application
	return 0;
}