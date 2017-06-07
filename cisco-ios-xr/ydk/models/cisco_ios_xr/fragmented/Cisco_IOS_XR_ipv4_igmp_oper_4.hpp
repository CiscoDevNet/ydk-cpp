#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_4_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_igmp_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {


class Igmp::Active::Vrfs::Vrf::InterfaceTable : public Entity
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

        class Interface; //type: Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface> > interface;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceTable


class Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface


class Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::Address


class Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormats : public Entity
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

        class InterfaceOldFormat; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormats


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats : public Entity
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

        class InterfaceStateOffOldFormat; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat> > interface_state_off_old_format;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts : public Entity
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

        class InterfaceUnicastQosAdjust; //type: Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts


class Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public Entity
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
        class Update; //type: Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public Entity
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
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Igmp::Active::Vrfs::Vrf::Ranges : public Entity
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

        class Range; //type: Igmp::Active::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Igmp::Active::Vrfs::Vrf::Ranges


class Igmp::Active::Vrfs::Vrf::Ranges::Range : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::Vrfs::Vrf::Ranges::Range


class Igmp::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces : public Entity
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

        class IfrsInterface; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public Entity
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
        class IgmpInterfaceEntry; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::TrafficCounters : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::TrafficCounters


class Igmp::Active::Vrfs::Vrf::Groups : public Entity
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

        class Group; //type: Igmp::Active::Vrfs::Vrf::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Groups::Group> > group;
        
}; // Igmp::Active::Vrfs::Vrf::Groups


class Igmp::Active::Vrfs::Vrf::Groups::Group : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr
        class LastReporter; //type: Igmp::Active::Vrfs::Vrf::Groups::Group::LastReporter
        class SourceAddress; //type: Igmp::Active::Vrfs::Vrf::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::Groups::Group::SourceAddress> source_address;
        
}; // Igmp::Active::Vrfs::Vrf::Groups::Group


class Igmp::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::Groups::Group::LastReporter : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::Groups::Group::LastReporter


class Igmp::Active::Vrfs::Vrf::Groups::Group::SourceAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::Groups::Group::SourceAddress


class Igmp::Active::Vrfs::Vrf::GroupSummary : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::GroupSummary


class Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::IfrsInterfaceSummary


class Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable : public Entity
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

        class Interface; //type: Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface> > interface;
        
}; // Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable


class Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface


class Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address


class Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress


class Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::SsmMapDetails : public Entity
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

        class SsmMapDetail; //type: Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Igmp::Active::Vrfs::Vrf::SsmMapDetails


class Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail : public Entity
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
        class MapInfo; //type: Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail


class Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo


class Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffs : public Entity
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

        class InterfaceStateOff; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffs


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns : public Entity
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

        class InterfaceOldFormatStateOn; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn> > interface_old_format_state_on;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn : public Entity
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
        class Address; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address
        class QuerierAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress


class Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress


class Igmp::Active::Process : public Entity
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

        class AmtSummary; //type: Igmp::Active::Process::AmtSummary
        class Nsr; //type: Igmp::Active::Process::Nsr
        class AmtGatewaies; //type: Igmp::Active::Process::AmtGatewaies
        class UnicastQosAdjustStats; //type: Igmp::Active::Process::UnicastQosAdjustStats
        class BviStatistics; //type: Igmp::Active::Process::BviStatistics
        class Nsf; //type: Igmp::Active::Process::Nsf

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::AmtGatewaies> amt_gatewaies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::AmtSummary> amt_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::BviStatistics> bvi_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::UnicastQosAdjustStats> unicast_qos_adjust_stats;
        
}; // Igmp::Active::Process


class Igmp::Active::Process::AmtSummary : public Entity
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

}; // Igmp::Active::Process::AmtSummary


class Igmp::Active::Process::Nsr : public Entity
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

}; // Igmp::Active::Process::Nsr


class Igmp::Active::Process::AmtGatewaies : public Entity
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

        class AmtGateway; //type: Igmp::Active::Process::AmtGatewaies::AmtGateway

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::Process::AmtGatewaies::AmtGateway> > amt_gateway;
        
}; // Igmp::Active::Process::AmtGatewaies


class Igmp::Active::Process::AmtGatewaies::AmtGateway : public Entity
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

}; // Igmp::Active::Process::AmtGatewaies::AmtGateway


class Igmp::Active::Process::UnicastQosAdjustStats : public Entity
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

}; // Igmp::Active::Process::UnicastQosAdjustStats


class Igmp::Active::Process::BviStatistics : public Entity
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

}; // Igmp::Active::Process::BviStatistics


class Igmp::Active::Process::Nsf : public Entity
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

}; // Igmp::Active::Process::Nsf


