#pragma once
#include "IScene.h"

class TitleScene : public IScene {
public:
    void Initialize() override;
    int Update(char* keys, char* preKeys) override; // ← void → int に修正
    void Draw() override;
};
