#include "game_scenes.h"
#include "asset_manager.h"

using am = AssetManager;

void MainMenu::update(float dt) {
    if (pge.GetMouse(0).bPressed){
        sm.push_scene(new GameScene(pge, sm));
    }
}

void MainMenu::draw() {
    pge.DrawStringDecal({0,0}, "Main Menu", olc::WHITE, {2.0f, 2.0f});
    pge.DrawStringDecal({0,32}, "Click to Play");
}

void GameScene::update(float dt) {
}

void GameScene::draw() {
}