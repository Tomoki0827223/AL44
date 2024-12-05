#pragma once
#include "Enemy.h"
#include "KamataEngine.h"
#include "Player.h"
#include "Skydome.h"
#include "RailCamera.h"
using namespace KamataEngine;

class GameScene {
public:
	GameScene();
	~GameScene();

	void Initialize();
	void Update();
	void Draw();

	void CheckAllCollisions();

private:
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	Player* player_ = nullptr;
	Enemy* enemy_ = nullptr;
	Vector3 enemyPos = {0, 3, 100};

	Model* modelPlayer_ = nullptr;
	Model* modelEnemy_ = nullptr;

	RailCamera* railCamera_ = nullptr;
	Vector3 railcameraPos = {0, 0, 0};
	Vector3 railcameraRad = {0, 0, 0};

	// std::vector<std::vector<WorldTransform*>> worldTransformBlocks_;
	Camera camera_;

	bool isDebugCameraActive_ = false;
	// デバックカメラ
	DebugCamera* debugCamera_ = nullptr;

	Skydome* skydome_ = nullptr;
	Model* modelSkydome_ = nullptr;
};