#include <BallyLib.h>

Bally bally;

//Lamps
//#define GAME_OVER_LAMP_ROW 12
//#define GAME_OVER_LAMP_COL 2

#define BONUS_4K_ROW 0
#define BONUS_4K_COL 3
#define BONUS_3K_ROW 0
#define BONUS_3K_COL 2
#define BONUS_2K_ROW 0
#define BONUS_2K_COL 1
#define BONUS_1K_ROW 0
#define BONUS_1K_COL 0
#define BONUS_8K_ROW 1
#define BONUS_8K_COL 3
#define BONUS_7K_ROW 1
#define BONUS_7K_COL 2
#define BONUS_6K_ROW 1
#define BONUS_6K_COL 1
#define BONUS_5K_ROW 1
#define BONUS_5K_COL 0
#define WHEN_LIT_ROW 2
#define WHEN_LIT_COL 3
#define BONUS_20K_ROW 2
#define BONUS_20K_COL 2
#define BONUS_10K_ROW 2
#define BONUS_10K_COL 1
#define BONUS_9K_ROW 2
#define BONUS_9K_COL 0
#define A_SIDE_LANE_ROW 3
#define A_SIDE_LANE_COL 3
#define B_SIDE_LANE_ROW 3
#define B_SIDE_LANE_COL 2
#define AB_4K_ROW 5
#define AB_4K_COL 3
#define AB_3K_ROW 5
#define AB_3K_COL 2
#define AB_2K_ROW 5
#define AB_2K_COL 1
#define AB_1K_ROW 5
#define AB_1K_COL 0
#define SPECIAL_ROW 6
#define SPECIAL_COL 2
#define EXTRA_BALL_ROW 6
#define EXTRA_BALL_COL 1
#define AB_5K_ROW 6
#define AB_5K_COL 0
#define L_WHEN_LIT_50K_ROW 7
#define L_WHEN_LIT_50K_COL 3
#define R_WHEN_LIT_50K__ROW 7
#define R_WHEN_LIT_50K__COL 2
#define LEFT_LOW_POP_ROW 8
#define LEFT_LOW_POP_COL 3
#define RIGHT_LOW_POP_ROW 8
#define RIGHT_LOW_POP_COL 2
#define BONUS_2X_TOP_ROW 9
#define BONUS_2X_TOP_COL 3
#define BONUS_3X_TOP_ROW 9
#define BONUS_3X_TOP_COL 2
#define BONUS_5X_TOP_ROW 9
#define BONUS_5X_TOP_COL 1
#define CREDIT_INDICATOR_ROW 10
#define CREDIT_INDICATOR_COL 3
#define SHOOT_AGAIN_ROW 10
#define SHOOT_AGAIN_COL 2
#define MATCH_ROW 10
#define MATCH_COL 1
#define SAME_PLAYER_SHOOT_AGAIN_ROW 10
#define SAME_PLAYER_SHOOT_AGAIN_COL 0
#define BONUS_2X_LOW_ROW 11
#define BONUS_2X_LOW_COL 3
#define BONUS_3X_LOW_ROW 11
#define BONUS_3X_LOW_COL 2
#define BONUS_5X_LOW_ROW 11
#define BONUS_5X_LOW_COL 1
#define TILT_LAMP_ROW 12
#define TILT_LAMP_COL 3
#define GAME_OVER_ROW 12
#define GAME_OVER_COL 2
#define HIGH_GAME_TO_DATE_ROW 12
#define HIGH_GAME_TO_DATE_COL 1
#define BALL_IN_PLAY_ROW 12
#define BALL_IN_PLAY_COL 0
#define CAN_PLAY_4_ROW 13
#define CAN_PLAY_4_COL 3
#define CAN_PLAY_3_ROW 13
#define CAN_PLAY_3_COL 2
#define CAN_PLAY_2_ROW 13
#define CAN_PLAY_2_COL 1
#define CAN_PLAY_1_ROW 13
#define CAN_PLAY_1_COL 0
#define PLAYER_4_UP_ROW 14
#define PLAYER_4_UP_COL 3
#define PLAYER_3_UP_ROW 14
#define PLAYER_3_UP_COL 2
#define PLAYER_2_UP_ROW 14
#define PLAYER_2_UP_COL 1
#define PLAYER_1_UP_ROW 14
#define PLAYER_1_UP_COL 0



