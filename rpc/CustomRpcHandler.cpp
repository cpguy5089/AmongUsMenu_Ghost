#include "pch-il2cpp.h"
#include "_rpc.h"
#include "game.h"
#include "state.hpp"
#include "logger.h"
#include "utility.h"
#define stringify(x) #x

void HandleRpc(uint8_t callId, MessageReader* reader) {
	switch (callId) {
		
	case (uint8_t)42069:/* Note to future self, this section simply gets other AUM users and does not broadcast - Broadcast is inside hooks/PlayerControl.cpp */
	{
		uint8_t playerid = MessageReader_ReadByte(reader, NULL);
		if (!std::count(State.aumUsers.begin(), State.aumUsers.end(), playerid)) {
			State.aumUsers.push_back(playerid);
			GameData_PlayerInfo* playerinfo = GetPlayerDataById((Game::PlayerId)playerid); /* Code ripped from Dasupergrasskakjd */
			MessageBoxA(NULL, std::format("Received AUM player {}! Use AUM chat to talk with them!", stringify(app::GameData_PlayerInfo_get_PlayerName(playerinfo, NULL))).c_str(), "AUM player detected", MB_OK | MB_ICONEXCLAMATION);
			STREAM_DEBUG("RPC Received for another AUM User from " << playerid);
		}
	}
	break;
	case 101:
	{
		std::string playerName = convert_from_string(MessageReader_ReadString(reader, NULL));
		std::string message = convert_from_string(MessageReader_ReadString(reader, NULL));
		uint32_t colorId = MessageReader_ReadInt32(reader, NULL);
		if (message.size() == 0) break;
		State.chatMessages.emplace_back(std::make_unique<RpcChatMessage>(playerName, message, colorId, std::chrono::system_clock::now()));
		State.newChatMessage = true;
	}
	break;
	}
}
