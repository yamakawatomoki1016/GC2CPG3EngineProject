#pragma once
#include "Command.h"

class InputHandler {
public:
	ICommand* pressKeyA_ = nullptr;
	ICommand* pressKeyD_ = nullptr;

	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
};
