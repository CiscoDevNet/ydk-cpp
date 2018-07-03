#ifndef _CISCO_IOS_XR_SYSADMIN_ETHSW_ESDMA_TYPES_
#define _CISCO_IOS_XR_SYSADMIN_ETHSW_ESDMA_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_ethsw_esdma_types {

class MlapProtocolEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Internal;
        static const ydk::Enum::YLeaf External;

};

class EsdmaQsfpTransceiverEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf QSFP_40G_LR4;
        static const ydk::Enum::YLeaf QSFP_40G_SR4;
        static const ydk::Enum::YLeaf QSFP_40G_CR4_Active;
        static const ydk::Enum::YLeaf QSFP_40G_CR4_Passive;
        static const ydk::Enum::YLeaf Unknown;

};

class EsdmaCpu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf RP0;
        static const ydk::Enum::YLeaf RP1;
        static const ydk::Enum::YLeaf SC0;
        static const ydk::Enum::YLeaf SC1;
        static const ydk::Enum::YLeaf LC0;
        static const ydk::Enum::YLeaf LC1;
        static const ydk::Enum::YLeaf LC2;
        static const ydk::Enum::YLeaf LC3;
        static const ydk::Enum::YLeaf LC4;
        static const ydk::Enum::YLeaf LC5;
        static const ydk::Enum::YLeaf LC6;
        static const ydk::Enum::YLeaf LC7;
        static const ydk::Enum::YLeaf LC8;
        static const ydk::Enum::YLeaf LC9;
        static const ydk::Enum::YLeaf LC10;
        static const ydk::Enum::YLeaf LC11;
        static const ydk::Enum::YLeaf LC12;
        static const ydk::Enum::YLeaf LC13;
        static const ydk::Enum::YLeaf LC14;
        static const ydk::Enum::YLeaf LC15;
        static const ydk::Enum::YLeaf LC16;
        static const ydk::Enum::YLeaf LC17;
        static const ydk::Enum::YLeaf LC18;
        static const ydk::Enum::YLeaf LC19;
        static const ydk::Enum::YLeaf FC0;
        static const ydk::Enum::YLeaf FC1;
        static const ydk::Enum::YLeaf FC2;
        static const ydk::Enum::YLeaf FC3;
        static const ydk::Enum::YLeaf FC4;
        static const ydk::Enum::YLeaf FC5;
        static const ydk::Enum::YLeaf CB0;

};

class EsdmaSwitchYesNoEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Yes;
        static const ydk::Enum::YLeaf No;

};

class EsdmaSwitchSfpControllerEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Switch;
        static const ydk::Enum::YLeaf PHY;

};

class EsdmaSwitchTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf RP_SW;
        static const ydk::Enum::YLeaf SC_SW;
        static const ydk::Enum::YLeaf LC_SW;
        static const ydk::Enum::YLeaf F_SW0;
        static const ydk::Enum::YLeaf F_SW1;
        static const ydk::Enum::YLeaf FC_SW;
        static const ydk::Enum::YLeaf EOBC_SW;
        static const ydk::Enum::YLeaf EPC_SW;
        static const ydk::Enum::YLeaf CB_SW;
        static const ydk::Enum::YLeaf Unknown;

};

class EsdmaSwitchSfpTranceiverTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unspecified;
        static const ydk::Enum::YLeaf SFP;
        static const ydk::Enum::YLeaf QSFP;
        static const ydk::Enum::YLeaf Unknown;

};

class MlapTraceVerbosity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Off;
        static const ydk::Enum::YLeaf Low;
        static const ydk::Enum::YLeaf Medium;
        static const ydk::Enum::YLeaf High;

};

class SwitchActionTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Translate;
        static const ydk::Enum::YLeaf Remove_Outer;
        static const ydk::Enum::YLeaf Add_Outer;
        static const ydk::Enum::YLeaf Drop;
        static const ydk::Enum::YLeaf Forward;
        static const ydk::Enum::YLeaf Unknown;

};

class EsdCirEirType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CIR;
        static const ydk::Enum::YLeaf PIR;

};

class MlapEpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf RP;
        static const ydk::Enum::YLeaf SC;
        static const ydk::Enum::YLeaf FC;
        static const ydk::Enum::YLeaf LC;
        static const ydk::Enum::YLeaf F_SW;
        static const ydk::Enum::YLeaf CB;

};

class EsdmaSwitchSfpInsertedEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Yes;
        static const ydk::Enum::YLeaf No;
        static const ydk::Enum::YLeaf Failed;

};

class EsdmaRackNumEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_3;
        static const ydk::Enum::YLeaf Y_4;
        static const ydk::Enum::YLeaf Y_5;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf Y_8;
        static const ydk::Enum::YLeaf Y_9;
        static const ydk::Enum::YLeaf Y_10;
        static const ydk::Enum::YLeaf Y_11;
        static const ydk::Enum::YLeaf Y_12;
        static const ydk::Enum::YLeaf Y_13;
        static const ydk::Enum::YLeaf Y_14;
        static const ydk::Enum::YLeaf Y_15;
        static const ydk::Enum::YLeaf F0;
        static const ydk::Enum::YLeaf F1;
        static const ydk::Enum::YLeaf F2;
        static const ydk::Enum::YLeaf F3;
        static const ydk::Enum::YLeaf B0;
        static const ydk::Enum::YLeaf B1;

};

class EsdmaRackTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf FCC;
        static const ydk::Enum::YLeaf LCC;
        static const ydk::Enum::YLeaf BSC;
        static const ydk::Enum::YLeaf COMPUTE;

};

class EsdmaTrunkMemberStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Enabled;
        static const ydk::Enum::YLeaf Y_;

};

class SwitchMatchTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Any;
        static const ydk::Enum::YLeaf Tagged;
        static const ydk::Enum::YLeaf Untagged;
        static const ydk::Enum::YLeaf Unknown;

};

class EsdmaSwitchPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Test;
        static const ydk::Enum::YLeaf Down;
        static const ydk::Enum::YLeaf Up;

};

class EsdmaSwitchSfpTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf SFP_10G_SR;
        static const ydk::Enum::YLeaf SFP_10G_LR;
        static const ydk::Enum::YLeaf SFP_10G_LRM;
        static const ydk::Enum::YLeaf SFP_1G_SX;
        static const ydk::Enum::YLeaf SFP_1G_LX;
        static const ydk::Enum::YLeaf SFP_1000Base_T;
        static const ydk::Enum::YLeaf SFP_40G_SR4;
        static const ydk::Enum::YLeaf SFP_40G_LR4;
        static const ydk::Enum::YLeaf Unsupported;

};

class EsdmaSfpEncodingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unspecified;
        static const ydk::Enum::YLeaf Y_8B__FWD_SLASH__10B;
        static const ydk::Enum::YLeaf Y_4B__FWD_SLASH__5B;
        static const ydk::Enum::YLeaf NRZ;
        static const ydk::Enum::YLeaf Manchester;
        static const ydk::Enum::YLeaf SONET_Scrambled;
        static const ydk::Enum::YLeaf Y_64B__FWD_SLASH__66B;
        static const ydk::Enum::YLeaf Unknown;

};

class EsdmaSdrTrafficType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf IPC;
        static const ydk::Enum::YLeaf MgmtEth;
        static const ydk::Enum::YLeaf All;
        static const ydk::Enum::YLeaf Invalid;

};

class SwitchDataDirectionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Both;
        static const ydk::Enum::YLeaf Rx;
        static const ydk::Enum::YLeaf Tx;
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Invalid;

};

class SwitchTableTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Port;
        static const ydk::Enum::YLeaf VLAN;
        static const ydk::Enum::YLeaf TCAM;
        static const ydk::Enum::YLeaf Unknown;

};

class MlapStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Down;
        static const ydk::Enum::YLeaf Up;
        static const ydk::Enum::YLeaf Admin_Down;
        static const ydk::Enum::YLeaf Do_Not_Use;
        static const ydk::Enum::YLeaf Invalid;
        static const ydk::Enum::YLeaf Active;
        static const ydk::Enum::YLeaf Standby;
        static const ydk::Enum::YLeaf Rem_Managed;

};

class SwitchForwardingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Blocking;
        static const ydk::Enum::YLeaf Learning;
        static const ydk::Enum::YLeaf Forwarding;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ETHSW_ESDMA_TYPES_ */

