#include <BallyLib.h>

Bally bally;
//#define TESTPIN 3
//Lamps
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

int feedLaneBonusScores[11][2] = {{BONUS_1K_ROW, BONUS_1K_COL}, {BONUS_2K_ROW, BONUS_2K_COL},{BONUS_3K_ROW, BONUS_3K_COL},
                                  {BONUS_4K_ROW, BONUS_4K_COL},{BONUS_5K_ROW, BONUS_5K_COL},{BONUS_6K_ROW, BONUS_6K_COL},
                                  {BONUS_7K_ROW, BONUS_7K_COL},{BONUS_8K_ROW, BONUS_8K_COL},{BONUS_9K_ROW, BONUS_9K_COL},
                                  {BONUS_10K_ROW, BONUS_10K_COL},{BONUS_20K_ROW, BONUS_20K_COL}};

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

int abLaneBonuses[7][2] = {{AB_1K_ROW, AB_1K_COL}, {AB_2K_ROW, AB_2K_COL}, {AB_3K_ROW, AB_3K_COL},
                           {AB_4K_ROW, AB_4K_COL}, {AB_5K_ROW, AB_5K_COL}, {EXTRA_BALL_ROW, EXTRA_BALL_COL},
                           {SPECIAL_ROW, SPECIAL_COL}};
//#define L_WHEN_LIT_50K_ROW 7
//#define L_WHEN_LIT_50K_COL 3
//#define R_WHEN_LIT_50K__ROW 7
//#define R_WHEN_LIT_50K__COL 2
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

int sinkholeBonuses[3][2] = {{BONUS_2X_TOP_ROW, BONUS_2X_TOP_COL},{BONUS_3X_TOP_ROW, BONUS_3X_TOP_COL},
                         {BONUS_5X_TOP_ROW, BONUS_5X_TOP_COL}};

//#define CREDIT_INDICATOR_ROW 10
//#define CREDIT_INDICATOR_COL 3
#define SHOOT_AGAIN_ROW 10
#define SHOOT_AGAIN_COL 2
//#define MATCH_ROW 10
//#define MATCH_COL 1
//#define SAME_PLAYER_SHOOT_AGAIN_ROW 10
//#define SAME_PLAYER_SHOOT_AGAIN_COL 0
#define BONUS_2X_LOW_ROW 11
#define BONUS_2X_LOW_COL 3
#define BONUS_3X_LOW_ROW 11
#define BONUS_3X_LOW_COL 2
#define BONUS_5X_LOW_ROW 11
#define BONUS_5X_LOW_COL 1

int feedLaneBonusMultipliers[4][2]={{BONUS_2X_LOW_ROW, BONUS_2X_LOW_COL}, {BONUS_3X_LOW_ROW, BONUS_3X_LOW_COL},
                                    {BONUS_5X_LOW_ROW, BONUS_5X_LOW_COL}, {SHOOT_AGAIN_ROW, SHOOT_AGAIN_COL}};
//#define TILT_LAMP_ROW 12
//#define TILT_LAMP_COL 3
#define GAME_OVER_ROW 12
#define GAME_OVER_COL 2
//#define HIGH_GAME_TO_DATE_ROW 12
//#define HIGH_GAME_TO_DATE_COL 1
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
#define CHIME_10 8
#define CHIME_100 4
#define CHIME_1000 12
#define CHIME_10000 2
//#define KNOCKER 10
#define OUT_HOLE_KICK 6
#define BOTTOM_LEFT_POP_BUMPER 14
#define TOP_LEFT_POP_BUMPER 1
#define TOP_RIGHT_POP_BUMPER 9
#define BOTTOM_RIGHT_POP_BUMPER 5
#define LEFT_SLINGSHOT 13
#define LEFT_DROP_TARGET_RESET 3
#define RIGHT_SLINGSHOT 11
#define RIGHT_DROP_TARGET_RESET 7

//continuous solenoids
//0 Not Used
//1 Coin Lockout
#define FLIPPER_DISABLE 2
//3 Not Used

//playfield switchs
//#define TILT_SWITCH_ROW 0
//#define TILT_SWITCH_COL 6
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
//#define SLAM_ROW 1
//#define SLAM_COL 7

