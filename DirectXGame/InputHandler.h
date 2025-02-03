#pragma once
#include "command.h"
#include <KamataEngine.h>
using namespace KamataEngine;

class InputHandler {
public:
	InputHandler() { input_ = Input::GetInstance(); }

	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyD;
	ICommand* pressKeyA;
	Input* input_ = nullptr;
};
