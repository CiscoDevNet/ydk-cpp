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
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
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
        ydk::YLeaf activeports; //type: uint32
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
        ydk::YLeaf switchingst; //type: L1SwitchingSt
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
        class EeepItems; //type: System::IntfItems::AggrItems::AggrIfList::EeepItems
        class StormctrlpItems; //type: System::IntfItems::AggrItems::AggrIfList::StormctrlpItems
        class LoadpItems; //type: System::IntfItems::AggrItems::AggrIfList::LoadpItems
        class VrfItems; //type: System::IntfItems::AggrItems::AggrIfList::VrfItems
        class AggrifItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrifItems
        class AggrExtdItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems
        class VlanmappingItems; //type: System::IntfItems::AggrItems::AggrIfList::VlanmappingItems
        class ShadowaggrItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::EeepItems> eeep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::StormctrlpItems> stormctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::LoadpItems> loadp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrifItems> aggrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems> aggrextd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::VlanmappingItems> vlanmapping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems> shadowaggr_items;
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
        ydk::YLeaf operminlinks; //type: uint8
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operautoneg; //type: L1AutoNeg
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf ossum; //type: NwOSSum
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
        ydk::YLeaf lastclear; //type: string
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
        ydk::YLeaf autostateexcludevlans; //type: string
        ydk::YLeaf bundleindex; //type: string
        ydk::YLeaf opermdix; //type: L1Mdix
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf errdistimerrunning; //type: boolean
        ydk::YLeaf bundlebupid; //type: uint32
        ydk::YLeaf errvlanstatusht; //type: uint32
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
        ydk::YLeaf hwbdid; //type: uint32
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
        ydk::YLeaf bufferboost; //type: uint16

}; // System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems


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
        class ShadowaggrextdItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems
        class RtvrfMbrItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems> shadowaggrextd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems : public ydk::Entity
{
    public:
        ShadowaggrextdItems();
        ~ShadowaggrextdItems();

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
        class RtvrfMbrItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtvrfMbrItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtvrfMbrItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems


class System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::ShadowaggrextdItems::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf defaultdrop; //type: boolean
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


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems : public ydk::Entity
{
    public:
        ShadowaggrItems();
        ~ShadowaggrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf createst; //type: PcLastSt
        ydk::YLeaf isexplicit; //type: boolean
        ydk::YLeaf iscopydone; //type: boolean
        ydk::YLeaf numports; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
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
        class DomItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems
        class RtextConfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtextConfItems
        class RtbrConfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtbrConfItems
        class RtfvNodePortAttItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems
        class RtvrfMbrItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems
        class RtLsNodeToIfItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtLsNodeToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtLsNodeToIfItems> rtlsnodetoif_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems : public ydk::Entity
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

        class DomDefList; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList : public ydk::Entity
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
        ydk::YLeaf instrimedcy; //type: FvImmediacy__
        ydk::YLeaf resimedcy; //type: FvImmediacy__
        ydk::YLeaf mcastaddr; //type: string
        ydk::YLeaf updatets; //type: uint64
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RsdomDefNsLocalItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems : public ydk::Entity
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

        class RtFvToDomDefList; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList

        ydk::YList rtfvtodomdef_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtextConfItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtextConfItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtbrConfItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtbrConfItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems : public ydk::Entity
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

        class RtFvNodePortAttList; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems::RtFvNodePortAttList

        ydk::YList rtfvnodeportatt_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems::RtFvNodePortAttList : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtfvNodePortAttItems::RtFvNodePortAttList


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtvrfMbrItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtvrfMbrItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtphysRtdConfItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtphysRtdConfItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems : public ydk::Entity
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

        class RtL3EncPhysRtdConfList; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList

        ydk::YList rtl3encphysrtdconf_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtLsNodeToIfItems : public ydk::Entity
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

}; // System::IntfItems::AggrItems::AggrIfList::ShadowaggrItems::RtLsNodeToIfItems


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
        ydk::YLeaf instrimedcy; //type: FvImmediacy__
        ydk::YLeaf resimedcy; //type: FvImmediacy__
        ydk::YLeaf mcastaddr; //type: string
        ydk::YLeaf updatets; //type: uint64
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
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
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
        ydk::YLeaf lastlinkstchg; //type: string
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
        ydk::YLeaf hwbdid; //type: uint32

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
        ydk::YLeaf ossum; //type: NwOSSum
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
        ydk::YLeaf lastclear; //type: string
        ydk::YLeaf ossum; //type: NwOSSum
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operstqual; //type: SviOperStQual
        ydk::YLeaf operstqualcode; //type: uint32
        ydk::YLeaf opererrdisqual; //type: L1OperStQual_
        ydk::YLeaf opercarrierdelaysec; //type: uint32
        ydk::YLeaf opercarrierdelaymsec; //type: uint32
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf operbw; //type: uint32
        ydk::YLeaf operdelay; //type: uint32
        ydk::YLeaf operautostate; //type: boolean
        ydk::YLeaf opermac; //type: string
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf intft; //type: L1IntfT
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


class System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::TunnelifItems : public ydk::Entity
{
    public:
        TunnelifItems();
        ~TunnelifItems();

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

