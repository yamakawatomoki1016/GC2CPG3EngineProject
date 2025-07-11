#pragma once

class IScene {
protected:
    int sceneNo_ = 0;

public:
    virtual ~IScene() {}
    virtual void Initialize() = 0;
    virtual int Update(char* keys, char* preKeys) = 0; // ← 戻り値をintに
    virtual void Draw() = 0;

    int GetSceneNo() const { return sceneNo_; }
};
