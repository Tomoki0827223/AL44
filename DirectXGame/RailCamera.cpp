#include "RailCamera.h"

void RailCamera::Initialize(const KamataEngine::Vector3& pos, const KamataEngine::Vector3& rad) {

	// 初期化
	worldtransfrom_.translation_ = pos;
	worldtransfrom_.rotation_ = rad;

	worldtransfrom_.Initialize();
	camera_.Initialize();
}

void RailCamera::Update() {

	//
	// ここにカメラの更新処理を追加できる
	//
	worldtransfrom_.translation_.z -= 0.11f;
	worldtransfrom_.rotation_.y -= 0.001f;

	//
	// ここにカメラの更新処理を追加できる
	//
	worldtransfrom_.UpdateMatarix();
	camera_.UpdateMatrix();
	camera_.matView = Inverse(worldtransfrom_.matWorld_);
	camera_.TransferMatrix();

	ImGui::Begin("Camera");
	// Translationスライダーの表示
	ImGui::Text("Translation");
	ImGui::SliderFloat3("TranslationX", &camera_.translation_.x, -100.0f, 100.0f);
	ImGui::SliderFloat3("TranslationY", &camera_.translation_.y, -100.0f, 100.0f);
	ImGui::SliderFloat3("TranslationZ", &camera_.translation_.z, -100.0f, 100.0f);
	// Rotationスライダーの表示
	ImGui::Text("Rotation");
	ImGui::SliderFloat3("Rotation", &camera_.rotation_.x, -180.0f, 180.0f);
	ImGui::SliderFloat3("Rotation", &camera_.rotation_.y, -180.0f, 180.0f);
	ImGui::SliderFloat3("Rotation", &camera_.rotation_.z, -180.0f, 180.0f);

	// nearZスライダーの表示
	ImGui::SliderFloat3("Rotation", &camera_.nearZ, -180.0f, 180.0f);

	ImGui::End();
}