int totalBalls = 0;

bool fireSaucer() {
    return bally.fireSolenoid(SAUCER_KICK_OUT, true);
}

bool fireOutHole() {
    bool res =  bally.fireSolenoid(OUT_HOLE_KICK, true);
    delay(500);
    bally.getDebRedge(OUT_HOLE_ROW, OUT_HOLE_COL);
    return res;
}

bool enableFlipper() {
    return bally.setContSolenoid(FLIPPER_DISABLE, false);
}

bool ballInPlay = false;
int feedLaneBonusMultiplierIndex = 0, feedLaneBonusScoreIndex = 0, sinkholeBonus = 0, abLaneBonus = 0;


unsigned long scores[4] = {0, 0, 0, 0};
int numPlayers = 0, curPlayer = 0;
int ballNums[4] = {0, 0, 0, 0};
int credits = 0;
//unsigned long highScore = 0;

void displayScores(unsigned long num[], int numPlayers) {
    unsigned long playerScore[] = {num[0], num[1], num[2], num[3], num[4]};
    for (int display_index = 0; display_index < numPlayers; display_index++) {  //for each display
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

void creditBallDisplay(int ballNum, int credits) {
    for (int digit = 0; digit < 7; digit++) {
        if (digit == 0) {
            bally.setDisplay(4, digit, (unsigned char) ballNum);
        } else if (digit == 3) {
            bally.setDisplay(4, digit, (unsigned char) (credits % 10));
        } else if (digit == 4) {
            bally.setDisplay(4, digit, (unsigned char) (credits / 10));
        } else {
            bally.setDisplay(4, digit, 15);
        }
    }
}

void ballAdDec(int adDec){
    if(adDec > 0){
        if(ballNums[curPlayer] < 5) {
            ballNums[curPlayer]++;
            totalBalls++;
        }
    }
    else{
        ballNums[curPlayer]--;
        totalBalls--;
    }
    creditBallDisplay(ballNums[curPlayer], credits);
}

void advanceFeedLaneBonus(){
    bally.setLamp(feedLaneBonusScores[feedLaneBonusScoreIndex][0],
                  feedLaneBonusScores[feedLaneBonusScoreIndex][1], false);
    if(feedLaneBonusMultiplierIndex<4) {
        feedLaneBonusScoreIndex++;
    }
    if(feedLaneBonusScoreIndex==11) {
        if(feedLaneBonusMultiplierIndex != 0) {
            bally.setLamp(feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex-1][0],
                          feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex-1][1], false);
        }
        if(feedLaneBonusMultiplierIndex<5){
            feedLaneBonusMultiplierIndex++;
        }
        if(feedLaneBonusMultiplierIndex==5) {
            ballAdDec(1);
        }
    }
    feedLaneBonusScoreIndex%=11;
    bally.setLamp(feedLaneBonusScores[feedLaneBonusScoreIndex][0],
                  feedLaneBonusScores[feedLaneBonusScoreIndex][1], true);
    if(feedLaneBonusMultiplierIndex != 0) {
        bally.setLamp(feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][0],
                      feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][1], true);
    }

}

void collectFeedLaneBonus(){
    unsigned long score = 0;
    if(feedLaneBonusScoreIndex<10) {
        score = (unsigned long) ((feedLaneBonusScoreIndex + 1) * 1000);
    } else {
        score = 20000;
    }
    if(feedLaneBonusMultiplierIndex < 3) {
        score *= feedLaneBonusMultiplierIndex + 1;
    } else if(feedLaneBonusMultiplierIndex == 4){
        score *= 5;
    }

    if(feedLaneBonusMultiplierIndex < 5) {
        scores[curPlayer]+=score;
        displayScores(scores, numPlayers);
    }  else if(feedLaneBonusMultiplierIndex == 5){
        ballAdDec(1);
        creditBallDisplay(ballNums[curPlayer], credits);
    }


    bally.setLamp(feedLaneBonusScores[feedLaneBonusScoreIndex][0],
                  feedLaneBonusScores[feedLaneBonusScoreIndex][1], false);
    if(feedLaneBonusMultiplierIndex != 0) {
        bally.setLamp(feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][0],
                      feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][1], false);
    }
    feedLaneBonusMultiplierIndex = 0;
    feedLaneBonusScoreIndex = 0;
    bally.setLamp(feedLaneBonusScores[feedLaneBonusScoreIndex][0],
                  feedLaneBonusScores[feedLaneBonusScoreIndex][1], true);
    if(feedLaneBonusMultiplierIndex != 0) {
        bally.setLamp(feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][0],
                      feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][1], true);
    }
}