class Igmp::Active::DefaultContext : public Entity
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

        class Summary; //type: Igmp::Active::DefaultContext::Summary
        class InterfaceStateOns; //type: Igmp::Active::DefaultContext::InterfaceStateOns
        class DetailGroups; //type: Igmp::Active::DefaultContext::DetailGroups
        class NonActiveGroups; //type: Igmp::Active::DefaultContext::NonActiveGroups
        class SsmMaps; //type: Igmp::Active::DefaultContext::SsmMaps
        class ExplicitGroups; //type: Igmp::Active::DefaultContext::ExplicitGroups
        class InterfaceTable; //type: Igmp::Active::DefaultContext::InterfaceTable
        class InterfaceOldFormats; //type: Igmp::Active::DefaultContext::InterfaceOldFormats
        class InterfaceStateOffOldFormats; //type: Igmp::Active::DefaultContext::InterfaceStateOffOldFormats
        class InterfaceUnicastQosAdjusts; //type: Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts
        class Ranges; //type: Igmp::Active::DefaultContext::Ranges
        class IfrsInterfaces; //type: Igmp::Active::DefaultContext::IfrsInterfaces
        class TrafficCounters; //type: Igmp::Active::DefaultContext::TrafficCounters
        class Groups; //type: Igmp::Active::DefaultContext::Groups
        class GroupSummary; //type: Igmp::Active::DefaultContext::GroupSummary
        class IfrsInterfaceSummary; //type: Igmp::Active::DefaultContext::IfrsInterfaceSummary
        class GlobalInterfaceTable; //type: Igmp::Active::DefaultContext::GlobalInterfaceTable
        class SsmMapDetails; //type: Igmp::Active::DefaultContext::SsmMapDetails
        class InterfaceStateOffs; //type: Igmp::Active::DefaultContext::InterfaceStateOffs
        class InterfaceOldFormatStateOns; //type: Igmp::Active::DefaultContext::InterfaceOldFormatStateOns

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups> detail_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups> explicit_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GlobalInterfaceTable> global_interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GroupSummary> group_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaceSummary> ifrs_interface_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormatStateOns> interface_old_format_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffOldFormats> interface_state_off_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffs> interface_state_offs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOns> interface_state_ons;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts> interface_unicast_qos_adjusts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::NonActiveGroups> non_active_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMapDetails> ssm_map_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMaps> ssm_maps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::TrafficCounters> traffic_counters;
        
}; // Igmp::Active::DefaultContext


class Igmp::Active::DefaultContext::Summary : public Entity
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
        class Interface; //type: Igmp::Active::DefaultContext::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Summary::Interface> > interface;
        
}; // Igmp::Active::DefaultContext::Summary


class Igmp::Active::DefaultContext::Summary::Interface : public Entity
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

}; // Igmp::Active::DefaultContext::Summary::Interface


class Igmp::Active::DefaultContext::InterfaceStateOns : public Entity
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

        class InterfaceStateOn; //type: Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOns


class Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn


class Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address


class Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Igmp::Active::DefaultContext::DetailGroups : public Entity
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

        class DetailGroup; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup> > detail_group;
        
}; // Igmp::Active::DefaultContext::DetailGroups


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup : public Entity
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
        class GroupInfo; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo
        class Source; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source> > source;
        
}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source : public Entity
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
        class SourceAddress; //type: Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source


class Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress


class Igmp::Active::DefaultContext::NonActiveGroups : public Entity
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

        class NonActiveGroups_; //type: Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Igmp::Active::DefaultContext::NonActiveGroups


class Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_ : public Entity
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
        class GroupAddress; //type: Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_


class Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress : public Entity
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

}; // Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress


class Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress


class Igmp::Active::DefaultContext::SsmMaps : public Entity
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

        class SsmMap; //type: Igmp::Active::DefaultContext::SsmMaps::SsmMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMaps::SsmMap> > ssm_map;
        
}; // Igmp::Active::DefaultContext::SsmMaps


class Igmp::Active::DefaultContext::SsmMaps::SsmMap : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::DefaultContext::SsmMaps::SsmMap


class Igmp::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::SsmMaps::SsmMap::GroupAddressXr


class Igmp::Active::DefaultContext::ExplicitGroups : public Entity
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

        class ExplicitGroup; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup> > explicit_group;
        
}; // Igmp::Active::DefaultContext::ExplicitGroups


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup : public Entity
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
        class GroupInfo; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo
        class Host; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo> group_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host> > host;
        
}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr
        class LastReporter; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter
        class SourceAddress; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter : public Entity
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

}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address
        class SourceAddress; //type: Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address> address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress> > source_address;
        
}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address : public Entity
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

}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address


class Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress


