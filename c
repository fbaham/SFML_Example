cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Anim_Base.cpp -o obj/Debug/Anim_Base.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Anim_Directional.cpp -o obj/Debug/Anim_Directional.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Entity_Manager.cpp -o obj/Debug/Entity_Manager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c EventManager.cpp -o obj/Debug/EventManager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_Element.cpp -o obj/Debug/GUI_Element.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_Interface.cpp -o obj/Debug/GUI_Interface.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_Label.cpp -o obj/Debug/GUI_Label.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_Manager.cpp -o obj/Debug/GUI_Manager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_Scrollbar.cpp -o obj/Debug/GUI_Scrollbar.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c GUI_TextField.cpp -o obj/Debug/GUI_TextField.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Game.cpp -o obj/Debug/Game.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Main.cpp -o obj/Debug/Main.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Map.cpp -o obj/Debug/Map.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Base.cpp -o obj/Debug/S_Base.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Collision.cpp -o obj/Debug/S_Collision.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Control.cpp -o obj/Debug/S_Control.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Movement.cpp -o obj/Debug/S_Movement.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Renderer.cpp -o obj/Debug/S_Renderer.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_SheetAnimation.cpp -o obj/Debug/S_SheetAnimation.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_Sound.cpp -o obj/Debug/S_Sound.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c S_State.cpp -o obj/Debug/S_State.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c SoundManager.cpp -o obj/Debug/SoundManager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c SpriteSheet.cpp -o obj/Debug/SpriteSheet.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c StateManager.cpp -o obj/Debug/StateManager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c State_Game.cpp -o obj/Debug/State_Game.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c State_GameOver.cpp -o obj/Debug/State_GameOver.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c State_Intro.cpp -o obj/Debug/State_Intro.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c State_MainMenu.cpp -o obj/Debug/State_MainMenu.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c State_Paused.cpp -o obj/Debug/State_Paused.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c System_Manager.cpp -o obj/Debug/System_Manager.o
cpp -Wall -fexceptions -g -ISFML-2.5.0/include -c Window.cpp -o obj/Debug/Window.o
g++ LSFML-2.5.0/build-win/lib -o bin/Debug/SFML_c12.exe obj/Debug/Anim_Base.o obj/Debug/EventManager.o obj/Debug/GUI_Label.o obj/Debug/GUI_TextField.o  obj/Debug/Map.o obj/Debug/S_Control.o obj/Debug/S_SheetAnimation.o obj/Debug/SoundManager.o obj/Debug/State_Game.o obj/Debug/State_MainMenu.o obj/Debug/Window.o obj/Debug/Anim_Directional.o obj/Debug/GUI_Element.o obj/Debug/GUI_Manager.o obj/Debug/Game.o obj/Debug/S_Base.o obj/Debug/S_Movement.o obj/Debug/S_Sound.o obj/Debug/SpriteSheet.o obj/Debug/State_GameOver.o obj/Debug/State_Paused.o obj/Debug/Entity_Manager.o obj/Debug/GUI_Interface.o obj/Debug/GUI_Scrollbar.o obj/Debug/Main.o obj/Debug/S_Collision.o obj/Debug/S_Renderer.o  obj/Debug/S_State.o obj/Debug/StateManager.o obj/Debug/State_Intro.o obj/Debug/System_Manager.o -lsfml-window -lsfml-system -lsfml-graphics -lsfml-audio