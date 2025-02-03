#include "InputMove.h"

void InputMove::AssignMoveLeftCommand1() {
	ICommand* command = new MoveLeftCommand();
	this->press_Key1 = command;
}

void InputMove::AssignMoveRightCommand2() {
	ICommand* command = new MoveRightCommand();
	this->press_Key2 = command;
}

ICommand* InputMove::HandleInput() {
	if (input_->PushKey(DIK_RIGHT)) {
		return press_Key2;
	}

	if (input_->PushKey(DIK_LEFT)) {
		return press_Key1;
	}

	return nullptr;
}
