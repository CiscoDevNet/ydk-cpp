#ifndef _CISCO_IOS_XR_EVPN_OPER_1_
#define _CISCO_IOS_XR_EVPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_evpn_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_evpn_oper {


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ethernet_tag; //type: int32
        YLeaf mac_address; //type: string
        YLeaf ip_address; //type: string
        YLeaf ethernet_tag_xr; //type: uint32
        YLeaf mac_address_xr; //type: string
        YLeaf ip_address_xr; //type: string
        YLeaf local_label; //type: uint32
        YLeaf num_paths; //type: uint32
        YLeaf is_local_mac; //type: boolean
        YLeaf is_remote_mac; //type: boolean
        YLeaf soo_nexthop; //type: string
        YLeaf esi_port_key; //type: uint16
        YLeaf local_encap_type; //type: uint8
        YLeaf remote_encap_type; //type: uint8
        YLeaf learned_bridge_port_name; //type: string
        YLeaf local_seq_id; //type: uint32
        YLeaf remote_seq_id; //type: uint32
        YLeaf mac_flush_requested; //type: uint16
        YLeaf mac_flush_received; //type: uint16
        YLeaf internal_label; //type: uint32
        YLeaf resolved; //type: boolean
        YLeaf is_static; //type: boolean
        YLeafList local_ethernet_segment_identifier; //type: list of  uint8
        YLeafList remote_ethernet_segment_identifier; //type: list of  uint8

        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;


}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf output_label; //type: uint32



}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::EthernetSegments : public Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetSegment; //type: Evpn::Standby::EthernetSegments::EthernetSegment

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment> > ethernet_segment;


}; // Evpn::Standby::EthernetSegments


class Evpn::Standby::EthernetSegments::EthernetSegment : public Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf esi1; //type: string
        YLeaf esi2; //type: string
        YLeaf esi3; //type: string
        YLeaf esi4; //type: string
        YLeaf esi5; //type: string
        YLeaf esi_type; //type: L2VpnEvpnEsiEnum
        YLeaf ethernet_segment_name; //type: string
        YLeaf ethernet_segment_state; //type: uint32
        YLeaf if_handle; //type: string
        YLeaf main_port_role; //type: L2VpnRgStateEnum
        YLeaf main_port_mac; //type: string
        YLeaf num_up_p_ws; //type: uint32
        YLeaf route_target; //type: string
        YLeaf rt_origin; //type: L2VpnEvpnRtOriginEnum
        YLeaf es_bgp_gates; //type: string
        YLeaf es_l2fib_gates; //type: string
        YLeaf mac_flushing_mode_config; //type: L2VpnEvpnMfModeEnum
        YLeaf load_balance_mode_config; //type: L2VpnEvpnLbModeEnum
        YLeaf load_balance_mode_is_default; //type: boolean
        YLeaf load_balance_mode_oper; //type: L2VpnEvpnLbModeEnum
        YLeaf force_single_home; //type: boolean
        YLeaf source_mac_oper; //type: string
        YLeaf source_mac_origin; //type: L2VpnEvpnSmacSrcEnum
        YLeaf peering_timer; //type: uint32
        YLeaf peering_timer_left; //type: uint32
        YLeaf recovery_timer; //type: uint32
        YLeaf recovery_timer_left; //type: uint32
        YLeaf service_carving_mode; //type: L2VpnEvpnScModeEnum
        YLeaf primary_services_input; //type: string
        YLeaf secondary_services_input; //type: string
        YLeaf forwarder_ports; //type: uint32
        YLeaf mp_protected; //type: boolean
        YLeaf service_carving_type; //type: L2VpnEvpnScEnum
        YLeaf elected_d_fs; //type: uint32
        YLeaf not_elected_d_fs; //type: uint32
        YLeaf not_config_d_fs; //type: uint32
        YLeaf local_split_horizon_group_label; //type: uint32
        YLeafList ethernet_segment_identifier; //type: list of  uint8
        YLeafList primary_service; //type: list of  uint32
        YLeafList secondary_service; //type: list of  uint32
        YLeafList service_carving_result; //type: list of  uint32

        class NextHop; //type: Evpn::Standby::EthernetSegments::EthernetSegment::NextHop
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::NextHop> > next_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel> > remote_split_horizon_group_label;


}; // Evpn::Standby::EthernetSegments::EthernetSegment


class Evpn::Standby::EthernetSegments::EthernetSegment::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string



}; // Evpn::Standby::EthernetSegments::EthernetSegment::NextHop


class Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf label; //type: uint32



}; // Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Standby::AcIds : public Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AcId; //type: Evpn::Standby::AcIds::AcId

        std::vector<std::shared_ptr<Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds::AcId> > ac_id;


}; // Evpn::Standby::AcIds


class Evpn::Standby::AcIds::AcId : public Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: int32
        YLeaf ac_id; //type: int32
        YLeaf evi_xr; //type: uint32
        YLeaf neighbor; //type: string



}; // Evpn::Standby::AcIds::AcId


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_1_ */

