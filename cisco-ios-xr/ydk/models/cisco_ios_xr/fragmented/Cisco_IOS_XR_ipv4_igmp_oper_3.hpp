#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_3_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_igmp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {


class Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface


class Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address


class Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails : public Entity
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

        class SsmMapDetail; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail : public Entity
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
        class MapInfo; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs : public Entity
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

        class InterfaceStateOff; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff : public Entity
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
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns : public Entity
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

        class InterfaceOldFormatStateOn; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn> > interface_old_format_state_on;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn : public Entity
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
        class Address; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address
        class QuerierAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress


class Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Standby::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress


class Igmp::Standby::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AmtSummary; //type: Igmp::Standby::Process::AmtSummary
        class Nsr; //type: Igmp::Standby::Process::Nsr
        class AmtGatewaies; //type: Igmp::Standby::Process::AmtGatewaies
        class UnicastQosAdjustStats; //type: Igmp::Standby::Process::UnicastQosAdjustStats
        class BviStatistics; //type: Igmp::Standby::Process::BviStatistics
        class Nsf; //type: Igmp::Standby::Process::Nsf

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::AmtGatewaies> amt_gatewaies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::AmtSummary> amt_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::BviStatistics> bvi_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::UnicastQosAdjustStats> unicast_qos_adjust_stats;
        
}; // Igmp::Standby::Process


class Igmp::Standby::Process::AmtSummary : public Entity
{
    public:
        AmtSummary();
        ~AmtSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf anycast_prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf relay_address; //type: string
        YLeaf mtu; //type: uint32
        YLeaf tos; //type: uint32
        YLeaf ttl; //type: uint32
        YLeaf query_interval; //type: uint32
        YLeaf gateway_count; //type: uint32
        YLeaf max_gateway; //type: uint32
        YLeaf tunnel_count; //type: uint32
        YLeaf tunnel_configured_maximum; //type: uint32
        YLeaf is_acl_configured; //type: boolean
        YLeaf is_gateway_simulation; //type: boolean
        YLeaf is_ou_of_resource; //type: boolean

}; // Igmp::Standby::Process::AmtSummary


class Igmp::Standby::Process::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: uint8
        YLeaf partner_proc_connected; //type: boolean
        YLeaf collab_conv_done; //type: boolean
        YLeaf rmf_notification_done; //type: boolean
        YLeaf last_proc; //type: uint64
        YLeaf last_proc_connection_up; //type: uint64
        YLeaf last_proc_connection_dn; //type: uint64
        YLeaf last_rmf_ready; //type: uint64
        YLeaf last_rmf_not_ready; //type: uint64
        YLeaf count_proc_connection_up; //type: uint32
        YLeaf count_proc_connection_dn; //type: uint32
        YLeaf count_rmf_ready; //type: uint32
        YLeaf count_rmf_not_ready; //type: uint32

}; // Igmp::Standby::Process::Nsr


class Igmp::Standby::Process::AmtGatewaies : public Entity
{
    public:
        AmtGatewaies();
        ~AmtGatewaies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AmtGateway; //type: Igmp::Standby::Process::AmtGatewaies::AmtGateway

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::Process::AmtGatewaies::AmtGateway> > amt_gateway;
        
}; // Igmp::Standby::Process::AmtGatewaies


class Igmp::Standby::Process::AmtGatewaies::AmtGateway : public Entity
{
    public:
        AmtGateway();
        ~AmtGateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gateway_address; //type: string
        YLeaf port; //type: int32
        YLeaf amtgw; //type: string
        YLeaf amt_port; //type: uint32
        YLeaf key_len; //type: uint32
        YLeaf amtnh; //type: uint32
        YLeaf amt_nonce; //type: uint32
        YLeaf idb; //type: uint64
        YLeaf mem_upd_in; //type: uint32
        YLeaf mem_upd_out; //type: uint32

}; // Igmp::Standby::Process::AmtGatewaies::AmtGateway


class Igmp::Standby::Process::UnicastQosAdjustStats : public Entity
{
    public:
        UnicastQosAdjustStats();
        ~UnicastQosAdjustStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queues; //type: uint16
        YLeaf batches; //type: uint16
        YLeaf add_to_batches; //type: uint32
        YLeaf delete_to_batches; //type: uint32
        YLeaf send_success; //type: uint32
        YLeaf send_errors; //type: uint32
        YLeaf send_comm_errors; //type: uint32
        YLeaf send_partial_errors; //type: uint32
        YLeaf received_resync_requests; //type: uint32
        YLeaf sent_resync_bulks; //type: uint32
        YLeaf is_resync_received; //type: boolean
        YLeaf is_resync_required; //type: boolean
        YLeaf is_resync_start_sent; //type: boolean
        YLeaf is_qos_s_sweeped; //type: boolean
        YLeaf last_sweep_time; //type: uint64
        YLeaf last_download_time; //type: uint64

}; // Igmp::Standby::Process::UnicastQosAdjustStats


