
#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h" 


class player
{
private:
    /* data */
public:
  
  float timer = 0;
  bool Onground; 
  float speedPlayer = 0.2f;
  float gravity = 0.001f;
  float JumpForce = 1.0f;
  bool isJumping;

  bool Looking_Left= false;
  bool Looking_Right= false;
  
  bool Falling;
  void PlayerMovement(Vector2 &Mokey, Texture2D MokeySize, float deltaTime);
};
#endif
