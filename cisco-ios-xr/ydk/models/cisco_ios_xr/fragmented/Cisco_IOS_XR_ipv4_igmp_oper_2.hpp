#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_2_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_igmp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf is_local; //type: boolean
        YLeaf is_remote; //type: boolean
        YLeaf is_forward; //type: boolean
        YLeaf is_we_report; //type: boolean
        YLeaf flags; //type: int32
        YLeaf is_added; //type: boolean
        class SourceAddress; //type: Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source


class Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress


class Mld::Active::DefaultContext::NonActiveGroups : public Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonActiveGroups_; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Mld::Active::DefaultContext::NonActiveGroups


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_ : public Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress


class Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress


class Mld::Active::DefaultContext::SsmMaps : public Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsmMap; //type: Mld::Active::DefaultContext::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMaps::SsmMap> > ssm_map;
        
}; // Mld::Active::DefaultContext::SsmMaps


class Mld::Active::DefaultContext::SsmMaps::SsmMap : public Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ssm_map_type; //type: IgmpssmMapEnum
        YLeaf group_address; //type: string
        YLeaf map_type; //type: uint32
        YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::SsmMaps::SsmMap


class Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr


class Mld::Active::DefaultContext::ExplicitGroups : public Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExplicitGroup; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Mld::Active::DefaultContext::ExplicitGroups


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup : public Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf source_address; //type: string
        YLeaf include_hosts; //type: uint32
        YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo : public Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf explicit_tracking_enabled; //type: boolean
        YLeaf is_self_join; //type: boolean
        YLeaf row_status; //type: string
        YLeaf is_low_memory; //type: boolean
        YLeaf router_filter_mode; //type: uint8
        YLeaf older_host_version1_timer; //type: uint32
        YLeaf older_host_version2_timer; //type: uint32
        YLeaf is_added; //type: boolean
        YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: uint32
        YLeaf is_exclude; //type: boolean
        YLeaf expiration_time; //type: uint32
        YLeaf source_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address


class Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Mld::Active::DefaultContext::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Mld::Active::DefaultContext::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface> > interface;
        
}; // Mld::Active::DefaultContext::InterfaceTable


class Mld::Active::DefaultContext::InterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceTable::Interface


class Mld::Active::DefaultContext::InterfaceTable::Interface::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::Address


class Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress


class Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceOldFormat; //type: Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Mld::Active::DefaultContext::InterfaceOldFormats


class Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address


class Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress


class Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceStateOffOldFormats : public Entity
{
    public:
        InterfaceStateOffOldFormats();
        ~InterfaceStateOffOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStateOffOldFormat; //type: Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat> > interface_state_off_old_format;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffOldFormats


class Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat : public Entity
{
    public:
        InterfaceStateOffOldFormat();
        ~InterfaceStateOffOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat


class Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address


class Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress


class Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts : public Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceUnicastQosAdjust; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_access; //type: boolean
        YLeaf rate; //type: uint32
        YLeaf rate_increments; //type: uint32
        YLeaf rate_decrements; //type: uint32
        class Update; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_add; //type: boolean
        YLeaf weight; //type: uint32
        YLeaf received_time; //type: uint64
        class SourceAddress; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Mld::Active::DefaultContext::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Mld::Active::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Ranges::Range> > range;
        
}; // Mld::Active::DefaultContext::Ranges


class Mld::Active::DefaultContext::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf group_mask; //type: int32
        YLeaf prefix_length; //type: uint32
        YLeaf protocol; //type: IgmpEdmProtocolEnum
        YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::Ranges::Range


class Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Ranges::Range::GroupAddressXr


class Mld::Active::DefaultContext::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IfrsInterface; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Mld::Active::DefaultContext::TrafficCounters : public Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf elapsed_time; //type: uint32
        YLeaf packets_in; //type: uint32
        YLeaf packets_out; //type: uint32
        YLeaf format_errors; //type: uint32
        YLeaf packet_manager_input_errors; //type: uint32
        YLeaf packet_manager_output_errors; //type: uint32
        YLeaf checksum_errors; //type: uint32
        YLeaf receive_socket_errors; //type: uint32
        YLeaf socket_errors; //type: uint32
        YLeaf bad_scope_errors; //type: uint32
        YLeaf auxillary_data_length_errors; //type: uint32
        YLeaf invalid_source_address_errors; //type: uint32
        YLeaf no_socket_connection; //type: uint32
        YLeaf miscellaneous_errors; //type: uint32
        YLeaf input_queries; //type: uint32
        YLeaf input_reports; //type: uint32
        YLeaf input_leaves; //type: uint32
        YLeaf input_mtrace; //type: uint32
        YLeaf input_dvmrp; //type: uint32
        YLeaf input_pim; //type: uint32
        YLeaf output_queries; //type: uint32
        YLeaf output_reports; //type: uint32
        YLeaf output_leaves; //type: uint32
        YLeaf output_mtrace; //type: uint32
        YLeaf output_dvmrp; //type: uint32
        YLeaf output_pim; //type: uint32
        YLeaf get_packet_failure; //type: uint32
        YLeaf output_no_parent_interface_handle; //type: uint32
        YLeaf input_no_idb; //type: uint32
        YLeaf input_no_vrf_in_idb; //type: uint32
        YLeaf input_disabled_idb; //type: uint32
        YLeaf input_martian_address; //type: uint32
        YLeaf input_no_assigned_vrf_id; //type: uint32
        YLeaf input_no_vrf_mtrace; //type: uint32
        YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Mld::Active::DefaultContext::TrafficCounters


class Mld::Active::DefaultContext::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Mld::Active::DefaultContext::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group> > group;
        
}; // Mld::Active::DefaultContext::Groups


