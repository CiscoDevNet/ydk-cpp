#ifndef _CISCO_IOS_XR_EVPN_OPER_1_
#define _CISCO_IOS_XR_EVPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_evpn_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf is_static; //type: boolean
        ydk::YLeafList local_ethernet_segment_identifier; //type: list of  uint8
        ydk::YLeafList remote_ethernet_segment_identifier; //type: list of  uint8
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::EthernetSegments : public ydk::Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetSegment; //type: Evpn::Standby::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment> > ethernet_segment;
        
}; // Evpn::Standby::EthernetSegments


class Evpn::Standby::EthernetSegments::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2VpnEvpnEsi
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf ethernet_segment_state; //type: uint32
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf main_port_role; //type: L2VpnRgState
        ydk::YLeaf main_port_mac; //type: string
        ydk::YLeaf num_up_p_ws; //type: uint32
        ydk::YLeaf route_target; //type: string
        ydk::YLeaf rt_origin; //type: L2VpnEvpnRtOrigin
        ydk::YLeaf es_bgp_gates; //type: string
        ydk::YLeaf es_l2fib_gates; //type: string
        ydk::YLeaf mac_flushing_mode_config; //type: L2VpnEvpnMfMode
        ydk::YLeaf load_balance_mode_config; //type: L2VpnEvpnLbMode
        ydk::YLeaf load_balance_mode_is_default; //type: boolean
        ydk::YLeaf load_balance_mode_oper; //type: L2VpnEvpnLbMode
        ydk::YLeaf force_single_home; //type: boolean
        ydk::YLeaf source_mac_oper; //type: string
        ydk::YLeaf source_mac_origin; //type: L2VpnEvpnSmacSrc
        ydk::YLeaf peering_timer; //type: uint32
        ydk::YLeaf peering_timer_left; //type: uint32
        ydk::YLeaf recovery_timer; //type: uint32
        ydk::YLeaf recovery_timer_left; //type: uint32
        ydk::YLeaf service_carving_mode; //type: L2VpnEvpnScMode
        ydk::YLeaf primary_services_input; //type: string
        ydk::YLeaf secondary_services_input; //type: string
        ydk::YLeaf forwarder_ports; //type: uint32
        ydk::YLeaf mp_protected; //type: boolean
        ydk::YLeaf service_carving_type; //type: L2VpnEvpnSc
        ydk::YLeaf elected_d_fs; //type: uint32
        ydk::YLeaf not_elected_d_fs; //type: uint32
        ydk::YLeaf not_config_d_fs; //type: uint32
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        ydk::YLeafList ethernet_segment_identifier; //type: list of  uint8
        ydk::YLeafList primary_service; //type: list of  uint32
        ydk::YLeafList secondary_service; //type: list of  uint32
        ydk::YLeafList service_carving_result; //type: list of  uint32
        class NextHop; //type: Evpn::Standby::EthernetSegments::EthernetSegment::NextHop
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;
        
}; // Evpn::Standby::EthernetSegments::EthernetSegment


class Evpn::Standby::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string

}; // Evpn::Standby::EthernetSegments::EthernetSegment::NextHop


class Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Standby::AcIds : public ydk::Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcId; //type: Evpn::Standby::AcIds::AcId

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds::AcId> > ac_id;
        
}; // Evpn::Standby::AcIds


class Evpn::Standby::AcIds::AcId : public ydk::Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ac_id; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Standby::AcIds::AcId


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_1_ */

