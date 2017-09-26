#ifndef _CISCO_IOS_XE_NATIVE_177_
#define _CISCO_IOS_XE_NATIVE_177_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_176.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

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

        ydk::YLeaf up; //type: empty
        ydk::YLeaf down; //type: empty
        ydk::YLeaf reroute; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp : public ydk::Entity
{
    public:
        Nhrp();
        ~Nhrp();

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

        class Nhs; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs
        class Nhc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc
        class Nhp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp
        class QuotaExceeded; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc> nhc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp> nhp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs> nhs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded> quota_exceeded; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc : public ydk::Entity
{
    public:
        Nhc();
        ~Nhc();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp : public ydk::Entity
{
    public:
        Nhp();
        ~Nhp();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded : public ydk::Entity
{
    public:
        QuotaExceeded();
        ~QuotaExceeded();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa
        class CiscoSpecific; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific> cisco_specific; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors> errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa> lsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific : public ydk::Entity
{
    public:
        CiscoSpecific();
        ~CiscoSpecific();

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

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable> errdisable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors> errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa> lsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

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

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

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

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

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

        ydk::YLeaf nssa_trans_change; //type: empty
        class Shamlink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink> shamlink; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink : public ydk::Entity
{
    public:
        Shamlink();
        ~Shamlink();

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

        ydk::YLeaf interface; //type: empty
        ydk::YLeaf interface_old; //type: empty
        ydk::YLeaf neighbor; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

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

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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

        ydk::YLeaf packets; //type: empty
        ydk::YLeaf virt_packets; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

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

        ydk::YLeaf if_state_change; //type: empty
        ydk::YLeaf neighbor_state_change; //type: empty
        ydk::YLeaf virtif_state_change; //type: empty
        ydk::YLeaf virtneighbor_state_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        ydk::YLeaf state_change; //type: empty
        ydk::YLeaf errors; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3


class Native::SnmpServer::Enable::EnableChoice::Traps::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

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

        ydk::YLeaf invalid_pim_message; //type: empty
        ydk::YLeaf neighbor_change; //type: empty
        ydk::YLeaf rp_mapping_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pim


class Native::SnmpServer::Enable::EnableChoice::Traps::Plogd : public ydk::Entity
{
    public:
        Plogd();
        ~Plogd();

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


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Plogd


class Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

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

        ydk::YLeaf trap_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity


class Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet : public ydk::Entity
{
    public:
        PowerEthernet();
        ~PowerEthernet();

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

        ydk::YLeaf group; //type: string
        ydk::YLeaf police; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

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

        ydk::YLeaf vc; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pw


class Native::SnmpServer::Enable::EnableChoice::Traps::Slb : public ydk::Entity
{
    public:
        Slb();
        ~Slb();

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

        ydk::YLeaf csrp; //type: empty
        ydk::YLeaf real; //type: empty
        ydk::YLeaf virtual_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Slb


class Native::SnmpServer::Enable::EnableChoice::Traps::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

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

        ydk::YLeaf authentication; //type: empty
        ydk::YLeaf coldstart; //type: empty
        ydk::YLeaf linkdown; //type: empty
        ydk::YLeaf linkup; //type: empty
        ydk::YLeaf warmstart; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Snmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise : public ydk::Entity
{
    public:
        Stackwise();
        ~Stackwise();

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

        ydk::YLeaf gls; //type: empty
        ydk::YLeaf ils; //type: empty
        ydk::YLeaf srls; //type: empty
        ydk::YLeaf insufficient_power; //type: empty
        ydk::YLeaf invalid_input_current; //type: empty
        ydk::YLeaf invalid_output_current; //type: empty
        ydk::YLeaf member_removed; //type: empty
        ydk::YLeaf member_upgrade_notification; //type: empty
        ydk::YLeaf new_master; //type: empty
        ydk::YLeaf new_member; //type: empty
        ydk::YLeaf port_change; //type: empty
        ydk::YLeaf power_budget_warning; //type: empty
        ydk::YLeaf power_invalid_topology; //type: empty
        ydk::YLeaf power_link_status_changed; //type: empty
        ydk::YLeaf power_oper_status_changed; //type: empty
        ydk::YLeaf power_priority_conflict; //type: empty
        ydk::YLeaf power_version_mismatch; //type: empty
        ydk::YLeaf ring_redundant; //type: empty
        ydk::YLeaf stack_mismatch; //type: empty
        ydk::YLeaf unbalanced_power_supplies; //type: empty
        ydk::YLeaf under_budget; //type: empty
        ydk::YLeaf under_voltage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise


class Native::SnmpServer::Enable::EnableChoice::Traps::Stpx : public ydk::Entity
{
    public:
        Stpx();
        ~Stpx();

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

        ydk::YLeaf inconsistency; //type: empty
        ydk::YLeaf root_inconsistency; //type: empty
        ydk::YLeaf loop_inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stpx


class Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

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

        ydk::YLeaf all; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec : public ydk::Entity
{
    public:
        Trustsec();
        ~Trustsec();

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

        class AuthzFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError> authz_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError : public ydk::Entity
{
    public:
        AuthzFileError();
        ~AuthzFileError();

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

        class CacheFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError> cache_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError : public ydk::Entity
{
    public:
        CacheFileError();
        ~CacheFileError();

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

        class KeystoreFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError> keystore_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError : public ydk::Entity
{
    public:
        KeystoreFileError();
        ~KeystoreFileError();

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

        class KeystoreSyncFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail> keystore_sync_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail : public ydk::Entity
{
    public:
        KeystoreSyncFail();
        ~KeystoreSyncFail();

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

        class RandomNumberFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail> random_number_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail : public ydk::Entity
{
    public:
        RandomNumberFail();
        ~RandomNumberFail();

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

        ydk::YLeaf src_entropy_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface : public ydk::Entity
{
    public:
        TrustsecInterface();
        ~TrustsecInterface();

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

        class Unauthorized; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized> unauthorized; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized : public ydk::Entity
{
    public:
        Unauthorized();
        ~Unauthorized();

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

        class SapFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail> sap_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail : public ydk::Entity
{
    public:
        SapFail();
        ~SapFail();

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

        class AuthcFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail> authc_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail : public ydk::Entity
{
    public:
        AuthcFail();
        ~AuthcFail();

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

        class SupplicantFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail> supplicant_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail : public ydk::Entity
{
    public:
        SupplicantFail();
        ~SupplicantFail();

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

        ydk::YLeaf authz_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy : public ydk::Entity
{
    public:
        TrustsecPolicy();
        ~TrustsecPolicy();

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

        class PeerPolicyUpdated; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated> peer_policy_updated; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated : public ydk::Entity
{
    public:
        PeerPolicyUpdated();
        ~PeerPolicyUpdated();

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

        ydk::YLeaf authz_sgacl_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer : public ydk::Entity
{
    public:
        TrustsecServer();
        ~TrustsecServer();

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

        class RadiusServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer> radius_server; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

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

        ydk::YLeaf provision_secret; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp : public ydk::Entity
{
    public:
        TrustsecSxp();
        ~TrustsecSxp();

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

        ydk::YLeaf binding_conflict; //type: empty
        ydk::YLeaf binding_err; //type: empty
        ydk::YLeaf binding_expn_fail; //type: empty
        ydk::YLeaf conn_config_err; //type: empty
        ydk::YLeaf conn_down; //type: empty
        ydk::YLeaf conn_srcaddr_err; //type: empty
        ydk::YLeaf conn_up; //type: empty
        ydk::YLeaf msg_parse_err; //type: empty
        ydk::YLeaf oper_nodeid_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp


class Native::SnmpServer::Enable::EnableChoice::Traps::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

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

        ydk::YLeaf link_fail_rpt; //type: empty
        ydk::YLeaf status_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Udld


class Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib : public ydk::Entity
{
    public:
        Vrfmib();
        ~Vrfmib();

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

        ydk::YLeaf vrf_up; //type: empty
        ydk::YLeaf vrf_down; //type: empty
        ydk::YLeaf vnet_trunk_up; //type: empty
        ydk::YLeaf vnet_trunk_down; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib


class Native::SnmpServer::Enable::EnableChoice::Traps::Vstack : public ydk::Entity
{
    public:
        Vstack();
        ~Vstack();

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

        ydk::YLeaf addition; //type: empty
        ydk::YLeaf failure; //type: empty
        ydk::YLeaf lost; //type: empty
        ydk::YLeaf operation_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vstack


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch : public ydk::Entity
{
    public:
        Vswitch();
        ~Vswitch();

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

        class DualActive; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive> dual_active; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

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

        ydk::YLeaf vsl; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless : public ydk::Entity
{
    public:
        Wireless();
        ~Wireless();

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

        class Bsnmobilestation; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation> bsnmobilestation; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation : public ydk::Entity
{
    public:
        Bsnmobilestation();
        ~Bsnmobilestation();

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

        class Bsnaccesspoint; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint> bsnaccesspoint; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint : public ydk::Entity
{
    public:
        Bsnaccesspoint();
        ~Bsnaccesspoint();

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

        ydk::YLeaf bsnrogue; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint


class Native::SnmpServer::Engineid : public ydk::Entity
{
    public:
        Engineid();
        ~Engineid();

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

        ydk::YLeaf local; //type: string
        class Remote; //type: Native::SnmpServer::Engineid::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Engineid::Remote> remote;
        
}; // Native::SnmpServer::Engineid


class Native::SnmpServer::Engineid::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

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


}; // Native::SnmpServer::Engineid::Remote


class Native::SnmpServer::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        class V1; //type: Native::SnmpServer::Group::V1
        class V2C; //type: Native::SnmpServer::Group::V2C
        class V3; //type: Native::SnmpServer::Group::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V1> v1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V2C> v2c;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V3> v3;
        
}; // Native::SnmpServer::Group


class Native::SnmpServer::Group::V1 : public ydk::Entity
{
    public:
        V1();
        ~V1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V1


class Native::SnmpServer::Group::V2C : public ydk::Entity
{
    public:
        V2C();
        ~V2C();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V2C


class Native::SnmpServer::Group::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_level; //type: SecurityLevel
        ydk::YLeaf context; //type: string
        ydk::YLeaf match; //type: Match
        ydk::YLeaf read; //type: string
        ydk::YLeaf write; //type: string
        ydk::YLeaf notify; //type: string
        ydk::YLeaf access; //type: one of string, uint8
        class SecurityLevel;
        class Match;

}; // Native::SnmpServer::Group::V3


class Native::SnmpServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf ip_address; //type: one of string, union
        ydk::YLeaf community_string; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf informs; //type: empty
        ydk::YLeaf traps; //type: empty
        ydk::YLeaf version; //type: Version
        ydk::YLeaf security_level; //type: SecurityLevel
        class TrapEnable; //type: Native::SnmpServer::Host::TrapEnable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Host::TrapEnable> trap_enable;
                class Version;
        class SecurityLevel;

}; // Native::SnmpServer::Host


class Native::SnmpServer::Host::TrapEnable : public ydk::Entity
{
    public:
        TrapEnable();
        ~TrapEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf alarms; //type: empty
        ydk::YLeaf atm; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf bulkstat; //type: empty
        ydk::YLeaf call_home; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf cef; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf dsp; //type: empty
        ydk::YLeaf dspu; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf entity_diag; //type: empty
        ydk::YLeaf entity_qfp; //type: empty
        ydk::YLeaf entity_state; //type: empty
        ydk::YLeaf ethernet_cfm; //type: empty
        ydk::YLeaf evc; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf firewall; //type: empty
        ydk::YLeaf flash; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf frame_relay; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf iplocalpool; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsec; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isakmp; //type: empty
        ydk::YLeaf isg_mib; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf l2tun_pseudowire_status; //type: empty
        ydk::YLeaf l2tun_session; //type: empty
        ydk::YLeaf license; //type: empty
        ydk::YLeaf memory; //type: empty
        ydk::YLeaf mpls_fast_reroute; //type: empty
        ydk::YLeaf mpls_ldp; //type: empty
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf mpls_vpn; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf nhrp; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf ospfv3; //type: empty
        ydk::YLeaf pfr; //type: empty
        ydk::YLeaf pim; //type: empty
        ydk::YLeaf pw_vc; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rsrb; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf sdlc; //type: empty
        ydk::YLeaf sdllc; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf trustsec_sxp; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf udp_port; //type: uint16
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrfmib; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf x25; //type: empty

}; // Native::SnmpServer::Host::TrapEnable


class Native::SnmpServer::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

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

        ydk::YLeaf persist; //type: empty

}; // Native::SnmpServer::Ifindex


class Native::SnmpServer::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf precedence; //type: uint8

}; // Native::SnmpServer::Ip


class Native::SnmpServer::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

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

        ydk::YLeaf session_timeout; //type: uint32

}; // Native::SnmpServer::Manager


class Native::SnmpServer::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        class Informs; //type: Native::SnmpServer::SourceInterface::Informs
        class Traps; //type: Native::SnmpServer::SourceInterface::Traps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs> informs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps> traps;
        
}; // Native::SnmpServer::SourceInterface


class Native::SnmpServer::SourceInterface::Informs : public ydk::Entity
{
    public:
        Informs();
        ~Informs();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Informs


class Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Informs::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMSubinterface


class Native::SnmpServer::SourceInterface::Informs::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::LISPSubinterface


class Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface


class Native::SnmpServer::SourceInterface::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Traps


class Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Traps::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMSubinterface


class Native::SnmpServer::SourceInterface::Traps::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::LISPSubinterface


class Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface


class Native::SnmpServer::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

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

        ydk::YLeaf timeout; //type: uint16
        class Link; //type: Native::SnmpServer::Trap::Link

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Trap::Link> link;
        
}; // Native::SnmpServer::Trap


class Native::SnmpServer::Trap::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

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

        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf switchover; //type: empty

}; // Native::SnmpServer::Trap::Link


class Native::SnmpServer::TrapSource : public ydk::Entity
{
    public:
        TrapSource();
        ~TrapSource();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::TrapSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::TrapSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::TrapSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::TrapSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::TrapSource


class Native::SnmpServer::TrapSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::TrapSource::ATMACRsubinterface


class Native::SnmpServer::TrapSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::TrapSource::ATMSubinterface


class Native::SnmpServer::TrapSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::TrapSource::LISPSubinterface


class Native::SnmpServer::TrapSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::TrapSource::PortChannelSubinterface


class Native::SnmpServer::User : public ydk::Entity
{
    public:
        User();
        ~User();

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

        class Names; //type: Native::SnmpServer::User::Names

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names> > names;
        
}; // Native::SnmpServer::User


class Native::SnmpServer::User::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf grpname; //type: string
        class V3; //type: Native::SnmpServer::User::Names::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3> v3; // presence node
        
}; // Native::SnmpServer::User::Names


class Native::SnmpServer::User::Names::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth; //type: Native::SnmpServer::User::Names::V3::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth> auth;
        
}; // Native::SnmpServer::User::Names::V3


class Native::SnmpServer::User::Names::V3::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sha; //type: Native::SnmpServer::User::Names::V3::Auth::Sha

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha> sha;
        
}; // Native::SnmpServer::User::Names::V3::Auth


class Native::SnmpServer::User::Names::V3::Auth::Sha : public ydk::Entity
{
    public:
        Sha();
        ~Sha();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth_; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_> auth;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_ : public ydk::Entity
{
    public:
        Auth_();
        ~Auth_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authpass; //type: string
        class Priv; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv> priv;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv : public ydk::Entity
{
    public:
        Priv();
        ~Priv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aes; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes> aes;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes : public ydk::Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Algo128; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128> algo128;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128 : public ydk::Entity
{
    public:
        Algo128();
        ~Algo128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Privpass; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass> privpass;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass : public ydk::Entity
{
    public:
        Privpass();
        ~Privpass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privpass; //type: string
        ydk::YLeaf access; //type: string

}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass


class Native::SnmpServer::View : public ydk::Entity
{
    public:
        View();
        ~View();

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
        ydk::YLeaf mib; //type: string
        ydk::YLeaf inc_exl; //type: IncExl
        class IncExl;

}; // Native::SnmpServer::View


class Native::Software : public ydk::Entity
{
    public:
        Software();
        ~Software();

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

        class AutoUpgrade; //type: Native::Software::AutoUpgrade

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Software::AutoUpgrade> auto_upgrade;
        
}; // Native::Software


class Native::Software::AutoUpgrade : public ydk::Entity
{
    public:
        AutoUpgrade();
        ~AutoUpgrade();

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

        ydk::YLeaf enable; //type: empty

}; // Native::Software::AutoUpgrade


class Native::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

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

        ydk::YLeaf backbonefast; //type: empty
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf mode; //type: Mode
        class Bridge; //type: Native::SpanningTree::Bridge
        class Etherchannel; //type: Native::SpanningTree::Etherchannel
        class Extend; //type: Native::SpanningTree::Extend
        class Loopguard; //type: Native::SpanningTree::Loopguard
        class Mst; //type: Native::SpanningTree::Mst
        class Optimize; //type: Native::SpanningTree::Optimize
        class Pathcost; //type: Native::SpanningTree::Pathcost
        class Portfast; //type: Native::SpanningTree::Portfast
        class Transmit; //type: Native::SpanningTree::Transmit
        class Uplinkfast; //type: Native::SpanningTree::Uplinkfast
        class Vlan; //type: Native::SpanningTree::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Bridge> bridge;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel> etherchannel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Extend> extend;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst> mst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Pathcost> pathcost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Portfast> portfast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Transmit> transmit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Uplinkfast> uplinkfast; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan> > vlan;
                class Mode;

}; // Native::SpanningTree


class Native::SpanningTree::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf id; //type: string

}; // Native::SpanningTree::Bridge


class Native::SpanningTree::Etherchannel : public ydk::Entity
{
    public:
        Etherchannel();
        ~Etherchannel();

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

        class Guard; //type: Native::SpanningTree::Etherchannel::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Etherchannel::Guard> guard;
        
}; // Native::SpanningTree::Etherchannel


class Native::SpanningTree::Etherchannel::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

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

        ydk::YLeaf misconfig; //type: empty

}; // Native::SpanningTree::Etherchannel::Guard


class Native::SpanningTree::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

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

        ydk::YLeaf system_id; //type: empty

}; // Native::SpanningTree::Extend


class Native::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

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

        ydk::YLeaf default_; //type: empty

}; // Native::SpanningTree::Loopguard


class Native::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

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

        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf max_hops; //type: uint8
        class InstanceRange; //type: Native::SpanningTree::Mst::InstanceRange
        class Configuration; //type: Native::SpanningTree::Mst::Configuration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration> configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::InstanceRange> > instance_range;
        
}; // Native::SpanningTree::Mst


class Native::SpanningTree::Mst::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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
        ydk::YLeaf revision; //type: uint16
        class Instance; //type: Native::SpanningTree::Mst::Configuration::Instance
        class PrivateVlan; //type: Native::SpanningTree::Mst::Configuration::PrivateVlan

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::Instance> > instance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Mst::Configuration::PrivateVlan> private_vlan;
        
}; // Native::SpanningTree::Mst::Configuration


class Native::SpanningTree::Mst::Configuration::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf id; //type: uint16
        ydk::YLeafList vlan; //type: list of  one of string, uint16

}; // Native::SpanningTree::Mst::Configuration::Instance


class Native::SpanningTree::Mst::Configuration::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

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

        ydk::YLeaf synchronize; //type: empty

}; // Native::SpanningTree::Mst::Configuration::PrivateVlan


class Native::SpanningTree::Mst::InstanceRange : public ydk::Entity
{
    public:
        InstanceRange();
        ~InstanceRange();

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

        ydk::YLeaf id; //type: one of string, uint16
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf root; //type: Root
        class Root;

}; // Native::SpanningTree::Mst::InstanceRange


class Native::SpanningTree::Optimize : public ydk::Entity
{
    public:
        Optimize();
        ~Optimize();

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

        class Bpdu; //type: Native::SpanningTree::Optimize::Bpdu

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Optimize::Bpdu> bpdu;
        
}; // Native::SpanningTree::Optimize


class Native::SpanningTree::Optimize::Bpdu : public ydk::Entity
{
    public:
        Bpdu();
        ~Bpdu();

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

        ydk::YLeaf transmission; //type: boolean

}; // Native::SpanningTree::Optimize::Bpdu


class Native::SpanningTree::Pathcost : public ydk::Entity
{
    public:
        Pathcost();
        ~Pathcost();

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

        class Method; //type: Native::SpanningTree::Pathcost::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Pathcost::Method> method;
        
}; // Native::SpanningTree::Pathcost


class Native::SpanningTree::Pathcost::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf short_; //type: empty

}; // Native::SpanningTree::Pathcost::Method


class Native::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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

        ydk::YLeaf bdpu; //type: Bdpu
        ydk::YLeaf default_; //type: empty
        class Bdpu;

}; // Native::SpanningTree::Portfast


class Native::SpanningTree::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

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

        ydk::YLeaf hold_count; //type: uint8

}; // Native::SpanningTree::Transmit


class Native::SpanningTree::Uplinkfast : public ydk::Entity
{
    public:
        Uplinkfast();
        ~Uplinkfast();

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

        ydk::YLeaf max_update_rate; //type: uint32

}; // Native::SpanningTree::Uplinkfast


class Native::SpanningTree::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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
        ydk::YLeaf max_age; //type: uint8
        ydk::YLeaf forward_time; //type: uint8
        ydk::YLeaf hello_time; //type: uint8
        ydk::YLeaf priority; //type: uint16
        class Root; //type: Native::SpanningTree::Vlan::Root

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root> root;
        
}; // Native::SpanningTree::Vlan


class Native::SpanningTree::Vlan::Root : public ydk::Entity
{
    public:
        Root();
        ~Root();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Primary; //type: Native::SpanningTree::Vlan::Root::Primary
        class Secondary; //type: Native::SpanningTree::Vlan::Root::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SpanningTree::Vlan::Root::Secondary> secondary;
        
}; // Native::SpanningTree::Vlan::Root


class Native::SpanningTree::Vlan::Root::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Primary


class Native::SpanningTree::Vlan::Root::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hello_time; //type: uint8

}; // Native::SpanningTree::Vlan::Root::Secondary


class Native::StackMac : public ydk::Entity
{
    public:
        StackMac();
        ~StackMac();

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

        class Persistent; //type: Native::StackMac::Persistent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::StackMac::Persistent> persistent;
        
}; // Native::StackMac


class Native::StackMac::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

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

        ydk::YLeaf timer; //type: uint8

}; // Native::StackMac::Persistent


class Native::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

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

        ydk::YLeaf templating; //type: empty

}; // Native::Subscriber


class Native::SwitchVirtual : public ydk::Entity
{
    public:
        SwitchVirtual();
        ~SwitchVirtual();

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

        ydk::YLeaf domain; //type: uint32
        ydk::YLeaf virtual_; //type: empty
        class Switch_; //type: Native::SwitchVirtual::Switch_
        class MacAddress; //type: Native::SwitchVirtual::MacAddress
        class DualActive; //type: Native::SwitchVirtual::DualActive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::Switch_> switch_;
        
}; // Native::SwitchVirtual


class Native::SwitchVirtual::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Recovery; //type: Native::SwitchVirtual::DualActive::Recovery
        class Detection; //type: Native::SwitchVirtual::DualActive::Detection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection> detection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery> recovery;
        
}; // Native::SwitchVirtual::DualActive


class Native::SwitchVirtual::DualActive::Detection : public ydk::Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pagp; //type: Native::SwitchVirtual::DualActive::Detection::Pagp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp> pagp; // presence node
        
}; // Native::SwitchVirtual::DualActive::Detection


class Native::SwitchVirtual::DualActive::Detection::Pagp : public ydk::Entity
{
    public:
        Pagp();
        ~Pagp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::SwitchVirtual::DualActive::Detection::Pagp::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Detection::Pagp::Trust> trust;
        
}; // Native::SwitchVirtual::DualActive::Detection::Pagp


class Native::SwitchVirtual::DualActive::Detection::Pagp::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channel_group; //type: uint8

}; // Native::SwitchVirtual::DualActive::Detection::Pagp::Trust


class Native::SwitchVirtual::DualActive::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: uint8
        class Ip; //type: Native::SwitchVirtual::DualActive::Recovery::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SwitchVirtual::DualActive::Recovery::Ip> ip;
        
}; // Native::SwitchVirtual::DualActive::Recovery


class Native::SwitchVirtual::DualActive::Recovery::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::SwitchVirtual::DualActive::Recovery::Ip


class Native::SwitchVirtual::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_virtual; //type: empty

}; // Native::SwitchVirtual::MacAddress


class Native::SwitchVirtual::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_number; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::SwitchVirtual::Switch_


class Native::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf provision; //type: Provision
        class Provision;

}; // Native::Switch_


class Native::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        class Debug; //type: Native::System::Debug
        class Disable; //type: Native::System::Disable
        class Environment; //type: Native::System::Environment
        class Fnf; //type: Native::System::Fnf
        class Ignore; //type: Native::System::Ignore
        class ModeButton; //type: Native::System::ModeButton
        class Mtu; //type: Native::System::Mtu
        class Mode; //type: Native::System::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Debug> debug;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Environment> environment;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Fnf> fnf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Ignore> ignore;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::ModeButton> mode_button;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Mtu> mtu;
        
}; // Native::System


class Native::System::Debug : public ydk::Entity
{
    public:
        Debug();
        ~Debug();

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

        class Shell; //type: Native::System::Debug::Shell

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Debug::Shell> shell;
        
}; // Native::System::Debug


class Native::System::Debug::Shell : public ydk::Entity
{
    public:
        Shell();
        ~Shell();

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

        class Switch_; //type: Native::System::Debug::Shell::Switch_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Debug::Shell::Switch_> switch_;
        
}; // Native::System::Debug::Shell


class Native::System::Debug::Shell::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        ydk::YLeaf switch_number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Debug::Shell::Switch_


class Native::System::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

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

        class Password; //type: Native::System::Disable::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Disable::Password> password;
        
}; // Native::System::Disable


class Native::System::Disable::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        class Recovery; //type: Native::System::Disable::Password::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery> recovery;
        
}; // Native::System::Disable::Password


class Native::System::Disable::Password::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

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

        class Switch_; //type: Native::System::Disable::Password::Recovery::Switch_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Disable::Password::Recovery::Switch_> switch_;
        
}; // Native::System::Disable::Password::Recovery


class Native::System::Disable::Password::Recovery::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Disable::Password::Recovery::Switch_


class Native::System::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

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

        class FanFailAction; //type: Native::System::Environment::FanFailAction
        class Temperature; //type: Native::System::Environment::Temperature

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Environment::FanFailAction> fan_fail_action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Environment::Temperature> temperature;
        
}; // Native::System::Environment


