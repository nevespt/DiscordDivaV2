#pragma once

#include <discord_game_sdk.h>
#include <thread>
#include <stdio.h>
#include <iostream>
#include <process.h>
#include "difficulty.h"
#include <mutex>


void SetupDiscord(int songID);
void ChangeActivity(int isPlaying, char* songName, int isPV, Difficulty difficulty, long long timeSinceStart, bool isGamePaused);
void ChangeActivity2(int isPlaying, char* songName, int isPV, Difficulty difficulty, long long timeSinceStart, bool isGamePaused);
void StopDiscord();
void DiscordThread(void*);