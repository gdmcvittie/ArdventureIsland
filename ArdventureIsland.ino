/*
 * Grant D. McVittie
 * PixelPlatforms
 * 
 * v0.1
 */
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include "sprites.h"
#include "bitmaps.h"

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites(arduboy.getBuffer());

/*
 * game variables
 */ 
int FPS = 30;
int SELECTED_LEVEL = 0;
int CURRENT_LEVEL = 0;
int GAME_STATE = 0;
/*
* 0 = intro
* 1 = picker
* 2 = play
* 3 = boss
* 4 = win
* 5 = game over
*/

//time
int SECS_PLAYED = 0;

//health
int HEARTS = 3;
int LIVES = 3;
int DING_EVERY_X_FRAMES = 120;

//score
int SCORE = 0;


/*
 * positioning
 */
//hud top offset
int hud_offset = 11;

//player position
int player_x = 32;
int player_y = 40;

//rock position
int rock_x = 160;
int rock_y = 40;

//egg position
int egg_x = random(128,360);
int egg_y = 40;

//scrolling
int bg_scroll = 0;

/*
 * flags
 */
//sound
bool SOUND_ENABLED = false;
bool SOUND_PLAYED = false;

//level picker 
bool LEVEL_1_COMPLETE = false;
bool LEVEL_2_COMPLETE = false;
bool LEVEL_3_COMPLETE = false;

//player actions
bool WALKING = true;
bool JUMPING = false;
bool FIRING = false;
bool IS_HIT = false;

//goodies
bool GOT_FRUIT = false;
bool HAS_HAMMER = false;
bool HAS_SKATE = false;

//baddies
bool SNAIL_DEAD = false;
bool BEE_DEAD = false;
bool SPIDER_DEAD = false;
bool SPIDER_IS_DOWN = false;


/*
 * sprites
 */
Sprite player(player_x,player_y,the_player,the_player_mask);


/*
 * ok go
 */
void setup() {
  arduboy.boot();
  arduboy.systemButtons();
  arduboy.audio.begin();
  arduboy.setFrameRate(FPS); 
}

void loop() {
  if (!(arduboy.nextFrame()))
    return;

  //clean slate
  arduboy.clear();
  
  //build level
  buildLevel();
}

/*
 * build level
 */
void buildLevel(){
  arduboy.clear();
  switch( GAME_STATE ){
    //intro screen
    case 0:
      arduboy.drawSlowXYBitmap(0,0,the_intro, 128, 64, WHITE);
      if(SOUND_ENABLED){   
        trace("SOUND ON");
        if(!SOUND_PLAYED){
          soundGood();
          SOUND_PLAYED = true;
        }      
      } else {    
        trace("SOUND OFF");
        SOUND_PLAYED = false;
      }
      break;

    //level picker
    case 1:
      SOUND_PLAYED = false;
      arduboy.drawSlowXYBitmap(0,0,the_level_picker, 128, 64, WHITE);
      trace("SELECT AN ISLAND");
      //check for level completion
      if(LEVEL_1_COMPLETE){
        arduboy.drawSlowXYBitmap(5,5, the_level_done, 32, 32, WHITE);
      }
      if(LEVEL_2_COMPLETE){
        arduboy.drawSlowXYBitmap(52,18, the_level_done, 32, 32, WHITE);
      }
      if(LEVEL_3_COMPLETE){
        arduboy.drawSlowXYBitmap(90,5, the_level_done, 32, 32, WHITE);
      }
      //add boxes for level picker
      if(SELECTED_LEVEL == 1){
        arduboy.drawRect(5, 5, 32, 32, 0);    
        trace("THE CAVES OF DOOOOOOM");
      } else if(SELECTED_LEVEL == 2){
        arduboy.drawRect(52, 18, 32, 32, 0);
        trace("FOREST OF DESTRUCTION");
      } else if(SELECTED_LEVEL == 3){
        arduboy.drawRect(90, 5, 32, 32, 0);
        trace("CLOUDS OF YOUR DEMISE");
      }
      break;

    //game play
    case 2:
      //level 1
      if(CURRENT_LEVEL == 1){
        

      //level 2
      } else if(CURRENT_LEVEL == 2){


      //level 3
      }else if(CURRENT_LEVEL == 3){
        
      }

      //scroll
      bg_scroll--;
      updateScrolling();
      //add hud
      addHud(true,true);
      //add player
      addPlayer();
    break;
  }

  arduboy.display();
  //handle button inputs
  handleButtons();
}



/*
 * handle button inputs
 */