class Native::System::Environment::FanFailAction : public ydk::Entity
{
    public:
        FanFailAction();
        ~FanFailAction();

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

        ydk::YLeaf shut; //type: empty

}; // Native::System::Environment::FanFailAction


class Native::System::Environment::Temperature : public ydk::Entity
{
    public:
        Temperature();
        ~Temperature();

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

        class Threshold; //type: Native::System::Environment::Temperature::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold> threshold;
        
}; // Native::System::Environment::Temperature


class Native::System::Environment::Temperature::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Yellow; //type: Native::System::Environment::Temperature::Threshold::Yellow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Environment::Temperature::Threshold::Yellow> yellow;
        
}; // Native::System::Environment::Temperature::Threshold


class Native::System::Environment::Temperature::Threshold::Yellow : public ydk::Entity
{
    public:
        Yellow();
        ~Yellow();

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

        ydk::YLeaf delta_value; //type: uint8
        ydk::YLeaf detail; //type: empty

}; // Native::System::Environment::Temperature::Threshold::Yellow


class Native::System::Fnf : public ydk::Entity
{
    public:
        Fnf();
        ~Fnf();

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

        class BytesCount; //type: Native::System::Fnf::BytesCount

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Fnf::BytesCount> bytes_count;
        
}; // Native::System::Fnf


