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

        static int get_enum_value(const std::string & name) {
            if (name == "Internal") return 0;
            if (name == "External") return 1;
            return -1;
        }
};

class EsdmaQsfpTransceiverEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf QSFP_40G_LR4;
        static const ydk::Enum::YLeaf QSFP_40G_SR4;
        static const ydk::Enum::YLeaf QSFP_40G_CR4_Active;
        static const ydk::Enum::YLeaf QSFP_40G_CR4_Passive;
        static const ydk::Enum::YLeaf Unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "QSFP-40G-LR4") return 0;
            if (name == "QSFP-40G-SR4") return 1;
            if (name == "QSFP-40G-CR4-Active") return 2;
            if (name == "QSFP-40G-CR4-Passive") return 3;
            if (name == "Unknown") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "RP0") return 1;
            if (name == "RP1") return 2;
            if (name == "SC0") return 3;
            if (name == "SC1") return 4;
            if (name == "LC0") return 5;
            if (name == "LC1") return 6;
            if (name == "LC2") return 7;
            if (name == "LC3") return 8;
            if (name == "LC4") return 9;
            if (name == "LC5") return 10;
            if (name == "LC6") return 11;
            if (name == "LC7") return 12;
            if (name == "LC8") return 13;
            if (name == "LC9") return 14;
            if (name == "LC10") return 15;
            if (name == "LC11") return 16;
            if (name == "LC12") return 17;
            if (name == "LC13") return 18;
            if (name == "LC14") return 19;
            if (name == "LC15") return 20;
            if (name == "LC16") return 21;
            if (name == "LC17") return 22;
            if (name == "LC18") return 23;
            if (name == "LC19") return 24;
            if (name == "FC0") return 25;
            if (name == "FC1") return 26;
            if (name == "FC2") return 27;
            if (name == "FC3") return 28;
            if (name == "FC4") return 29;
            if (name == "FC5") return 30;
            if (name == "CB0") return 31;
            return -1;
        }
};

class EsdmaSwitchYesNoEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Yes;
        static const ydk::Enum::YLeaf No;

        static int get_enum_value(const std::string & name) {
            if (name == "Yes") return 0;
            if (name == "No") return 1;
            return -1;
        }
};

class EsdmaSwitchSfpControllerEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Switch;
        static const ydk::Enum::YLeaf PHY;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "Switch") return 1;
            if (name == "PHY") return 2;
            return -1;
        }
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
        static const ydk::Enum::YLeaf RP_SW1;

        static int get_enum_value(const std::string & name) {
            if (name == "RP-SW") return 0;
            if (name == "SC-SW") return 1;
            if (name == "LC-SW") return 2;
            if (name == "F-SW0") return 3;
            if (name == "F-SW1") return 4;
            if (name == "FC-SW") return 5;
            if (name == "EOBC-SW") return 6;
            if (name == "EPC-SW") return 7;
            if (name == "CB-SW") return 8;
            if (name == "Unknown") return 9;
            if (name == "RP-SW1") return 10;
            return -1;
        }
};

class EsdmaSwitchSfpTranceiverTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unspecified;
        static const ydk::Enum::YLeaf SFP;
        static const ydk::Enum::YLeaf QSFP;
        static const ydk::Enum::YLeaf Unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "Unspecified") return 0;
            if (name == "SFP") return 1;
            if (name == "QSFP") return 2;
            if (name == "Unknown") return 3;
            return -1;
        }
};

class MlapTraceVerbosity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Off;
        static const ydk::Enum::YLeaf Low;
        static const ydk::Enum::YLeaf Medium;
        static const ydk::Enum::YLeaf High;

        static int get_enum_value(const std::string & name) {
            if (name == "Off") return 0;
            if (name == "Low") return 1;
            if (name == "Medium") return 2;
            if (name == "High") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "-") return 0;
            if (name == "Translate") return 1;
            if (name == "Remove Outer") return 2;
            if (name == "Add Outer") return 3;
            if (name == "Drop") return 4;
            if (name == "Forward") return 5;
            if (name == "Unknown") return 6;
            return -1;
        }
};

class EsdCirEirType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CIR;
        static const ydk::Enum::YLeaf PIR;

        static int get_enum_value(const std::string & name) {
            if (name == "CIR") return 0;
            if (name == "PIR") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "RP") return 1;
            if (name == "SC") return 2;
            if (name == "FC") return 3;
            if (name == "LC") return 4;
            if (name == "F-SW") return 5;
            if (name == "CB") return 6;
            return -1;
        }
};

class EsdmaSwitchSfpInsertedEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Yes;
        static const ydk::Enum::YLeaf No;
        static const ydk::Enum::YLeaf Failed;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "Yes") return 1;
            if (name == "No") return 2;
            if (name == "Failed") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "1") return 1;
            if (name == "2") return 2;
            if (name == "3") return 3;
            if (name == "4") return 4;
            if (name == "5") return 5;
            if (name == "6") return 6;
            if (name == "7") return 7;
            if (name == "8") return 8;
            if (name == "9") return 9;
            if (name == "10") return 10;
            if (name == "11") return 11;
            if (name == "12") return 12;
            if (name == "13") return 13;
            if (name == "14") return 14;
            if (name == "15") return 15;
            if (name == "F0") return 16;
            if (name == "F1") return 17;
            if (name == "F2") return 18;
            if (name == "F3") return 19;
            if (name == "B0") return 20;
            if (name == "B1") return 21;
            return -1;
        }
};

class EsdmaRackTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf FCC;
        static const ydk::Enum::YLeaf LCC;
        static const ydk::Enum::YLeaf BSC;
        static const ydk::Enum::YLeaf COMPUTE;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "FCC") return 1;
            if (name == "LCC") return 2;
            if (name == "BSC") return 3;
            if (name == "COMPUTE") return 4;
            return -1;
        }
};

class EsdmaTrunkMemberStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Enabled;
        static const ydk::Enum::YLeaf Y_;

        static int get_enum_value(const std::string & name) {
            if (name == "Disabled") return 0;
            if (name == "Enabled") return 1;
            if (name == "-") return 2;
            return -1;
        }
};

class SwitchMatchTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Any;
        static const ydk::Enum::YLeaf Tagged;
        static const ydk::Enum::YLeaf Untagged;
        static const ydk::Enum::YLeaf Unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "-") return 0;
            if (name == "Any") return 1;
            if (name == "Tagged") return 2;
            if (name == "Untagged") return 3;
            if (name == "Unknown") return 4;
            return -1;
        }
};

class EsdmaSwitchPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf Test;
        static const ydk::Enum::YLeaf Down;
        static const ydk::Enum::YLeaf Up;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "Test") return 1;
            if (name == "Down") return 2;
            if (name == "Up") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "None") return 0;
            if (name == "SFP-10G-SR") return 1;
            if (name == "SFP-10G-LR") return 2;
            if (name == "SFP-10G-LRM") return 3;
            if (name == "SFP-1G-SX") return 4;
            if (name == "SFP-1G-LX") return 5;
            if (name == "SFP-1000Base-T") return 6;
            if (name == "SFP-40G-SR4") return 7;
            if (name == "SFP-40G-LR4") return 8;
            if (name == "Unsupported") return 9;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unspecified") return 0;
            if (name == "8B/10B") return 1;
            if (name == "4B/5B") return 2;
            if (name == "NRZ") return 3;
            if (name == "Manchester") return 4;
            if (name == "SONET Scrambled") return 5;
            if (name == "64B/66B") return 6;
            if (name == "Unknown") return 7;
            return -1;
        }
};

class EsdmaSdrTrafficType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf IPC;
        static const ydk::Enum::YLeaf MgmtEth;
        static const ydk::Enum::YLeaf All;
        static const ydk::Enum::YLeaf Invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "IPC") return 1;
            if (name == "MgmtEth") return 2;
            if (name == "All") return 3;
            if (name == "Invalid") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "-") return 0;
            if (name == "Both") return 1;
            if (name == "Rx") return 2;
            if (name == "Tx") return 3;
            if (name == "Unknown") return 4;
            if (name == "Invalid") return 5;
            return -1;
        }
};

class SwitchTableTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_;
        static const ydk::Enum::YLeaf Port;
        static const ydk::Enum::YLeaf VLAN;
        static const ydk::Enum::YLeaf TCAM;
        static const ydk::Enum::YLeaf Unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "-") return 0;
            if (name == "Port") return 1;
            if (name == "VLAN") return 2;
            if (name == "TCAM") return 3;
            if (name == "Unknown") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "-") return 0;
            if (name == "Down") return 1;
            if (name == "Up") return 2;
            if (name == "Admin Down") return 3;
            if (name == "Do Not Use") return 4;
            if (name == "Invalid") return 5;
            if (name == "Active") return 6;
            if (name == "Standby") return 7;
            if (name == "Rem Managed") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "-") return 1;
            if (name == "Disabled") return 2;
            if (name == "Blocking") return 3;
            if (name == "Learning") return 4;
            if (name == "Forwarding") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ETHSW_ESDMA_TYPES_ */

