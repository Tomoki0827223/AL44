//#include "TitleScene.h"
//#include <numbers>
//// #include "imgui.h"
//
//TitleSence::TitleSence() {}
//
//TitleSence::~TitleSence() {
//	delete titlemodel_;
//	delete titlemodelFont_;
//	delete TitleSkydome_;
//}
//
//void TitleSence::Initialize() {
//
//	dxCommon_ = KamataEngine::DirectXCommon::GetInstance();
//	titlemodel_ = KamataEngine::Model::CreateFromOBJ("SugoiMan", true);
//	titleWorldTransform_.Initialize();
//	titlemodelFont_ = KamataEngine::Model::CreateFromOBJ("StartFont", true);
//	titleWorldTransformFont_.Initialize();
//	TitleSkydome_ = KamataEngine::Model::CreateFromOBJ("TitleSkydome", true);
//	titleskydome.Initialize();
//	viewProjection_.Initialize();
//	Timer_ = 0.0f;
//
//	// タイトルを中央に寄せるために調整
//	titleWorldTransform_.translation_ = {0.0f, 30.0f, -40.0f}; // x, y, zの値を調整
//
//	titleWorldTransformFont_.translation_ = {-18.0f, -10.0f, 0.0f}; // x, y, zの値を調整
//
//	titleskydome.translation_ = {0.0f, 0.0f, 0.0f};
//}
//
//void TitleSence::Update() {
//	// キー入力によるシーンの遷移
//	if (KamataEngine::Input::GetInstance()->TriggerKey(DIK_SPACE)) {
//		finished_ = true;
//	}
//
//	Timer_ += 1.0f / 240.0f;
//	float param = std::cosf(2.0f * std::numbers::pi_v<float> * Timer_ / kWalklMotionTime);
//	float oscillation = kWalkMotionAngleEnd * (param + 1.0f) / 4.0f;
//	titleWorldTransform_.translation_.y = kWalkMotionAngleStart + oscillation;
//
//	//// ImGuiでフォントの位置を調整
//	// ImGui::Begin("Title Font Position");
//	//// テキストボックスを使って手入力できるようにする
//	// ImGui::InputFloat("Position X", &titleWorldTransformFont_.translation_.x);
//	// ImGui::InputFloat("Position Y", &titleWorldTransformFont_.translation_.y);
//	// ImGui::InputFloat("Position Z", &titleWorldTransformFont_.translation_.z);
//
//	// ImGui::InputFloat("titleSky X", &titleskydome.translation_.x);
//	// ImGui::InputFloat("titleSky Y", &titleskydome.translation_.y);
//	// ImGui::InputFloat("titleSky Z", &titleskydome.translation_.z);
//	// ImGui::End();
//
//	// 行列計算
//	titleWorldTransform_.UpdateMatarix();
//	titleWorldTransformFont_.UpdateMatarix(); // ここでも行列を更新
//}
//
//void TitleSence::Draw() {
//
//	ID3D12GraphicsCommandList* commandList = dxCommon_->GetCommandList();
//
//	KamataEngine::Model::PreDraw(commandList);
//
//	titlemodel_->Draw(titleWorldTransform_, viewProjection_);
//
//	titlemodelFont_->Draw(titleWorldTransformFont_, viewProjection_);
//
//	TitleSkydome_->Draw(titleskydome, viewProjection_);
//
//	KamataEngine::Model::PostDraw();
//}
