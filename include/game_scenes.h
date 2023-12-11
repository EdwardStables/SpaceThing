#pragma once

#include "olcPixelGameEngine.h"
#include "olcPGEX_QuickGUI.h"
#include "scene.h"

class MainMenu : public Scene {
public:
    MainMenu (
        olc::PixelGameEngine& pge,
        SceneManager& sm
    ) :
        Scene(pge, "MainMenu", sm, nullptr)
    {
    }
    virtual void update(float dt) override;
    virtual void draw() override;
};


class GameScene : public Scene {
public:

    GameScene(
        olc::PixelGameEngine& pge,
        SceneManager& sm
    ) :
        Scene(pge, "GameScene", sm, new PauseMenuBase(pge, sm))
    { }

    virtual void update(float dt) override;
    virtual void draw() override;
};