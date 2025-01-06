#include "Enemy.h"
#include "Player.h"

Enemy::~Enemy() { delete modelbullet_; }

void Enemy::Initialize(KamataEngine::Model* model, const KamataEngine::Vector3& pos) {
	assert(model);
	model_ = model;
	modelbullet_ = KamataEngine::Model::CreateFromOBJ("Tama", true);
	worldtransfrom_.translation_ = pos;
	worldtransfrom_.Initialize();
}

KamataEngine::Vector3 Enemy::GetWorldPosition() {

	// ワールド座標を入れる変数
	KamataEngine::Vector3 worldPos;
	// ワールド行列の平行移動成分を取得（ワールド座標）
	worldPos.x = worldtransfrom_.matWorld_.m[3][0];
	worldPos.y = worldtransfrom_.matWorld_.m[3][1];
	worldPos.z = worldtransfrom_.matWorld_.m[3][2];

	return worldPos;
}

void Enemy::OnCollision() { isDead_ = true; }

void Enemy::Fire() {

	assert(player_);

	spawnTimer--;

	if (spawnTimer < -0.0f) {

		KamataEngine::Vector3 moveBullet = worldtransfrom_.translation_;

		// 弾の速度
		const float kBulletSpeed = -3.0f;

		KamataEngine::Vector3 velocity(0, 0, 0);

		KamataEngine::Vector3 playerWorldtransform = player_->GetWorldPosition();
		KamataEngine::Vector3 enemyWorldtransform = GetWorldPosition();
		KamataEngine::Vector3 homingBullet = enemyWorldtransform - playerWorldtransform;
		homingBullet = Normalize(homingBullet);
		velocity.x += kBulletSpeed * homingBullet.x;
		velocity.y += kBulletSpeed * homingBullet.y;
		velocity.z += kBulletSpeed * homingBullet.z;

		// 弾を生成し、初期化
		EnemyBullet* newBullet = new EnemyBullet();
		newBullet->Initialize(modelbullet_, moveBullet, velocity);

		// 弾を登録する
		gameScene_->AddEnemyBullet(newBullet);

		spawnTimer = kFireInterval;
	}
}

void Enemy::Update() {

	// プレイヤーの現在位置を取得
	KamataEngine::Vector3 playerPos = player_->GetWorldPosition();
	// 敵の現在位置を取得
	KamataEngine::Vector3 enemyPos = GetWorldPosition();

	// プレイヤーに向かう方向ベクトルを計算
	KamataEngine::Vector3 direction = playerPos - enemyPos;
	direction = Normalize(direction); // 正規化

	// 移動速度
	const float kMoveSpeed = 0.05f;

	// 移動量を計算
	KamataEngine::Vector3 move = direction * kMoveSpeed;

	// 敵の位置を更新

	worldtransfrom_.translation_ += move;

	/*worldtransfrom_.translation_.x -= move.x;
	worldtransfrom_.translation_.y -= move.y;
	worldtransfrom_.translation_.z -= move.z;*/

	// ワールド行列を更新
	worldtransfrom_.UpdateMatarix();

	// 弾を発射
	Fire();
}



void Enemy::Draw(const KamataEngine::Camera& camera) { model_->Draw(worldtransfrom_, camera); }
