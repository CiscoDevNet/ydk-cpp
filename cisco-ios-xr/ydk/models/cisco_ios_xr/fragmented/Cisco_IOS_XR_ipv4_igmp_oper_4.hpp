#ifndef _CISCO_IOS_XR_IPV4_IGMP_OPER_4_
#define _CISCO_IOS_XR_IPV4_IGMP_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_igmp_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {


class Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns : public ydk::Entity
{
    public:
        InterfaceStateOns();
        ~InterfaceStateOns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStateOn; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn> > interface_state_on;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn : public ydk::Entity
{
    public:
        InterfaceStateOn();
        ~InterfaceStateOn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress


class Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface> > interface;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceTable


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf is_interface_up; //type: boolean
        ydk::YLeaf is_ip_enabled; //type: boolean
        ydk::YLeaf is_router_enabled; //type: boolean
        ydk::YLeaf igmp_version; //type: uint8
        ydk::YLeaf host_version; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf query_timeout; //type: uint16
        ydk::YLeaf query_maximum_response_time; //type: uint16
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf group_joins; //type: uint32
        ydk::YLeaf group_leaves; //type: uint32
        ydk::YLeaf is_querier; //type: boolean
        ydk::YLeaf total_active_groups; //type: uint32
        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf proxy_interface; //type: string
        ydk::YLeaf querier_uptime; //type: uint16
        ydk::YLeaf las_ll_registration_count; //type: uint32
        ydk::YLeaf las_get_address_count; //type: uint32
        ydk::YLeaf las_update_count; //type: uint32
        ydk::YLeaf las_ll_remove_update_count; //type: uint32
        ydk::YLeaf las_ll_add_update_count; //type: uint32
        ydk::YLeaf las_null_update_count; //type: uint32
        ydk::YLeaf las_unregistration_count; //type: uint32
        ydk::YLeaf is_las_request; //type: boolean
        ydk::YLeaf is_las_registered; //type: boolean
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf mte_vrf_id; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf vrf_state; //type: uint32
        ydk::YLeaf is_configurationverify; //type: boolean
        ydk::YLeaf configurationvrf_set; //type: boolean
        ydk::YLeaf configurationvrf_error; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_set; //type: boolean
        ydk::YLeaf configuration_mcast_vrf_error; //type: boolean
        ydk::YLeaf is_im_state_registered; //type: boolean
        ydk::YLeaf is_subscriber; //type: boolean
        ydk::YLeaf subscriber_mode; //type: uint32
        ydk::YLeaf is_identity_present; //type: boolean
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32
        ydk::YLeaf mte_tuple_count; //type: uint32
        class Address; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address
        class QuerierAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress
        class SubscriberAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress> querier_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress> subscriber_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::Address


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress : public ydk::Entity
{
    public:
        QuerierAddress();
        ~QuerierAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress


class Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress : public ydk::Entity
{
    public:
        SubscriberAddress();
        ~SubscriberAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjusts();
        ~InterfaceUnicastQosAdjusts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceUnicastQosAdjust; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust> > interface_unicast_qos_adjust;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust : public ydk::Entity
{
    public:
        InterfaceUnicastQosAdjust();
        ~InterfaceUnicastQosAdjust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf is_virtual_access; //type: boolean
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf rate_increments; //type: uint32
        ydk::YLeaf rate_decrements; //type: uint32
        class Update; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update> > update;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_add; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf received_time; //type: uint64
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress
        class GroupAddress; //type: Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress> group_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress


class Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress


class Mld::Standby::Vrfs::Vrf::NonActiveGroups : public ydk::Entity
{
    public:
        NonActiveGroups();
        ~NonActiveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonActiveGroups_; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_> > non_active_groups;
        
}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_ : public ydk::Entity
{
    public:
        NonActiveGroups_();
        ~NonActiveGroups_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf reason_for_non_activity; //type: string
        class GroupAddress; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress
        class SourceAddress; //type: Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress> group_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress> source_address;
        
}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress : public ydk::Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress


class Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress


class Mld::Standby::Vrfs::Vrf::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Mld::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Mld::Standby::Vrfs::Vrf::Ranges


class Mld::Standby::Vrfs::Vrf::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_mask; //type: int32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf protocol; //type: IgmpEdmProtocol
        ydk::YLeaf is_stale; //type: boolean
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::Ranges::Range


class Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::Ranges::Range::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::SsmMapDetails : public ydk::Entity
{
    public:
        SsmMapDetails();
        ~SsmMapDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMapDetail; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail> > ssm_map_detail;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail : public ydk::Entity
{
    public:
        SsmMapDetail();
        ~SsmMapDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf expiration_time; //type: uint32
        ydk::YLeaf response_pending; //type: boolean
        ydk::YLeaf query_interval; //type: uint32
        ydk::YLeaf elapsed_time; //type: uint64
        class MapInfo; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo
        class Sources; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo> map_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources> > sources;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo : public ydk::Entity
{
    public:
        MapInfo();
        ~MapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources


class Mld::Standby::Vrfs::Vrf::SsmMaps : public ydk::Entity
{
    public:
        SsmMaps();
        ~SsmMaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsmMap; //type: Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap> > ssm_map;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMaps


class Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_map_type; //type: IgmpssmMap
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf map_type; //type: uint32
        ydk::YLeaf source_counts; //type: uint32
        class GroupAddressXr; //type: Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr> group_address_xr;
        
}; // Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap


class Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IgmpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Mld::Standby::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr


class Mld::Standby::Vrfs::Vrf::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf robustness; //type: uint32
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf supported_interfaces; //type: uint32
        ydk::YLeaf unsupported_interfaces; //type: uint32
        ydk::YLeaf enabled_interface_count; //type: uint32
        ydk::YLeaf disabled_interface_count; //type: uint32
        ydk::YLeaf tunnel_mte_config_count; //type: uint32
        ydk::YLeaf node_low_memory; //type: boolean
        class Interface; //type: Mld::Standby::Vrfs::Vrf::Summary::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_igmp_oper::Mld::Standby::Vrfs::Vrf::Summary::Interface> > interface;
        
}; // Mld::Standby::Vrfs::Vrf::Summary


class Mld::Standby::Vrfs::Vrf::Summary::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf group_limit; //type: uint32
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf parent_ifhandle; //type: string
        ydk::YLeaf on_off; //type: boolean
        ydk::YLeaf time_since_last_query_in_seconds; //type: uint32
        ydk::YLeaf time_since_last_report_in_seconds; //type: uint32
        ydk::YLeaf router_uptime_in_seconds; //type: uint32

}; // Mld::Standby::Vrfs::Vrf::Summary::Interface


class Mld::Standby::Vrfs::Vrf::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf format_errors; //type: uint32
        ydk::YLeaf packet_manager_input_errors; //type: uint32
        ydk::YLeaf packet_manager_output_errors; //type: uint32
        ydk::YLeaf checksum_errors; //type: uint32
        ydk::YLeaf receive_socket_errors; //type: uint32
        ydk::YLeaf socket_errors; //type: uint32
        ydk::YLeaf bad_scope_errors; //type: uint32
        ydk::YLeaf auxillary_data_length_errors; //type: uint32
        ydk::YLeaf invalid_source_address_errors; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf miscellaneous_errors; //type: uint32
        ydk::YLeaf input_queries; //type: uint32
        ydk::YLeaf input_reports; //type: uint32
        ydk::YLeaf input_leaves; //type: uint32
        ydk::YLeaf input_mtrace; //type: uint32
        ydk::YLeaf input_dvmrp; //type: uint32
        ydk::YLeaf input_pim; //type: uint32
        ydk::YLeaf output_queries; //type: uint32
        ydk::YLeaf output_reports; //type: uint32
        ydk::YLeaf output_leaves; //type: uint32
        ydk::YLeaf output_mtrace; //type: uint32
        ydk::YLeaf output_dvmrp; //type: uint32
        ydk::YLeaf output_pim; //type: uint32
        ydk::YLeaf get_packet_failure; //type: uint32
        ydk::YLeaf output_no_parent_interface_handle; //type: uint32
        ydk::YLeaf input_no_idb; //type: uint32
        ydk::YLeaf input_no_vrf_in_idb; //type: uint32
        ydk::YLeaf input_disabled_idb; //type: uint32
        ydk::YLeaf input_martian_address; //type: uint32
        ydk::YLeaf input_no_assigned_vrf_id; //type: uint32
        ydk::YLeaf input_no_vrf_mtrace; //type: uint32
        ydk::YLeaf input_no_platform_support_mtrace; //type: uint32

}; // Mld::Standby::Vrfs::Vrf::TrafficCounters


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_OPER_4_ */

