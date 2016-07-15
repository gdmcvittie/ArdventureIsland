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
int MAX_HEARTS = 5;
int HEARTS = 5;
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
int rock_y = 48;

//spikes position
int spikes_x = 240;
int spikes_y = 52;

//spider position
int spider_x = 500;
int spider_y = 2;

//boulder position
int boulder_x = 350;
int boulder_y = 2;

//snail position
int snail_x = 450;
int snail_y = 48;

//egg position
int egg_x = 300;
int egg_y = 48;

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
bool BOULDER_BOUNCED = false;


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
  arduboy.initRandomSeed();
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
      if(SELECTED_LEVEL == 0){
        trace("SELECT AN ISLAND");
      }else if(SELECTED_LEVEL == 1){
        arduboy.drawRect(5, 5, 32, 32, 0);    
        trace("CAVERNS OF DOOOOOOOOM");
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
      addHud();
      //add player
      addPlayer();
      //add goodies and baddies
      addItems();
      //timed death
      timedDeath();
    break;





    //game over
    case 5: 
      arduboy.drawSlowXYBitmap(48,8,the_game_over,32,32,WHITE);
      handleButtons();
      arduboy.display();
      if(!SOUND_PLAYED){
        SOUND_PLAYED = true;
        soundGameOver();
      }
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
        HEARTS = MAX_HEARTS;
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



        //game play
        case 2: 
          if( arduboy.pressed(RIGHT_BUTTON)) {
            WALKING = true;
            //scroll
            bg_scroll--;
            updateScrolling();
          } else {
            WALKING = false;
          }
        break;
  }
}








/*
 * add hud
 */
void addHud(){
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
  //add score
  arduboy.setCursor(44,1);
  arduboy.print(SCORE);
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









/*
 * goodies and baddies
 */
void addItems(){
  arduboy.initRandomSeed();
  switch(CURRENT_LEVEL){
    //level 1
    case 1:
      //goodies
      doEggs();
      //baddies
      doRocks();
      doSpikes();
      doSpiders();
      doBoulders();
      doSnails();
    break;

    //level 2
    case 2:
      doRocks();
    break;

    //level 3
    case 3:
      doRocks();
    break;
  }
}





/*
 * goodies
 */
void doEggs(){
  if(egg_x == -8){
    egg_x = random(128,350);
  }
  egg_x--;
  arduboy.drawBitmap(egg_x,egg_y,the_egg,8,8,WHITE);
  return;
}




/*
 * baddies
 */
//rocks
void doRocks(){
  if(rock_x == -8){
    rock_x = random(128,700);
  }
  rock_x--;
  arduboy.drawBitmap(rock_x,rock_y,the_rock,8,8,WHITE);
  return;
}

//spikes
void doSpikes(){
  if(spikes_x == -8){
    spikes_x = random(200,500);
  }
  spikes_x--;
  arduboy.drawBitmap(spikes_x,spikes_y,the_spikes,8,8,WHITE);
  return;
}

//snails
void doSnails(){
  if(snail_x == -8){
    snail_x = random(275,750);
  }
  snail_x--;
  arduboy.drawBitmap(snail_x,snail_y,the_snail,8,8,WHITE);
  return;
}

//spider
void doSpiders(){
  if(spider_x > 0){
    spider_x--;
    //spider goes down
    if(spider_y < 36 && !SPIDER_IS_DOWN){
      spider_y++;
    } 
    //spider is down
    if(spider_y == 36){
      SPIDER_IS_DOWN = true;
    }
    //spider goes up
    if(spider_y > 2 && SPIDER_IS_DOWN){
      spider_y--;
    }
    //spider is up
    if(spider_y == 2){
      SPIDER_IS_DOWN = false;
    }
    
  } else {
    spider_x = random(128,600);
    SPIDER_DEAD = false;
    spider_y = 2;
  }
  arduboy.drawBitmap(spider_x,spider_y,the_spider,8,8,WHITE);
}

//boulders
void doBoulders(){
  if(boulder_x > 0){
    if(arduboy.everyXFrames(2)){
      boulder_x = boulder_x-3;
    }
    //spider goes down
    if(boulder_y < 42 && !BOULDER_BOUNCED){
      boulder_y++;
    } 
    //spider is down
    if(boulder_y == 42){
      BOULDER_BOUNCED = true;
    }
    //spider goes up
    if(boulder_y > 30 && BOULDER_BOUNCED){
      if(arduboy.everyXFrames(3)){
        boulder_y--;
      }      
    }
    //spider is up
    if(boulder_y == 30){
      BOULDER_BOUNCED = false;
    }
    
  } else {
    boulder_x = random(300,800);
    BOULDER_BOUNCED = false;
    boulder_y = 2;
  }
  arduboy.drawBitmap(boulder_x,boulder_y,the_boulder,16,16,WHITE);
}















/*
 * timed death
 */
void timedDeath(){
  if(GAME_STATE == 2){
    if(arduboy.everyXFrames(DING_EVERY_X_FRAMES)){
      dingHealth();
    }
    //add to seconds played
    if(arduboy.everyXFrames(60)){
      SECS_PLAYED++;   
    }
  }
}






/*
 * ding the health
 */
void dingHealth(){
  if(HEARTS > 0){
    HEARTS--;
  }
  if(HEARTS == 0){
    if(LIVES == 0){
      //game over
      GAME_STATE = 5;
    } else {
      LIVES--;
      HEARTS = MAX_HEARTS;
      soundBad();
    }
  }
}

void trace(String the_string){
  arduboy.setCursor(0,56);
  arduboy.print(the_string);
}