//momentary solenoids
#define SAUCER_KICK_OUT 0
//#define CHIME_10 8
//#define CHIME_100 4
//12 Chime 1000
//2 Chime 10000
//10 Knocker
#define OUT_HOLE_KICK 6
//14 Bottom Left Thumper Bumper
//1 Top Left Thumper Bumper
//9 Top Right Thumper Bumper
//5 Bottom Right Thumper Bumper
//13 Left Slingshot
#define LEFT_DROP_TARGET_RESET 3
//11 Right Slingshot
#define RIGHT_DROP_TARGET_RESET 7

//continuous solenoids
//0 Not Used
//1 Coin Lockout
#define FLIPPER_DISABLE 2
//3 Not Used

//playfield switchs
#define TILT_SWITCH_ROW 0
#define TILT_SWITCH_COL 6
#define OUT_HOLE_ROW 0
#define OUT_HOLE_COL 7
#define RIGHT_DROP_TARGET_D_BOTTOM_ROW 2
#define RIGHT_DROP_TARGET_D_BOTTOM_COL 0
#define RIGHT_DROP_TARGET_C_ROW 2
#define RIGHT_DROP_TARGET_C_COL 1
#define RIGHT_DROP_TARGET_B_ROW 2
#define RIGHT_DROP_TARGET_B_COL 2
#define RIGHT_DROP_TARGET_A_TOP_ROW 2
#define RIGHT_DROP_TARGET_A_TOP_COL 3
#define LEFT_DROP_TARGET_D_BOTTOM_ROW 2
#define LEFT_DROP_TARGET_D_BOTTOM_COL 4
#define LEFT_DROP_TARGET_C_ROW 2
#define LEFT_DROP_TARGET_C_COL 5
#define LEFT_DROP_TARGET_B_ROW 2
#define LEFT_DROP_TARGET_B_COL 6
#define LEFT_DROP_TARGET_A_TOP_ROW 2
#define LEFT_DROP_TARGET_A_TOP_COL 7
#define RIGHT_FLIPPER_FEED_LANE_ROW 3
#define RIGHT_FLIPPER_FEED_LANE_COL 0
#define LEFT_FLIPPER_FEED_LANE_ROW 3
#define LEFT_FLIPPER_FEED_LANE_COL 1
#define DROP_TARGET_REBOUND_ROW 3
#define DROP_TARGET_REBOUND_COL 2
#define BOTTOM_B_LANE_ROW 3
#define BOTTOM_B_LANE_COL 3
#define BOTTOM_A_LANE_ROW 3
#define BOTTOM_A_LANE_COL 4
#define TOP_B_LANE_ROW 3
#define TOP_B_LANE_COL 5
#define TOP_A_LANE_ROW 3
#define TOP_A_LANE_COL 6
#define TOP_CENTER_KICK_OUT_ROW 3
#define TOP_CENTER_KICK_OUT_COL 7
#define RIGHT_OUT_LANE_ROW 4
#define RIGHT_OUT_LANE_COL 0
#define LEFT_OUT_LANE_ROW 4
#define LEFT_OUT_LANE_COL 1
#define RIGHT_SLINGSHOT_ROW 4
#define RIGHT_SLINGSHOT_COL 2
#define LEFT_SLINGSHOT_ROW 4
#define LEFT_SLINGSHOT_COL 3
#define BOTTOM_RIGHT_POP_BUMPER_ROW 4
#define BOTTOM_RIGHT_POP_BUMPER_COL 4
#define BOTTOM_LEFT_POP_BUMPER_ROW 4
#define BOTTOM_LEFT_POP_BUMPER_COL 5
#define TOP_RIGHT_POP_BUMPER_ROW 4
#define TOP_RIGHT_POP_BUMPER_COL 6
#define TOP_LEFT_POP_BUMPER_ROW 4
#define TOP_LEFT_POP_BUMPER_COL 7

//cabinet switches
#define CREDIT_START_BUTTON_ROW 0   //add players
#define CREDIT_START_BUTTON_COL 5
#define COIN_III_COIN_RETURN_BUTTON_ROW 1   //add credits
#define COIN_III_COIN_RETURN_BUTTON_COL 0
//#define COIN_I_NOT_USED_ROW 1
//#define COIN_I_NOT_USED_COL 1
//#define COIN_II_NOT_USED_ROW 1
//#define COIN_II_NOT_USED_COL 2
#define SLAM_ROW 1
#define SLAM_COL 7