bool getOutHole() {
    bool res = bally.getDebRedge(OUT_HOLE_ROW, OUT_HOLE_COL);
    if (res && ballInPlay) {
        bally.playSound(37);//TOO BAD
        ballInPlay = false;
        bally.setLamp(BALL_IN_PLAY_ROW, BALL_IN_PLAY_COL, ballInPlay);
//        delay(500);
//        bally.getDebRedge(OUT_HOLE_ROW, OUT_HOLE_COL);
    }
    return res;
}

bool getTopCenterKickOut() {
    bool res = bally.getRedge(TOP_CENTER_KICK_OUT_ROW, TOP_CENTER_KICK_OUT_COL);
    if (res/* && ballInPlay*/) { //STUCK AT BEGINNING
        int score = 0;

        if(sinkholeBonus<3) {
            score = 3000 * (sinkholeBonus + 1);
        } else {
            score = 3000 * (sinkholeBonus + 2);
        }

        scores[curPlayer]+=score;
        displayScores(scores, numPlayers);
        if(sinkholeBonus==0) {
            //bally.setLamp(sinkholeBonuses[2][0], sinkholeBonuses[2][0], false);
            sinkholeBonus++;
            bally.setLamp(sinkholeBonuses[sinkholeBonus-1][0], sinkholeBonuses[sinkholeBonus-1][1], true);
            Serial.print("if ");
            Serial.println(sinkholeBonus-1);
        }
        else if(sinkholeBonus<3) {
            bally.setLamp(sinkholeBonuses[sinkholeBonus-1][0], sinkholeBonuses[sinkholeBonus-1][1], false);
            sinkholeBonus++;
            //sinkholeBonus %= 4;
            bally.setLamp(sinkholeBonuses[sinkholeBonus-1][0], sinkholeBonuses[sinkholeBonus-1][1], true);
            Serial.print("else ");
            Serial.println(sinkholeBonus-1);
        }

        bally.fireSolenoid(CHIME_10, true);
        delay(300);
        bally.fireSolenoid(CHIME_100, false);
        delay(200);
        bally.fireSolenoid(CHIME_1000, false);
        delay(100);
        bally.getRedge(TOP_CENTER_KICK_OUT_ROW, TOP_CENTER_KICK_OUT_COL);
        fireSaucer();
    }
    return res;
}

/*int rightDropTarget[4][2] = {{RIGHT_DROP_TARGET_D_BOTTOM_ROW, RIGHT_DROP_TARGET_D_BOTTOM_COL},
                             {RIGHT_DROP_TARGET_C_ROW,        RIGHT_DROP_TARGET_C_COL},
                             {RIGHT_DROP_TARGET_B_ROW,        RIGHT_DROP_TARGET_B_COL},
                             {RIGHT_DROP_TARGET_A_TOP_ROW,    RIGHT_DROP_TARGET_A_TOP_COL}};*/

int dropTargets[8][2] = {{RIGHT_DROP_TARGET_D_BOTTOM_ROW, RIGHT_DROP_TARGET_D_BOTTOM_COL},
                             {RIGHT_DROP_TARGET_C_ROW,        RIGHT_DROP_TARGET_C_COL},
                             {RIGHT_DROP_TARGET_B_ROW,        RIGHT_DROP_TARGET_B_COL},
                             {RIGHT_DROP_TARGET_A_TOP_ROW,    RIGHT_DROP_TARGET_A_TOP_COL},
                             {LEFT_DROP_TARGET_D_BOTTOM_ROW, LEFT_DROP_TARGET_D_BOTTOM_COL},
                             {LEFT_DROP_TARGET_C_ROW,        LEFT_DROP_TARGET_C_COL},
                             {LEFT_DROP_TARGET_B_ROW,        LEFT_DROP_TARGET_B_COL},
                             {LEFT_DROP_TARGET_A_TOP_ROW,    LEFT_DROP_TARGET_A_TOP_COL}};