class Igmp::Active::DefaultContext::InterfaceTable : public Entity
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

        class Interface; //type: Igmp::Active::DefaultContext::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceTable::Interface> > interface;
        
}; // Igmp::Active::DefaultContext::InterfaceTable


class Igmp::Active::DefaultContext::InterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::InterfaceTable::Interface


class Igmp::Active::DefaultContext::InterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceTable::Interface::Address


class Igmp::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceTable::Interface::QuerierAddress


class Igmp::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceTable::Interface::SubscriberAddress


class Igmp::Active::DefaultContext::InterfaceOldFormats : public Entity
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

        class InterfaceOldFormat; //type: Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;
        
}; // Igmp::Active::DefaultContext::InterfaceOldFormats


class Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::Address


class Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress


class Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress


class Igmp::Active::DefaultContext::InterfaceStateOffOldFormats : public Entity
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

        class InterfaceStateOffOldFormat; //type: Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat> > interface_state_off_old_format;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOffOldFormats


class Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat


class Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address


class Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress


class Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress


class Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts : public Entity
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

        class InterfaceUnicastQosAdjust; //type: Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts


class Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public Entity
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
        class Update; //type: Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public Entity
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
        class SourceAddress; //type: Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Igmp::Active::DefaultContext::Ranges : public Entity
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

        class Range; //type: Igmp::Active::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Ranges::Range> > range;
        
}; // Igmp::Active::DefaultContext::Ranges


class Igmp::Active::DefaultContext::Ranges::Range : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::DefaultContext::Ranges::Range


class Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr


class Igmp::Active::DefaultContext::IfrsInterfaces : public Entity
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

        class IfrsInterface; //type: Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;
        
}; // Igmp::Active::DefaultContext::IfrsInterfaces


class Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface : public Entity
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
        class IgmpInterfaceEntry; //type: Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry> igmp_interface_entry;
        
}; // Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface


class Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry


class Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address : public Entity
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

}; // Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address


class Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress


class Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress


class Igmp::Active::DefaultContext::TrafficCounters : public Entity
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

}; // Igmp::Active::DefaultContext::TrafficCounters


class Igmp::Active::DefaultContext::Groups : public Entity
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

        class Group; //type: Igmp::Active::DefaultContext::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Groups::Group> > group;
        
}; // Igmp::Active::DefaultContext::Groups


class Igmp::Active::DefaultContext::Groups::Group : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr
        class LastReporter; //type: Igmp::Active::DefaultContext::Groups::Group::LastReporter
        class SourceAddress; //type: Igmp::Active::DefaultContext::Groups::Group::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Groups::Group::LastReporter> last_reporter;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::Groups::Group::SourceAddress> source_address;
        
}; // Igmp::Active::DefaultContext::Groups::Group


class Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr


class Igmp::Active::DefaultContext::Groups::Group::LastReporter : public Entity
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

}; // Igmp::Active::DefaultContext::Groups::Group::LastReporter


class Igmp::Active::DefaultContext::Groups::Group::SourceAddress : public Entity
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

}; // Igmp::Active::DefaultContext::Groups::Group::SourceAddress


class Igmp::Active::DefaultContext::GroupSummary : public Entity
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

}; // Igmp::Active::DefaultContext::GroupSummary


class Igmp::Active::DefaultContext::IfrsInterfaceSummary : public Entity
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

}; // Igmp::Active::DefaultContext::IfrsInterfaceSummary


class Igmp::Active::DefaultContext::GlobalInterfaceTable : public Entity
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

        class Interface; //type: Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface> > interface;
        
}; // Igmp::Active::DefaultContext::GlobalInterfaceTable


class Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface


class Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address : public Entity
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

}; // Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address


class Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress


class Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress


class Igmp::Active::DefaultContext::SsmMapDetails : public Entity
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

        class SsmMapDetail; //type: Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Igmp::Active::DefaultContext::SsmMapDetails


class Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail : public Entity
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
        class MapInfo; //type: Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail


class Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo : public Entity
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
        class GroupAddressXr; //type: Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo


class Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public Entity
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

}; // Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources : public Entity
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

}; // Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources


class Igmp::Active::DefaultContext::InterfaceStateOffs : public Entity
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

        class InterfaceStateOff; //type: Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff> > interface_state_off;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOffs


class Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff : public Entity
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
        class Address; //type: Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address
        class QuerierAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress
        class SubscriberAddress; //type: Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address> address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress> querier_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress> subscriber_address;
        
}; // Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff


class Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address


class Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress


class Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public Entity
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

}; // Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Igmp::Active::DefaultContext::InterfaceOldFormatStateOns : public Entity
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

        class InterfaceOldFormatStateOn; //type: Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_igmp_oper::Igmp::Active::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn> > interface_old_format_state_on;
        
}; // Igmp::Active::DefaultContext::InterfaceOldFormatStateOns


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_4_ */

