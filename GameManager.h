#pragma once

#include <memory>

class IScene;

class GameManager {

private:

	// シーン配列
	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;

	int prevSceneNo_;

	bool justChanged_ = false; // シーン切り替え直後フラグ

public:

	GameManager();

	~GameManager();

	int Run();
};