//bool rightDropTargetsAllDown = false, leftDropTargetsAllDown = false;
//bool dropTargetsAllDown = false;



bool dropTargetsDown[8] = {false, false, false, false, false, false, false, false};
bool whenLit = false;
bool popBumperBonus = false;

bool getDropTarget() {
    bool anyRes = false;
    for (int i = 0; i < 8; i++) {
        bool cur = bally.getDebRedge(dropTargets[i][0], dropTargets[i][1]);
        anyRes |= cur;
        if(cur && ballInPlay) {
            dropTargetsDown[i] = cur;
            Serial.print("dropTarget ");
            Serial.print(i);
            Serial.println(" hit");
            scores[curPlayer]+=500;
            displayScores(scores, numPlayers);
            bally.playSound(3);
        }
    }


    /*for (int j = 0; j < 8; ++j) {
        anyRes |= dropTargetsDown[j];
    }*/
    if(anyRes) {
        Serial.println("anyRes={");
        for (int k = 0; k < 8; ++k) {
            Serial.print(dropTargetsDown[k]);
            Serial.print(",");
        }
        Serial.println("}");
    }

    bool allRes = true;
    for (int j = 0; j < 8; ++j) {
        allRes &= dropTargetsDown[j];
    }

    if (allRes && ballInPlay) {
        //dropTargetsAllDown = true;
        for (int i = 0; i < 8; i++)
            dropTargetsDown[i] = false;
        scores[curPlayer]+=50000;
        popBumperBonus = true;
        bally.setLamp(LEFT_LOW_POP_ROW, LEFT_LOW_POP_COL, popBumperBonus);
        bally.setLamp(RIGHT_LOW_POP_ROW, RIGHT_LOW_POP_COL, popBumperBonus);
        displayScores(scores, numPlayers);
        if(whenLit) {
            whenLit = false;
            ballAdDec(1);
            creditBallDisplay(ballNums[curPlayer], credits);
        } else {
            whenLit = true;
        }
        bally.setLamp(WHEN_LIT_ROW, WHEN_LIT_COL, whenLit);
        delay(250);
        bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, true, true);
        delay(100);
        bally.fireSolenoid(LEFT_DROP_TARGET_RESET, true, true);
        bally.playSound(4);
        delay(100);
        for (int i = 0; i < 8; i++)
            bally.getRedge(dropTargets[i][0], dropTargets[i][1]);

    }

    return anyRes;
}



/*bool getRightDropTarget() {
    static bool res[4] = {false, false, false, false};
    for (int i = 0; i < 4; i++) {
        bool cur = bally.getRedge(rightDropTarget[i][0], rightDropTarget[i][1]);
        if(cur && ballInPlay) {
            res[i] = cur;
            Serial.print("rightDropTarget ");
            Serial.print(i);
            Serial.println(" hit");
            bally.playSound(3);
        }
    }
    bool anyRes = res[0] || res[1] || res[2] || res[3];

    bool allRes = res[0] && res[1] && res[2] && res[3];
    if (allRes && ballInPlay) {
        rightDropTargetsAllDown = true;
        if(leftDropTargetsAllDown) {
            for (int i = 0; i < 4; i++)
                res[i] = false;
            delay(250);
            bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, false);
            bally.playSound(4);
        }
    }


    return anyRes;
}*/



/*int leftDropTarget[4][2] = {{LEFT_DROP_TARGET_D_BOTTOM_ROW, LEFT_DROP_TARGET_D_BOTTOM_COL},
                            {LEFT_DROP_TARGET_C_ROW,        LEFT_DROP_TARGET_C_COL},
                            {LEFT_DROP_TARGET_B_ROW,        LEFT_DROP_TARGET_B_COL},
                            {LEFT_DROP_TARGET_A_TOP_ROW,    LEFT_DROP_TARGET_A_TOP_COL}};*/



