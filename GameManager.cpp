﻿#include "GameManager.h"
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include "SceneNo.h"
#include <Novice.h>

GameManager::GameManager() {
    sceneArr_[TITLE] = std::make_unique<TitleScene>();
    sceneArr_[STAGE] = std::make_unique<StageScene>();
    sceneArr_[CLEAR] = std::make_unique<ClearScene>();

    currentSceneNo_ = TITLE;
    prevSceneNo_ = currentSceneNo_;
}

GameManager::~GameManager() {}

int GameManager::Run() {
    char keys[256] = { 0 };
    char preKeys[256] = { 0 };

    while (Novice::ProcessMessage() == 0) {
        Novice::BeginFrame();

        memcpy(preKeys, keys, 256);
        Novice::GetHitKeyStateAll(keys);

        prevSceneNo_ = currentSceneNo_;

        // Updateの戻り値で次のシーン番号を受け取る
        int nextSceneNo = sceneArr_[currentSceneNo_]->Update(keys, preKeys);

        if (prevSceneNo_ != nextSceneNo) {
            currentSceneNo_ = nextSceneNo;
            sceneArr_[currentSceneNo_]->Initialize();
        }

        sceneArr_[currentSceneNo_]->Draw();

        Novice::EndFrame();

        if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
            break;
        }
    }

    return 0;
}
