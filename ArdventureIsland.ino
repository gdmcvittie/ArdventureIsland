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
int GAME_SPEED = 1;

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
int MAX_LIVES = 3;
int HEARTS = 5;
int LIVES = 3;
int DING_EVERY_X_FRAMES = 120;
int MAX_BOSS_HEALTH = 20;
int BOSS_HEALTH = 20;
int BOSS_MIN_X = 12; //close to player if standing still - increase to make boss easier, lower to make harder, 12 seems fair.

//score
int SCORE = 0;


/*
 * positioning
 */
//hud top offset
int hud_offset = 11;

//player position
int player_x = 32;
int player_y = 41;

//platform position
int platform_x = 128;
int platform_y = 42;

//boss position
int boss_x = 80;
int boss_y = 16;

//rock position
int rock_x = 160;
int rock_y = 48;

//spikes position
int spikes_x = 240;
int spikes_y = 52;

//spider position
int spider_x = 500;
int spider_y = 2;

//bee position
int bee_x = 500;
int bee_y = 24;

//boulder position
int boulder_x = 350;
int boulder_y = 2;

//bird position
int bird_x = 350;
int bird_y = 2;

//snail position
int snail_x = 450;
int snail_y = 48;

//egg position
int egg_x = 300;
int egg_y = 48;

//fruit position
int fruit_x = 190;
int fruit_y = 32;

//hammer position
int hammer_x = player_x;
int hammer_y = 64;



//level end position
int level_end_x = 128;
int level_end_y = 24;

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
bool PLAYER_HIT = false;

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
bool BIRD_BOUNCED = false;
bool BOSS_HIT = false;

//misc
bool SCROLLING = true;
bool ALLOW_BUTTONS = true;




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
        trace("CHOOSE YOUR ADVENTURE");
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
      //handle collisions
      handleCollisions();
      //timed death
      timedDeath();
    break;


    //boss
    case 3: 
      //player always has hammer in boss battles
      HAS_HAMMER = true;
      //player never has skateboard in boss battles
      HAS_SKATE = false;
      //add hud
      addHud();
      //add player
      addPlayer();
      //add boss
      addBoss();
      //add hammer
      doHammer();
      //handle collisions
      handleCollisions();
    break;





    //game over
    case 5: 
      arduboy.drawBitmap(48,8,the_boss1,32,32,WHITE);
      arduboy.setCursor(38,50);
      arduboy.print("TRY AGAIN");
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
            soundMisc();
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
            soundMisc();
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
          if(ALLOW_BUTTONS){
            //speed up
            if( arduboy.pressed(RIGHT_BUTTON)) {
              WALKING = true;
              GAME_SPEED = 3;
              //scroll
              bg_scroll--;
              updateScrolling();
            } else {
              WALKING = false;
              GAME_SPEED = 1;
            }
  
            //jump
            if( arduboy.pressed(B_BUTTON)){
              if(!JUMPING){
                player_y = 8;
                player_x = 50;
                delay(10);
                JUMPING = true;
                soundJump();
              }      
            }
  
            //throw hammer
            if( arduboy.pressed(A_BUTTON)){
              if(HAS_HAMMER){
                hammer_y = player_y;
                FIRING = true;
                soundThrow();
              }
            }
          }
        break;


        //boss
        case 3: 
          //move left
          if( arduboy.pressed(LEFT_BUTTON)) {
            if(player_x>8){
              player_x--;
            }
          }
          
          //move right
          if( arduboy.pressed(RIGHT_BUTTON)) {
            if(player_x<72){
              player_x++;
            }
          }

          //jump
          if( arduboy.pressed(B_BUTTON)){
            if(!JUMPING){
              player_y = 2;
              JUMPING = true;
              //soundJump(); //gets annoying in boss battles
            }      
          }

          //throw hammer
          if( arduboy.pressed(A_BUTTON)){
            if(HAS_HAMMER){
              hammer_y = player_y;
              hammer_x = player_x;
              FIRING = true;
              //soundThrow(); //gets annoying in boss battles
            }
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

  //boss health
  if(GAME_STATE==3){
    arduboy.fillRect(0,(hud_offset+1),(BOSS_HEALTH*(128/MAX_BOSS_HEALTH)),2,1);
  }
}








/*
 * update scrolling
 */