class Igmp::Standby::Process::BviStatistics : public Entity
{
    public:
        BviStatistics();
        ~BviStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive_buffers; //type: uint32
        YLeaf release_buffers; //type: uint32
        YLeaf send_blocks; //type: uint32
        YLeaf release_fail_buffers; //type: uint32
        YLeaf null_buffer_handles; //type: uint32
        YLeaf rx_ipc_open_notif; //type: uint32
        YLeaf rx_ipc_close_notif; //type: uint32
        YLeaf rx_ipc_error_notif; //type: uint32
        YLeaf rx_ipc_lwm_notif; //type: uint32
        YLeaf rx_ipc_input_wait_notif; //type: uint32
        YLeaf rx_ipc_send_status_notif; //type: uint32
        YLeaf rx_ipc_publish_notif; //type: uint32
        YLeaf rx_ipc_q_full_notif; //type: uint32
        YLeaf rx_ipc_output_notif; //type: uint32
        YLeaf rx_ipc_connect_notif; //type: uint32
        YLeaf rx_igmp_packet_success; //type: uint32
        YLeaf rx_add_mrouter_msg; //type: uint32
        YLeaf rx_delete_mrouter_msg; //type: uint32
        YLeaf rx_sweep_mrouter_msg; //type: uint32
        YLeaf tx_add_mrouter_msg; //type: uint32
        YLeaf tx_delete_mrouter_msg; //type: uint32
        YLeaf tx_sweep_mrouter_msg; //type: uint32
        YLeaf rx_unknown_mrouter_msg; //type: uint32
        YLeaf tx_unknown_mrouter_msg; //type: uint32
        YLeaf tx_buffer_errors; //type: uint32
        YLeaf tx_buffers; //type: uint32
        YLeaf tx_protocol_buffers; //type: uint32
        YLeaf tx_mrouter_buffers; //type: uint32
        YLeaf tx_unknown_buffers; //type: uint32
        YLeaf wtx_msg_recvd; //type: uint32
        YLeaf wtx_msg_sent; //type: uint32
        YLeaf wtx_msg_proto_sent; //type: uint32
        YLeaf wtx_msg_drop_dc; //type: uint32
        YLeaf wtx_msg_drop_nomem; //type: uint32
        YLeaf wtx_msg_freed; //type: uint32

}; // Igmp::Standby::Process::BviStatistics


class Igmp::Standby::Process::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_multicast_nsf_active; //type: boolean
        YLeaf multicast_nsf_timeout; //type: uint32
        YLeaf multicast_nsf_time_left; //type: uint32
        YLeaf respawn_count; //type: uint32
        YLeaf last_nsf_on; //type: int64
        YLeaf last_nsf_off; //type: int64
        YLeaf last_nsf_on_min; //type: int32
        YLeaf last_nsf_off_min; //type: int32
        YLeaf last_icd_notif_recv; //type: int64
        YLeaf last_icd_notif_recv_min; //type: int32

}; // Igmp::Standby::Process::Nsf


class Igmp::Standby::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Igmp::Standby::DefaultContext::Summary
        class InterfaceStateOns; //type: Igmp::Standby::DefaultContext::InterfaceStateOns
        class DetailGroups; //type: Igmp::Standby::DefaultContext::DetailGroups
        class NonActiveGroups; //type: Igmp::Standby::DefaultContext::NonActiveGroups
        class SsmMaps; //type: Igmp::Standby::DefaultContext::SsmMaps
        class ExplicitGroups; //type: Igmp::Standby::DefaultContext::ExplicitGroups
        class InterfaceTable; //type: Igmp::Standby::DefaultContext::InterfaceTable
        class InterfaceOldFormats; //type: Igmp::Standby::DefaultContext::InterfaceOldFormats
        class InterfaceStateOffOldFormats; //type: Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats
        class InterfaceUnicastQosAdjusts; //type: Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts
        class Ranges; //type: Igmp::Standby::DefaultContext::Ranges
        class IfrsInterfaces; //type: Igmp::Standby::DefaultContext::IfrsInterfaces
        class TrafficCounters; //type: Igmp::Standby::DefaultContext::TrafficCounters
        class Groups; //type: Igmp::Standby::DefaultContext::Groups
        class GroupSummary; //type: Igmp::Standby::DefaultContext::GroupSummary
        class IfrsInterfaceSummary; //type: Igmp::Standby::DefaultContext::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Igmp::Standby::DefaultContext::GlobalInterfaceTable
        class SsmMapDetails; //type: Igmp::Standby::DefaultContext::SsmMapDetails
        class InterfaceStateOffs; //type: Igmp::Standby::DefaultContext::InterfaceStateOffs
        class InterfaceOldFormatStateOns; //type: Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns> interface_old_format_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats> interface_state_off_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::TrafficCounters> traffic_counters;
        
}; // Igmp::Standby::DefaultContext


