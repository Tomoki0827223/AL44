#pragma once
#include "InputHandler.h"
#include "KamataEngine.h"
#include "Player.h"
#include "Skydome.h"
using namespace KamataEngine;

class GameScene {
public:
	GameScene();
	~GameScene();

	void Initialize();
	void Update();
	void Draw();

private:
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	Player* player_ = nullptr;
	KamataEngine::Vector3 playerPos = {0, 0, 25};

	KamataEngine::Model* modelPlayer_ = nullptr;
	KamataEngine::Camera camera_;

	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;

	Skydome* skydome_ = nullptr;
	Model* modelSkydome_ = nullptr;
};