        class IfList; //type: System::IntfItems::TunnelifItems::IfList

        ydk::YList if_list;
        
}; // System::IntfItems::TunnelifItems


class System::IntfItems::TunnelifItems::IfList : public ydk::Entity
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
        ydk::YLeaf tunsrcaddr; //type: string
        ydk::YLeaf tunsrcintf; //type: string
        ydk::YLeaf tunsrcdirect; //type: TunnelifTunnelSrcDirect
        ydk::YLeaf tundestaddr; //type: string
        ydk::YLeaf tunmode; //type: TunnelifTunnelMode
        ydk::YLeaf tunvrf; //type: string
        ydk::YLeaf tunmtu; //type: uint32
        ydk::YLeaf tunpmtud; //type: TunnelifTunnelPMTUD
        ydk::YLeaf tunminpmtu; //type: uint32
        ydk::YLeaf tunpmtuage; //type: uint32
        ydk::YLeaf tunbw; //type: uint32
        ydk::YLeaf tunttl; //type: uint32
        ydk::YLeaf snmptrapst; //type: TunnelifSnmpTrapSt
        ydk::YLeaf tunoperst; //type: TunnelifTunnelOperSt
        ydk::YLeaf tunoperstqual; //type: TunnelifTunnelOperStQual
        ydk::YLeaf laststatechgdts; //type: string
        ydk::YLeaf tundelinprog; //type: boolean
        ydk::YLeaf tunintfoptions; //type: TunnelifTunnelOption
        ydk::YLeaf tuniod; //type: uint32
        ydk::YLeaf tunifindex; //type: uint32
        ydk::YLeaf tunifpmtu; //type: uint32
        ydk::YLeaf lastctrrstchgdts; //type: string
        ydk::YLeaf tunrxpackets; //type: uint64
        ydk::YLeaf tunrxbytes; //type: uint64
        ydk::YLeaf tuntxpackets; //type: uint64
        ydk::YLeaf tuntxbytes; //type: uint64
        ydk::YLeaf tunsrcip; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class VrfItems; //type: System::IntfItems::TunnelifItems::IfList::VrfItems
        class RtpseudoIfItems; //type: System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems
        class RtvrfMbrItems; //type: System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::TunnelifItems::IfList


class System::IntfItems::TunnelifItems::IfList::VrfItems : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::VrfItems


class System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems


class System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems


class System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems


class System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Ipv4Items : public ydk::Entity
{
    public:
        Ipv4Items();
        ~Ipv4Items();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::Ipv4Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems> inst_items;
        
}; // System::Ipv4Items


class System::Ipv4Items::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf sourceroute; //type: NwAdminSt_
        ydk::YLeaf accesslistmatchlocal; //type: NwAdminSt_
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf defaultlogginglevel; //type: ArpLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::Ipv4Items::InstItems::DomItems
        class ClientItems; //type: System::Ipv4Items::InstItems::ClientItems
        class IploadsharingItems; //type: System::Ipv4Items::InstItems::IploadsharingItems
        class LoadstatItems; //type: System::Ipv4Items::InstItems::LoadstatItems
        class IptrafficstatItems; //type: System::Ipv4Items::InstItems::IptrafficstatItems
        class IptrafficerrstatItems; //type: System::Ipv4Items::InstItems::IptrafficerrstatItems
        class IcmptrafficstatItems; //type: System::Ipv4Items::InstItems::IcmptrafficstatItems
        class Rfc4293trafficstatItems; //type: System::Ipv4Items::InstItems::Rfc4293trafficstatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IploadsharingItems> iploadsharing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::LoadstatItems> loadstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IptrafficstatItems> iptrafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IptrafficerrstatItems> iptrafficerrstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IcmptrafficstatItems> icmptrafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::Rfc4293trafficstatItems> rfc4293trafficstat_items;
        
}; // System::Ipv4Items::InstItems


