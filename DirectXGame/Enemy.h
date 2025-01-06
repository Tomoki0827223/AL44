#pragma once
#include "EnemyBullet.h"
#include "GaneScene.h"
#include "affine.h"
#include <3d/Camera.h>
#include <3d/Model.h>
#include <3d/WorldTransform.h>
#include <cassert>

class Player;
class GameScene;

enum class Phase {
	Approach, // 接近する
	Leave,    // 離脱する
};

class Enemy {
public:
	void Initialize(KamataEngine::Model* model, const KamataEngine::Vector3& pos);
	void Update();
	void Draw(const KamataEngine::Camera& camera);
	~Enemy();
	void Fire();

	void OnCollision();

	KamataEngine::Vector3 GetWorldPosition();

	void SetPlayer(Player* player) { player_ = player; }
	void SetGameScene(GameScene* gameScene) { gameScene_ = gameScene; }

	bool IsDead() const { return isDead_; }

	// 発射間隔
	static const int kFireInterval = 15;

	bool isDead_ = false;

private:
	KamataEngine::WorldTransform worldtransfrom_;
	KamataEngine::Model* model_ = nullptr;

	KamataEngine::Model* modelbullet_ = nullptr;

	// 発射タイマー
	int32_t spawnTimer = 0;

	Player* player_ = nullptr;
	GameScene* gameScene_ = nullptr;

	Phase phase_ = Phase::Approach;

	Phase Bulletphase_ = Phase::Approach;

	const float kDisappearDistance = 1.0f; // 消滅する距離の閾値
};