bool fireSaucer() {
    return bally.fireSolenoid(SAUCER_KICK_OUT, true);
}

bool fireOutHole() {
    return bally.fireSolenoid(OUT_HOLE_KICK, true);
}

bool enableFlipper() {
    return bally.setContSolenoid(FLIPPER_DISABLE, false);
}

bool getOutHole() {
    return bally.getRedge(OUT_HOLE_ROW, OUT_HOLE_COL);
}

bool getTopCenterKickOut() {
    return bally.getRedge(TOP_CENTER_KICK_OUT_ROW, TOP_CENTER_KICK_OUT_COL);
}

int rightDropTarget[4][2] = {{RIGHT_DROP_TARGET_D_BOTTOM_ROW, RIGHT_DROP_TARGET_D_BOTTOM_COL},
                             {RIGHT_DROP_TARGET_C_ROW,RIGHT_DROP_TARGET_C_COL},
                             {RIGHT_DROP_TARGET_B_ROW,RIGHT_DROP_TARGET_B_COL}, 
                             {RIGHT_DROP_TARGET_A_TOP_ROW, RIGHT_DROP_TARGET_A_TOP_COL}};

bool getRightDropTarget() {
    bool res = false;
    for(int  i = 0; i< 4; i++)
        res |= bally.getRedge(rightDropTarget[i][0], rightDropTarget[i][1]);
    return res;
}

int leftDropTarget[4][2] = {{LEFT_DROP_TARGET_D_BOTTOM_ROW, LEFT_DROP_TARGET_D_BOTTOM_COL},
                             {LEFT_DROP_TARGET_C_ROW,LEFT_DROP_TARGET_C_COL},
                             {LEFT_DROP_TARGET_B_ROW,LEFT_DROP_TARGET_B_COL},
                             {LEFT_DROP_TARGET_A_TOP_ROW, LEFT_DROP_TARGET_A_TOP_COL}};

bool getLeftDropTarget() {
    bool res = false;
    for(int  i = 0; i< 4; i++)
        res |= bally.getRedge(leftDropTarget[i][0], leftDropTarget[i][1]);
    return res;
}

bool getRightFlipperFeadLane() {
    return bally.getRedge(RIGHT_FLIPPER_FEED_LANE_ROW, RIGHT_FLIPPER_FEED_LANE_COL);
}

bool getLeftFlipperFeadLane() {
    return bally.getRedge(LEFT_FLIPPER_FEED_LANE_ROW, LEFT_FLIPPER_FEED_LANE_COL);
}

bool getBottomBLane() {
    return bally.getRedge(BOTTOM_B_LANE_ROW, BOTTOM_B_LANE_COL);
}

bool getBottomALane() {
    return bally.getRedge(BOTTOM_A_LANE_ROW, BOTTOM_A_LANE_COL);
}

bool getTopBLane() {
    return bally.getRedge(TOP_B_LANE_ROW, TOP_B_LANE_COL);
}

bool getTopALane() {
    return bally.getRedge(TOP_A_LANE_ROW, TOP_A_LANE_COL);
}

/*
void parseDisplay(int dispID, unsigned long score ){
    for(int digit = 0; digit < 7; digit++){
        unsigned char c = (unsigned char) (score % ((unsigned long) pow(10, digit)));
        bally.setDisplay(dispID, digit, c);
    }

}
*/

void displayScores(unsigned long num[]) {
    unsigned long playerScore[] = {num[0], num[1], num[2], num[3], num[4]};
    for (int display_index = 0; display_index < N_DISPLAYS; display_index++) {  //for each display
        for (int digit_index = 0; digit_index < N_DIGITS; digit_index++) {  //for each digit
            int digDecVal = (int) (playerScore[display_index] % 10); //stores the lowest digit
            unsigned char digByte = (unsigned char) digDecVal; //casts to unsigned char
            if (playerScore[display_index] > 0) { //if all digits havent' been processed
                playerScore[display_index] = playerScore[display_index] / 10; //remove lowest digit
                bally.setDisplay(display_index, digit_index, digByte); //set digit in byte array
            } else if (playerScore[display_index] == 0 && digit_index == 0) {
                bally.setDisplay(display_index, digit_index, digByte);
            } else { //if all digits in score have been processed
                bally.setDisplay(display_index, digit_index, 15); //writes 15 in binary, so no leading zeros displayed
            }
        }
    }
}

