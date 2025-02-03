#include "GaneScene.h"
#include "3d/AxisIndicator.h"
#include <cassert>

GameScene::GameScene() {}

GameScene::~GameScene() {
	delete modelPlayer_;
	delete player_;
	delete inputHandler_;
	//delete modelSkydome_;
	//delete skydome_;
}

void GameScene::Initialize() {

	dxCommon_ = DirectXCommon::GetInstance();
	input_ = Input::GetInstance();
	audio_ = Audio::GetInstance();

	inputHandler_ = new InputMove();
	inputHandler_->AssignMoveRightCommand2();
	inputHandler_->AssignMoveLeftCommand1();

	player_ = new Player();
	modelPlayer_ = KamataEngine::Model::CreateFromOBJ("Tama", true);
	player_->Initialize(modelPlayer_, &camera_, playerPos);

	/*skydome_ = new Skydome();
	modelSkydome_ = KamataEngine::Model::CreateFromOBJ("skydome", true);
	skydome_->Initialize(modelSkydome_, &camera_);*/

	camera_.Initialize();

	KamataEngine::AxisIndicator::GetInstance()->SetVisible(true);
	KamataEngine::AxisIndicator::GetInstance()->SetTargetCamera(&camera_);
}

void GameScene::Update() {
	iCommand_ = inputHandler_->HandleInput();
	if (iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
	camera_.UpdateMatrix();
	//skydome_->Update();
}

void GameScene::Draw() {
	ID3D12GraphicsCommandList* commandList = dxCommon_->GetCommandList();

	Sprite::PreDraw(commandList);
	Sprite::PostDraw();
	dxCommon_->ClearDepthBuffer();
	KamataEngine::Model::PreDraw(commandList);

	player_->Draw();

	KamataEngine::Model::PostDraw();
	Sprite::PreDraw(commandList);
	Sprite::PostDraw();

	//skydome_->Draw();
}