class Native::System::Fnf::BytesCount : public ydk::Entity
{
    public:
        BytesCount();
        ~BytesCount();

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

        ydk::YLeaf layer2; //type: empty

}; // Native::System::Fnf::BytesCount


class Native::System::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        class Startupconfig; //type: Native::System::Ignore::Startupconfig

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig> startupconfig;
        
}; // Native::System::Ignore


class Native::System::Ignore::Startupconfig : public ydk::Entity
{
    public:
        Startupconfig();
        ~Startupconfig();

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

        class Switch_; //type: Native::System::Ignore::Startupconfig::Switch_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Ignore::Startupconfig::Switch_> switch_;
        
}; // Native::System::Ignore::Startupconfig


class Native::System::Ignore::Startupconfig::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf all; //type: empty

}; // Native::System::Ignore::Startupconfig::Switch_


class Native::System::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

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

        class Maintenance; //type: Native::System::Mode::Maintenance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Mode::Maintenance> maintenance; // presence node
        
}; // Native::System::Mode


class Native::System::Mode::Maintenance : public ydk::Entity
{
    public:
        Maintenance();
        ~Maintenance();

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

        class ConfigMaintenance; //type: Native::System::Mode::Maintenance::ConfigMaintenance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::System::Mode::Maintenance::ConfigMaintenance> config_maintenance;
        
}; // Native::System::Mode::Maintenance

