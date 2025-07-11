#pragma once
#include "IScene.h"

class StageScene : public IScene {
public:
    void Initialize() override;
    int Update(char* keys, char* preKeys) override; // ← 修正！
    void Draw() override;
};
