#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_1_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_fib_common_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_oper {


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation : public Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation : public Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_mol_base_flags; //type: uint32
        YLeaf multicast_mol_flags; //type: uint16
        YLeaf multicast_mol_referance_count; //type: uint16
        YLeaf multicast_tunnel_interface_handler; //type: string
        YLeaf multicast_tunnel_id; //type: uint32
        YLeaf multicast_tunnel_next_hop_information; //type: uint32
        YLeaf multicast_tunnel_lspvif; //type: uint32
        YLeaf multicast_mpls_output_paths; //type: uint16
        YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        YLeaf multicast_mpls_local_output_paths; //type: uint16
        YLeaf multicast_rpf_id; //type: uint32
        YLeaf multicast_encap_id; //type: uint32
        YLeaf multicast_platform_data_length; //type: uint8
        YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation : public Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_information_type; //type: uint32
        YLeaf local_label; //type: uint32
        YLeaf outgoing_label; //type: uint32
        YLeaf mpls_adjacency_flags; //type: uint32
        YLeaf tunnel_id_present; //type: boolean
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_physical_interface; //type: string
        YLeaf tunnel_interface; //type: string
        YLeaf label_information_path_index; //type: uint32
        YLeaf label_information_next_hop_type; //type: NextHopEnum
        YLeaf label_information_next_hop_protocol; //type: ProtoEnum
        YLeaf tx_bytes; //type: uint64
        YLeaf tx_packets; //type: uint64
        YLeaf outgoing_interface_string; //type: string
        YLeaf outgoing_label_string; //type: string
        YLeaf prefix_or_id; //type: string
        YLeaf label_information_next_hop_string; //type: string
        YLeaf label_information_route_version; //type: uint64
        YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail : public Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3_mtu; //type: uint32
        YLeaf total_encapsulation_size; //type: uint32
        YLeaf mac_size; //type: uint32
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf status; //type: int32
        YLeaf next_hop_interface; //type: string
        YLeaf next_hop_protocol; //type: ProtoEnum
        YLeaf next_hop_string; //type: string
        YLeafList label_stack; //type: list of  uint32

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::Informations : public Entity
{
    public:
        Informations();
        ~Informations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information> > information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_value; //type: uint32
        YLeaf eos; //type: MplseosEnum
        YLeaf leaf_local_label; //type: uint32
        YLeaf eos_bit; //type: uint32
        YLeaf hardware_information; //type: string
        YLeaf leaf_referance_count; //type: uint32
        YLeaf leaf_flags; //type: uint32
        YLeaf path_list_referance_count; //type: uint32
        YLeaf path_list_flags; //type: uint32
        YLeaf ldi_referance_count; //type: uint32
        YLeaf ldi_flags; //type: uint32
        YLeaf ldi_type; //type: uint32
        YLeaf ldi_pointer; //type: uint32
        YLeaf lw_ldi_type; //type: uint32
        YLeaf lw_ldi_pointer; //type: uint32
        YLeaf lw_ldi_refernace_count; //type: uint32
        YLeaf lw_shared_ldi_pointer; //type: uint32
        YLeaf lspa_flags; //type: uint32
        YLeaf afi_table_id; //type: uint32
        YLeaf multicast_label; //type: boolean
        YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation : public Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation : public Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_mol_base_flags; //type: uint32
        YLeaf multicast_mol_flags; //type: uint16
        YLeaf multicast_mol_referance_count; //type: uint16
        YLeaf multicast_tunnel_interface_handler; //type: string
        YLeaf multicast_tunnel_id; //type: uint32
        YLeaf multicast_tunnel_next_hop_information; //type: uint32
        YLeaf multicast_tunnel_lspvif; //type: uint32
        YLeaf multicast_mpls_output_paths; //type: uint16
        YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        YLeaf multicast_mpls_local_output_paths; //type: uint16
        YLeaf multicast_rpf_id; //type: uint32
        YLeaf multicast_encap_id; //type: uint32
        YLeaf multicast_platform_data_length; //type: uint8
        YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation : public Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_information_type; //type: uint32
        YLeaf local_label; //type: uint32
        YLeaf outgoing_label; //type: uint32
        YLeaf mpls_adjacency_flags; //type: uint32
        YLeaf tunnel_id_present; //type: boolean
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_physical_interface; //type: string
        YLeaf tunnel_interface; //type: string
        YLeaf label_information_path_index; //type: uint32
        YLeaf label_information_next_hop_type; //type: NextHopEnum
        YLeaf label_information_next_hop_protocol; //type: ProtoEnum
        YLeaf tx_bytes; //type: uint64
        YLeaf tx_packets; //type: uint64
        YLeaf outgoing_interface_string; //type: string
        YLeaf outgoing_label_string; //type: string
        YLeaf prefix_or_id; //type: string
        YLeaf label_information_next_hop_string; //type: string
        YLeaf label_information_route_version; //type: uint64
        YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail : public Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3_mtu; //type: uint32
        YLeaf total_encapsulation_size; //type: uint32
        YLeaf mac_size; //type: uint32
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf status; //type: int32
        YLeaf next_hop_interface; //type: string
        YLeaf next_hop_protocol; //type: ProtoEnum
        YLeaf next_hop_string; //type: string
        YLeafList label_stack; //type: list of  uint32

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity : public Entity
{
    public:
        LabelSecurity();
        ~LabelSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces
        class Summary; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary> summary;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface> > interface;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface : public Entity
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
        YLeaf rpf_enabled; //type: boolean
        YLeaf rpf_supported; //type: boolean
        YLeaf mld_enabled; //type: boolean
        YLeaf mld_supported; //type: boolean
        YLeaf rpf_drops; //type: uint64
        YLeaf multi_label_drops; //type: uint64
        YLeaf rpfifh; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary : public Entity
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

        YLeaf rpf_drops; //type: uint64
        YLeaf multi_label_drops; //type: uint64

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary


class MplsForwarding::Nodes::Node::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingTunnels; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels> forwarding_tunnels;
        
}; // MplsForwarding::Nodes::Node::Tunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels : public Entity
{
    public:
        ForwardingTunnels();
        ~ForwardingTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingTunnel; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel> > forwarding_tunnel;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel : public Entity
{
    public:
        ForwardingTunnel();
        ~ForwardingTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class TunnelInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo
        class Fwdg; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo : public Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint8
        YLeaf tunnel_is_srte; //type: boolean
        YLeaf tunnel_resolution_incomplete; //type: boolean
        YLeaf tunnel_resolution_inconsistent; //type: boolean
        YLeaf tunnel_is_programmed_to_drop; //type: boolean
        YLeaf tli_type; //type: uint32
        YLeaf tli_pointer; //type: uint32
        YLeaf tli_reference_count; //type: uint32
        YLeaf tli_flags; //type: uint32
        YLeaf tli_flags_extended; //type: uint32

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg : public Entity
{
    public:
        Fwdg();
        ~Fwdg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf leaf_local_label; //type: uint32
        YLeaf eos_bit; //type: uint32
        YLeaf hardware_information; //type: string
        YLeaf leaf_referance_count; //type: uint32
        YLeaf leaf_flags; //type: uint32
        YLeaf path_list_referance_count; //type: uint32
        YLeaf path_list_flags; //type: uint32
        YLeaf ldi_referance_count; //type: uint32
        YLeaf ldi_flags; //type: uint32
        YLeaf ldi_type; //type: uint32
        YLeaf ldi_pointer; //type: uint32
        YLeaf lw_ldi_type; //type: uint32
        YLeaf lw_ldi_pointer; //type: uint32
        YLeaf lw_ldi_refernace_count; //type: uint32
        YLeaf lw_shared_ldi_pointer; //type: uint32
        YLeaf lspa_flags; //type: uint32
        YLeaf afi_table_id; //type: uint32
        YLeaf multicast_label; //type: boolean
        YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation> > label_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation : public Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation : public Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_mol_base_flags; //type: uint32
        YLeaf multicast_mol_flags; //type: uint16
        YLeaf multicast_mol_referance_count; //type: uint16
        YLeaf multicast_tunnel_interface_handler; //type: string
        YLeaf multicast_tunnel_id; //type: uint32
        YLeaf multicast_tunnel_next_hop_information; //type: uint32
        YLeaf multicast_tunnel_lspvif; //type: uint32
        YLeaf multicast_mpls_output_paths; //type: uint16
        YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        YLeaf multicast_mpls_local_output_paths; //type: uint16
        YLeaf multicast_rpf_id; //type: uint32
        YLeaf multicast_encap_id; //type: uint32
        YLeaf multicast_platform_data_length; //type: uint8
        YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation : public Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_information_type; //type: uint32
        YLeaf local_label; //type: uint32
        YLeaf outgoing_label; //type: uint32
        YLeaf mpls_adjacency_flags; //type: uint32
        YLeaf tunnel_id_present; //type: boolean
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_physical_interface; //type: string
        YLeaf tunnel_interface; //type: string
        YLeaf label_information_path_index; //type: uint32
        YLeaf label_information_next_hop_type; //type: NextHopEnum
        YLeaf label_information_next_hop_protocol; //type: ProtoEnum
        YLeaf tx_bytes; //type: uint64
        YLeaf tx_packets; //type: uint64
        YLeaf outgoing_interface_string; //type: string
        YLeaf outgoing_label_string; //type: string
        YLeaf prefix_or_id; //type: string
        YLeaf label_information_next_hop_string; //type: string
        YLeaf label_information_route_version; //type: uint64
        YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail : public Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l3_mtu; //type: uint32
        YLeaf total_encapsulation_size; //type: uint32
        YLeaf mac_size; //type: uint32
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf status; //type: int32
        YLeaf next_hop_interface; //type: string
        YLeaf next_hop_protocol; //type: ProtoEnum
        YLeaf next_hop_string; //type: string
        YLeafList label_stack; //type: list of  uint32

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::FrrDatabase : public Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrdbSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary
        class FrrdbProtectedInterfaceTableSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries
        class FrrdbTunnelMidpointSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary
        class FrrdbTunnelMidpoints; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints
        class FrrdbTunnelHeads; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads
        class FrrdbTunnelHeadSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary
        class FrrdbBackupInterfaceSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries> frrdb_backup_interface_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries> frrdb_protected_interface_table_summaries;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary> frrdb_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary> frrdb_tunnel_head_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads> frrdb_tunnel_heads;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary> frrdb_tunnel_midpoint_summary;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints> frrdb_tunnel_midpoints;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary : public Entity
{
    public:
        FrrdbSummary();
        ~FrrdbSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries : public Entity
{
    public:
        FrrdbProtectedInterfaceTableSummaries();
        ~FrrdbProtectedInterfaceTableSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrdbProtectedInterfaceTableSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary> > frrdb_protected_interface_table_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary : public Entity
{
    public:
        FrrdbProtectedInterfaceTableSummary();
        ~FrrdbProtectedInterfaceTableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary : public Entity
{
    public:
        FrrdbTunnelMidpointSummary();
        ~FrrdbTunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints : public Entity
{
    public:
        FrrdbTunnelMidpoints();
        ~FrrdbTunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrdbTunnelMidpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint> > frrdb_tunnel_midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint : public Entity
{
    public:
        FrrdbTunnelMidpoint();
        ~FrrdbTunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32
        YLeaf outgoing_lable_string; //type: string
        YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb : public Entity
{
    public:
        FrrDb();
        ~FrrDb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface_name; //type: string
        YLeaf input_label; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_label; //type: uint32
        YLeaf frr_interface_name; //type: string
        YLeaf frr_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
        YLeaf frr_next_hop_ipv4_address; //type: string
        YLeaf is_mldp_lsp; //type: boolean
        YLeaf is_multicast_tunnel; //type: boolean
        YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: MgmtFibMplsLspRoleEnum
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg : public Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface_name; //type: string
        YLeaf input_label; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_label; //type: uint32
        YLeaf frr_interface_name; //type: string
        YLeaf frr_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
        YLeaf frr_next_hop_ipv4_address; //type: string
        YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: MgmtFibMplsLspRoleEnum
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads : public Entity
{
    public:
        FrrdbTunnelHeads();
        ~FrrdbTunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrdbTunnelHead; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead> > frrdb_tunnel_head;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead : public Entity
{
    public:
        FrrdbTunnelHead();
        ~FrrdbTunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf outgoing_lable_string; //type: string
        YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb : public Entity
{
    public:
        FrrDb();
        ~FrrDb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface_name; //type: string
        YLeaf input_label; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_label; //type: uint32
        YLeaf frr_interface_name; //type: string
        YLeaf frr_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
        YLeaf frr_next_hop_ipv4_address; //type: string
        YLeaf is_mldp_lsp; //type: boolean
        YLeaf is_multicast_tunnel; //type: boolean
        YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: MgmtFibMplsLspRoleEnum
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg : public Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface_name; //type: string
        YLeaf input_label; //type: uint32
        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_label; //type: uint32
        YLeaf frr_interface_name; //type: string
        YLeaf frr_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
        YLeaf frr_next_hop_ipv4_address; //type: string
        YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: MgmtFibMplsLspRoleEnum
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary : public Entity
{
    public:
        FrrdbTunnelHeadSummary();
        ~FrrdbTunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries : public Entity
{
    public:
        FrrdbBackupInterfaceSummaries();
        ~FrrdbBackupInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FrrdbBackupInterfaceSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary> > frrdb_backup_interface_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary : public Entity
{
    public:
        FrrdbBackupInterfaceSummary();
        ~FrrdbBackupInterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_1_ */

