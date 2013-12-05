#pragma once

#include "INetClient.h"
#include "INetwork.h"
#include "INetEventHandler.h"
#include "INetConnection.h"
#include "INetPacketMgr.h"
#include "INetConnectionMgr.h"
#include "ICombiner.h"

// ����ӿ�

// {9B9F6A14-10A1-4F9D-8842-829A93CC15DC}
static const GUID IID_IMyNet = 
{ 0x9b9f6a14, 0x10a1, 0x4f9d, { 0x88, 0x42, 0x82, 0x9a, 0x93, 0xcc, 0x15, 0xdc } };

struct IMyNet
{
    /// @brief
    /// ����һ��TCP�ͻ������ӿ�
    virtual INetTcpClient* CreateTcpClient() = 0;
};