#include "InputHandler.h"

void InputHandler::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD = command;
}

ICommand* InputHandler::HandleInput() {
	if (input_->PushKey(DIK_D)) {
		return pressKeyD;
	}

	if (input_->PushKey(DIK_A)) {
		return pressKeyA;
	}

	return nullptr;
}
