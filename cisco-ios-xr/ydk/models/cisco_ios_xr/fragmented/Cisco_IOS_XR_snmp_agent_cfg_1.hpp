#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_1_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {


class Snmp::Notification::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

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

        ydk::YLeaf lost_flow; //type: empty
        ydk::YLeaf new_flow; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::Rsvp


class Snmp::Notification::SelectiveVrfDownload : public ydk::Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

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

        ydk::YLeaf role_change; //type: empty

}; // Snmp::Notification::SelectiveVrfDownload


class Snmp::Notification::Sensor : public ydk::Entity
{
    public:
        Sensor();
        ~Sensor();

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

}; // Snmp::Notification::Sensor


class Snmp::Notification::Snmp_ : public ydk::Entity
{
    public:
        Snmp_();
        ~Snmp_();

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
        ydk::YLeaf cold_start; //type: empty
        ydk::YLeaf warm_start; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf link_down; //type: empty
        ydk::YLeaf link_up; //type: empty

}; // Snmp::Notification::Snmp_


class Snmp::Notification::SubscriberMib : public ydk::Entity
{
    public:
        SubscriberMib();
        ~SubscriberMib();

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

        class SessionAggregate; //type: Snmp::Notification::SubscriberMib::SessionAggregate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::SubscriberMib::SessionAggregate> session_aggregate;
        
}; // Snmp::Notification::SubscriberMib


class Snmp::Notification::SubscriberMib::SessionAggregate : public ydk::Entity
{
    public:
        SessionAggregate();
        ~SessionAggregate();

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

        ydk::YLeaf node; //type: empty
        ydk::YLeaf access_interface; //type: empty

}; // Snmp::Notification::SubscriberMib::SessionAggregate


class Snmp::Notification::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

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

}; // Snmp::Notification::Syslog


class Snmp::Notification::System : public ydk::Entity
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

        ydk::YLeaf enable; //type: empty

}; // Snmp::Notification::System


class Snmp::Notification::Vpls : public ydk::Entity
{
    public:
        Vpls();
        ~Vpls();

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

        ydk::YLeaf full_clear; //type: empty
        ydk::YLeaf status; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf full_raise; //type: empty

}; // Snmp::Notification::Vpls


class Snmp::Notification::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

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

}; // Snmp::Notification::Vrrp


class Snmp::OverloadControl : public ydk::Entity
{
    public:
        OverloadControl();
        ~OverloadControl();

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

        ydk::YLeaf drop_time; //type: uint32
        ydk::YLeaf throttle_rate; //type: uint32

}; // Snmp::OverloadControl


class Snmp::System : public ydk::Entity
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

        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf contact; //type: string

}; // Snmp::System


class Snmp::Target : public ydk::Entity
{
    public:
        Target();
        ~Target();

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

        class Targets; //type: Snmp::Target::Targets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets> targets;
        
}; // Snmp::Target


class Snmp::Target::Targets : public ydk::Entity
{
    public:
        Targets();
        ~Targets();

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

        class Target_; //type: Snmp::Target::Targets::Target_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_> > target;
        
}; // Snmp::Target::Targets


class Snmp::Target::Targets::Target_ : public ydk::Entity
{
    public:
        Target_();
        ~Target_();

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

        ydk::YLeaf target_list_name; //type: string
        class VrfNames; //type: Snmp::Target::Targets::Target_::VrfNames
        class TargetAddresses; //type: Snmp::Target::Targets::Target_::TargetAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses> target_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames> vrf_names;
        
}; // Snmp::Target::Targets::Target_


class Snmp::Target::Targets::Target_::TargetAddresses : public ydk::Entity
{
    public:
        TargetAddresses();
        ~TargetAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetAddress; //type: Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress> > target_address;
        
}; // Snmp::Target::Targets::Target_::TargetAddresses


class Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress


class Snmp::Target::Targets::Target_::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Snmp::Target::Targets::Target_::VrfNames::VrfName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames::VrfName> > vrf_name;
        
}; // Snmp::Target::Targets::Target_::VrfNames


class Snmp::Target::Targets::Target_::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

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

}; // Snmp::Target::Targets::Target_::VrfNames::VrfName


class Snmp::Timeouts : public ydk::Entity
{
    public:
        Timeouts();
        ~Timeouts();

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

        ydk::YLeaf duplicates; //type: uint32
        ydk::YLeaf in_qdrop; //type: uint32
        ydk::YLeaf subagent; //type: uint32
        ydk::YLeaf pdu_stats; //type: uint32

}; // Snmp::Timeouts


class Snmp::Trap : public ydk::Entity
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

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf throttle_time; //type: uint32
        ydk::YLeaf queue_length; //type: uint32

}; // Snmp::Trap


class Snmp::TrapHosts : public ydk::Entity
{
    public:
        TrapHosts();
        ~TrapHosts();

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

        class TrapHost; //type: Snmp::TrapHosts::TrapHost

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost> > trap_host;
        
}; // Snmp::TrapHosts


class Snmp::TrapHosts::TrapHost : public ydk::Entity
{
    public:
        TrapHost();
        ~TrapHost();

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