class System::Ipv4Items::InstItems::DomItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DomList; //type: System::Ipv4Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Ipv4Items::InstItems::DomItems


class System::Ipv4Items::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf autodiscard; //type: NwAdminSt_
        ydk::YLeaf ipicmperrorssrcintf; //type: string
        ydk::YLeaf encap; //type: string
        class RtstaticbfdItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems
        class IfItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems
        class PstatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::PstatItems
        class RtItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems
        class RoutestatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems> rtstaticbfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::PstatItems> pstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems> routestat_items;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList


class System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems : public ydk::Entity
{
    public:
        RtstaticbfdItems();
        ~RtstaticbfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtStaticBfdList; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList

        ydk::YList rtstaticbfd_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList : public ydk::Entity
{
    public:
        RtStaticBfdList();
        ~RtStaticBfdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf nexthop; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf directedbroadcast; //type: DirectedBroadcast
        ydk::YLeaf acl; //type: string
        ydk::YLeaf forward; //type: NwAdminSt_
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf urpf; //type: IpUrpfT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf donorif; //type: string
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpUnnumberedOperStQual
        class AddrItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems
        class TrafficstatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems
        class StatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems
        class RpolItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems
        class RtvrfMbrItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems> trafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems> stat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems> rpol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
                class DirectedBroadcast;

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems : public ydk::Entity
{
    public:
        AddrItems();
        ~AddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrList; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList

        ydk::YList addr_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList : public ydk::Entity
{
    public:
        AddrList();
        ~AddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf seckey; //type: string
        ydk::YLeaf type; //type: IpAddrT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpAddrOperStQual

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems : public ydk::Entity
{
    public:
        TrafficstatItems();
        ~TrafficstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf upktsent; //type: uint64
        ydk::YLeaf upktrecv; //type: uint64
        ydk::YLeaf upktfwd; //type: uint64
        ydk::YLeaf upktorig; //type: uint64
        ydk::YLeaf upktconsumed; //type: uint64
        ydk::YLeaf ubytesent; //type: uint64
        ydk::YLeaf ubytercv; //type: uint64
        ydk::YLeaf ubytefwd; //type: uint64
        ydk::YLeaf ubyteorig; //type: uint64
        ydk::YLeaf ubyteconsumed; //type: uint64
        ydk::YLeaf mpktsent; //type: uint64
        ydk::YLeaf mpktrcv; //type: uint64
        ydk::YLeaf mpktfwd; //type: uint64
        ydk::YLeaf mpktorig; //type: uint64
        ydk::YLeaf mpktconsumed; //type: uint64
        ydk::YLeaf mbytesent; //type: uint64
        ydk::YLeaf mbytercv; //type: uint64
        ydk::YLeaf mbytefwd; //type: uint64
        ydk::YLeaf mbyteorig; //type: uint64
        ydk::YLeaf mbyteconsumed; //type: uint64
        ydk::YLeaf bpktsent; //type: uint64
        ydk::YLeaf bpktrcv; //type: uint64
        ydk::YLeaf bpktfwd; //type: uint64
        ydk::YLeaf bpktorig; //type: uint64
        ydk::YLeaf bpktconsumed; //type: uint64
        ydk::YLeaf bbytesent; //type: uint64
        ydk::YLeaf bbytercv; //type: uint64
        ydk::YLeaf bbytefwd; //type: uint64
        ydk::YLeaf bbyteorig; //type: uint64
        ydk::YLeaf bbyteconsumed; //type: uint64
        ydk::YLeaf lpktsent; //type: uint64
        ydk::YLeaf lpktrcv; //type: uint64
        ydk::YLeaf lpktfwd; //type: uint64
        ydk::YLeaf lpktorig; //type: uint64
        ydk::YLeaf lpktconsumed; //type: uint64
        ydk::YLeaf lbytesent; //type: uint64
        ydk::YLeaf lbytercv; //type: uint64
        ydk::YLeaf lbytefwd; //type: uint64
        ydk::YLeaf lbyteorig; //type: uint64
        ydk::YLeaf lbyteconsumed; //type: uint64

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems : public ydk::Entity
{
    public:
        StatItems();
        ~StatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iodvalue; //type: uint64
        ydk::YLeaf vrfnameout; //type: string
        ydk::YLeaf intfname; //type: string
        ydk::YLeaf protostate; //type: string
        ydk::YLeaf linkstate; //type: string
        ydk::YLeaf adminstate; //type: string
        ydk::YLeaf priaddr; //type: string
        ydk::YLeaf prisubnet; //type: string
        ydk::YLeaf primasklen; //type: uint8
        ydk::YLeaf priroutepref; //type: uint8
        ydk::YLeaf pritag; //type: uint32
        ydk::YLeaf secaddr; //type: string
        ydk::YLeaf secaddrsubnet; //type: string
        ydk::YLeaf secaddrmasklen; //type: string
        ydk::YLeaf secaddrroutepref; //type: string
        ydk::YLeaf secaddrtag; //type: string
        ydk::YLeaf numaddr; //type: uint32
        ydk::YLeaf vaddrclient; //type: string
        ydk::YLeaf vaddrprefix; //type: string
        ydk::YLeaf vaddrsubnet; //type: string
        ydk::YLeaf vaddrmasklen; //type: string
        ydk::YLeaf numvaddr; //type: uint64
        ydk::YLeaf unnumintf; //type: string
        ydk::YLeaf firstiod; //type: uint64
        ydk::YLeaf unnumchildintf; //type: string
        ydk::YLeaf ipdisabled; //type: string
        ydk::YLeaf bcastaddr; //type: string
        ydk::YLeaf maddr; //type: string
        ydk::YLeaf nummaddr; //type: uint32
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf proxyarp; //type: NwAdminStIfStatProxyArp
        ydk::YLeaf localproxyarp; //type: NwAdminStIfStatLocalProxyArp
        ydk::YLeaf mrouting; //type: NwAdminStIfStatMRouting
        ydk::YLeaf icmpredirect; //type: NwAdminStIfStatIcmpRedirect
        ydk::YLeaf directbcast; //type: NwAdminStIfStatDirectBcast
        ydk::YLeaf ipunreach; //type: NwAdminStIfStatIpUnreach
        ydk::YLeaf portunreach; //type: NwAdminStIfStatPortUnreach
        ydk::YLeaf urpfmode; //type: string
        ydk::YLeaf iploadsharing; //type: string
        ydk::YLeaf aclin; //type: string
        ydk::YLeaf aclout; //type: string
        ydk::YLeaf statslastreset; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems : public ydk::Entity
{
    public:
        RpolItems();
        ~RpolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rmapname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems

class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_NX_OS_DEVICE_32_ */

