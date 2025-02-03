#pragma once
#include "command.h"
#include <KamataEngine.h>
using namespace KamataEngine;

class InputMove {
public:

	InputMove() { input_ = Input::GetInstance(); }

	ICommand* HandleInput();

	void AssignMoveLeftCommand1();
	void AssignMoveRightCommand2();

private:

	ICommand* press_Key2;
	ICommand* press_Key1;
	Input* input_ = nullptr;

};
