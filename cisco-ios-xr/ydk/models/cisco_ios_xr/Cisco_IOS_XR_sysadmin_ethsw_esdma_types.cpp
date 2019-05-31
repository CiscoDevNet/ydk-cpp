
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_ethsw_esdma_types.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_ethsw_esdma_types {

const Enum::YLeaf EsdmaRackTypeEnum::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaRackTypeEnum::FCC {1, "FCC"};
const Enum::YLeaf EsdmaRackTypeEnum::LCC {2, "LCC"};
const Enum::YLeaf EsdmaRackTypeEnum::BSC {3, "BSC"};
const Enum::YLeaf EsdmaRackTypeEnum::COMPUTE {4, "COMPUTE"};

const Enum::YLeaf EsdmaRackNumEnum::Y_0 {0, "0"};
const Enum::YLeaf EsdmaRackNumEnum::Y_1 {1, "1"};
const Enum::YLeaf EsdmaRackNumEnum::Y_2 {2, "2"};
const Enum::YLeaf EsdmaRackNumEnum::Y_3 {3, "3"};
const Enum::YLeaf EsdmaRackNumEnum::Y_4 {4, "4"};
const Enum::YLeaf EsdmaRackNumEnum::Y_5 {5, "5"};
const Enum::YLeaf EsdmaRackNumEnum::Y_6 {6, "6"};
const Enum::YLeaf EsdmaRackNumEnum::Y_7 {7, "7"};
const Enum::YLeaf EsdmaRackNumEnum::Y_8 {8, "8"};
const Enum::YLeaf EsdmaRackNumEnum::Y_9 {9, "9"};
const Enum::YLeaf EsdmaRackNumEnum::Y_10 {10, "10"};
const Enum::YLeaf EsdmaRackNumEnum::Y_11 {11, "11"};
const Enum::YLeaf EsdmaRackNumEnum::Y_12 {12, "12"};
const Enum::YLeaf EsdmaRackNumEnum::Y_13 {13, "13"};
const Enum::YLeaf EsdmaRackNumEnum::Y_14 {14, "14"};
const Enum::YLeaf EsdmaRackNumEnum::Y_15 {15, "15"};
const Enum::YLeaf EsdmaRackNumEnum::F0 {16, "F0"};
const Enum::YLeaf EsdmaRackNumEnum::F1 {17, "F1"};
const Enum::YLeaf EsdmaRackNumEnum::F2 {18, "F2"};
const Enum::YLeaf EsdmaRackNumEnum::F3 {19, "F3"};
const Enum::YLeaf EsdmaRackNumEnum::B0 {20, "B0"};
const Enum::YLeaf EsdmaRackNumEnum::B1 {21, "B1"};

const Enum::YLeaf EsdmaCpu::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaCpu::RP0 {1, "RP0"};
const Enum::YLeaf EsdmaCpu::RP1 {2, "RP1"};
const Enum::YLeaf EsdmaCpu::SC0 {3, "SC0"};
const Enum::YLeaf EsdmaCpu::SC1 {4, "SC1"};
const Enum::YLeaf EsdmaCpu::LC0 {5, "LC0"};
const Enum::YLeaf EsdmaCpu::LC1 {6, "LC1"};
const Enum::YLeaf EsdmaCpu::LC2 {7, "LC2"};
const Enum::YLeaf EsdmaCpu::LC3 {8, "LC3"};
const Enum::YLeaf EsdmaCpu::LC4 {9, "LC4"};
const Enum::YLeaf EsdmaCpu::LC5 {10, "LC5"};
const Enum::YLeaf EsdmaCpu::LC6 {11, "LC6"};
const Enum::YLeaf EsdmaCpu::LC7 {12, "LC7"};
const Enum::YLeaf EsdmaCpu::LC8 {13, "LC8"};
const Enum::YLeaf EsdmaCpu::LC9 {14, "LC9"};
const Enum::YLeaf EsdmaCpu::LC10 {15, "LC10"};
const Enum::YLeaf EsdmaCpu::LC11 {16, "LC11"};
const Enum::YLeaf EsdmaCpu::LC12 {17, "LC12"};
const Enum::YLeaf EsdmaCpu::LC13 {18, "LC13"};
const Enum::YLeaf EsdmaCpu::LC14 {19, "LC14"};
const Enum::YLeaf EsdmaCpu::LC15 {20, "LC15"};
const Enum::YLeaf EsdmaCpu::LC16 {21, "LC16"};
const Enum::YLeaf EsdmaCpu::LC17 {22, "LC17"};
const Enum::YLeaf EsdmaCpu::LC18 {23, "LC18"};
const Enum::YLeaf EsdmaCpu::LC19 {24, "LC19"};
const Enum::YLeaf EsdmaCpu::FC0 {25, "FC0"};
const Enum::YLeaf EsdmaCpu::FC1 {26, "FC1"};
const Enum::YLeaf EsdmaCpu::FC2 {27, "FC2"};
const Enum::YLeaf EsdmaCpu::FC3 {28, "FC3"};
const Enum::YLeaf EsdmaCpu::FC4 {29, "FC4"};
const Enum::YLeaf EsdmaCpu::FC5 {30, "FC5"};
const Enum::YLeaf EsdmaCpu::CB0 {31, "CB0"};

const Enum::YLeaf EsdmaSwitchTypeEnum::RP_SW {0, "RP-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::SC_SW {1, "SC-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::LC_SW {2, "LC-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::F_SW0 {3, "F-SW0"};
const Enum::YLeaf EsdmaSwitchTypeEnum::F_SW1 {4, "F-SW1"};
const Enum::YLeaf EsdmaSwitchTypeEnum::FC_SW {5, "FC-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::EOBC_SW {6, "EOBC-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::EPC_SW {7, "EPC-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::CB_SW {8, "CB-SW"};
const Enum::YLeaf EsdmaSwitchTypeEnum::Unknown {9, "Unknown"};
const Enum::YLeaf EsdmaSwitchTypeEnum::RP_SW1 {10, "RP-SW1"};

const Enum::YLeaf EsdmaSwitchYesNoEnum::Yes {0, "Yes"};
const Enum::YLeaf EsdmaSwitchYesNoEnum::No {1, "No"};

const Enum::YLeaf EsdmaSwitchSfpInsertedEnum::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaSwitchSfpInsertedEnum::Yes {1, "Yes"};
const Enum::YLeaf EsdmaSwitchSfpInsertedEnum::No {2, "No"};
const Enum::YLeaf EsdmaSwitchSfpInsertedEnum::Failed {3, "Failed"};

const Enum::YLeaf EsdmaSwitchSfpControllerEnum::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaSwitchSfpControllerEnum::Switch {1, "Switch"};
const Enum::YLeaf EsdmaSwitchSfpControllerEnum::PHY {2, "PHY"};

const Enum::YLeaf EsdmaSwitchSfpTranceiverTypeEnum::Unspecified {0, "Unspecified"};
const Enum::YLeaf EsdmaSwitchSfpTranceiverTypeEnum::SFP {1, "SFP"};
const Enum::YLeaf EsdmaSwitchSfpTranceiverTypeEnum::QSFP {2, "QSFP"};
const Enum::YLeaf EsdmaSwitchSfpTranceiverTypeEnum::Unknown {3, "Unknown"};

const Enum::YLeaf EsdmaSfpEncodingEnum::Unspecified {0, "Unspecified"};
const Enum::YLeaf EsdmaSfpEncodingEnum::Y_8B__FWD_SLASH__10B {1, "8B/10B"};
const Enum::YLeaf EsdmaSfpEncodingEnum::Y_4B__FWD_SLASH__5B {2, "4B/5B"};
const Enum::YLeaf EsdmaSfpEncodingEnum::NRZ {3, "NRZ"};
const Enum::YLeaf EsdmaSfpEncodingEnum::Manchester {4, "Manchester"};
const Enum::YLeaf EsdmaSfpEncodingEnum::SONET_Scrambled {5, "SONET Scrambled"};
const Enum::YLeaf EsdmaSfpEncodingEnum::Y_64B__FWD_SLASH__66B {6, "64B/66B"};
const Enum::YLeaf EsdmaSfpEncodingEnum::Unknown {7, "Unknown"};

const Enum::YLeaf EsdmaQsfpTransceiverEnum::QSFP_40G_LR4 {0, "QSFP-40G-LR4"};
const Enum::YLeaf EsdmaQsfpTransceiverEnum::QSFP_40G_SR4 {1, "QSFP-40G-SR4"};
const Enum::YLeaf EsdmaQsfpTransceiverEnum::QSFP_40G_CR4_Active {2, "QSFP-40G-CR4-Active"};
const Enum::YLeaf EsdmaQsfpTransceiverEnum::QSFP_40G_CR4_Passive {3, "QSFP-40G-CR4-Passive"};
const Enum::YLeaf EsdmaQsfpTransceiverEnum::Unknown {4, "Unknown"};

const Enum::YLeaf EsdmaSwitchSfpTypeEnum::None {0, "None"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_10G_SR {1, "SFP-10G-SR"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_10G_LR {2, "SFP-10G-LR"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_10G_LRM {3, "SFP-10G-LRM"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_1G_SX {4, "SFP-1G-SX"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_1G_LX {5, "SFP-1G-LX"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_1000Base_T {6, "SFP-1000Base-T"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_40G_SR4 {7, "SFP-40G-SR4"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::SFP_40G_LR4 {8, "SFP-40G-LR4"};
const Enum::YLeaf EsdmaSwitchSfpTypeEnum::Unsupported {9, "Unsupported"};

const Enum::YLeaf EsdmaSwitchPortState::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaSwitchPortState::Test {1, "Test"};
const Enum::YLeaf EsdmaSwitchPortState::Down {2, "Down"};
const Enum::YLeaf EsdmaSwitchPortState::Up {3, "Up"};

const Enum::YLeaf SwitchForwardingState::Unknown {0, "Unknown"};
const Enum::YLeaf SwitchForwardingState::Y_ {1, "-"};
const Enum::YLeaf SwitchForwardingState::Disabled {2, "Disabled"};
const Enum::YLeaf SwitchForwardingState::Blocking {3, "Blocking"};
const Enum::YLeaf SwitchForwardingState::Learning {4, "Learning"};
const Enum::YLeaf SwitchForwardingState::Forwarding {5, "Forwarding"};

const Enum::YLeaf EsdCirEirType::CIR {0, "CIR"};
const Enum::YLeaf EsdCirEirType::PIR {1, "PIR"};

const Enum::YLeaf MlapEpType::Unknown {0, "Unknown"};
const Enum::YLeaf MlapEpType::RP {1, "RP"};
const Enum::YLeaf MlapEpType::SC {2, "SC"};
const Enum::YLeaf MlapEpType::FC {3, "FC"};
const Enum::YLeaf MlapEpType::LC {4, "LC"};
const Enum::YLeaf MlapEpType::F_SW {5, "F-SW"};
const Enum::YLeaf MlapEpType::CB {6, "CB"};

const Enum::YLeaf MlapStateEnum::Y_ {0, "-"};
const Enum::YLeaf MlapStateEnum::Down {1, "Down"};
const Enum::YLeaf MlapStateEnum::Up {2, "Up"};
const Enum::YLeaf MlapStateEnum::Admin_Down {3, "Admin Down"};
const Enum::YLeaf MlapStateEnum::Do_Not_Use {4, "Do Not Use"};
const Enum::YLeaf MlapStateEnum::Invalid {5, "Invalid"};
const Enum::YLeaf MlapStateEnum::Active {6, "Active"};
const Enum::YLeaf MlapStateEnum::Standby {7, "Standby"};
const Enum::YLeaf MlapStateEnum::Rem_Managed {8, "Rem Managed"};

const Enum::YLeaf MlapProtocolEnum::Internal {0, "Internal"};
const Enum::YLeaf MlapProtocolEnum::External {1, "External"};

const Enum::YLeaf MlapTraceVerbosity::Off {0, "Off"};
const Enum::YLeaf MlapTraceVerbosity::Low {1, "Low"};
const Enum::YLeaf MlapTraceVerbosity::Medium {2, "Medium"};
const Enum::YLeaf MlapTraceVerbosity::High {3, "High"};

const Enum::YLeaf SwitchDataDirectionEnum::Y_ {0, "-"};
const Enum::YLeaf SwitchDataDirectionEnum::Both {1, "Both"};
const Enum::YLeaf SwitchDataDirectionEnum::Rx {2, "Rx"};
const Enum::YLeaf SwitchDataDirectionEnum::Tx {3, "Tx"};
const Enum::YLeaf SwitchDataDirectionEnum::Unknown {4, "Unknown"};
const Enum::YLeaf SwitchDataDirectionEnum::Invalid {5, "Invalid"};

const Enum::YLeaf SwitchTableTypeEnum::Y_ {0, "-"};
const Enum::YLeaf SwitchTableTypeEnum::Port {1, "Port"};
const Enum::YLeaf SwitchTableTypeEnum::VLAN {2, "VLAN"};
const Enum::YLeaf SwitchTableTypeEnum::TCAM {3, "TCAM"};
const Enum::YLeaf SwitchTableTypeEnum::Unknown {4, "Unknown"};

const Enum::YLeaf SwitchMatchTypeEnum::Y_ {0, "-"};
const Enum::YLeaf SwitchMatchTypeEnum::Any {1, "Any"};
const Enum::YLeaf SwitchMatchTypeEnum::Tagged {2, "Tagged"};
const Enum::YLeaf SwitchMatchTypeEnum::Untagged {3, "Untagged"};
const Enum::YLeaf SwitchMatchTypeEnum::Unknown {4, "Unknown"};

const Enum::YLeaf SwitchActionTypeEnum::Y_ {0, "-"};
const Enum::YLeaf SwitchActionTypeEnum::Translate {1, "Translate"};
const Enum::YLeaf SwitchActionTypeEnum::Remove_Outer {2, "Remove Outer"};
const Enum::YLeaf SwitchActionTypeEnum::Add_Outer {3, "Add Outer"};
const Enum::YLeaf SwitchActionTypeEnum::Drop {4, "Drop"};
const Enum::YLeaf SwitchActionTypeEnum::Forward {5, "Forward"};
const Enum::YLeaf SwitchActionTypeEnum::Unknown {6, "Unknown"};

const Enum::YLeaf EsdmaSdrTrafficType::Unknown {0, "Unknown"};
const Enum::YLeaf EsdmaSdrTrafficType::IPC {1, "IPC"};
const Enum::YLeaf EsdmaSdrTrafficType::MgmtEth {2, "MgmtEth"};
const Enum::YLeaf EsdmaSdrTrafficType::All {3, "All"};
const Enum::YLeaf EsdmaSdrTrafficType::Invalid {4, "Invalid"};

const Enum::YLeaf EsdmaTrunkMemberStatus::Disabled {0, "Disabled"};
const Enum::YLeaf EsdmaTrunkMemberStatus::Enabled {1, "Enabled"};
const Enum::YLeaf EsdmaTrunkMemberStatus::Y_ {2, "-"};


}
}

