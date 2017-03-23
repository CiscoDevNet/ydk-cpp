#ifndef _CISCO_IOS_XR_IFMGR_CFG_1_
#define _CISCO_IOS_XR_IFMGR_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress : public Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap : public Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress : public Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorMap; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap> flow_monitor_map;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap : public Entity
{
    public:
        FlowMonitorMap();
        ~FlowMonitorMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ingress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress
        class Egress; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress> egress;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress> ingress;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress : public Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress : public Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowMonitorName; //type: InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress


class InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName : public Entity
{
    public:
        FlowMonitorName();
        ~FlowMonitorName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_map_name; //type: string
        YLeaf sampler_map_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName


class InterfaceConfigurations::InterfaceConfiguration::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lldp_intf_enter; //type: boolean

        class Transmit; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit
        class Receive; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive> receive;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit> transmit;


}; // InterfaceConfigurations::InterfaceConfiguration::Lldp


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit : public Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive


class InterfaceConfigurations::InterfaceConfiguration::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_vpi_bits; //type: AtmVpiBitsModeEnum
        YLeaf vc_class; //type: string

        class Pvps; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps
        class Pvcs; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs
        class MaximumCellPackingTimers; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers
        class VpTunnels; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers> maximum_cell_packing_timers; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs> pvcs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps> pvps;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels> vp_tunnels;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps : public Entity
{
    public:
        Pvps();
        ~Pvps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pvp; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp> > pvp;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp : public Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf enable; //type: empty
        YLeaf test_mode; //type: AtmPvpTestModeEnum
        YLeaf oam_segment_endpoint; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking> cell_packing; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmPvcShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking : public Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_cells_packed; //type: uint32
        YLeaf cell_packing_timer_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs : public Entity
{
    public:
        Pvcs();
        ~Pvcs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pvc; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc> > pvc;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc : public Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf vci; //type: uint32
        YLeaf pv_ctype; //type: AtmPvcDataEnum
        YLeaf vc_class; //type: string
        YLeaf encapsulation; //type: AtmPvcEncapsulationEnum
        YLeaf enable; //type: empty
        YLeaf test_mode; //type: AtmPvcTestModeEnum
        YLeaf oam_segment_endpoint; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape
        class OamEmulation; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking> cell_packing; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation> oam_emulation;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmPvcShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation : public Entity
{
    public:
        OamEmulation();
        ~OamEmulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf ais_transmit_rate; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking : public Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_cells_packed; //type: uint32
        YLeaf cell_packing_timer_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers : public Entity
{
    public:
        MaximumCellPackingTimers();
        ~MaximumCellPackingTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cell_packing_timer1; //type: uint32
        YLeaf cell_packing_timer2; //type: uint32
        YLeaf cell_packing_timer3; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels : public Entity
{
    public:
        VpTunnels();
        ~VpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VpTunnel; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel> > vp_tunnel;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel : public Entity
{
    public:
        VpTunnel();
        ~VpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpi; //type: uint32
        YLeaf enable_hierarchical_shaping; //type: empty
        YLeaf enable; //type: empty
        YLeaf disable_f4oam; //type: empty

        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape> shape;


}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: AtmVpShapingEnum
        YLeaf peak_cell_rate; //type: uint32
        YLeaf sustained_cell_rate; //type: uint32
        YLeaf burst_size; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape


class InterfaceConfigurations::InterfaceConfiguration::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpSubscriber; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber> ip_subscriber;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber : public Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscriber_templates; //type: uint32
        YLeaf interface; //type: empty

        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4
        class SessionLimit; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit
        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit> session_limit;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected> l2_connected;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed> routed;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected : public Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dhcp; //type: empty

        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol : public Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf address_unique; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed : public Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unclassified_ip; //type: empty
        YLeaf dhcp; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit : public Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Total; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total
        class UnclassifiedSource; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total> total;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource> unclassified_source;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource : public Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf per_vlan; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected> l2_connected;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed> routed;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected : public Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dhcp; //type: empty

        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol : public Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf address_unique; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed : public Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator> initiator;


}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator : public Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unclassified_ip; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Dagrs : public Entity
{
    public:
        Dagrs();
        ~Dagrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Dagr; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr> > dagr;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr : public Entity
{
    public:
        Dagr();
        ~Dagr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_addr; //type: string
        YLeaf enter; //type: empty

        class Sub; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub> sub;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub : public Entity
{
    public:
        Sub();
        ~Sub();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_timeout; //type: uint32

        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric
        class Timers; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers
        class Distance; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance> distance;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric> metric;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers> timers;


}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_norm; //type: uint32
        YLeaf metric_prio; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf query_time; //type: uint32
        YLeaf sby_time; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dist_norm; //type: uint32
        YLeaf dist_prio; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp : public Entity
{
    public:
        Ipv4Arp();
        ~Ipv4Arp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf learning_local; //type: empty
        YLeaf gratuitous_ignore; //type: empty
        YLeaf proxy_arp; //type: empty
        YLeaf purge_delay; //type: uint32
        YLeaf learning_disable; //type: empty
        YLeaf local_proxy_arp; //type: empty
        YLeaf timeout; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp


class InterfaceConfigurations::InterfaceConfiguration::ClientPort : public Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LogicalChannelAssignments; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments
        class Channels; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels> channels;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments> logical_channel_assignments;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments : public Entity
{
    public:
        LogicalChannelAssignments();
        ~LogicalChannelAssignments();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LogicalChannelAssignment; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment : public Entity
{
    public:
        LogicalChannelAssignment();
        ~LogicalChannelAssignment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf assignment_index; //type: int32
        YLeaf allocation; //type: int32
        YLeaf logical_channel_id; //type: int32
        YLeaf description; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels : public Entity
{
    public:
        Channels();
        ~Channels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Channel; //type: InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel> > channel;


}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels


class InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel : public Entity
{
    public:
        Channel();
        ~Channel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32
        YLeaf channel_description; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes : public Entity
{
    public:
        TunnelTeAttributes();
        ~TunnelTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_protection; //type: empty
        YLeaf forward_class; //type: uint32
        YLeaf destination; //type: string
        YLeaf record_route; //type: empty
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf soft_preemption; //type: empty
        YLeaf load_share; //type: uint32
        YLeaf signalled_name; //type: string

        class BackupBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth
        class BfdOverLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp
        class BindingSegmentIdMpls; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls
        class ForwardingAdjacency; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency
        class PathOptionProtects; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects
        class Bidirectional; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional
        class AdminMode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode
        class Switching; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching
        class Pce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce
        class TunnelPathSelection; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection
        class AutoBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth
        class Autoroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute
        class PolicyClasses; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode> admin_mode;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth> backup_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional> bidirectional;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls> binding_segment_id_mpls;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency> forwarding_adjacency;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects> path_option_protects;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce> pce;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses> policy_classes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority> priority; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching> switching;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection> tunnel_path_selection;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth : public Entity
{
    public:
        BackupBandwidth();
        ~BackupBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf pool_type; //type: MplsTeBackupBandwidthPoolEnum
        YLeaf class_type; //type: MplsTeBackupBandwidthClassEnum
        YLeaf limit_type; //type: MplsTeBandwidthLimitEnum
        YLeaf backup_bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp : public Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dampening_initial_wait; //type: uint32
        YLeaf fast_detect; //type: MplsTebfdSessionEnum
        YLeaf enable; //type: empty
        YLeaf multiplier; //type: uint32
        YLeaf bringup_timeout; //type: uint32
        YLeaf periodic_ping_disable; //type: empty
        YLeaf dampening_secondary_wait; //type: uint32
        YLeaf periodic_ping_interval; //type: uint32
        YLeaf dampening_maximum_wait; //type: uint32
        YLeaf minimum_interval; //type: uint32
        YLeaf encap_mode; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls : public Entity
{
    public:
        BindingSegmentIdMpls();
        ~BindingSegmentIdMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_id_type; //type: BindingSegmentIdEnum
        YLeaf label_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency : public Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf include_ipv6; //type: empty
        YLeaf hold_time; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects : public Entity
{
    public:
        PathOptionProtects();
        ~PathOptionProtects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOptionProtect; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect> > path_option_protect;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect : public Entity
{
    public:
        PathOptionProtect();
        ~PathOptionProtect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protection; //type: MplsTePathOptionProtectionEnum

        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions> path_options;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption> > path_option;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf path_property; //type: int32
        YLeaf interface; //type: string
        YLeaf output_label; //type: int32
        YLeaf destination; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
        YLeaf verbatim; //type: MplsTePathOptionPropertyEnum
        YLeaf pce; //type: MplsTePathOptionPropertyEnum
        YLeaf pce_address; //type: string
        YLeaf igp_type; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: int32
        YLeaf igp_area_ip_address_id; //type: string
        YLeaf path_option_attribute_set_name; //type: string
        YLeaf protected_by_preference_level; //type: uint32
        YLeaf segment_routing; //type: MplsTePathOptionPropertyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional : public Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: empty

        class AssociationCoroutedType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType
        class AssociationParameters; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType> association_corouted_type;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters> association_parameters; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType : public Entity
{
    public:
        AssociationCoroutedType();
        ~AssociationCoroutedType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wrap_protection_enable; //type: empty
        YLeaf enable; //type: empty

        class FaultOam; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam> fault_oam;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam : public Entity
{
    public:
        FaultOam();
        ~FaultOam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters : public Entity
{
    public:
        AssociationParameters();
        ~AssociationParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_id; //type: uint32
        YLeaf association_source_address; //type: string
        YLeaf association_is_global_id_configured; //type: boolean
        YLeaf association_global_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode : public Entity
{
    public:
        AdminMode();
        ~AdminMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf deactivate_tunnel; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching : public Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Transit; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit
        class Endpoint; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint> endpoint; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit> transit; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit : public Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability; //type: MplsTeSwitchingCapEnum
        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint : public Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability; //type: MplsTeSwitchingCapEnum
        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf delegation; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection : public Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
        YLeaf path_selection_hop_limit; //type: uint32
        YLeaf path_selection_cost_limit; //type: uint32

        class Invalidation; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth : public Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_enable; //type: boolean
        YLeaf enabled; //type: boolean
        YLeaf application_frequency; //type: uint32
        YLeaf overflow_enable; //type: boolean
        YLeaf collection_only; //type: empty

        class Underflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow
        class Overflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow> underflow; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow : public Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_threshold_percent; //type: uint32
        YLeaf underflow_threshold_value; //type: uint32
        YLeaf underflow_threshold_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow : public Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overflow_threshold_percent; //type: uint32
        YLeaf overflow_threshold_value; //type: uint32
        YLeaf overflow_threshold_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits : public Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_min_limit; //type: uint32
        YLeaf bandwidth_max_limit; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold : public Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjustment_threshold_percent; //type: uint32
        YLeaf adjustment_threshold_value; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_switch_over_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf record_route_messsage; //type: empty
        YLeaf bfd_state_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf reroute_messsage; //type: empty
        YLeaf state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf pcalc_failure_message; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: empty

        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric
        class AutorouteAnnounce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce
        class DestinationXr; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr> destination_xr;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric> metric;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce : public Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf include_ipv6; //type: empty

        class ExcludeTraffic; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric> metric;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_routing; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr : public Entity
{
    public:
        DestinationXr();
        ~DestinationXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination> > destination;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses : public Entity
{
    public:
        PolicyClasses();
        ~PolicyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList policy_class; //type: list of  uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinityAffinityType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_protection; //type: uint32
        YLeaf node_protection; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel : public Entity
{
    public:
        TransportProfileTunnel();
        ~TransportProfileTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string

        class Bfd; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd
        class WorkingLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination
        class Fault; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault
        class ProtectLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault> fault;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp> working_lsp;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf enable; //type: empty
        YLeaf multiplier_standby; //type: uint32

        class MinInterval; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval
        class MinIntervalStandby; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval> min_interval;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby> min_interval_standby;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval : public Entity
{
    public:
        MinInterval();
        ~MinInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_ms; //type: uint32
        YLeaf interval_us; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby : public Entity
{
    public:
        MinIntervalStandby();
        ~MinIntervalStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_standby_ms; //type: uint32
        YLeaf interval_standby_us; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf lockout; //type: empty
        YLeaf lsp_id; //type: uint32

        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel> out_label; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel : public Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf link; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf global_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault : public Entity
{
    public:
        Fault();
        ~Fault();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class ProtectionTrigger; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger> protection_trigger;


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger : public Entity
{
    public:
        ProtectionTrigger();
        ~ProtectionTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldi; //type: boolean
        YLeaf ais; //type: boolean
        YLeaf lkr; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf lockout; //type: empty
        YLeaf lsp_id; //type: uint32

        class OutLabel; //type: InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel> out_label; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp


class InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel : public Entity
{
    public:
        OutLabel();
        ~OutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf link; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes : public Entity
{
    public:
        MteTunnelAttributes();
        ~MteTunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf record_route; //type: empty
        YLeaf signalled_name; //type: string
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf signalled_payload; //type: string
        YLeaf fast_reroute; //type: empty
        YLeaf impose_explicit_null; //type: empty

        class DestinationLeafs; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority
        class NewStyleAffinities; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask> affinity_mask;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs> destination_leafs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities> new_style_affinities;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority> priority;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs : public Entity
{
    public:
        DestinationLeafs();
        ~DestinationLeafs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestinationLeaf; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf> > destination_leaf;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf : public Entity
{
    public:
        DestinationLeaf();
        ~DestinationLeaf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf destination_disable; //type: empty
        YLeaf destination; //type: empty

        class S2LLogging; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging
        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions> path_options;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging> s2l_logging;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging : public Entity
{
    public:
        S2LLogging();
        ~S2LLogging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_reroute_messsage; //type: empty
        YLeaf s2l_insufficient_bw_messsage; //type: empty
        YLeaf s2l_pcalc_failure_message; //type: empty
        YLeaf s2l_state_message; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption> > path_option;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
        YLeaf verbatim; //type: MplsTePathOptionPropertyEnum



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities : public Entity
{
    public:
        NewStyleAffinities();
        ~NewStyleAffinities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinity; //type: InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity> > new_style_affinity;


}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity : public Entity
{
    public:
        NewStyleAffinity();
        ~NewStyleAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf pcalc_failure_message; //type: empty
        YLeaf state_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf sub_lsp_state_message; //type: empty
        YLeaf reroute_messsage; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp : public Entity
{
    public:
        TunnelIp();
        ~TunnelIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_key; //type: empty
        YLeaf ttl; //type: uint32
        YLeaf tunnel_vrf; //type: string
        YLeaf tos; //type: uint32
        YLeaf disable; //type: int32

        class Mode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode
        class Source; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source
        class Key; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key
        class Keepalive; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key> key;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode> mode;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source> source;


}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: int32
        YLeaf decap; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: int32
        YLeaf address; //type: string
        YLeaf interface_name; //type: string
        YLeaf ipv6_address; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entropy; //type: empty
        YLeaf value_; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf keep_alive_period; //type: uint32
        YLeaf keep_alive_retries; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: int32
        YLeaf address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf address_mask; //type: string
        YLeaf prefix_list_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession : public Entity
{
    public:
        SsrpSession();
        ~SsrpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupId; //type: InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId> group_id;


}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId : public Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group; //type: uint32
        YLeaf id; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess : public Entity
{
    public:
        NvSatelliteAccess();
        ~NvSatelliteAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos> qos;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink : public Entity
{
    public:
        NvSatelliteFabricLink();
        ~NvSatelliteFabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite; //type: uint32
        YLeaf minimum_required_links; //type: uint32

        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos
        class EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures> ethernet_features;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos> qos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts> remote_ports;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32
        YLeaf minimum_preferred_links; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_1_ */