class Native::SnmpServer::Group::V3::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::Group::V3::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf prefix;

};

class Native::SnmpServer::Host::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2c;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::SnmpServer::Host::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::View::IncExl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf excluded;
        static const ydk::Enum::YLeaf included;

};

class Native::SpanningTree::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf pvst;
        static const ydk::Enum::YLeaf rapid_pvst;

};

class Native::SpanningTree::Mst::InstanceRange::Root : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class Native::SpanningTree::Portfast::Bdpu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bpdufilter;
        static const ydk::Enum::YLeaf bpduguard;

};

class Native::SwitchVirtual::Switch_::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf virtual_;

};

class Native::Switch_::Provision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ws_c2960x_24pd_l;
        static const ydk::Enum::YLeaf ws_c3650_48ps;
        static const ydk::Enum::YLeaf ws_c3650_24ps;
        static const ydk::Enum::YLeaf ws_c3850_48p;
        static const ydk::Enum::YLeaf ws_c3850_24p;
        static const ydk::Enum::YLeaf ws_c3850_48t;
        static const ydk::Enum::YLeaf ws_c3850_24t;
        static const ydk::Enum::YLeaf ws_c3850_48f;
        static const ydk::Enum::YLeaf ws_c3850_48u;
        static const ydk::Enum::YLeaf ws_c3850_24u;
        static const ydk::Enum::YLeaf ws_c3850_12x48u;
        static const ydk::Enum::YLeaf ws_c3850_24xu;
        static const ydk::Enum::YLeaf ws_c3850_24ux;
        static const ydk::Enum::YLeaf ws_c3850_12s;
        static const ydk::Enum::YLeaf ws_c3850_24s;
        static const ydk::Enum::YLeaf ws_c3850_12xs;
        static const ydk::Enum::YLeaf ws_c3850_24xs;
        static const ydk::Enum::YLeaf ws_c3850_48xs;
        static const ydk::Enum::YLeaf ws_c3650_12x48fd;
        static const ydk::Enum::YLeaf ws_c3650_12x48uq;
        static const ydk::Enum::YLeaf ws_c3650_12x48ur;
        static const ydk::Enum::YLeaf ws_c3650_12x48uz;
        static const ydk::Enum::YLeaf ws_c3650_24pd;
        static const ydk::Enum::YLeaf ws_c3650_24pdm;
        static const ydk::Enum::YLeaf ws_c3650_24td;
        static const ydk::Enum::YLeaf ws_c3650_24ts;
        static const ydk::Enum::YLeaf ws_c3650_48fqm;
        static const ydk::Enum::YLeaf ws_c3650_48pd;
        static const ydk::Enum::YLeaf ws_c3650_48pq;
        static const ydk::Enum::YLeaf ws_c3650_48td;
        static const ydk::Enum::YLeaf ws_c3650_48tq;
        static const ydk::Enum::YLeaf ws_c3650_48ts;
        static const ydk::Enum::YLeaf ws_c3650_8x24pd;
        static const ydk::Enum::YLeaf ws_c3650_8x24uq;
        static const ydk::Enum::YLeaf ws_c3750x_24p;
        static const ydk::Enum::YLeaf ws_c3750x_12s;
        static const ydk::Enum::YLeaf ws_c3850_12x48au;
        static const ydk::Enum::YLeaf c9300_24p;
        static const ydk::Enum::YLeaf c9300_24t;
        static const ydk::Enum::YLeaf c9300_24u;
        static const ydk::Enum::YLeaf c9300_48p;
        static const ydk::Enum::YLeaf c9300_48t;
        static const ydk::Enum::YLeaf c9300_48u;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_177_ */