        ydk::YLeaf ip_address; //type: string
        class EncryptedUserCommunities; //type: Snmp::TrapHosts::TrapHost::EncryptedUserCommunities
        class InformHost; //type: Snmp::TrapHosts::TrapHost::InformHost
        class DefaultUserCommunities; //type: Snmp::TrapHosts::TrapHost::DefaultUserCommunities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost> inform_host;
        
}; // Snmp::TrapHosts::TrapHost


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities : public ydk::Entity
{
    public:
        DefaultUserCommunities();
        ~DefaultUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultUserCommunity; //type: Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;
        
}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity : public ydk::Entity
{
    public:
        DefaultUserCommunity();
        ~DefaultUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


class Snmp::TrapHosts::TrapHost::EncryptedUserCommunities : public ydk::Entity
{
    public:
        EncryptedUserCommunities();
        ~EncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EncryptedUserCommunity; //type: Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;
        
}; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities


class Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity : public ydk::Entity
{
    public:
        EncryptedUserCommunity();
        ~EncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


class Snmp::TrapHosts::TrapHost::InformHost : public ydk::Entity
{
    public:
        InformHost();
        ~InformHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformUserCommunities; //type: Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities
        class InformEncryptedUserCommunities; //type: Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;
        
}; // Snmp::TrapHosts::TrapHost::InformHost


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities : public ydk::Entity
{
    public:
        InformEncryptedUserCommunities();
        ~InformEncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformEncryptedUserCommunity; //type: Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;
        
}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity : public ydk::Entity
{
    public:
        InformEncryptedUserCommunity();
        ~InformEncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


class Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities : public ydk::Entity
{
    public:
        InformUserCommunities();
        ~InformUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformUserCommunity; //type: Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;
        
}; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities


class Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity : public ydk::Entity
{
    public:
        InformUserCommunity();
        ~InformUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


class Snmp::Users : public ydk::Entity
{
    public:
        Users();
        ~Users();

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

        class User; //type: Snmp::Users::User

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users::User> > user;
        
}; // Snmp::Users


class Snmp::Users::User : public ydk::Entity
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

        ydk::YLeaf user_name; //type: string
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf version; //type: UserSnmpVersion
        ydk::YLeaf authentication_password_configured; //type: empty
        ydk::YLeaf algorithm; //type: SnmpHashAlgorithm
        ydk::YLeaf authentication_password; //type: string
        ydk::YLeaf privacy_password_configured; //type: empty
        ydk::YLeaf priv_algorithm; //type: SnmpPrivAlgorithm
        ydk::YLeaf privacy_password; //type: string
        ydk::YLeaf v4acl_type; //type: Snmpacl
        ydk::YLeaf v4_access_list; //type: string
        ydk::YLeaf v6acl_type; //type: Snmpacl
        ydk::YLeaf v6_access_list; //type: string
        ydk::YLeaf owner; //type: SnmpOwnerAccess
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf port; //type: uint16

}; // Snmp::Users::User


class Snmp::Views : public ydk::Entity
{
    public:
        Views();
        ~Views();

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

        class View; //type: Snmp::Views::View

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views::View> > view;
        
}; // Snmp::Views


class Snmp::Views::View : public ydk::Entity
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

        ydk::YLeaf view_name; //type: string
        ydk::YLeaf family; //type: string
        ydk::YLeaf view_inclusion; //type: SnmpMibViewInclusion

}; // Snmp::Views::View


class Snmp::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Snmp::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf> > vrf;
        
}; // Snmp::Vrfs


class Snmp::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        class TrapHosts; //type: Snmp::Vrfs::Vrf::TrapHosts
        class Contexts; //type: Snmp::Vrfs::Vrf::Contexts
        class ContextMappings; //type: Snmp::Vrfs::Vrf::ContextMappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings> context_mappings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts> contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts> trap_hosts;
        
}; // Snmp::Vrfs::Vrf


class Snmp::Vrfs::Vrf::ContextMappings : public ydk::Entity
{
    public:
        ContextMappings();
        ~ContextMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ContextMapping; //type: Snmp::Vrfs::Vrf::ContextMappings::ContextMapping

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings::ContextMapping> > context_mapping;
        
}; // Snmp::Vrfs::Vrf::ContextMappings


class Snmp::Vrfs::Vrf::ContextMappings::ContextMapping : public ydk::Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_mapping_name; //type: string
        ydk::YLeaf context; //type: SnmpContext
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Snmp::Vrfs::Vrf::ContextMappings::ContextMapping


class Snmp::Vrfs::Vrf::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Snmp::Vrfs::Vrf::Contexts::Context

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts::Context> > context;
        
}; // Snmp::Vrfs::Vrf::Contexts


class Snmp::Vrfs::Vrf::Contexts::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_name; //type: string

}; // Snmp::Vrfs::Vrf::Contexts::Context


class Snmp::Vrfs::Vrf::TrapHosts : public ydk::Entity
{
    public:
        TrapHosts();
        ~TrapHosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrapHost; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost> > trap_host;
        
}; // Snmp::Vrfs::Vrf::TrapHosts


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost : public ydk::Entity
{
    public:
        TrapHost();
        ~TrapHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        class EncryptedUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities
        class InformHost; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost
        class DefaultUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost> inform_host;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities : public ydk::Entity
{
    public:
        DefaultUserCommunities();
        ~DefaultUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity : public ydk::Entity
{
    public:
        DefaultUserCommunity();
        ~DefaultUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities : public ydk::Entity
{
    public:
        EncryptedUserCommunities();
        ~EncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EncryptedUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity : public ydk::Entity
{
    public:
        EncryptedUserCommunity();
        ~EncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost : public ydk::Entity
{
    public:
        InformHost();
        ~InformHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities
        class InformEncryptedUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities : public ydk::Entity
{
    public:
        InformEncryptedUserCommunities();
        ~InformEncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformEncryptedUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity : public ydk::Entity
{
    public:
        InformEncryptedUserCommunity();
        ~InformEncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities : public ydk::Entity
{
    public:
        InformUserCommunities();
        ~InformUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity : public ydk::Entity
{
    public:
        InformUserCommunity();
        ~InformUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: int32
        ydk::YLeaf advanced_trap_types1; //type: int32
        ydk::YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_1_ */

