#ifndef _CISCO_NX_OS_DEVICE_32_
#define _CISCO_NX_OS_DEVICE_32_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_31.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList : public ydk::Entity
{
    public:
        ModUpgTableList();
        ~ModUpgTableList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modtype; //type: InstallerInstModType
        ydk::YLeaf module; //type: uint32
        ydk::YLeaf runver; //type: string
        ydk::YLeaf targetver; //type: string
        ydk::YLeaf upgreq; //type: InstallerInstEnum
        ydk::YLeaf upgstatus; //type: InstallerUpgStatusType
        ydk::YLeaf failstr; //type: string

}; // System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList


class System::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf descr; //type: string
        class PhysItems; //type: System::IntfItems::PhysItems
        class AggrItems; //type: System::IntfItems::AggrItems
        class RtdItems; //type: System::IntfItems::RtdItems
        class LbItems; //type: System::IntfItems::LbItems
        class EncrtdItems; //type: System::IntfItems::EncrtdItems
        class SviItems; //type: System::IntfItems::SviItems
        class TunnelifItems; //type: System::IntfItems::TunnelifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems> phys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems> aggr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems> rtd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems> lb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems> encrtd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems> svi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems> tunnelif_items;
        
}; // System::IntfItems


class System::IntfItems::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PhysIfList; //type: System::IntfItems::PhysItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::IntfItems::PhysItems


class System::IntfItems::PhysItems::PhysIfList : public ydk::Entity
{
    public:
        PhysIfList();
        ~PhysIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf linktransmitreset; //type: L1LinkTransmitReset
        ydk::YLeaf linkdebouncelinkup; //type: uint16
        ydk::YLeaf speedgroup; //type: L1SpeedGroup
        ydk::YLeaf beacon; //type: L1Beacon
        ydk::YLeaf voicevlanid; //type: uint16
        ydk::YLeaf voicevlantype; //type: L1VoiceVlanType
        ydk::YLeaf voiceportcos; //type: int8
        ydk::YLeaf voiceporttrust; //type: int8
        ydk::YLeaf fecmode; //type: L1FECMode
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf switchingst; //type: L1SwitchingSt
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        ydk::YLeaf mode; //type: L1Mode
        ydk::YLeaf layer; //type: L1Layer
        ydk::YLeaf mdix; //type: L1Mdix
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf linkdebounce; //type: uint16
        ydk::YLeaf dot1qethertype; //type: L1Dot1qEtherType
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf medium; //type: L1Medium
        ydk::YLeaf inhbw; //type: uint32
        ydk::YLeaf spanmode; //type: L1SpanMode
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf trunklog; //type: L1TrunkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf portt; //type: EqptPortT
        ydk::YLeaf usage; //type: string
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf usercfgdflags; //type: string
        class PriorflowctrlItems; //type: System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems
        class PriorflowctrlwdItems; //type: System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems
        class PhysExtdItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems
        class EeepItems; //type: System::IntfItems::PhysItems::PhysIfList::EeepItems
        class StormctrlpItems; //type: System::IntfItems::PhysItems::PhysIfList::StormctrlpItems
        class LoadpItems; //type: System::IntfItems::PhysItems::PhysIfList::LoadpItems
        class VlanmappingItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems
        class VrfItems; //type: System::IntfItems::PhysItems::PhysIfList::VrfItems
        class PhysItems_; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_
        class AggrmbrifItems; //type: System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems
        class MultisiteiftrackingItems; //type: System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems
        class DomItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems
        class RtInbandConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems
        class RtextConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtextConfItems
        class RtbrConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtbrConfItems
        class RtfvNodePortAttItems; //type: System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems
        class RtmbrIfsItems; //type: System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems
        class RtvrfMbrItems; //type: System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems
        class RttunnelTunnelMbrIfsItems; //type: System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems
        class RtLsNodeToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems
        class DbgIfInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfInItems
        class DbgIfOutItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems
        class DbgIpInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIpInItems
        class DbgDot1dItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems
        class DbgEtherStatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems
        class DbgDot3StatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems
        class DbgIfHCInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems
        class DbgIfHCOutItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems
        class DbgIpv6IfStatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems
        class DbgIfStormItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems> priorflowctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems> priorflowctrlwd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems> physextd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::EeepItems> eeep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::StormctrlpItems> stormctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::LoadpItems> loadp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems> vlanmapping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_> phys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems> aggrmbrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems> multisiteiftracking_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems> rtinbandconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems> rtmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems> rttunneltunnelmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems> rtlsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfInItems> dbgifin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems> dbgifout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIpInItems> dbgipin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems> dbgdot1d_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems> dbgetherstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems> dbgdot3stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems> dbgifhcin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems> dbgifhcout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems> dbgipv6ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems> dbgifstorm_items;
        
}; // System::IntfItems::PhysItems::PhysIfList


