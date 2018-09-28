#include "game.h"

Game::Game(std::string title, int width, int height, int targetFramerate, int targetUpdaterate)
		: Renderer(title, width, height) {

	this->targetFramerate = targetFramerate;
	this->targetUpdaterate = targetUpdaterate;

	std::cout << "Engine initialized" << std::endl;
}

void Game::PollEvents() {
	while (SDL_PollEvent(&m_event) != 0)
		if (m_event.type == SDL_QUIT)
			this->CloseDisplay();
}

Game::~Game() {

}
