#include "olcPixelGameEngine.h"
#include "olcPGEX_SplashScreen.h"
#include "asset_manager.h"
#include "scene.h"
#include "game_scenes.h"

using am = AssetManager;

class olc23 : public olc::PixelGameEngine
{
    //Enable when releasing :)
    //olc::SplashScreen splash;    

    SceneManager scene_manager;

public:
    olc23() : scene_manager(*this)
    {
        sAppName = "game_name";
    }
    
public:

    bool OnUserCreate() override
    {
        scene_manager.push_scene(new MainMenu(*this, scene_manager));
        return true;
    }
    
    bool OnUserUpdate(float fElapsedTime) override
    {
        Clear(olc::BLACK);
        bool have_scenes = scene_manager.update(fElapsedTime);
        scene_manager.draw();
        return have_scenes;
    }

};


int main()
{
    srand(time(nullptr));
    olc23 game;
    if(game.Construct(800, 400, 2, 2))
        game.Start();

    return 0;
}

