#pragma once

#define MAX_SETTINGS_STRING	0x7F

struct stSettings
{
	// 客户端
	char szNickName[MAX_PLAYER_NAME+1];
	char szHost[MAX_SETTINGS_STRING+1];
	int iPort;
	char szPassword[MAX_SETTINGS_STRING+1];

	// 调试
	bool bDebug;
	bool bOnline;

	// GUI
	char szFont[40];
	float fFontSize;
	int iFontOutline;
	float fChatPosX;
	float fChatPosY;
	float fChatSizeX;
	float fChatSizeY;
	int iChatMaxMessages;
	float fSpawnScreenPosX;
	float fSpawnScreenPosY;
	float fSpawnScreenSizeX;
	float fSpawnScreenSizeY;
	float fHealthBarWidth;
	float fHealthBarHeight;
};

class CSettings
{
public:
	CSettings();
	~CSettings();

	stSettings& Get() { return m_Settings; }
	
private:
	struct stSettings m_Settings;
};