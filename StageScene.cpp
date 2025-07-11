#include "StageScene.h"
#include "SceneNo.h"
#include <Novice.h>

void StageScene::Initialize() {}

int StageScene::Update(char* keys, char* preKeys) {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        return CLEAR;
    }
    return STAGE;
}

void StageScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Current Scene : Stage");
    Novice::ScreenPrintf(0, 30, "Push Space : Next Scene");
}
