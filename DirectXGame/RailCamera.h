#pragma once
#include <3d/Camera.h>
#include <3d/Model.h>
#include <3d/WorldTransform.h>
#include <3d/DebugCamera.h>
#include "affine.h"


class Player;

class RailCamera {

public:

	struct Rect {
		float left = 0.0f;
		float right = 1.0f;
		float bottom = 0.0f;
		float top = 1.0f;
	};

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize(const KamataEngine::Vector3& pos, const KamataEngine::Vector3& rad);
	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	void setTarget(Player* target) { target_ = target; }
	const Camera& GetViewProjection() { return camera_; }
	const WorldTransform& GetWorldTransform() { return worldtransfrom_; }

private:

	Player* target_ = nullptr;

	/// <summary>
	/// ターゲット
	///
	KamataEngine::WorldTransform worldtransfrom_;
	KamataEngine::Camera camera_;
	KamataEngine::Vector3 velocity_ = {1.0f, 1.0f, 1.0f};
};