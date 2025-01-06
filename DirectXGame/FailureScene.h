//#pragma once
//#include <3d/Model.h>
//#include <3d/WorldTransform.h>
//#include "Skydome.h"
//#include <3d/Camera.h>
//#include <base/DirectXCommon.h>
//#include <input/Input.h>
//#include <audio/Audio.h>
//#include <2d/Sprite.h>
//
//
//class FailureScene {
//public:
//	/// <summary>
//	/// コンストクラタ
//	/// </summary>
//	FailureScene();
//
//	/// <summary>
//	/// デストクラタ
//	/// </summary>
//	~FailureScene();
//
//	/// <summary>
//	/// 初期化
//	/// </summary>
//	void Initialize();
//
//	/// <summary>
//	/// 更新
//	/// </summary>
//	void Update();
//
//	/// <summary>
//	/// 描画
//	/// </summary>
//	void Draw();
//
//	// デスフラグの getter
//	bool IsFinished() const { return finished_; }
//
//private:
//	
//	KamataEngine::DirectXCommon* dxCommon_ = nullptr;
//	KamataEngine::Input* input_ = nullptr;
//	KamataEngine::Audio* audio_ = nullptr;
//
//	// ワールドトランスフォーム
//	KamataEngine::WorldTransform worldTransform_;
//	// ビュープロジェクション
//	KamataEngine::Camera viewProjection_;
//
//	// 終了フラグ
//	bool finished_ = false;
//
//	// 天球
//	Skydome* skydome_ = nullptr;
//	KamataEngine::Model* modelSkydome_ = nullptr;
//
//	KamataEngine::Model* modelOver_ = nullptr;
//	KamataEngine::WorldTransform modelOverForm_;
//
//	KamataEngine::Model* modelPushFont_ = nullptr;
//	KamataEngine::WorldTransform PushFontForm_;
//};