/*bool getLeftDropTarget() {
    static bool res[4] = {false, false, false, false};
    for (int i = 0; i < 4; i++) {
        bool cur = bally.getRedge(leftDropTarget[i][0], leftDropTarget[i][1]);
        if(cur && ballInPlay) {
            res[i] = cur;
            bally.playSound(3);
        }
    }
    bool anyRes = res[0] || res[1] || res[2] || res[3];


    bool allRes = res[0] && res[1] && res[2] && res[3];
    if (allRes && ballInPlay) {
        leftDropTargetsAllDown = true;
        if(rightDropTargetsAllDown) {
            for (int i = 0; i < 4; i++)
                res[i] = false;
            delay(250);
            bally.fireSolenoid(LEFT_DROP_TARGET_RESET, false);
            bally.playSound(4);
        }
    }


    return anyRes;
}*/

bool getDropTargetRebound() {
    bool res = bally.getDebRedge(DROP_TARGET_REBOUND_ROW, DROP_TARGET_REBOUND_COL);
    if (res  && ballInPlay /*&& (rightDropTargetsAllDown || leftDropTargetsAllDown)*/) {
        bally.playSound(4);//3 bells
        delay(10);
        bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, true, true);
        delay(100);
        bally.fireSolenoid(LEFT_DROP_TARGET_RESET, true, true);
        delay(100);
        for (int i = 0; i < 8; i++)
            bally.getRedge(dropTargets[i][0], dropTargets[i][1]);
        /*rightDropTargetsAllDown = false;
        leftDropTargetsAllDown = false;*/
        //dropTargetsAllDown = false;
        for (int i = 0; i < 8; i++)
            dropTargetsDown[i] = false;
        whenLit = false;
        bally.setLamp(WHEN_LIT_ROW, WHEN_LIT_COL, whenLit);
    }
    return res;
}

bool getRightFlipperFeadLane() {
    bool res = false;
    res = bally.getRedge(RIGHT_FLIPPER_FEED_LANE_ROW, RIGHT_FLIPPER_FEED_LANE_COL);
    if(res){
        advanceFeedLaneBonus();
        scores[curPlayer]+=500;
        displayScores(scores, numPlayers);
        bally.playSound(9);
    }
    return res;
}

bool getLeftFlipperFeadLane() {
    bool res = false;
    res = bally.getRedge(LEFT_FLIPPER_FEED_LANE_ROW, LEFT_FLIPPER_FEED_LANE_COL);
    if(res){
        advanceFeedLaneBonus();
        scores[curPlayer]+=500;
        displayScores(scores, numPlayers);
        bally.playSound(9);
    }
    return res;
}

bool aLane = false, bLane = false;

void advanceABLaneBonus() {
    if(aLane && bLane) {
            aLane = false;
            bLane = false;
            int score = 0;

            if(abLaneBonus<5) {
                score = 1000 * (abLaneBonus + 1);
            } else {
                ballAdDec(1);
            }


            scores[curPlayer]+=score;
            displayScores(scores, numPlayers);
            bally.setLamp(abLaneBonuses[abLaneBonus][0], abLaneBonuses[abLaneBonus][1], false);
            if(abLaneBonus<6)
                abLaneBonus++;
            //abLaneBonus %= 7;
            bally.setLamp(abLaneBonuses[abLaneBonus][0], abLaneBonuses[abLaneBonus][1], true);


    }
    bally.setLamp(A_SIDE_LANE_ROW, A_SIDE_LANE_COL, aLane);
    bally.setLamp(B_SIDE_LANE_ROW, B_SIDE_LANE_COL, bLane);
}

bool getBottomBLane() {
    bool res = false;
    res = bally.getRedge(BOTTOM_B_LANE_ROW, BOTTOM_B_LANE_COL);

    if(res){
        bLane = true;
        advanceABLaneBonus();
        bally.playSound(9);
    }
    return res;
}

bool getBottomALane() {
    bool res = false;
    res = bally.getRedge(BOTTOM_A_LANE_ROW, BOTTOM_A_LANE_COL);
    if(res){
        aLane = true;
        advanceABLaneBonus();
        bally.playSound(9);
    }
    return res;
}

