#pragma once
#include "KamataEngine.h"
using namespace KamataEngine;

class Player {
public:
	void Initialize(KamataEngine::Model* model, KamataEngine::Camera* camera, const KamataEngine::Vector3& pos);
	void Update();
	void Draw();
	void MoveRight();
	void MoveLeft();
	KamataEngine::Vector3 GetWorldPosition() const;

private:
	KamataEngine::WorldTransform worldtransfrom_;
	KamataEngine::Model* model_ = nullptr;
	KamataEngine::Input* input_ = nullptr;
	KamataEngine::Camera* camera_ = nullptr;
};