class Igmp::Standby::DefaultContext::Summary : public Entity
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
        class Interface; //type: Igmp::Standby::DefaultContext::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Summary::Interface> > interface;
        
}; // Igmp::Standby::DefaultContext::Summary


class Igmp::Standby::DefaultContext::Summary::Interface : public Entity
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

}; // Igmp::Standby::DefaultContext::Summary::Interface


class Igmp::Standby::DefaultContext::InterfaceStateOns : public Entity
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

        class InterfaceStateOn; //type: Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOns


class Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn


class Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address


class Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Igmp::Standby::DefaultContext::DetailGroups : public Entity
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

        class DetailGroup; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup> > detail_group;
        
}; // Igmp::Standby::DefaultContext::DetailGroups


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup : public Entity
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
        class GroupInfo; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source> > source;
        
}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source : public Entity
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
        class SourceAddress; //type: Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source


class Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress


class Igmp::Standby::DefaultContext::NonActiveGroups : public Entity
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

        class NonActiveGroups_; //type: Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Igmp::Standby::DefaultContext::NonActiveGroups


class Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_ : public Entity
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
        class GroupAddress; //type: Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_


class Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress


class Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress


class Igmp::Standby::DefaultContext::SsmMaps : public Entity
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

        class SsmMap; //type: Igmp::Standby::DefaultContext::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMaps::SsmMap> > ssm_map;
        
}; // Igmp::Standby::DefaultContext::SsmMaps


class Igmp::Standby::DefaultContext::SsmMaps::SsmMap : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::DefaultContext::SsmMaps::SsmMap


class Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr


class Igmp::Standby::DefaultContext::ExplicitGroups : public Entity
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

        class ExplicitGroup; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Igmp::Standby::DefaultContext::ExplicitGroups


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup : public Entity
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
        class GroupInfo; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address


class Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Igmp::Standby::DefaultContext::InterfaceTable : public Entity
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

        class Interface; //type: Igmp::Standby::DefaultContext::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceTable::Interface> > interface;
        
}; // Igmp::Standby::DefaultContext::InterfaceTable


class Igmp::Standby::DefaultContext::InterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceTable::Interface


class Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceTable::Interface::Address


class Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress


class Igmp::Standby::DefaultContext::InterfaceOldFormats : public Entity
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

        class InterfaceOldFormat; //type: Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Igmp::Standby::DefaultContext::InterfaceOldFormats


class Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address


class Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress


class Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats : public Entity
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

        class InterfaceStateOffOldFormat; //type: Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat> > interface_state_off_old_format;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats


class Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat


class Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address


class Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress


class Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts : public Entity
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

        class InterfaceUnicastQosAdjust; //type: Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts


class Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public Entity
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
        class Update; //type: Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public Entity
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
        class SourceAddress; //type: Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Igmp::Standby::DefaultContext::Ranges : public Entity
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

        class Range; //type: Igmp::Standby::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Ranges::Range> > range;
        
}; // Igmp::Standby::DefaultContext::Ranges


class Igmp::Standby::DefaultContext::Ranges::Range : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::DefaultContext::Ranges::Range


class Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::Ranges::Range::GroupAddressXr


class Igmp::Standby::DefaultContext::IfrsInterfaces : public Entity
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

        class IfrsInterface; //type: Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Igmp::Standby::DefaultContext::IfrsInterfaces


class Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface : public Entity
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
        class IgmpInterfaceEntry; //type: Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface


class Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Igmp::Standby::DefaultContext::TrafficCounters : public Entity
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

}; // Igmp::Standby::DefaultContext::TrafficCounters


class Igmp::Standby::DefaultContext::Groups : public Entity
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

        class Group; //type: Igmp::Standby::DefaultContext::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Groups::Group> > group;
        
}; // Igmp::Standby::DefaultContext::Groups


class Igmp::Standby::DefaultContext::Groups::Group : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr
        class LastReporter; //type: Igmp::Standby::DefaultContext::Groups::Group::LastReporter
        class SourceAddress; //type: Igmp::Standby::DefaultContext::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::Groups::Group::SourceAddress> source_address;
        
}; // Igmp::Standby::DefaultContext::Groups::Group


class Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::Groups::Group::GroupAddressXr


class Igmp::Standby::DefaultContext::Groups::Group::LastReporter : public Entity
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

}; // Igmp::Standby::DefaultContext::Groups::Group::LastReporter


class Igmp::Standby::DefaultContext::Groups::Group::SourceAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::Groups::Group::SourceAddress


