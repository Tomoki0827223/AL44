//#include "Setumei.h"
//
//// #include "imgui.h"
//
//Setumei::~Setumei() {
//	delete titlemodel_;
//	delete titlemodelFont_;
//	delete TitleSkydome_;
//	delete sprite_;
//}
//
//void Setumei::Initialize() {
//	dxCommon_ = KamataEngine::DirectXCommon::GetInstance();
//	input_ = KamataEngine::Input::GetInstance();
//	audio_ = KamataEngine::Audio::GetInstance();
//
//	textureHandle_ = KamataEngine::TextureManager::Load("Sousasetsumei.png");
//	sprite_ = KamataEngine::Sprite::Create(textureHandle_, {0, 0});
//
//	titleskydome.Initialize();
//	viewProjection_.Initialize();
//
//	Timer_ = 0.0f;
//
//	// 天球を生成
//	skydome_ = new Skydome();
//	modelSkydome_ = KamataEngine::Model::CreateFromOBJ("skydome", true);
//	// 天球を初期化
//	skydome_->Initialize(modelSkydome_, &viewProjection_);
//
//	// タイトルを中央に寄せるために調整
//	titleWorldTransform_.translation_ = {0.0f, 30.0f, -40.0f}; // x, y, zの値を調整
//
//	titleWorldTransformFont_.translation_ = {-18.0f, -10.0f, 0.0f}; // x, y, zの値を調整
//
//	titleskydome.translation_ = {0.0f, 0.0f, 0.0f};
//}
//
//void Setumei::Update() {
//	// キー入力によるシーンの遷移
//	if (KamataEngine::Input::GetInstance()->TriggerKey(DIK_SPACE)) {
//		finished_ = true;
//	}
//}
//
//void Setumei::Draw() {
//	ID3D12GraphicsCommandList* commandList = dxCommon_->GetCommandList();
//
//#pragma region 3Dオブジェクト描画
//	// 3Dオブジェクト描画前処理
//	KamataEngine::Model::PreDraw(commandList);
//
//	/// <summary>
//	/// ここに3Dオブジェクトの描画処理を追加できる
//	/// </summary>
//
//	// 3Dオブジェクト描画後処理
//	KamataEngine::Model::PostDraw();
//#pragma endregion
//
//#pragma region 前景スプライト描画
//	// 前景スプライト描画前処理
//	KamataEngine::Sprite::PreDraw(commandList);
//
//	/// <summary>
//	/// ここに前景スプライトの描画処理を追加できる
//	/// </summary>
//
//	sprite_->Draw();
//
//	// スプライト描画後処理
//	KamataEngine::Sprite::PostDraw();
//
//#pragma endregion
//}
