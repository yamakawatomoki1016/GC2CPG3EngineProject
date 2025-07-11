#include "ClearScene.h"
#include "SceneNo.h"
#include <Novice.h>

void ClearScene::Initialize() {}

int ClearScene::Update(char* keys, char* preKeys) {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        return TITLE;
    }
    return CLEAR;
}


void ClearScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Current Scene : Clear");
    Novice::ScreenPrintf(0, 30, "Push Space : Back to Title");
}
