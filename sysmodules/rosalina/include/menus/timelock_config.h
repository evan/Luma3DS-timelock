/*
*   This file is part of Luma3DS
*   Copyright (C) 2016-2020 Aurora Wright, TuxSH
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#pragma once

#include "menu.h"
#include "../timelock_shared_config.h"

#define PIN_ZERO         "0000"


typedef enum
{
    TL_MENU_TOGGLE,
    TL_MENU_DELAY,
    TL_MENU_PIN
} TIMELOCK_CONFIG_MENU;

extern Menu timelockMenu;

bool TimelockMenu_IsMenuLocked(void);
bool TimelockMenu_IsMenuUnlocked(void);
void TimelockMenu_LockMenu(void);
void TimelockMenu_UnlockMenu(void);
bool TimelockMenu_CheckPIN(char *enteredPIN);

void TimelockMenu_LoadData(void);
void TimelockMenu_UpdateAll(void);
void TimelockMenu_UpdateStatus(TIMELOCK_CONFIG_MENU menuItem);
void TimelockMenu_ToggleTimelock(void);
void TimelockMenu_Delay(void);
void TimelockMenu_PIN(void);
void TimelockMenu_SaveSettings(void);
