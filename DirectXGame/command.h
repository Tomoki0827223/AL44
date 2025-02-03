#pragma once
#include "KamataEngine.h"
#include "Player.h"
using namespace KamataEngine;

class ICommand {
public:
	virtual ~ICommand() {}
	virtual void Exec(Player& player) = 0;

};

class MoveRightCommand : public ICommand {
public:
	void Exec(Player& player) override { player.MoveRight(); }
};

class MoveLeftCommand : public ICommand {
public:
	void Exec(Player& player) override { player.MoveLeft(); }
};
