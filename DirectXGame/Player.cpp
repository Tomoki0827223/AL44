#include "Player.h"
#include <cassert>

void Player::Initialize(KamataEngine::Model* model, KamataEngine::Camera* camera, const KamataEngine::Vector3& pos) {
	assert(model);
	model_ = model;
	camera_ = camera;
	worldtransfrom_.translation_ = pos;
	input_ = KamataEngine::Input::GetInstance();
	worldtransfrom_.Initialize();
}

void Player::Update() { worldtransfrom_.UpdateMatarix(); }

void Player::Draw() { model_->Draw(worldtransfrom_, *camera_); }

void Player::MoveRight() { worldtransfrom_.translation_.x += 1.0f; }

void Player::MoveLeft() { worldtransfrom_.translation_.x -= 1.0f; }

KamataEngine::Vector3 Player::GetWorldPosition() const { return worldtransfrom_.translation_; }
