#include "TitleScene.h"
#include "SceneNo.h" // ← シーン番号定義（例: enum SceneNo { TITLE, STAGE, CLEAR };）
#include <Novice.h>

void TitleScene::Initialize() {}

int TitleScene::Update(char* keys, char* preKeys) {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        return STAGE;
    }
    return TITLE; // 変わらないときは今のまま
}


void TitleScene::Draw() {
    Novice::ScreenPrintf(0, 0, "Current Scene : Title");
    Novice::ScreenPrintf(0, 30, "Push Space : Next Scene");
}