void handleButtons(){
  switch( GAME_STATE ){
    //intro screen
    case 0:
      //sound
      if(arduboy.pressed(A_BUTTON) ){
        if(SOUND_ENABLED){
          SOUND_ENABLED = false;
          arduboy.audio.off();
        } else {
          SOUND_ENABLED = true;  
          arduboy.audio.on();    
        }
        delay(50);
      }
      if ( arduboy.pressed(B_BUTTON) ){
        LIVES = 3;
        HEARTS = 3;
        SCORE = 0;
        SECS_PLAYED = 0;
        GAME_STATE = 1;
        delay(50);  
      }
      break;

      //level picker
      case 1:
        //next
        if( arduboy.pressed(RIGHT_BUTTON)) {
          if(!SOUND_PLAYED){
            soundGood();
            SOUND_PLAYED = true;
          }
          if(SELECTED_LEVEL!=3){
            SELECTED_LEVEL++;
          } else {
            SELECTED_LEVEL = 1;
          }
          delay(50);
        }
        //prev
        if( arduboy.pressed(LEFT_BUTTON)) {
          if(!SOUND_PLAYED){
            soundGood();
            SOUND_PLAYED = true;
          }
          if(SELECTED_LEVEL!=1){
            SELECTED_LEVEL--;
          } else {
            SELECTED_LEVEL = 3;
          }
          delay(50);
        }
        //select
        if( arduboy.pressed(A_BUTTON) || arduboy.pressed(B_BUTTON) ){
          if(SELECTED_LEVEL!=0){
            CURRENT_LEVEL = SELECTED_LEVEL;
            delay(50);
            GAME_STATE = 2;  
          }
        }
        break;
  }
}


/*
 * add hud
 */
void addHud(bool incTime, bool incScore){
  arduboy.fillRect(0,0,128,hud_offset,1);
  //add hearts
  for(int i = 0; i < HEARTS; i++){
    int16_t heartx = (119 - (i*10));
    int16_t hearty = 1;
    arduboy.drawSlowXYBitmap(heartx,hearty,the_heart,8,8,BLACK);
  }      
  //add lives
  for(int i = 0; i < LIVES; i++){
    int16_t livesx = (1 + (i*10));
    int16_t livesy = 1;
    arduboy.drawSlowXYBitmap(livesx,livesy,the_lives,8,8,BLACK);
  }
  //add time
  if(incTime){
    arduboy.setCursor(34,1);
    arduboy.print(SECS_PLAYED);
  }
  //add score
  if(incScore){
    arduboy.setCursor(64,1);
    arduboy.print(SCORE);
  }
}



/*
 * update scrolling
 */
void updateScrolling(){
  if(GAME_STATE==2){
    if(!HAS_SKATE){
      if(arduboy.everyXFrames(2)){
        if(!HAS_SKATE){
          if(player.frame < 2){
            player.frame = player.frame + 1;
          } else {
            player.frame = 0;
          }
        } else {
          player.frame = 3;
        }
      }
    } else {
      if(!HAS_SKATE){
        if(player.frame < 2){
          player.frame = player.frame + 1;
        } else {
          player.frame = 0;
        }
      } else {
        player.frame = 3;
      }
    }
  }

  if(bg_scroll<-16){
    bg_scroll = 0;
  }
  
  switch (CURRENT_LEVEL){
    //level 1
    case 1:
      //top tiles
      for(int i=bg_scroll; i<142; i=i+16){
        arduboy.drawBitmap(i,8,the_level1_top_tile, 16, 16, WHITE);        
      }
      //btm tiles
      for(int i=bg_scroll; i<142; i=i+16){
        arduboy.drawBitmap(i,56,the_level1_btm_tile, 16, 16, WHITE);        
      }
    break;

    //level 2
    case 2:

    break;

    //level 3
    case 3:

    break;
  }
}




/*
 * draw the player
 */
void addPlayer(){
  if(GAME_STATE == 2){
    //are we jumping?
    if(JUMPING){
      if(player_y == 12){
          player_y++;
          player.frame = 6;
      }
      if(player_y > 12 && player_y < 32){
        player_y++;
      }       
      if(player_y == 32){
        JUMPING = false;
        player.frame = 0;
      }
      player.x = player_x;    
      player.y = player_y;
    }
  
    if(JUMPING){
      if(player_x<42){
        player_x++;
      }
      player.x = player_x;
    }
    
    
    
    if(arduboy.everyXFrames(4)){
      if(!JUMPING) {
        if(player_x>32){
          player_x--;
        }
      }
      player.x = player_x;  
    }
  
    //are we firing?
    if(FIRING){
      player.frame = 5;  
      //throwHammer();
    }
    
    //do we have a skateboard?
    if(HAS_SKATE){
      player.frame = 3;
    }
  
    //draw the player
    sprites.draw(player);
  }  
 }


void trace(String the_string){
  arduboy.setCursor(0,56);
  arduboy.print(the_string);
}