void blankDisplays() {
    for (int disp = 0; disp < 3; disp++) {
        for (int digit = 0; digit < 7; digit++) {
            bally.setDisplay(disp, digit, 15);
        }
    }
}

void setup() {//setup:
//initialize serial port (for sending debug messages),
    Serial.begin(9600);
//blank score displays
    blankDisplays();
//set any lamps that should always be on
    bally.setLamp(GAME_OVER_ROW, GAME_OVER_COL, true);
}

bool getAnyPlayFieldSwitch() {
    unsigned char res = 0;
    for (int i = 0; i < N_SWITCH_ROWS; i++)
        res |= bally.getSwitchRow(i);
    return res;
}

void loop() {
    static int credits = 0;
    static unsigned long highScore = 0;

//loop:
//        (each time thru the loop represents one complete game)
//init S/W state: scores
    unsigned long scores[4] = {0, 0, 0, 0};
// player number
    int numPlayers = 0, curPlayer = -1;
//ball number,
    int ballNums[4] = {0, 0, 0, 0};
//drop target
    bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, true);
    bally.fireSolenoid(LEFT_DROP_TARGET_RESET, true);
//counters, any other game and/or ball state variables
//        init H/W, such as game over lamp
    bally.setLamp(GAME_OVER_ROW, GAME_OVER_COL, true);
//        wait for credit (play) button to be pressed
    int button;
    while (numPlayers < 4 && !getAnyPlayFieldSwitch()) {
        button = bally.waitForTestCreditCoin(CREDIT_START_BUTTON_ROW, CREDIT_START_BUTTON_COL,
                                             COIN_III_COIN_RETURN_BUTTON_ROW, COIN_III_COIN_RETURN_BUTTON_COL);
        switch (button) {
            case TEST: {
                exit(0); //trigger reset
                break;
            }
            case CREDIT: {
                credits++;
                break;
            }
            case COIN: {//like a select/start button
                if (credits > 0 && numPlayers < 4) {
                    credits--;
                    numPlayers++;
                }
                break;
            }
            default:
                break;
        }
    }
//turn off game over
    bally.setLamp(GAME_OVER_ROW, GAME_OVER_COL, false);
//indicate #players=1
    int canPlay[4][2] = {{CAN_PLAY_1_ROW, CAN_PLAY_1_COL},
                         {CAN_PLAY_2_ROW, CAN_PLAY_2_COL},
                         {CAN_PLAY_3_ROW, CAN_PLAY_3_COL},
                         {CAN_PLAY_4_ROW, CAN_PLAY_4_COL}};
    bally.setLamp(canPlay[numPlayers - 1][0], canPlay[numPlayers - 1][1], true);

//init score displays to zero
    displayScores(scores);
//loop for each player and ball (3 balls per player per game)
    while (ballNums[0] > 0) {
//zero the switch memory so don’t retain sticky hits from before
        for (int i = 0; i < N_SWITCH_ROWS; i++)
            bally.getRedgeRow(i);
//init any S/W and H/W state that should reset on each ball
        //TODO:implement bonus
//light current player up and display the ball number
        int playerUp[4][2] = {{PLAYER_1_UP_ROW, PLAYER_1_UP_COL},
                              {PLAYER_2_UP_ROW, PLAYER_2_UP_COL},
                              {PLAYER_3_UP_ROW, PLAYER_3_UP_COL},
                              {PLAYER_4_UP_ROW, PLAYER_4_UP_COL}};
        curPlayer = 0;
        bally.setLamp(playerUp[curPlayer][0], playerUp[curPlayer][1], true);
//      fire the outhole solenoid to eject a ball
        fireOutHole();
        enableFlipper();
//      loop, reading each playfield switch
        bool stopRequested = false;
        while (!stopRequested) {
//          for each switch hit, take appropriate action (add player (ie. increment score),
//          fire solenoid, add points, play chime, arm bonus, etc.)
//          until the outlane switch is read
            
        }
//      advance current player and/or ball number
//      until each player has played 3 balls
    }
//        check for high score (optional)
//perform random score match (optional), fire knocker on match

}




//void setup() {
//  Serial.begin(9600);
//  enableFlipper();
//  if(getOutHole()){
//    delay(1000);
//    fireOutHole();
//  }
//}

//void loop() {
//  if(getTopCenterKickOut()){
//    delay(1000);
//    fireSaucer();
//  }
//
//if(getOutHole()){
//    delay(1000);
//    fireOutHole();
//  }
//}