class Igmp::Standby::DefaultContext::GroupSummary : public Entity
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

}; // Igmp::Standby::DefaultContext::GroupSummary


class Igmp::Standby::DefaultContext::IfrsInterfaceSummary : public Entity
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

}; // Igmp::Standby::DefaultContext::IfrsInterfaceSummary


class Igmp::Standby::DefaultContext::GlobalInterfaceTable : public Entity
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

        class Interface; //type: Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface> > interface;
        
}; // Igmp::Standby::DefaultContext::GlobalInterfaceTable


class Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface


class Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address


class Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress


class Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress


class Igmp::Standby::DefaultContext::SsmMapDetails : public Entity
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

        class SsmMapDetail; //type: Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Igmp::Standby::DefaultContext::SsmMapDetails


class Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail : public Entity
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
        class MapInfo; //type: Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail


class Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo


class Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public Entity
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

}; // Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources : public Entity
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

}; // Igmp::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources


class Igmp::Standby::DefaultContext::InterfaceStateOffs : public Entity
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

        class InterfaceStateOff; //type: Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOffs


class Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff


class Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address


class Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns : public Entity
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

        class InterfaceOldFormatStateOn; //type: Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn> > interface_old_format_state_on;
        
}; // Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns


class Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn : public Entity
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
        class Address; //type: Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address
        class QuerierAddress; //type: Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn


class Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address


class Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress


class Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress


class Igmp::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Igmp::Active::Vrfs
        class Process; //type: Igmp::Active::Process
        class DefaultContext; //type: Igmp::Active::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext> default_context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process> process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs> vrfs;
        
}; // Igmp::Active


class Igmp::Active::Vrfs : public Entity
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

        class Vrf; //type: Igmp::Active::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf> > vrf;
        
}; // Igmp::Active::Vrfs


class Igmp::Active::Vrfs::Vrf : public Entity
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
        class Summary; //type: Igmp::Active::Vrfs::Vrf::Summary
        class InterfaceStateOns; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOns
        class DetailGroups; //type: Igmp::Active::Vrfs::Vrf::DetailGroups
        class NonActiveGroups; //type: Igmp::Active::Vrfs::Vrf::NonActiveGroups
        class SsmMaps; //type: Igmp::Active::Vrfs::Vrf::SsmMaps
        class ExplicitGroups; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups
        class InterfaceTable; //type: Igmp::Active::Vrfs::Vrf::InterfaceTable
        class InterfaceOldFormats; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormats
        class InterfaceStateOffOldFormats; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats
        class InterfaceUnicastQosAdjusts; //type: Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts
        class Ranges; //type: Igmp::Active::Vrfs::Vrf::Ranges
        class IfrsInterfaces; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces
        class TrafficCounters; //type: Igmp::Active::Vrfs::Vrf::TrafficCounters
        class Groups; //type: Igmp::Active::Vrfs::Vrf::Groups
        class GroupSummary; //type: Igmp::Active::Vrfs::Vrf::GroupSummary
        class IfrsInterfaceSummary; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable
        class SsmMapDetails; //type: Igmp::Active::Vrfs::Vrf::SsmMapDetails
        class InterfaceStateOffs; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffs
        class InterfaceOldFormatStateOns; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns> interface_old_format_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats> interface_state_off_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::TrafficCounters> traffic_counters;
        
}; // Igmp::Active::Vrfs::Vrf


class Igmp::Active::Vrfs::Vrf::Summary : public Entity
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
        class Interface; //type: Igmp::Active::Vrfs::Vrf::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Summary::Interface> > interface;
        
}; // Igmp::Active::Vrfs::Vrf::Summary


class Igmp::Active::Vrfs::Vrf::Summary::Interface : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::Summary::Interface


class Igmp::Active::Vrfs::Vrf::InterfaceStateOns : public Entity
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

        class InterfaceStateOn; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOns


class Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn


class Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address


class Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::DetailGroups : public Entity
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

        class DetailGroup; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup> > detail_group;
        
}; // Igmp::Active::Vrfs::Vrf::DetailGroups


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup : public Entity
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
        class GroupInfo; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source> > source;
        
}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source : public Entity
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
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source


class Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress


class Igmp::Active::Vrfs::Vrf::NonActiveGroups : public Entity
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

        class NonActiveGroups_; //type: Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Igmp::Active::Vrfs::Vrf::NonActiveGroups


class Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_ : public Entity
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
        class GroupAddress; //type: Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_


class Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress


class Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress


class Igmp::Active::Vrfs::Vrf::SsmMaps : public Entity
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

        class SsmMap; //type: Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap> > ssm_map;
        
}; // Igmp::Active::Vrfs::Vrf::SsmMaps


class Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap


class Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::ExplicitGroups : public Entity
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

        class ExplicitGroup; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup : public Entity
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
        class GroupInfo; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address


class Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_3_ */

