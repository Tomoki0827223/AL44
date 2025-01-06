//#pragma once
//#include <input/Input.h>
//#include <3d/Camera.h>
//#include <3d/Model.h>
//#include <3d/WorldTransform.h>
//#include <base/DirectXCommon.h>
//#include <audio/Audio.h>
//#include "Skydome.h"
//#include <2d/Sprite.h>
//#include <base/TextureManager.h>
//
//
//class SelectStage {
//
//public:
//
//	SelectStage();
//	~SelectStage();
//	
//	void Initialize();
//	void Update();
//	void Draw();
//
//	bool IsFinished() const { return finished_; }
//
//	uint32_t GetStageNumber() const { return StageNumber_; }
//
//	uint32_t StageNumber_ = 0;
//
//private:
//	
//	KamataEngine::DirectXCommon* dxCommon_ = nullptr;
//	KamataEngine::Input* input_ = nullptr;
//	KamataEngine::Audio* audio_ = nullptr;
//
//	// ワールドトランスフォーム
//	KamataEngine::WorldTransform worldTransform_;
//	
//	// ビュープロジェクション
//	KamataEngine::Camera viewProjection_;
//
//	bool finished_ = false;
//
//	// 天球
//	Skydome* skydome_ = nullptr;
//	KamataEngine::Model* modelSkydome_ = nullptr;
//
//	uint32_t textureHandle_ = 0;
//	KamataEngine::Sprite* sprite_ = nullptr;
//};