class Mld::Active::DefaultContext::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf explicit_tracking_enabled; //type: boolean
        YLeaf is_self_join; //type: boolean
        YLeaf row_status; //type: string
        YLeaf is_low_memory; //type: boolean
        YLeaf router_filter_mode; //type: uint8
        YLeaf older_host_version1_timer; //type: uint32
        YLeaf older_host_version2_timer; //type: uint32
        YLeaf is_added; //type: boolean
        YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Mld::Active::DefaultContext::Groups::Group::GroupAddressXr
        class LastReporter; //type: Mld::Active::DefaultContext::Groups::Group::LastReporter
        class SourceAddress; //type: Mld::Active::DefaultContext::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::Groups::Group::SourceAddress> source_address;
        
}; // Mld::Active::DefaultContext::Groups::Group


class Mld::Active::DefaultContext::Groups::Group::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::GroupAddressXr


class Mld::Active::DefaultContext::Groups::Group::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::LastReporter


class Mld::Active::DefaultContext::Groups::Group::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::Groups::Group::SourceAddress


class Mld::Active::DefaultContext::GroupSummary : public Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf groutes; //type: uint32
        YLeaf sg_routes; //type: uint32
        YLeaf group_count; //type: uint32
        YLeaf is_low_memory; //type: boolean

}; // Mld::Active::DefaultContext::GroupSummary


class Mld::Active::DefaultContext::IfrsInterfaceSummary : public Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32

}; // Mld::Active::DefaultContext::IfrsInterfaceSummary


class Mld::Active::DefaultContext::GlobalInterfaceTable : public Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface> > interface;
        
}; // Mld::Active::DefaultContext::GlobalInterfaceTable


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::Address


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress


class Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress


class Mld::Active::DefaultContext::SsmMapDetails : public Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsmMapDetail; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Mld::Active::DefaultContext::SsmMapDetails


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail : public Entity
{
    public:
        SsmMapDetail();
        ~SsmMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ssm_map_type; //type: IgmpssmMapEnum
        YLeaf group_address; //type: string
        YLeaf expiration_time; //type: uint32
        YLeaf response_pending; //type: boolean
        YLeaf query_interval; //type: uint32
        YLeaf elapsed_time; //type: uint64
        class MapInfo; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo : public Entity
{
    public:
        MapInfo();
        ~MapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_type; //type: uint32
        YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources : public Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources


class Mld::Active::DefaultContext::InterfaceStateOffs : public Entity
{
    public:
        InterfaceStateOffs();
        ~InterfaceStateOffs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStateOff; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffs


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff : public Entity
{
    public:
        InterfaceStateOff();
        ~InterfaceStateOff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Mld::Active::DefaultContext::InterfaceOldFormatStateOns : public Entity
{
    public:
        InterfaceOldFormatStateOns();
        ~InterfaceOldFormatStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceOldFormatStateOn; //type: Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn> > interface_old_format_state_on;
        
}; // Mld::Active::DefaultContext::InterfaceOldFormatStateOns


class Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn : public Entity
{
    public:
        InterfaceOldFormatStateOn();
        ~InterfaceOldFormatStateOn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address
        class QuerierAddress; //type: Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn


class Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address


class Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress


class Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Mld::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress

class Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Standby; //type: Igmp::Standby
        class Active; //type: Igmp::Active

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby> standby;
        
}; // Igmp


class Igmp::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Igmp::Standby::Vrfs
        class Process; //type: Igmp::Standby::Process
        class DefaultContext; //type: Igmp::Standby::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext> default_context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process> process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs> vrfs;
        
}; // Igmp::Standby


class Igmp::Standby::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Igmp::Standby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf> > vrf;
        
}; // Igmp::Standby::Vrfs


class Igmp::Standby::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Summary; //type: Igmp::Standby::Vrfs::Vrf::Summary
        class InterfaceStateOns; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOns
        class DetailGroups; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups
        class NonActiveGroups; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups
        class SsmMaps; //type: Igmp::Standby::Vrfs::Vrf::SsmMaps
        class ExplicitGroups; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups
        class InterfaceTable; //type: Igmp::Standby::Vrfs::Vrf::InterfaceTable
        class InterfaceOldFormats; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats
        class InterfaceStateOffOldFormats; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats
        class InterfaceUnicastQosAdjusts; //type: Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts
        class Ranges; //type: Igmp::Standby::Vrfs::Vrf::Ranges
        class IfrsInterfaces; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces
        class TrafficCounters; //type: Igmp::Standby::Vrfs::Vrf::TrafficCounters
        class Groups; //type: Igmp::Standby::Vrfs::Vrf::Groups
        class GroupSummary; //type: Igmp::Standby::Vrfs::Vrf::GroupSummary
        class IfrsInterfaceSummary; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable
        class SsmMapDetails; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails
        class InterfaceStateOffs; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs
        class InterfaceOldFormatStateOns; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns> interface_old_format_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats> interface_state_off_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::TrafficCounters> traffic_counters;
        
}; // Igmp::Standby::Vrfs::Vrf


class Igmp::Standby::Vrfs::Vrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf robustness; //type: uint32
        YLeaf group_limit; //type: uint32
        YLeaf group_count; //type: uint32
        YLeaf is_disabled; //type: boolean
        YLeaf supported_interfaces; //type: uint32
        YLeaf unsupported_interfaces; //type: uint32
        YLeaf enabled_interface_count; //type: uint32
        YLeaf disabled_interface_count; //type: uint32
        YLeaf tunnel_mte_config_count; //type: uint32
        YLeaf node_low_memory; //type: boolean
        class Interface; //type: Igmp::Standby::Vrfs::Vrf::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Summary::Interface> > interface;
        
}; // Igmp::Standby::Vrfs::Vrf::Summary


class Igmp::Standby::Vrfs::Vrf::Summary::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf group_limit; //type: uint32
        YLeaf group_count; //type: uint32
        YLeaf parent_ifhandle; //type: string
        YLeaf on_off; //type: boolean
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32

}; // Igmp::Standby::Vrfs::Vrf::Summary::Interface


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOns : public Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStateOn; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOns


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn : public Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::DetailGroups : public Entity
{
    public:
        DetailGroups();
        ~DetailGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailGroup; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup> > detail_group;
        
}; // Igmp::Standby::Vrfs::Vrf::DetailGroups


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup : public Entity
{
    public:
        DetailGroup();
        ~DetailGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf source_address; //type: string
        YLeaf is_router_exclude_mode; //type: boolean
        YLeaf is_host_exclude_mode; //type: boolean
        class GroupInfo; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source> > source;
        
}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo : public Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf explicit_tracking_enabled; //type: boolean
        YLeaf is_self_join; //type: boolean
        YLeaf row_status; //type: string
        YLeaf is_low_memory; //type: boolean
        YLeaf router_filter_mode; //type: uint8
        YLeaf older_host_version1_timer; //type: uint32
        YLeaf older_host_version2_timer; //type: uint32
        YLeaf is_added; //type: boolean
        YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf is_local; //type: boolean
        YLeaf is_remote; //type: boolean
        YLeaf is_forward; //type: boolean
        YLeaf is_we_report; //type: boolean
        YLeaf flags; //type: int32
        YLeaf is_added; //type: boolean
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source


class Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups : public Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonActiveGroups_; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_ : public Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress


class Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress


class Igmp::Standby::Vrfs::Vrf::SsmMaps : public Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsmMap; //type: Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap> > ssm_map;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMaps


class Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap : public Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ssm_map_type; //type: IgmpssmMapEnum
        YLeaf group_address; //type: string
        YLeaf map_type; //type: uint32
        YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap


class Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups : public Entity
{
    public:
        ExplicitGroups();
        ~ExplicitGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExplicitGroup; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup : public Entity
{
    public:
        ExplicitGroup();
        ~ExplicitGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf source_address; //type: string
        YLeaf include_hosts; //type: uint32
        YLeaf exclude_hosts; //type: uint32
        class GroupInfo; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo : public Entity
{
    public:
        GroupInfo();
        ~GroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf explicit_tracking_enabled; //type: boolean
        YLeaf is_self_join; //type: boolean
        YLeaf row_status; //type: string
        YLeaf is_low_memory; //type: boolean
        YLeaf router_filter_mode; //type: uint8
        YLeaf older_host_version1_timer; //type: uint32
        YLeaf older_host_version2_timer; //type: uint32
        YLeaf is_added; //type: boolean
        YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: uint32
        YLeaf is_exclude; //type: boolean
        YLeaf expiration_time; //type: uint32
        YLeaf source_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address


class Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface> > interface;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceTable


class Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface


class Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceOldFormat; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats : public Entity
{
    public:
        InterfaceStateOffOldFormats();
        ~InterfaceStateOffOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStateOffOldFormat; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat> > interface_state_off_old_format;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat : public Entity
{
    public:
        InterfaceStateOffOldFormat();
        ~InterfaceStateOffOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts : public Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceUnicastQosAdjust; //type: Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts


class Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf is_virtual_access; //type: boolean
        YLeaf rate; //type: uint32
        YLeaf rate_increments; //type: uint32
        YLeaf rate_decrements; //type: uint32
        class Update; //type: Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_add; //type: boolean
        YLeaf weight; //type: uint32
        YLeaf received_time; //type: uint64
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Igmp::Standby::Vrfs::Vrf::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Igmp::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Igmp::Standby::Vrfs::Vrf::Ranges


class Igmp::Standby::Vrfs::Vrf::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf group_mask; //type: int32
        YLeaf prefix_length; //type: uint32
        YLeaf protocol; //type: IgmpEdmProtocolEnum
        YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::Ranges::Range


class Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IfrsInterface; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf join_group_count; //type: uint32
        class IgmpInterfaceEntry; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public Entity
{
    public:
        IgmpInterfaceEntry();
        ~IgmpInterfaceEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name_xr; //type: string
        YLeaf state; //type: uint32
        YLeaf prefix_length; //type: uint32
        YLeaf is_interface_up; //type: boolean
        YLeaf is_ip_enabled; //type: boolean
        YLeaf is_router_enabled; //type: boolean
        YLeaf igmp_version; //type: uint8
        YLeaf host_version; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf query_timeout; //type: uint16
        YLeaf query_maximum_response_time; //type: uint16
        YLeaf last_member_query_interval; //type: uint16
        YLeaf group_joins; //type: uint32
        YLeaf group_leaves; //type: uint32
        YLeaf is_querier; //type: boolean
        YLeaf total_active_groups; //type: uint32
        YLeaf robustness; //type: uint32
        YLeaf proxy_interface; //type: string
        YLeaf querier_uptime; //type: uint16
        YLeaf las_ll_registration_count; //type: uint32
        YLeaf las_get_address_count; //type: uint32
        YLeaf las_update_count; //type: uint32
        YLeaf las_ll_remove_update_count; //type: uint32
        YLeaf las_ll_add_update_count; //type: uint32
        YLeaf las_null_update_count; //type: uint32
        YLeaf las_unregistration_count; //type: uint32
        YLeaf is_las_request; //type: boolean
        YLeaf is_las_registered; //type: boolean
        YLeaf vrf_id; //type: uint32
        YLeaf mte_vrf_id; //type: uint32
        YLeaf location; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf vrf_state; //type: uint32
        YLeaf is_configurationverify; //type: boolean
        YLeaf configurationvrf_set; //type: boolean
        YLeaf configurationvrf_error; //type: boolean
        YLeaf configuration_mcast_vrf_set; //type: boolean
        YLeaf configuration_mcast_vrf_error; //type: boolean
        YLeaf is_im_state_registered; //type: boolean
        YLeaf is_subscriber; //type: boolean
        YLeaf subscriber_mode; //type: uint32
        YLeaf is_identity_present; //type: boolean
        YLeaf subscriber_id; //type: string
        YLeaf parent_ifhandle; //type: string
        YLeaf time_since_last_query_in_seconds; //type: uint32
        YLeaf time_since_last_report_in_seconds; //type: uint32
        YLeaf router_uptime_in_seconds; //type: uint32
        YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::TrafficCounters : public Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf elapsed_time; //type: uint32
        YLeaf packets_in; //type: uint32
        YLeaf packets_out; //type: uint32
        YLeaf format_errors; //type: uint32
        YLeaf packet_manager_input_errors; //type: uint32
        YLeaf packet_manager_output_errors; //type: uint32
        YLeaf checksum_errors; //type: uint32
        YLeaf receive_socket_errors; //type: uint32
        YLeaf socket_errors; //type: uint32
        YLeaf bad_scope_errors; //type: uint32
        YLeaf auxillary_data_length_errors; //type: uint32
        YLeaf invalid_source_address_errors; //type: uint32
        YLeaf no_socket_connection; //type: uint32
        YLeaf miscellaneous_errors; //type: uint32
        YLeaf input_queries; //type: uint32
        YLeaf input_reports; //type: uint32
        YLeaf input_leaves; //type: uint32
        YLeaf input_mtrace; //type: uint32
        YLeaf input_dvmrp; //type: uint32
        YLeaf input_pim; //type: uint32
        YLeaf output_queries; //type: uint32
        YLeaf output_reports; //type: uint32
        YLeaf output_leaves; //type: uint32
        YLeaf output_mtrace; //type: uint32
        YLeaf output_dvmrp; //type: uint32
        YLeaf output_pim; //type: uint32
        YLeaf get_packet_failure; //type: uint32
        YLeaf output_no_parent_interface_handle; //type: uint32
        YLeaf input_no_idb; //type: uint32
        YLeaf input_no_vrf_in_idb; //type: uint32
        YLeaf input_disabled_idb; //type: uint32
        YLeaf input_martian_address; //type: uint32
        YLeaf input_no_assigned_vrf_id; //type: uint32
        YLeaf input_no_vrf_mtrace; //type: uint32
        YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Igmp::Standby::Vrfs::Vrf::TrafficCounters


class Igmp::Standby::Vrfs::Vrf::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Igmp::Standby::Vrfs::Vrf::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Groups::Group> > group;
        
}; // Igmp::Standby::Vrfs::Vrf::Groups


class Igmp::Standby::Vrfs::Vrf::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiration_time; //type: int32
        YLeaf explicit_tracking_enabled; //type: boolean
        YLeaf is_self_join; //type: boolean
        YLeaf row_status; //type: string
        YLeaf is_low_memory; //type: boolean
        YLeaf router_filter_mode; //type: uint8
        YLeaf older_host_version1_timer; //type: uint32
        YLeaf older_host_version2_timer; //type: uint32
        YLeaf is_added; //type: boolean
        YLeaf is_suppressed; //type: boolean
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter
        class SourceAddress; //type: Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress> source_address;
        
}; // Igmp::Standby::Vrfs::Vrf::Groups::Group


class Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter : public Entity
{
    public:
        LastReporter();
        ~LastReporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::Groups::Group::LastReporter


class Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: IgmpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Igmp::Standby::Vrfs::Vrf::Groups::Group::SourceAddress


class Igmp::Standby::Vrfs::Vrf::GroupSummary : public Entity
{
    public:
        GroupSummary();
        ~GroupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf groutes; //type: uint32
        YLeaf sg_routes; //type: uint32
        YLeaf group_count; //type: uint32
        YLeaf is_low_memory; //type: boolean

}; // Igmp::Standby::Vrfs::Vrf::GroupSummary


class Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary : public Entity
{
    public:
        IfrsInterfaceSummary();
        ~IfrsInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32

}; // Igmp::Standby::Vrfs::Vrf::IfrsInterfaceSummary


class Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable : public Entity
{
    public:
        GlobalInterfaceTable();
        ~GlobalInterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface> > interface;
        
}; // Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_2_ */

