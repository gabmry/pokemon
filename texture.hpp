#include <SFML/Graphics.hpp>
#include <iostream>

//#ifndef PERSONNAGE on part du principe qu'on va beaucoup y acceder � partir de plusieurs emplacement

void deplacements(sf::Sprite &sprite_perso);
void camera();

#ifndef PERSONNAGE
#define PERSONNAGE

     extern sf:: Texture personnage;
    extern sf:: Sprite sprite_perso;
    extern int screenW, screenH;
    extern sf::View cam;


    //gestion FPS
    extern bool updateFPS;
    extern float fpsCount, switchFps, fpsSpeed500;


    //timer
    extern sf::Clock timer;



#endif