bool getTopBLane() {
    bool res = false;
    res =  bally.getRedge(TOP_B_LANE_ROW, TOP_B_LANE_COL);
    if(res){
        bLane = true;
        advanceABLaneBonus();
        bally.playSound(9);
    }
    return res;
}

bool getTopALane() {
    bool res = false;
    res = bally.getRedge(TOP_A_LANE_ROW, TOP_A_LANE_COL);
    if(res){
        aLane = true;
        advanceABLaneBonus();
        bally.playSound(9);
    }
    return res;
}

bool getRightOutLane() {
    bool res = false;
    res = bally.getRedge(RIGHT_OUT_LANE_ROW, RIGHT_OUT_LANE_COL);
    if(res){
        advanceFeedLaneBonus();
        scores[curPlayer]+=500;
        displayScores(scores, numPlayers);
        bally.playSound(9);
    }
    return res;
}

bool getLeftOutLane() {
    bool res = false;
    res = bally.getRedge(LEFT_OUT_LANE_ROW, LEFT_OUT_LANE_COL);
    if(res){
        advanceFeedLaneBonus();
        scores[curPlayer]+=500;
        displayScores(scores, numPlayers);
        bally.playSound(9);
    }
    return res;
}

bool getRightSlingshot() {
    bool res = bally.getRedge(RIGHT_SLINGSHOT_ROW, RIGHT_SLINGSHOT_COL);
    if (res) {
        bally.fireSolenoid(RIGHT_SLINGSHOT, false);
        bally.fireSolenoid(CHIME_10000, true);
    }
    return res;
}

bool getLeftSlingshot() {
    bool res = bally.getRedge(LEFT_SLINGSHOT_ROW, LEFT_SLINGSHOT_COL);
    if (res) {
        bally.fireSolenoid(LEFT_SLINGSHOT, false);
        bally.fireSolenoid(CHIME_100, true);
    }
    return res;
}

void scorePopBumperSpecial(bool special) {
    int score = 0;
    if(popBumperBonus && special) {
            score = 1000;
        } else {
            score = 100;
        }
    scores[curPlayer]+=score;
    displayScores(scores, numPlayers);
}

bool getBottomRightPopBumper() {
    bool res = bally.getRedge(BOTTOM_RIGHT_POP_BUMPER_ROW, BOTTOM_RIGHT_POP_BUMPER_COL);
    if (res) {
        bally.fireSolenoid(BOTTOM_RIGHT_POP_BUMPER, false);
        bally.fireSolenoid(CHIME_10, true);
        scorePopBumperSpecial(true);
    }
    return res;
}

bool getBottomLeftPopBumper() {
    bool res = bally.getRedge(BOTTOM_LEFT_POP_BUMPER_ROW, BOTTOM_LEFT_POP_BUMPER_COL);
    if (res) {
        bally.fireSolenoid(BOTTOM_LEFT_POP_BUMPER, false);
        bally.fireSolenoid(CHIME_100, true);
        scorePopBumperSpecial(true);
    }
    return res;
}

bool getTopRightPopBumper() {
    bool res = bally.getRedge(TOP_RIGHT_POP_BUMPER_ROW, TOP_RIGHT_POP_BUMPER_COL);
    if (res) {
        Serial.print("topRightPopBumper");
        Serial.println(" hit");
        bally.fireSolenoid(TOP_RIGHT_POP_BUMPER, false);
        bally.fireSolenoid(CHIME_1000, true);
        scorePopBumperSpecial(false);

    }
    return res;
}

bool getTopLeftPopBumper() {
    bool res = bally.getRedge(TOP_LEFT_POP_BUMPER_ROW, TOP_LEFT_POP_BUMPER_COL);
    if (res) {
        bally.fireSolenoid(TOP_LEFT_POP_BUMPER, false);
        bally.fireSolenoid(CHIME_10000, true);
        scorePopBumperSpecial(false);
    }
    return res;
}

/*
void parseDisplay(int dispID, unsigned long score ){
    for(int digit = 0; digit < 7; digit++){
        unsigned char c = (unsigned char) (score % ((unsigned long) pow(10, digit)));
        bally.setDisplay(dispID, digit, c);
    }

}
*/