void updateScrolling(){
  if(GAME_STATE==2 && SCROLLING){
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


    if(bg_scroll<-16){
      bg_scroll = 0;
    }
  
    switch (CURRENT_LEVEL){
      //level 1
      case 1:
        for(int i=bg_scroll; i<142; i=i+16){
          arduboy.drawBitmap(i,8,the_level1_top_tile, 16, 16, WHITE); 
          arduboy.drawBitmap(i,56,the_level1_btm_tile, 16, 16, WHITE);        
        }
      break;
  
      //level 2
      case 2:
        arduboy.drawBitmap(0,16,the_level2_trees, 144, 40, WHITE); 
        for(int i=bg_scroll; i<142; i=i+16){          
          arduboy.drawBitmap(i,8,the_level2_top_tile, 16, 16, WHITE); 
          arduboy.drawBitmap(i,56,the_level2_btm_tile, 16, 16, WHITE);  
        }
      break;
  
      //level 3
      case 3:
  
      break;
    }

  //not scrolling, just draw level
  } else if(GAME_STATE == 2 && !SCROLLING){
    switch (CURRENT_LEVEL){
      //level 1
      case 1:
        for(int i=0; i<128; i=i+16){
          arduboy.drawBitmap(i,8,the_level1_top_tile, 16, 16, WHITE); 
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
}









/*
 * draw the player
 */
void addPlayer(){
  if(GAME_STATE == 2 || GAME_STATE == 3){
    //are we jumping?
    if(JUMPING){
      if(player_y == 2){
          player_y = player_y+2;
          player.frame = 6;
      }
      if(player_y > 2 && player_y < 41){
        player_y = player_y+2;
      }       
      if(player_y >= 41){
        JUMPING = false;
        player.frame = 0;
        player_y = 41;
      }
      player.x = player_x;    
      player.y = player_y;
    }    
    
    if(arduboy.everyXFrames(4)){
      if(!JUMPING && GAME_STATE == 2) {
        if(player_x>32){
          player_x--;
        }
      }
      player.x = player_x;  
    }
  
    //are we firing?
    if(FIRING){
      throwHammer();
    }
    
    //do we have a skateboard?
    if(HAS_SKATE){
      player.frame = 3;
    }

    //are we on a platform?
    if((player_x+16) >= platform_x && (player_x+16) < (platform_x+32)){
      if((player_y+16) >= platform_y && (player_y+16) < (platform_y+8)){
        //on the platform
        player_y = platform_y-16;
      }
    }
  
    //draw the player
    sprites.draw(player);
  }  
 }






/*
 * add boss
 */
void addBoss(){
  ALLOW_BUTTONS = true;
  switch(CURRENT_LEVEL){
    //level 1 boss
    case 1:
      for(int i=0; i<128; i=i+16){
        arduboy.drawBitmap(i,56,the_level1_btm_tile, 16, 16, WHITE);        
      }
      if(arduboy.everyXFrames(45)){
        boss_x = random(20,90);
        boss_y = random(BOSS_MIN_X,28);
        soundMisc();
      }      
      arduboy.drawBitmap(boss_x,boss_y,the_boss1, 32, 32, WHITE);  
    break;

    //level 2 boss
    case 2:

    break;

    //level 3 boss
    case 3:

    break;
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
      if(SCROLLING){
        //goodies
        doEggs();
        doFruits();
        //baddies
        doRocks();
        doSpikes();
        doSpiders();
        doBoulders();
        doSnails();
      }
      doHammer();
    break;

    //level 2
    case 2:
      if(SCROLLING){
        //goodies
        doEggs();
        doFruits();
        //baddies
        doRocks();
        doBees(); //hehehe
        doSpiders();
        doSnails();
        doBirds();
        //platform
        doPlatform();
      }
      doHammer();
    break;

    //level 3
    case 3:
      if(SCROLLING){
        doRocks();
      }
    break;
  }
}





/*
 * goodies
 */
 //eggs
void doEggs(){
  if(egg_x == -8){
    egg_x = random(128,350);
  }
  egg_x--;
  arduboy.drawBitmap(egg_x,egg_y,the_egg,8,8,WHITE);
  return;
}

 //fruits
void doFruits(){
  if(fruit_x == -8){
    fruit_x = random(128,575);
    fruit_y = 32;
  }
  fruit_x--;
  arduboy.drawBitmap(fruit_x,fruit_y,the_fruit,8,8,WHITE);
  return;
}

//hammer
void doHammer(){
  if(HAS_HAMMER){
    arduboy.drawBitmap(hammer_x,hammer_y,the_hammer,8,8,WHITE);
  }  
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

//bees
void doBees(){
  if(bee_x == -8){
    bee_x = random(128,600);
    bee_y = random(20,36);
  }
  bee_x--;
  arduboy.drawBitmap(bee_x,bee_y,the_bee,8,8,WHITE);
  return;
}

//spider
void doSpiders(){
  if(arduboy.everyXFrames(2)){
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

//birds
void doBirds(){
  if(bird_x > 0){
    if(arduboy.everyXFrames(2)){
      bird_x = bird_x-3;
    }
    //spider goes down
    if(bird_y < 42 && !BIRD_BOUNCED){
      bird_y++;
    } 
    //spider is down
    if(bird_y == 42){
      BIRD_BOUNCED = true;
    }
    //spider goes up
    if(bird_y > 30 && BIRD_BOUNCED){
      if(arduboy.everyXFrames(3)){
        bird_y--;
      }      
    }
    //spider is up
    if(bird_y == 30){
      BIRD_BOUNCED = false;
    }
    
  } else {
    bird_x = random(300,800);
    BIRD_BOUNCED = false;
    bird_y = 2;
  }
  arduboy.drawBitmap(bird_x,bird_y,the_bird,16,16,WHITE);
}

//platform
void doPlatform(){
  switch(CURRENT_LEVEL){
    case 2:
      if(arduboy.everyXFrames(2)){
        if(platform_x == -32){
          platform_x = random(128,600);
          platform_y = random(38,42);
        }
        platform_x--;
      }
      arduboy.drawBitmap(platform_x,platform_y,the_level2_platform,32,8,WHITE);
    break;
  }
  
}



/*
 * throw hammer
 */

void throwHammer(){
  if(HAS_HAMMER && FIRING){
    if(hammer_y < 50){
      hammer_x = hammer_x + 5;
      hammer_y++;
    } else {
      hammer_x = player_x+2;
      hammer_y = 64;
      FIRING = false;
    }
  }


}







/*
 * collisions
 */
void handleCollisions(){
  if(GAME_STATE == 2){
    //hit a rock
    if( (player_x + 10) == rock_x){
      if( (player_y+10) >= rock_y){
        player.frame = 5;
        WALKING = false;
        FIRING = false;
        delay(100);
        dingHealth();
      }
    }

    //hit a snail
    if( (player_x + 10) == snail_x){
      if( (player_y+10) >= snail_y){
        player.frame = 5;
        WALKING = false;
        FIRING = false;
        delay(100);
        dingHealth();
      }
    }

    //hit spikes
    if( (player_x + 10) == spikes_x){
      player.frame = 5;
      WALKING = false;
      FIRING = false;
      delay(100);
      dingHealth();
    }

    //hit spider
    if( (player_x + 10) == spider_x){
      if( (spider_y+16) >= player_y ){
        player.frame = 5;
        WALKING = false;
        FIRING = false;
        delay(100);
        dingHealth();
      }
    }

    //hit boulder
    if( (player_x + 10) == boulder_x){
      if( (boulder_y+16) >= player_y ){
        player.frame = 5;
        WALKING = false;
        FIRING = false;
        delay(100);
        dingHealth();
      }
    }

    //hit  bird
    if( (player_x + 10) >= bird_x && (player_x+10) <= (bird_x+20)){
      if( (player_y+10) >= bird_y && (player_x+10) <= (bird_y+16) ){
        player.frame = 5;
        WALKING = false;
        FIRING = false;
        delay(100);
        dingHealth();
      }
    }

    //give a hammer or skateboard (hit egg)
    if( (player_x + 8) == egg_x || player_x == egg_x ){
      if( (player_y+10) >= egg_y){
        if(!HAS_HAMMER){
          HAS_HAMMER = true;
        } else {
          //have a hammer, give a skateboard
          if(!HAS_SKATE){
            HAS_SKATE = true;
          } else {
            //have hammer and skateboard, give a heart
            addHealth();
          }
        }
        egg_x = random(128,384);
        soundGood();
      }
    }

    //hit fruit, yum!
    
    if( (player_x + 10) == (fruit_x-10) ){
      if( (fruit_y+10) >= player_y){
        fruit_y = 64;
        addHealth();
      }
    }

    /*
     * hammer collisions
     */
    if( HAS_HAMMER && FIRING ){
      //snails
      if( (hammer_x+10) >= (snail_x-10) && (hammer_x+10) <= (snail_x+20) ){
        if( (hammer_y+10) >= (snail_y-10) && (hammer_y+10) <= (snail_y+20)){
          snail_x = -7;
          soundHit();
          resetHammer();
        }
      }
      //bees
      if( (hammer_x+10) >= (bee_x-10) && (hammer_x+10) <= (bee_x+20)){
        if( (hammer_y+10) >= (bee_y-10) && (hammer_y+10) <= (bee_y+20) ){
          bee_x = -7;
          soundHit();
          resetHammer();
        }
      }
      //spiders
      if( (hammer_x+10) >= (spider_x-10) && (hammer_x+10) <= (spider_x+20)){
        if( (hammer_y+10) >= (spider_y-10) && (hammer_y+10) <= (spider_y+20) ){
          spider_x = -10;
          soundHit();
          resetHammer();
        }
      }
      //birds
      if( (hammer_x+10) >= (bird_x-16) && (hammer_x+10) <= (bird_x+20)){
        if( (hammer_y+10) >= (bird_y-10) && (hammer_y+10) <= (bird_y+20) ){
          bird_x = -10;
          soundHit();
          resetHammer();
        }
      }
    }
  }//end game state 2

  //bosses
  if(GAME_STATE==3){
    //hammer
    if(FIRING){
      if( (hammer_x+10) >= (boss_x-10) && (hammer_x+10) <= (boss_x+52) ){
        if( (hammer_y+10) >= (boss_y-10) && (hammer_y) <= (boss_y+52) ){
          if(!BOSS_HIT){
            BOSS_HIT = true;
            if(BOSS_HEALTH>0){
              BOSS_HEALTH--;
              boss_x = boss_x+2;
              soundHit();            
            } else {
              //win!
              soundBossDone();
              if(CURRENT_LEVEL==1){
                LEVEL_1_COMPLETE = true;
              }
              GAME_STATE = 1;
              delay(1000);
            }
          } else {
            if(arduboy.everyXFrames(25)){
              BOSS_HIT = false;
            }
          }
        }
      }
    }
    
    //player
    if( (player_x+16) >= boss_x && (player_x+10) <= (boss_x+32) ){
      if( player_y >= boss_y && player_y <= (boss_y+32) ){
        if(!PLAYER_HIT){
          PLAYER_HIT = true;
          if(player_x>8){
            player_x = player_x-8;
          }
          if(boss_x<120){
            boss_x = boss_x+2;
          }          
          dingHealth();
        } 
      }
    }
    
  }//end bosses
    
}




/*
 * reset hammer
 */
void resetHammer(){
  FIRING = false;
  hammer_x = player_x;
  hammer_y = 64;
  return;
}





/*
 * level end
 */
void doLevelEnd(){
  SCROLLING = false;
  ALLOW_BUTTONS = false;
  
  if(level_end_x>97){
    level_end_x--;
  }
  if(player_x<132){
    player_x++;
  }
  HAS_SKATE = false;
  player.frame = 0;
  arduboy.drawBitmap(level_end_x,level_end_y,the_level_end,32,32,WHITE);
  if(player_x==128){
    soundLevelDone();
  }
  if(player_x == 132){
    //boss time!
    GAME_STATE = 3;
    player_x = 8;
    ALLOW_BUTTONS = true;
  }
}







/*
 * timed death
 */
void timedDeath(){
  if(GAME_STATE == 2){
    if(arduboy.everyXFrames( (DING_EVERY_X_FRAMES/GAME_SPEED) )){
      dingHealth();
    }
    //add to seconds played
    if(arduboy.everyXFrames(60)){
      SECS_PLAYED++; 
    }
    //check the time
    checkTime();
  }
}




/*
 * check time
 */
void checkTime(){
  //check how long we've played
  switch(CURRENT_LEVEL){
    //level 1
    case 1:
      if(SECS_PLAYED >= 10){
        doLevelEnd();
      }
    break;

    //level 2
    case 2:
      if(SECS_PLAYED >= 60){
        doLevelEnd();
      }
    break;

    //level 3
    case 3:
      if(SECS_PLAYED >= 75){
        doLevelEnd();
      }
    break;
  }
}





/*
 * ding the health
 */
void dingHealth(){
  if(ALLOW_BUTTONS){
    if(HEARTS > 0){
      HEARTS--;
      soundBad();
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
    PLAYER_HIT = false;
    //bosses do some real damage
    if(GAME_STATE==3){
      if(HEARTS > 0){
        HEARTS--;
      }
    }
  }
}




/*
 * add to health
 */
void addHealth(){
  if(HEARTS<MAX_HEARTS){
    HEARTS++; 
  } else {
    if(LIVES<MAX_LIVES){
      LIVES++;
    }
  }
  soundGood();
}

void trace(String the_string){
  arduboy.setCursor(0,56);
  arduboy.print(the_string);
}
