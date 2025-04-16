#pragma once
#include "KamataEngine.h"

using namespace KamataEngine;

class GameScene 
{
public:
	~GameScene();

	void Initialize();

	void Update();

	void Draw();

private:
	// パーティクル3Dモデルデータ
	Model* modelParticle_ = nullptr;

	Camera camera_;

};