class System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems : public ydk::Entity
{
    public:
        PriorflowctrlItems();
        ~PriorflowctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems


class System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems : public ydk::Entity
{
    public:
        PriorflowctrlwdItems();
        ~PriorflowctrlwdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf watchdoginterval; //type: uint8
        ydk::YLeaf disableaction; //type: boolean
        ydk::YLeaf interfacemutiplier; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems : public ydk::Entity
{
    public:
        PhysExtdItems();
        ~PhysExtdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf porttypefabric; //type: L1PortTypeFabric
        ydk::YLeaf routermacipv6extract; //type: L1RouterMacIpv6Extract
        ydk::YLeaf switchportblock; //type: string
        ydk::YLeaf switchportmaclearn; //type: L1SwitchportMacLearn
        ydk::YLeaf flowctrl; //type: string
        ydk::YLeaf stormctrlbcastlevel; //type: decimal64
        ydk::YLeaf stormctrlbcastpps; //type: uint32
        ydk::YLeaf stormctrlmcastlevel; //type: decimal64
        ydk::YLeaf stormctrlmcastpps; //type: uint32
        ydk::YLeaf stormctrlucastlevel; //type: decimal64
        ydk::YLeaf stormctrlucastpps; //type: uint32
        ydk::YLeaf stormctrlact; //type: string
        ydk::YLeaf bufferboost; //type: L1BufferBoost
        ydk::YLeaf switchportvirtualethernetbridge; //type: L1SwitchportVirtualEthernetBridge
        ydk::YLeaf allowmultitag; //type: L1AllowMultiTag
        class RtvrfMbrItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::PhysItems::PhysIfList::EeepItems : public ydk::Entity
{
    public:
        EeepItems();
        ~EeepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eeestate; //type: L1EEEState
        ydk::YLeaf eeelpi; //type: L1EEELpi
        ydk::YLeaf eeelat; //type: L1EEELatency
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::EeepItems


class System::IntfItems::PhysItems::PhysIfList::StormctrlpItems : public ydk::Entity
{
    public:
        StormctrlpItems();
        ~StormctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L1PktT
        ydk::YLeaf rate; //type: decimal64
        ydk::YLeaf burstrate; //type: decimal64
        ydk::YLeaf ratepps; //type: uint32
        ydk::YLeaf burstpps; //type: uint32

}; // System::IntfItems::PhysItems::PhysIfList::StormctrlpItems


class System::IntfItems::PhysItems::PhysIfList::LoadpItems : public ydk::Entity
{
    public:
        LoadpItems();
        ~LoadpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loadintvl1; //type: uint16
        ydk::YLeaf loadintvl2; //type: uint16
        ydk::YLeaf loadintvl3; //type: uint16

}; // System::IntfItems::PhysItems::PhysIfList::LoadpItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems : public ydk::Entity
{
    public:
        VlanmappingItems();
        ~VlanmappingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class VlantranslatetableItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems> vlantranslatetable_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems : public ydk::Entity
{
    public:
        VlantranslatetableItems();
        ~VlantranslatetableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems> vlan_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanTranslateEntryList; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList

        ydk::YList vlantranslateentry_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList : public ydk::Entity
{
    public:
        VlanTranslateEntryList();
        ~VlanTranslateEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: string
        ydk::YLeaf innervlanid; //type: string
        ydk::YLeaf translatevlanid; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList


class System::IntfItems::PhysItems::PhysIfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::VrfItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_ : public ydk::Entity
{
    public:
        PhysItems_();
        ~PhysItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operlinkdebounce; //type: uint16
        ydk::YLeaf sharestate; //type: EthpmShareState
        ydk::YLeaf operfecmode; //type: L1FECModePhysIfOperFECMode
        ydk::YLeaf cachedusercfgdflags; //type: string
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operautoneg; //type: L1AutoNeg
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf operstqualcode; //type: uint32
        ydk::YLeaf opererrdisqual; //type: L1OperStQual_
        ydk::YLeaf operspeed; //type: L1Speed
        ydk::YLeaf opermode; //type: L1Mode
        ydk::YLeaf operduplex; //type: L1Duplex
        ydk::YLeaf operflowctrl; //type: string
        ydk::YLeaf operphyenst; //type: L1OperSt
        ydk::YLeaf backplanemac; //type: string
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf txt; //type: L1TxT
        ydk::YLeaf lastlinkstchg; //type: string
        ydk::YLeaf portcfgwaitflags; //type: uint32
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf cfgnativevlan; //type: string
        ydk::YLeaf cfgaccessvlan; //type: string
        ydk::YLeaf primaryvlan; //type: string
        ydk::YLeaf operbitset; //type: string
        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf resetctr; //type: uint32
        ydk::YLeaf media; //type: uint32
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf allowedvlans; //type: string
        ydk::YLeaf opervlans; //type: string
        ydk::YLeaf errvlans; //type: string
        ydk::YLeaf opertrunkstatus; //type: EthpmTrunkStatus
        ydk::YLeaf bundleindex; //type: string
        ydk::YLeaf opermdix; //type: L1Mdix
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf errdistimerrunning; //type: boolean
        ydk::YLeaf bundlebupid; //type: uint32
        ydk::YLeaf operdcemode; //type: L1DceMode
        ydk::YLeaf intft; //type: L1IntfT
        ydk::YLeaf diags; //type: L1DiagsT
        ydk::YLeaf opereeestate; //type: L1EEEState
        ydk::YLeaf opereeetxwktime; //type: uint32
        ydk::YLeaf opereeerxwktime; //type: uint32
        ydk::YLeaf usercfgdflags; //type: string
        ydk::YLeaf numofsi; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf silist; //type: string
        ydk::YLeaf dynamicvlan; //type: boolean
        ydk::YLeaf usage; //type: string
        class FcotItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems
        class Fcotx2Items; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items
        class PortcapItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems> fcot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items> fcotx2_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems> portcap_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems : public ydk::Entity
{
    public:
        FcotItems();
        ~FcotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrid; //type: uint8
        ydk::YLeaf xcvrextid; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf xcvrcode; //type: string
        ydk::YLeaf encoding; //type: uint8
        ydk::YLeaf brin100mhz; //type: uint8
        ydk::YLeaf baseresvd1; //type: uint8
        ydk::YLeaf distinkmfor9u; //type: uint8
        ydk::YLeaf distin100mfor9u; //type: uint8
        ydk::YLeaf distin10mfor50u; //type: uint8
        ydk::YLeaf distin10mfor60u; //type: uint8
        ydk::YLeaf distin1mforcu; //type: uint8
        ydk::YLeaf baseresvd2; //type: uint8
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf baseresvd3; //type: uint8
        ydk::YLeaf vendorid; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf baseresvd4; //type: string
        ydk::YLeaf ccid; //type: uint8
        ydk::YLeaf extoption; //type: string
        ydk::YLeaf brmaxmargin; //type: uint8
        ydk::YLeaf brminmargin; //type: uint8
        ydk::YLeaf vendorsn; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf diagmontype; //type: uint8
        ydk::YLeaf enhoption; //type: uint8
        ydk::YLeaf sff8472compl; //type: uint8
        ydk::YLeaf ccex; //type: uint8
        ydk::YLeaf vendordata; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8
        class LaneItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems> lane_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems : public ydk::Entity
{
    public:
        LaneItems();
        ~LaneItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FcotSensorList; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList

        ydk::YList fcotsensor_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList : public ydk::Entity
{
    public:
        FcotSensorList();
        ~FcotSensorList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf laneid; //type: uint16
        ydk::YLeaf sensorid; //type: uint16
        ydk::YLeaf lanetype; //type: EqptFcotDomLane
        ydk::YLeaf description; //type: string
        ydk::YLeaf unit; //type: string
        ydk::YLeaf value_; //type: decimal64
        ydk::YLeaf highalarm; //type: decimal64
        ydk::YLeaf highwarning; //type: decimal64
        ydk::YLeaf lowalarm; //type: decimal64
        ydk::YLeaf lowwarning; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf instant; //type: decimal64

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items : public ydk::Entity
{
    public:
        Fcotx2Items();
        ~Fcotx2Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrtype; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf bitencoding; //type: uint8
        ydk::YLeaf bitratembps; //type: string
        ydk::YLeaf protocoltype; //type: uint8
        ydk::YLeaf xgethcode; //type: string
        ydk::YLeaf sonetsdhcode; //type: string
        ydk::YLeaf xgfccode; //type: string
        ydk::YLeaf range; //type: string
        ydk::YLeaf fibretype; //type: string
        ydk::YLeaf wavelench0; //type: string
        ydk::YLeaf wavelench1; //type: string
        ydk::YLeaf wavelench2; //type: string
        ydk::YLeaf wavelench3; //type: string
        ydk::YLeaf packageoui; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf lotcode; //type: string
        ydk::YLeaf fivevstressenv; //type: uint8
        ydk::YLeaf threethreevstressenv; //type: uint8
        ydk::YLeaf apsstressenv; //type: uint8
        ydk::YLeaf normalapsvolt; //type: uint8
        ydk::YLeaf diagoptmoncap; //type: uint8
        ydk::YLeaf lowpwrstartupcap; //type: uint8
        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf checksum; //type: uint8
        ydk::YLeaf ciscopid; //type: string
        ydk::YLeaf ciscovid; //type: string
        ydk::YLeaf ciscosn; //type: string
        ydk::YLeaf ciscopn; //type: string
        ydk::YLeaf ciscorev; //type: string
        ydk::YLeaf extvendorspecific; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems : public ydk::Entity
{
    public:
        PortcapItems();
        ~PortcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf duplex; //type: string
        ydk::YLeaf trunkencap; //type: uint8
        ydk::YLeaf channel; //type: uint8
        ydk::YLeaf suppression; //type: uint8
        ydk::YLeaf rxflowcontrol; //type: uint8
        ydk::YLeaf txflowcontrol; //type: uint8
        ydk::YLeaf cosrewrite; //type: uint8
        ydk::YLeaf tosrewrite; //type: uint8
        ydk::YLeaf span; //type: uint8
        ydk::YLeaf udld; //type: uint8
        ydk::YLeaf autoneg; //type: uint8
        ydk::YLeaf linkdebounce; //type: uint8
        ydk::YLeaf linkdebouncetime; //type: uint8
        ydk::YLeaf fcotcapable; //type: uint8
        ydk::YLeaf ratemode; //type: uint8
        ydk::YLeaf mdix; //type: uint8
        ydk::YLeaf portgroup; //type: uint8
        ydk::YLeaf ctscapable; //type: uint8
        ydk::YLeaf qosrxprio; //type: uint8
        ydk::YLeaf qosrxqueue; //type: uint8
        ydk::YLeaf qosrxthold; //type: uint8
        ydk::YLeaf qostxprio; //type: uint8
        ydk::YLeaf qostxqueue; //type: uint8
        ydk::YLeaf qostxthold; //type: uint8
        ydk::YLeaf model; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf portgrpmbrs; //type: string
        ydk::YLeaf protosupport; //type: uint32
        ydk::YLeaf portcap; //type: uint32
        ydk::YLeaf eeecapval; //type: uint16
        ydk::YLeaf eeewaketimes10g; //type: string
        ydk::YLeaf eeeflapflags; //type: uint16

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems


class System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems : public ydk::Entity
{
    public:
        AggrmbrifItems();
        ~AggrmbrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: PcOperSt
        ydk::YLeaf channelingst; //type: PcChannelingSt
        ydk::YLeaf summoperst; //type: PcSummOperSt
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf bdlportnum; //type: uint32
        ydk::YLeaf ltlprogrammed; //type: boolean
        ydk::YLeaf name; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems


class System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems : public ydk::Entity
{
    public:
        MultisiteiftrackingItems();
        ~MultisiteiftrackingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking; //type: NvoMultisiteTrackingT

}; // System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems


class System::IntfItems::PhysItems::PhysIfList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomDefList; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::DomItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList : public ydk::Entity
{
    public:
        DomDefList();
        ~DomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dompkey; //type: string
        ydk::YLeaf instrimedcy; //type: FvImmediacy_
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
{
    public:
        RsdomDefNsItems();
        ~RsdomDefNsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
{
    public:
        RsdomDefNsLocalItems();
        ~RsdomDefNsLocalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems : public ydk::Entity
{
    public:
        RtfvToDomDefItems();
        ~RtfvToDomDefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToDomDefList; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList

        ydk::YList rtfvtodomdef_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList : public ydk::Entity
{
    public:
        RtFvToDomDefList();
        ~RtFvToDomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList


class System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems : public ydk::Entity
{
    public:
        RtInbandConfItems();
        ~RtInbandConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems


class System::IntfItems::PhysItems::PhysIfList::RtextConfItems : public ydk::Entity
{
    public:
        RtextConfItems();
        ~RtextConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtextConfItems


class System::IntfItems::PhysItems::PhysIfList::RtbrConfItems : public ydk::Entity
{
    public:
        RtbrConfItems();
        ~RtbrConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtbrConfItems


class System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems : public ydk::Entity
{
    public:
        RtfvNodePortAttItems();
        ~RtfvNodePortAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvNodePortAttList; //type: System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList

        ydk::YList rtfvnodeportatt_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems


class System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList : public ydk::Entity
{
    public:
        RtFvNodePortAttList();
        ~RtFvNodePortAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList


class System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems : public ydk::Entity
{
    public:
        RtmbrIfsItems();
        ~RtmbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems


class System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems


class System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems : public ydk::Entity
{
    public:
        RtphysRtdConfItems();
        ~RtphysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems


class System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems : public ydk::Entity
{
    public:
        Rtl3EncPhysRtdConfItems();
        ~Rtl3EncPhysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtL3EncPhysRtdConfList; //type: System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList

        ydk::YList rtl3encphysrtdconf_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems


class System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList : public ydk::Entity
{
    public:
        RtL3EncPhysRtdConfList();
        ~RtL3EncPhysRtdConfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList


class System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems


class System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems : public ydk::Entity
{
    public:
        RttunnelTunnelMbrIfsItems();
        ~RttunnelTunnelMbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtTunnelTunnelMbrIfsList; //type: System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList

        ydk::YList rttunneltunnelmbrifs_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems


class System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList : public ydk::Entity
{
    public:
        RtTunnelTunnelMbrIfsList();
        ~RtTunnelTunnelMbrIfsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList


class System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems : public ydk::Entity
{
    public:
        RtLsNodeToIfItems();
        ~RtLsNodeToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems


class System::IntfItems::PhysItems::PhysIfList::DbgIfInItems : public ydk::Entity
{
    public:
        DbgIfInItems();
        ~DbgIfInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf unknownprotos; //type: uint64
        ydk::YLeaf unknownetype; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf nobuffer; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIfInItems


class System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems : public ydk::Entity
{
    public:
        DbgIfOutItems();
        ~DbgIfOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf qlen; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems


class System::IntfItems::PhysItems::PhysIfList::DbgIpInItems : public ydk::Entity
{
    public:
        DbgIpInItems();
        ~DbgIpInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receives; //type: uint64
        ydk::YLeaf hdrerrors; //type: uint64
        ydk::YLeaf forwdatagrams; //type: uint64
        ydk::YLeaf discards; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIpInItems


class System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems : public ydk::Entity
{
    public:
        DbgDot1dItems();
        ~DbgDot1dItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf baseportdelayexceededdiscards; //type: uint64
        ydk::YLeaf baseportmtuexceededdiscards; //type: uint64
        ydk::YLeaf tpportinframes; //type: uint64
        ydk::YLeaf tpportoutframes; //type: uint64
        ydk::YLeaf portindiscards; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems


class System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems : public ydk::Entity
{
    public:
        DbgEtherStatsItems();
        ~DbgEtherStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropevents; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf undersizepkts; //type: uint64
        ydk::YLeaf giantpkts; //type: uint64
        ydk::YLeaf stormsupressedpkts; //type: uint64
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
        ydk::YLeaf pkts1519to1548octets; //type: uint64
        ydk::YLeaf rxpkts64octets; //type: uint64
        ydk::YLeaf txpkts64octets; //type: uint64
        ydk::YLeaf rxpkts65to127octets; //type: uint64
        ydk::YLeaf txpkts65to127octets; //type: uint64
        ydk::YLeaf rxpkts128to255octets; //type: uint64
        ydk::YLeaf txpkts128to255octets; //type: uint64
        ydk::YLeaf rxpkts256to511octets; //type: uint64
        ydk::YLeaf txpkts256to511octets; //type: uint64
        ydk::YLeaf rxpkts512to1023octets; //type: uint64
        ydk::YLeaf txpkts512to1023octets; //type: uint64
        ydk::YLeaf rxpkts1024to1518octets; //type: uint64
        ydk::YLeaf txpkts1024to1518octets; //type: uint64
        ydk::YLeaf rxpkts1519to1548octets; //type: uint64
        ydk::YLeaf txpkts1519to1548octets; //type: uint64
        ydk::YLeaf oversizepkts; //type: uint64
        ydk::YLeaf jabbers; //type: uint64
        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf pkts; //type: uint64
        ydk::YLeaf collisions; //type: uint64
        ydk::YLeaf crcalignerrors; //type: uint64
        ydk::YLeaf txnoerrors; //type: uint64
        ydk::YLeaf rxnoerrors; //type: uint64
        ydk::YLeaf rxoversizepkts; //type: uint64
        ydk::YLeaf txoversizepkts; //type: uint64
        ydk::YLeaf overrun; //type: uint64
        ydk::YLeaf underrun; //type: uint64
        ydk::YLeaf ignored; //type: uint64
        ydk::YLeaf watchdog; //type: uint64
        ydk::YLeaf ifdowndrop; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems


class System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems : public ydk::Entity
{
    public:
        DbgDot3StatsItems();
        ~DbgDot3StatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alignmenterrors; //type: uint64
        ydk::YLeaf fcserrors; //type: uint64
        ydk::YLeaf singlecollisionframes; //type: uint64
        ydk::YLeaf multiplecollisionframes; //type: uint64
        ydk::YLeaf sqettesterrors; //type: uint64
        ydk::YLeaf deferredtransmissions; //type: uint64
        ydk::YLeaf latecollisions; //type: uint64
        ydk::YLeaf excessivecollisions; //type: uint64
        ydk::YLeaf internalmactransmiterrors; //type: uint64
        ydk::YLeaf carriersenseerrors; //type: uint64
        ydk::YLeaf frametoolongs; //type: uint64
        ydk::YLeaf internalmacreceiveerrors; //type: uint64
        ydk::YLeaf symbolerrors; //type: uint64
        ydk::YLeaf controlinunknownopcodes; //type: uint64
        ydk::YLeaf inpauseframes; //type: uint64
        ydk::YLeaf outpauseframes; //type: uint64
        ydk::YLeaf lostcarriererrors; //type: uint64
        ydk::YLeaf nocarriererrors; //type: uint64
        ydk::YLeaf inputdribble; //type: uint64
        ydk::YLeaf babble; //type: uint64
        ydk::YLeaf runts; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems


class System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems : public ydk::Entity
{
    public:
        DbgIfHCInItems();
        ~DbgIfHCInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems


class System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems : public ydk::Entity
{
    public:
        DbgIfHCOutItems();
        ~DbgIfHCOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpckts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems


class System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems : public ydk::Entity
{
    public:
        DbgIpv6IfStatsItems();
        ~DbgIpv6IfStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inreceives; //type: uint64
        ydk::YLeaf inhdrerrors; //type: uint64
        ydk::YLeaf inaddrerrors; //type: uint64
        ydk::YLeaf indiscards; //type: uint64
        ydk::YLeaf outforwdatagrams; //type: uint64
        ydk::YLeaf outdiscards; //type: uint64
        ydk::YLeaf inmcastpkts; //type: uint64
        ydk::YLeaf outmcastpkts; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems


class System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems : public ydk::Entity
{
    public:
        DbgIfStormItems();
        ~DbgIfStormItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropbytes; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems


class System::IntfItems::AggrItems : public ydk::Entity
{
    public:
        AggrItems();
        ~AggrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AggrIfList; //type: System::IntfItems::AggrItems::AggrIfList

        ydk::YList aggrif_list;
        
}; // System::IntfItems::AggrItems


class System::IntfItems::AggrItems::AggrIfList : public ydk::Entity
{
    public:
        AggrIfList();
        ~AggrIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf pcid; //type: uint16
        ydk::YLeaf pcmode; //type: PcMode
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf minlinks; //type: uint32
        ydk::YLeaf maxlinks; //type: uint32
        ydk::YLeaf hashdist; //type: PcHashDist
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf operchannelmode; //type: PcMode
        ydk::YLeaf lastst; //type: PcLastSt
        ydk::YLeaf laststcause; //type: string
        ydk::YLeaf lasttime; //type: string
        ydk::YLeaf createtime; //type: string
        ydk::YLeaf fop; //type: string
        ydk::YLeaf lastbundletime; //type: string
        ydk::YLeaf lastbundlembr; //type: string
        ydk::YLeaf lastunbundletime; //type: string
        ydk::YLeaf lastunbundlembr; //type: string
        ydk::YLeaf suspminlinks; //type: boolean
        ydk::YLeaf ltl; //type: uint32
        ydk::YLeaf lif; //type: uint32
        ydk::YLeaf maxactive; //type: uint32
        ydk::YLeaf loaddeferstarttime; //type: string
        ydk::YLeaf isexplicit; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        ydk::YLeaf mode; //type: L1Mode
        ydk::YLeaf layer; //type: L1LayerAggrIfLayer
        ydk::YLeaf mdix; //type: L1Mdix
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf linkdebounce; //type: uint16
        ydk::YLeaf dot1qethertype; //type: L1Dot1qEtherType
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf medium; //type: L1Medium
        ydk::YLeaf inhbw; //type: uint32
        ydk::YLeaf spanmode; //type: L1SpanMode
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf trunklog; //type: L1TrunkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf portt; //type: EqptPortT
        ydk::YLeaf usage; //type: string
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf usercfgdflags; //type: string
        class PriorflowctrlItems; //type: System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems
        class PriorflowctrlwdItems; //type: System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems
        class EeepItems; //type: System::IntfItems::AggrItems::AggrIfList::EeepItems
        class StormctrlpItems; //type: System::IntfItems::AggrItems::AggrIfList::StormctrlpItems
        class LoadpItems; //type: System::IntfItems::AggrItems::AggrIfList::LoadpItems
        class VrfItems; //type: System::IntfItems::AggrItems::AggrIfList::VrfItems
        class AggrifItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrifItems
        class BundleInfoItems; //type: System::IntfItems::AggrItems::AggrIfList::BundleInfoItems
        class AggrExtdItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems
        class VlanmappingItems; //type: System::IntfItems::AggrItems::AggrIfList::VlanmappingItems
        class BndlmbrifItems; //type: System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems
        class MultisiteiftrackingItems; //type: System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems
        class DomItems; //type: System::IntfItems::AggrItems::AggrIfList::DomItems
        class RtfexBndlGrpToAggrIfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems
        class RtaccBndlGrpToAggrIfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems
        class RtextConfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtextConfItems
        class RtbrConfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtbrConfItems
        class RtvpcConfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems
        class RtfvNodePortAttItems; //type: System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems
        class RsmbrIfsItems; //type: System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems
        class RslacpPolConsItems; //type: System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems
        class RtvrfMbrItems; //type: System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems
        class RtLsNodeToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems
        class DbgIfInItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIfInItems
        class DbgIfOutItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems
        class DbgIpInItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIpInItems
        class DbgDot1dItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems
        class DbgEtherStatsItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems
        class DbgDot3StatsItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems
        class DbgIfHCInItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems
        class DbgIfHCOutItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems
        class DbgIpv6IfStatsItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems
        class DbgIfStormItems; //type: System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems> priorflowctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems> priorflowctrlwd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::EeepItems> eeep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::StormctrlpItems> stormctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::LoadpItems> loadp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrifItems> aggrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::BundleInfoItems> bundleinfo_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems> aggrextd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VlanmappingItems> vlanmapping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems> bndlmbrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems> multisiteiftracking_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems> rtfexbndlgrptoaggrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems> rtaccbndlgrptoaggrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems> rtvpcconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems> rsmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems> rslacppolcons_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems> rtlsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIfInItems> dbgifin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems> dbgifout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIpInItems> dbgipin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems> dbgdot1d_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems> dbgetherstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems> dbgdot3stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems> dbgifhcin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems> dbgifhcout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems> dbgipv6ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems> dbgifstorm_items;
        
}; // System::IntfItems::AggrItems::AggrIfList


class System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems : public ydk::Entity
{
    public:
        PriorflowctrlItems();
        ~PriorflowctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: uint8

}; // System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems


class System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems : public ydk::Entity
{
    public:
        PriorflowctrlwdItems();
        ~PriorflowctrlwdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf watchdoginterval; //type: uint8
        ydk::YLeaf disableaction; //type: boolean
        ydk::YLeaf interfacemutiplier; //type: uint8

}; // System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems


class System::IntfItems::AggrItems::AggrIfList::EeepItems : public ydk::Entity
{
    public:
        EeepItems();
        ~EeepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eeestate; //type: L1EEEState
        ydk::YLeaf eeelpi; //type: L1EEELpi
        ydk::YLeaf eeelat; //type: L1EEELatency
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IntfItems::AggrItems::AggrIfList::EeepItems


class System::IntfItems::AggrItems::AggrIfList::StormctrlpItems : public ydk::Entity
{
    public:
        StormctrlpItems();
        ~StormctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L1PktT
        ydk::YLeaf rate; //type: decimal64
        ydk::YLeaf burstrate; //type: decimal64
        ydk::YLeaf ratepps; //type: uint32
        ydk::YLeaf burstpps; //type: uint32

}; // System::IntfItems::AggrItems::AggrIfList::StormctrlpItems


class System::IntfItems::AggrItems::AggrIfList::LoadpItems : public ydk::Entity
{
    public:
        LoadpItems();
        ~LoadpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loadintvl1; //type: uint16
        ydk::YLeaf loadintvl2; //type: uint16
        ydk::YLeaf loadintvl3; //type: uint16

}; // System::IntfItems::AggrItems::AggrIfList::LoadpItems


class System::IntfItems::AggrItems::AggrIfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::AggrItems::AggrIfList::VrfItems


class System::IntfItems::AggrItems::AggrIfList::AggrifItems : public ydk::Entity
{
    public:
        AggrifItems();
        ~AggrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf numactiveports; //type: uint16
        ydk::YLeaf activembrs; //type: string
        ydk::YLeaf nummbrup; //type: uint8
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operautoneg; //type: L1AutoNeg
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf operstqualcode; //type: uint32
        ydk::YLeaf opererrdisqual; //type: L1OperStQual_
        ydk::YLeaf operspeed; //type: L1Speed
        ydk::YLeaf opermode; //type: L1Mode
        ydk::YLeaf operduplex; //type: L1Duplex
        ydk::YLeaf operflowctrl; //type: string
        ydk::YLeaf operphyenst; //type: L1OperSt
        ydk::YLeaf backplanemac; //type: string
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf txt; //type: L1TxT
        ydk::YLeaf lastlinkstchg; //type: string
        ydk::YLeaf portcfgwaitflags; //type: uint32
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf cfgnativevlan; //type: string
        ydk::YLeaf cfgaccessvlan; //type: string
        ydk::YLeaf primaryvlan; //type: string
        ydk::YLeaf operbitset; //type: string
        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf resetctr; //type: uint32
        ydk::YLeaf media; //type: uint32
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf allowedvlans; //type: string
        ydk::YLeaf opervlans; //type: string
        ydk::YLeaf errvlans; //type: string
        ydk::YLeaf opertrunkstatus; //type: EthpmTrunkStatus
        ydk::YLeaf bundleindex; //type: string
        ydk::YLeaf opermdix; //type: L1Mdix
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf errdistimerrunning; //type: boolean
        ydk::YLeaf bundlebupid; //type: uint32
        ydk::YLeaf operdcemode; //type: L1DceMode
        ydk::YLeaf intft; //type: L1IntfT
        ydk::YLeaf diags; //type: L1DiagsT
        ydk::YLeaf opereeestate; //type: L1EEEState
        ydk::YLeaf opereeetxwktime; //type: uint32
        ydk::YLeaf opereeerxwktime; //type: uint32
        ydk::YLeaf usercfgdflags; //type: string
        ydk::YLeaf numofsi; //type: uint32
        ydk::YLeaf silist; //type: string
        ydk::YLeaf dynamicvlan; //type: boolean
        ydk::YLeaf usage; //type: string
        class PortcapItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems> portcap_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrifItems


class System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems : public ydk::Entity
{
    public:
        PortcapItems();
        ~PortcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf duplex; //type: string
        ydk::YLeaf trunkencap; //type: uint8
        ydk::YLeaf channel; //type: uint8
        ydk::YLeaf suppression; //type: uint8
        ydk::YLeaf rxflowcontrol; //type: uint8
        ydk::YLeaf txflowcontrol; //type: uint8
        ydk::YLeaf cosrewrite; //type: uint8
        ydk::YLeaf tosrewrite; //type: uint8
        ydk::YLeaf span; //type: uint8
        ydk::YLeaf udld; //type: uint8
        ydk::YLeaf autoneg; //type: uint8
        ydk::YLeaf linkdebounce; //type: uint8
        ydk::YLeaf linkdebouncetime; //type: uint8
        ydk::YLeaf fcotcapable; //type: uint8
        ydk::YLeaf ratemode; //type: uint8
        ydk::YLeaf mdix; //type: uint8
        ydk::YLeaf portgroup; //type: uint8
        ydk::YLeaf ctscapable; //type: uint8
        ydk::YLeaf qosrxprio; //type: uint8
        ydk::YLeaf qosrxqueue; //type: uint8
        ydk::YLeaf qosrxthold; //type: uint8
        ydk::YLeaf qostxprio; //type: uint8
        ydk::YLeaf qostxqueue; //type: uint8
        ydk::YLeaf qostxthold; //type: uint8
        ydk::YLeaf model; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf portgrpmbrs; //type: string
        ydk::YLeaf protosupport; //type: uint32
        ydk::YLeaf portcap; //type: uint32
        ydk::YLeaf eeecapval; //type: uint16
        ydk::YLeaf eeewaketimes10g; //type: string
        ydk::YLeaf eeeflapflags; //type: uint16

}; // System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems


class System::IntfItems::AggrItems::AggrIfList::BundleInfoItems : public ydk::Entity
{
    public:
        BundleInfoItems();
        ~BundleInfoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opertype; //type: PcPortChannelType
        ydk::YLeaf operprotocol; //type: PcPortChannelProtocol

}; // System::IntfItems::AggrItems::AggrIfList::BundleInfoItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems : public ydk::Entity
{
    public:
        AggrExtdItems();
        ~AggrExtdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf potype; //type: PcPoType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf porttypefabric; //type: L1PortTypeFabric
        ydk::YLeaf routermacipv6extract; //type: L1RouterMacIpv6Extract
        ydk::YLeaf switchportblock; //type: string
        ydk::YLeaf switchportmaclearn; //type: L1SwitchportMacLearn
        ydk::YLeaf flowctrl; //type: string
        ydk::YLeaf stormctrlbcastlevel; //type: decimal64
        ydk::YLeaf stormctrlbcastpps; //type: uint32
        ydk::YLeaf stormctrlmcastlevel; //type: decimal64
        ydk::YLeaf stormctrlmcastpps; //type: uint32
        ydk::YLeaf stormctrlucastlevel; //type: decimal64
        ydk::YLeaf stormctrlucastpps; //type: uint32
        ydk::YLeaf stormctrlact; //type: string
        ydk::YLeaf bufferboost; //type: L1BufferBoost
        ydk::YLeaf switchportvirtualethernetbridge; //type: L1SwitchportVirtualEthernetBridge
        ydk::YLeaf allowmultitag; //type: L1AllowMultiTag
        class RtvrfMbrItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::AggrItems::AggrIfList::VlanmappingItems : public ydk::Entity
{
    public:
        VlanmappingItems();
        ~VlanmappingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class VlantranslatetableItems; //type: System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems> vlantranslatetable_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::VlanmappingItems


class System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems : public ydk::Entity
{
    public:
        VlantranslatetableItems();
        ~VlantranslatetableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanItems; //type: System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems> vlan_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems


class System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanTranslateEntryList; //type: System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList

        ydk::YList vlantranslateentry_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems


class System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList : public ydk::Entity
{
    public:
        VlanTranslateEntryList();
        ~VlanTranslateEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: string
        ydk::YLeaf innervlanid; //type: string
        ydk::YLeaf translatevlanid; //type: string

}; // System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList


class System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems : public ydk::Entity
{
    public:
        BndlmbrifItems();
        ~BndlmbrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BndlMbrIfList; //type: System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList

        ydk::YList bndlmbrif_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems


class System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList : public ydk::Entity
{
    public:
        BndlMbrIfList();
        ~BndlMbrIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList


class System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems : public ydk::Entity
{
    public:
        MultisiteiftrackingItems();
        ~MultisiteiftrackingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking; //type: NvoMultisiteTrackingT

}; // System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems


class System::IntfItems::AggrItems::AggrIfList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomDefList; //type: System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::DomItems


class System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList : public ydk::Entity
{
    public:
        DomDefList();
        ~DomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dompkey; //type: string
        ydk::YLeaf instrimedcy; //type: FvImmediacy_
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList


class System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
{
    public:
        RsdomDefNsItems();
        ~RsdomDefNsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems


class System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
{
    public:
        RsdomDefNsLocalItems();
        ~RsdomDefNsLocalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems


class System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems : public ydk::Entity
{
    public:
        RtfvToDomDefItems();
        ~RtfvToDomDefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToDomDefList; //type: System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList

        ydk::YList rtfvtodomdef_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems


class System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList : public ydk::Entity
{
    public:
        RtFvToDomDefList();
        ~RtFvToDomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList


class System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems : public ydk::Entity
{
    public:
        RtfexBndlGrpToAggrIfItems();
        ~RtfexBndlGrpToAggrIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems


class System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems : public ydk::Entity
{
    public:
        RtaccBndlGrpToAggrIfItems();
        ~RtaccBndlGrpToAggrIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems


class System::IntfItems::AggrItems::AggrIfList::RtextConfItems : public ydk::Entity
{
    public:
        RtextConfItems();
        ~RtextConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtextConfItems


class System::IntfItems::AggrItems::AggrIfList::RtbrConfItems : public ydk::Entity
{
    public:
        RtbrConfItems();
        ~RtbrConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtbrConfItems


class System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems : public ydk::Entity
{
    public:
        RtvpcConfItems();
        ~RtvpcConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems


class System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems : public ydk::Entity
{
    public:
        RtfvNodePortAttItems();
        ~RtfvNodePortAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvNodePortAttList; //type: System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList

        ydk::YList rtfvnodeportatt_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems


class System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList : public ydk::Entity
{
    public:
        RtFvNodePortAttList();
        ~RtFvNodePortAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList


class System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems : public ydk::Entity
{
    public:
        RsmbrIfsItems();
        ~RsmbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMbrIfsList; //type: System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList

        ydk::YList rsmbrifs_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems


class System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList : public ydk::Entity
{
    public:
        RsMbrIfsList();
        ~RsMbrIfsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf ismbrforce; //type: boolean

}; // System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList


class System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems : public ydk::Entity
{
    public:
        RslacpPolConsItems();
        ~RslacpPolConsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems


class System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems


class System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems : public ydk::Entity
{
    public:
        RtphysRtdConfItems();
        ~RtphysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems


class System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems : public ydk::Entity
{
    public:
        Rtl3EncPhysRtdConfItems();
        ~Rtl3EncPhysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtL3EncPhysRtdConfList; //type: System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList

        ydk::YList rtl3encphysrtdconf_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems


class System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList : public ydk::Entity
{
    public:
        RtL3EncPhysRtdConfList();
        ~RtL3EncPhysRtdConfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList


class System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems


class System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems : public ydk::Entity
{
    public:
        RtLsNodeToIfItems();
        ~RtLsNodeToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems


class System::IntfItems::AggrItems::AggrIfList::DbgIfInItems : public ydk::Entity
{
    public:
        DbgIfInItems();
        ~DbgIfInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf unknownprotos; //type: uint64
        ydk::YLeaf unknownetype; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf nobuffer; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIfInItems


class System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems : public ydk::Entity
{
    public:
        DbgIfOutItems();
        ~DbgIfOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf qlen; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems


class System::IntfItems::AggrItems::AggrIfList::DbgIpInItems : public ydk::Entity
{
    public:
        DbgIpInItems();
        ~DbgIpInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receives; //type: uint64
        ydk::YLeaf hdrerrors; //type: uint64
        ydk::YLeaf forwdatagrams; //type: uint64
        ydk::YLeaf discards; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIpInItems


class System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems : public ydk::Entity
{
    public:
        DbgDot1dItems();
        ~DbgDot1dItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf baseportdelayexceededdiscards; //type: uint64
        ydk::YLeaf baseportmtuexceededdiscards; //type: uint64
        ydk::YLeaf tpportinframes; //type: uint64
        ydk::YLeaf tpportoutframes; //type: uint64
        ydk::YLeaf portindiscards; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems


class System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems : public ydk::Entity
{
    public:
        DbgEtherStatsItems();
        ~DbgEtherStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropevents; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf undersizepkts; //type: uint64
        ydk::YLeaf giantpkts; //type: uint64
        ydk::YLeaf stormsupressedpkts; //type: uint64
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
        ydk::YLeaf pkts1519to1548octets; //type: uint64
        ydk::YLeaf rxpkts64octets; //type: uint64
        ydk::YLeaf txpkts64octets; //type: uint64
        ydk::YLeaf rxpkts65to127octets; //type: uint64
        ydk::YLeaf txpkts65to127octets; //type: uint64
        ydk::YLeaf rxpkts128to255octets; //type: uint64
        ydk::YLeaf txpkts128to255octets; //type: uint64
        ydk::YLeaf rxpkts256to511octets; //type: uint64
        ydk::YLeaf txpkts256to511octets; //type: uint64
        ydk::YLeaf rxpkts512to1023octets; //type: uint64
        ydk::YLeaf txpkts512to1023octets; //type: uint64
        ydk::YLeaf rxpkts1024to1518octets; //type: uint64
        ydk::YLeaf txpkts1024to1518octets; //type: uint64
        ydk::YLeaf rxpkts1519to1548octets; //type: uint64
        ydk::YLeaf txpkts1519to1548octets; //type: uint64
        ydk::YLeaf oversizepkts; //type: uint64
        ydk::YLeaf jabbers; //type: uint64
        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf pkts; //type: uint64
        ydk::YLeaf collisions; //type: uint64
        ydk::YLeaf crcalignerrors; //type: uint64
        ydk::YLeaf txnoerrors; //type: uint64
        ydk::YLeaf rxnoerrors; //type: uint64
        ydk::YLeaf rxoversizepkts; //type: uint64
        ydk::YLeaf txoversizepkts; //type: uint64
        ydk::YLeaf overrun; //type: uint64
        ydk::YLeaf underrun; //type: uint64
        ydk::YLeaf ignored; //type: uint64
        ydk::YLeaf watchdog; //type: uint64
        ydk::YLeaf ifdowndrop; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems


class System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems : public ydk::Entity
{
    public:
        DbgDot3StatsItems();
        ~DbgDot3StatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alignmenterrors; //type: uint64
        ydk::YLeaf fcserrors; //type: uint64
        ydk::YLeaf singlecollisionframes; //type: uint64
        ydk::YLeaf multiplecollisionframes; //type: uint64
        ydk::YLeaf sqettesterrors; //type: uint64
        ydk::YLeaf deferredtransmissions; //type: uint64
        ydk::YLeaf latecollisions; //type: uint64
        ydk::YLeaf excessivecollisions; //type: uint64
        ydk::YLeaf internalmactransmiterrors; //type: uint64
        ydk::YLeaf carriersenseerrors; //type: uint64
        ydk::YLeaf frametoolongs; //type: uint64
        ydk::YLeaf internalmacreceiveerrors; //type: uint64
        ydk::YLeaf symbolerrors; //type: uint64
        ydk::YLeaf controlinunknownopcodes; //type: uint64
        ydk::YLeaf inpauseframes; //type: uint64
        ydk::YLeaf outpauseframes; //type: uint64
        ydk::YLeaf lostcarriererrors; //type: uint64
        ydk::YLeaf nocarriererrors; //type: uint64
        ydk::YLeaf inputdribble; //type: uint64
        ydk::YLeaf babble; //type: uint64
        ydk::YLeaf runts; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems


class System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems : public ydk::Entity
{
    public:
        DbgIfHCInItems();
        ~DbgIfHCInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems


class System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems : public ydk::Entity
{
    public:
        DbgIfHCOutItems();
        ~DbgIfHCOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpckts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems


class System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems : public ydk::Entity
{
    public:
        DbgIpv6IfStatsItems();
        ~DbgIpv6IfStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inreceives; //type: uint64
        ydk::YLeaf inhdrerrors; //type: uint64
        ydk::YLeaf inaddrerrors; //type: uint64
        ydk::YLeaf indiscards; //type: uint64
        ydk::YLeaf outforwdatagrams; //type: uint64
        ydk::YLeaf outdiscards; //type: uint64
        ydk::YLeaf inmcastpkts; //type: uint64
        ydk::YLeaf outmcastpkts; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems


class System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems : public ydk::Entity
{
    public:
        DbgIfStormItems();
        ~DbgIfStormItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropbytes; //type: uint64

}; // System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems


class System::IntfItems::RtdItems : public ydk::Entity
{
    public:
        RtdItems();
        ~RtdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtdIfList; //type: System::IntfItems::RtdItems::RtdIfList

        ydk::YList rtdif_list;
        
}; // System::IntfItems::RtdItems


class System::IntfItems::RtdItems::RtdIfList : public ydk::Entity
{
    public:
        RtdIfList();
        ~RtdIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class RtpseudoIfItems; //type: System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems
        class RtvrfMbrItems; //type: System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems
        class RsphysRtdConfItems; //type: System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems> rsphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::RtdItems::RtdIfList


class System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems


class System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems


class System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems : public ydk::Entity
{
    public:
        RsphysRtdConfItems();
        ~RsphysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems


class System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems


class System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::LbItems : public ydk::Entity
{
    public:
        LbItems();
        ~LbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LbRtdIfList; //type: System::IntfItems::LbItems::LbRtdIfList

        ydk::YList lbrtdif_list;
        
}; // System::IntfItems::LbItems


class System::IntfItems::LbItems::LbRtdIfList : public ydk::Entity
{
    public:
        LbRtdIfList();
        ~LbRtdIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class VrfItems; //type: System::IntfItems::LbItems::LbRtdIfList::VrfItems
        class LbrtdifItems; //type: System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems
        class RtpseudoIfItems; //type: System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems
        class RtoperSourceInterfaceItems; //type: System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems
        class RtvrfMbrItems; //type: System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems
        class RsprotLbIfItems; //type: System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems
        class RslbIfToLocaleItems; //type: System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems
        class RslbIfToOutRefItems; //type: System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems
        class RtnwPathToIfItems; //type: System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems> lbrtdif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems> rtopersourceinterface_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems> rsprotlbif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems> rslbiftolocale_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems> rslbiftooutref_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::LbItems::LbRtdIfList


class System::IntfItems::LbItems::LbRtdIfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::LbItems::LbRtdIfList::VrfItems


class System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems : public ydk::Entity
{
    public:
        LbrtdifItems();
        ~LbrtdifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf operbitset; //type: string

}; // System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems


class System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems


class System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems : public ydk::Entity
{
    public:
        RtoperSourceInterfaceItems();
        ~RtoperSourceInterfaceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems


class System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems


class System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems : public ydk::Entity
{
    public:
        RsprotLbIfItems();
        ~RsprotLbIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf mode; //type: string

}; // System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems


class System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems : public ydk::Entity
{
    public:
        RslbIfToLocaleItems();
        ~RslbIfToLocaleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLbIfToLocaleList; //type: System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList

        ydk::YList rslbiftolocale_list;
        
}; // System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems


class System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList : public ydk::Entity
{
    public:
        RsLbIfToLocaleList();
        ~RsLbIfToLocaleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList


class System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems : public ydk::Entity
{
    public:
        RslbIfToOutRefItems();
        ~RslbIfToOutRefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLbIfToOutRefList; //type: System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList

        ydk::YList rslbiftooutref_list;
        
}; // System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems


class System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList : public ydk::Entity
{
    public:
        RsLbIfToOutRefList();
        ~RsLbIfToOutRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList


class System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems


class System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::EncrtdItems : public ydk::Entity
{
    public:
        EncrtdItems();
        ~EncrtdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EncRtdIfList; //type: System::IntfItems::EncrtdItems::EncRtdIfList

        ydk::YList encrtdif_list;
        
}; // System::IntfItems::EncrtdItems


class System::IntfItems::EncrtdItems::EncRtdIfList : public ydk::Entity
{
    public:
        EncRtdIfList();
        ~EncRtdIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mtuinherit; //type: boolean
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf encap; //type: string
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf linklogen; //type: L1LinkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf ifconndn; //type: string
        ydk::YLeaf mediumtype; //type: L1Medium
        ydk::YLeaf routermacipv6extract; //type: L1RouterMacIpv6Extract
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class VrfItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems
        class EncrtdifItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems
        class RtpseudoIfItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems
        class RtvrfMbrItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems
        class RsencPhysRtdConfItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems> encrtdif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems> rsencphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::EncrtdItems::EncRtdIfList


class System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems


class System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems : public ydk::Entity
{
    public:
        EncrtdifItems();
        ~EncrtdifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf operencap; //type: uint16
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf fsmstate; //type: uint8
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf operbitset; //type: string
        ydk::YLeaf sicfgflags; //type: uint32

}; // System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems


class System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems


class System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems


class System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems : public ydk::Entity
{
    public:
        RsencPhysRtdConfItems();
        ~RsencPhysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems


class System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems


class System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::SviItems : public ydk::Entity
{
    public:
        SviItems();
        ~SviItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::IntfItems::SviItems::IfList

        ydk::YList if_list;
        
}; // System::IntfItems::SviItems


class System::IntfItems::SviItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf mac; //type: string
        ydk::YLeaf medium; //type: SviMedium
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mtuinherit; //type: boolean
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf cardel; //type: uint32
        ydk::YLeaf loadintvl1; //type: uint32
        ydk::YLeaf loadintvl2; //type: uint32
        ydk::YLeaf loadintvl3; //type: uint32
        ydk::YLeaf inbmgmt; //type: boolean
        ydk::YLeaf autostate; //type: boolean
        ydk::YLeaf snmptrap; //type: boolean
        ydk::YLeaf operst; //type: SviOperSt
        ydk::YLeaf operstqual; //type: SviOperStQual
        ydk::YLeaf vlant; //type: L2DomType
        ydk::YLeaf ctrlrid; //type: string
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class VrfItems; //type: System::IntfItems::SviItems::IfList::VrfItems
        class MultisiteiftrackingItems; //type: System::IntfItems::SviItems::IfList::MultisiteiftrackingItems
        class SviItems_; //type: System::IntfItems::SviItems::IfList::SviItems_
        class RtpseudoIfItems; //type: System::IntfItems::SviItems::IfList::RtpseudoIfItems
        class RtvrfMbrItems; //type: System::IntfItems::SviItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::SviItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::MultisiteiftrackingItems> multisiteiftracking_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::SviItems_> svi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::SviItems::IfList


class System::IntfItems::SviItems::IfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::SviItems::IfList::VrfItems


class System::IntfItems::SviItems::IfList::MultisiteiftrackingItems : public ydk::Entity
{
    public:
        MultisiteiftrackingItems();
        ~MultisiteiftrackingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking; //type: NvoMultisiteTrackingT

}; // System::IntfItems::SviItems::IfList::MultisiteiftrackingItems


class System::IntfItems::SviItems::IfList::SviItems_ : public ydk::Entity
{
    public:
        SviItems_();
        ~SviItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operstqual; //type: SviOperStQual
        ydk::YLeaf opercarrierdelaysec; //type: uint32
        ydk::YLeaf opercarrierdelaymsec; //type: uint32
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf operbw; //type: uint32
        ydk::YLeaf operdelay; //type: uint32
        ydk::YLeaf operautostate; //type: boolean
        ydk::YLeaf opermac; //type: string
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf operloadintvl1; //type: uint32
        ydk::YLeaf operloadintvl2; //type: uint32
        ydk::YLeaf operloadintvl3; //type: uint32
        ydk::YLeaf operlastchgsec; //type: uint64
        ydk::YLeaf operlastchgusec; //type: uint64

}; // System::IntfItems::SviItems::IfList::SviItems_


class System::IntfItems::SviItems::IfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::SviItems::IfList::RtpseudoIfItems


class System::IntfItems::SviItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IntfItems::SviItems::IfList::RtvrfMbrItems


class System::IntfItems::SviItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::SviItems::IfList::RtnwPathToIfItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_32_ */