void blankDisplays() {
    for (int disp = 0; disp < 4; disp++) {
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

/*bool getAnyPlayFieldSwitch() {
    unsigned char res = 0;
    for (int i = 0; i < N_SWITCH_ROWS; i++)
        res |= bally.getSwitchRow(i);
    return res;
}*/

bool getAnyPlayFieldSwitch() {
    bool res = false;

    res |= getBottomRightPopBumper();
    res |= getBottomLeftPopBumper();
    res |= getTopRightPopBumper();
    res |= getTopLeftPopBumper();
    res |= getOutHole();
    res |= getTopCenterKickOut();
    res |= getDropTarget();
    res |= getDropTargetRebound();
    res |= getRightFlipperFeadLane();
    res |= getLeftFlipperFeadLane();
    res |= getBottomBLane();
    res |= getBottomALane();
    res |= getTopBLane();
    res |= getTopALane();
    res |= getRightOutLane();
    res |= getLeftOutLane();
    res |= getRightSlingshot();
    res |= getLeftSlingshot();
    return res;
}

void loop() {
  int playerUp[4][2] = {{PLAYER_1_UP_ROW, PLAYER_1_UP_COL},
                        {PLAYER_2_UP_ROW, PLAYER_2_UP_COL},
                        {PLAYER_3_UP_ROW, PLAYER_3_UP_COL},
                        {PLAYER_4_UP_ROW, PLAYER_4_UP_COL}};

//loop:
//        (each time thru the loop represents one complete game)
//init S/W state: scores
    for (unsigned long score: scores)
        score = 0;

// player number
    numPlayers = 0, curPlayer = 0;
//ball number,
    for (int ballNum: ballNums)
        ballNum = 0;

//drop target
    bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, true, true);
    delay(10);
    bally.fireSolenoid(LEFT_DROP_TARGET_RESET, true, true);
    delay(100);
    for (int i = 0; i < 8; i++)
        dropTargetsDown[i] = false;
//counters, any other game and/or ball state variables
//        init H/W, such as game over lamp
    bally.setLamp(GAME_OVER_ROW, GAME_OVER_COL, true);
//        wait for credit (play) button to be pressed
    int canPlay[4][2] = {{CAN_PLAY_1_ROW, CAN_PLAY_1_COL},
                         {CAN_PLAY_2_ROW, CAN_PLAY_2_COL},
                         {CAN_PLAY_3_ROW, CAN_PLAY_3_COL},
                         {CAN_PLAY_4_ROW, CAN_PLAY_4_COL}};
    getOutHole();//discard rising edge
    delay(1000);
    while ((numPlayers < 4 && !(ballInPlay = getAnyPlayFieldSwitch())) || numPlayers == 0) {
        delay(8);
        if (bally.getCabSwitch(CREDIT_START_BUTTON_ROW, CREDIT_START_BUTTON_COL)) {//like a select/start button
            if (credits > 0 && numPlayers < 4) {
                credits--;
                numPlayers++;
                bally.playSound(2);
                if (numPlayers == 1) {
                    fireOutHole();
                    enableFlipper();
                }
                delay(250);
            }
        }
        if (bally.getCabSwitch(COIN_III_COIN_RETURN_BUTTON_ROW, COIN_III_COIN_RETURN_BUTTON_COL)) {
            credits++;
            bally.playSound(23);
            delay(250);
        }

        creditBallDisplay(ballNums[curPlayer], credits);
        for (int i = 0; i < 4; i++) {
            if (i == numPlayers - 1)
                bally.setLamp(canPlay[i][0], canPlay[i][1], true);
            else
                bally.setLamp(canPlay[i][0], canPlay[i][1], false);
        }
    }

//turn off game over
    bally.setLamp(GAME_OVER_ROW, GAME_OVER_COL, false);
//indicate #players=1


//init score displays to zero
    displayScores(scores, numPlayers);
    bally.setLamp(feedLaneBonusScores[feedLaneBonusScoreIndex][0],
                  feedLaneBonusScores[feedLaneBonusScoreIndex][1], true);
    if(feedLaneBonusMultiplierIndex != 0) {
        bally.setLamp(feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][0],
                      feedLaneBonusMultipliers[feedLaneBonusMultiplierIndex - 1][1], true);
    }
//loop for each player and ball (3 balls per player per game)
    for (int i = 0; i < numPlayers; i++) {
        ballNums[i] = 3;
    }
    curPlayer = 0;
    totalBalls = numPlayers*3;
    while (/*ballNums[curPlayer]*/totalBalls > 0) {
      Serial.print("totalBalls: ");
      Serial.println(totalBalls);
      Serial.print("current player balls: ");
      int tempCurPlayer = curPlayer;
      Serial.println(ballNums[curPlayer]);
        while(ballNums[curPlayer] <= 0){
          Serial.println("ballnums loop");
          curPlayer++;
          curPlayer %= numPlayers;
        }
        if(tempCurPlayer != curPlayer){
          bally.setLamp(playerUp[tempCurPlayer][0], playerUp[tempCurPlayer][1], false);
          bally.setLamp(playerUp[curPlayer][0], playerUp[curPlayer][1], true);
        }
        
        bally.setLamp(abLaneBonuses[abLaneBonus][0], abLaneBonuses[abLaneBonus][1], true);
        creditBallDisplay(ballNums[curPlayer], credits);
//zero the switch memory so don’t retain sticky hits from before
        for (int i = 0; i < N_SWITCH_ROWS; i++)
            bally.getRedgeRow(i);
//init any S/W and H/W state that should reset on each ball
        //TODO:implement bonus


        bally.fireSolenoid(RIGHT_DROP_TARGET_RESET, true, true);
        delay(10);
        bally.fireSolenoid(LEFT_DROP_TARGET_RESET, true, true);
        delay(100);
        for (int i = 0; i < 8; i++)
            dropTargetsDown[i] = false;
//light current player up and display the ball number
        
        bally.setLamp(playerUp[curPlayer][0], playerUp[curPlayer][1], true);
//      fire the outhole solenoid to eject a ball
        delay(1000);
        fireOutHole();
        ballInPlay = true;
        bally.setLamp(BALL_IN_PLAY_ROW, BALL_IN_PLAY_COL, ballInPlay);
        enableFlipper();
//      loop, reading each playfield switch
        Serial.print("curPlayer=");
        Serial.print(curPlayer);
        Serial.print(", ");
        Serial.print("numPlayers=");
        Serial.print(numPlayers);
        Serial.println("");

        while (ballInPlay) {

//          for each switch hit, take appropriate action (add player (ie. increment score),
//          fire solenoid, add points, play chime, arm bonus, etc.)
//          until the outlane switch is read


            getAnyPlayFieldSwitch();
            getOutHole();
        }
        //      advance current player and/or ball number
        if (ballNums[curPlayer] > 0) {
            ballAdDec(-1);
            //creditBallDisplay(ballNums[curPlayer], credits);
        }
        whenLit = false;
        bally.setLamp(WHEN_LIT_ROW, WHEN_LIT_COL, whenLit);

        aLane = false;
        bLane = false;
        bally.setLamp(A_SIDE_LANE_ROW, A_SIDE_LANE_COL, aLane);
        bally.setLamp(B_SIDE_LANE_ROW, B_SIDE_LANE_COL, bLane);
        bally.setLamp(abLaneBonuses[abLaneBonus][0], abLaneBonuses[abLaneBonus][1], false);
        abLaneBonus = 0;

        bally.setLamp(sinkholeBonuses[sinkholeBonus-1][0], sinkholeBonuses[sinkholeBonus-1][1], false);
        sinkholeBonus = 0;

        popBumperBonus = false;
        bally.setLamp(LEFT_LOW_POP_ROW, LEFT_LOW_POP_COL, popBumperBonus);
        bally.setLamp(RIGHT_LOW_POP_ROW, RIGHT_LOW_POP_COL, popBumperBonus);

        collectFeedLaneBonus();



        bally.setLamp(playerUp[curPlayer][0], playerUp[curPlayer][1], false);
        curPlayer++;
        curPlayer %= numPlayers;
        if(totalBalls > 0){
          bally.setLamp(playerUp[curPlayer][0], playerUp[curPlayer][1], true);
        }
//      until each player has played 3 balls

    }
//        check for high score (optional)
//perform random score match (optional), fire knocker on match
}


