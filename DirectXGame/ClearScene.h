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
//class ClearScene {
//
//public:
//	/// <summary>
//	/// コンストクラタ
//	/// </summary>
//	ClearScene();
//
//	/// <summary>
//	/// デストクラタ
//	/// </summary>
//	~ClearScene();
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
//	KamataEngine::Model* modelClear_ = nullptr;
//	KamataEngine::WorldTransform modelClearForm_;
//
//	KamataEngine::Model* modelPushFont_ = nullptr;
//	KamataEngine::WorldTransform PushFontForm_;
//
//	// uint32_t soundSEData_1 = 0;
//	// uint32_t soundSE_1 = 0;
//	// bool soundSE_Clear_ = false;
//
//	// uint32_t soundSEData_2 = 0;
//	// uint32_t soundSE_2 = 0;
//};
