/*
 * GameSystem.h
 *
 * 게임 데이터 처리 관련 최상위 헤더 파일
 *
 * Created on : 2018-05-01
 *     Author : Jeong Ji-ung
 */
#pragma once

// Header file
#include "Company.h"
#include "GameLoop.h"
#include "Player.h"
#include "Bank.h"

namespace GameSystem
{

// Define
#define START_MONEY			5000000
#define DEFAULT_INTER_RATE	1

// Using namespace
using namespace				Player;
using namespace				Company;
using namespace				Bank;

}
