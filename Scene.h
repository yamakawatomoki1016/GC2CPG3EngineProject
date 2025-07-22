#pragma once

#include "Player.h"
#include "InputHandler.h"
#include "Command.h"

class Scene {
public:
	void Initialize();
	void Update();
	void Draw();

private:
	Player* player_ = nullptr;
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
};
