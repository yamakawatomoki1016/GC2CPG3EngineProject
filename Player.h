#pragma once
#include "Vector2.h" 
class Player {
public:
	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

private:
	Vector2 position_;
	float speed_ = 5.0f;
};
