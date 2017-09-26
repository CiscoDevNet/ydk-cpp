#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_3_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_fib_common_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations : public ydk::Entity
{
    public:
        Informations();
        ~Informations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information> > information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_value; //type: uint32
        ydk::YLeaf eos; //type: Mplseos
        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf outgoing_parent_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity : public ydk::Entity
{
    public:
        LabelSecurity();
        ~LabelSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces
        class Summary; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary> summary;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface> > interface;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf rpf_enabled; //type: boolean
        ydk::YLeaf rpf_supported; //type: boolean
        ydk::YLeaf mld_enabled; //type: boolean
        ydk::YLeaf mld_supported; //type: boolean
        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64
        ydk::YLeaf rpfifh; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary : public ydk::Entity
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

        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary


class MplsForwarding::Nodes::Node::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnels; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels> forwarding_tunnels;
        
}; // MplsForwarding::Nodes::Node::Tunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels : public ydk::Entity
{
    public:
        ForwardingTunnels();
        ~ForwardingTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnel; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel> > forwarding_tunnel;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel : public ydk::Entity
{
    public:
        ForwardingTunnel();
        ~ForwardingTunnel();

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
        class TunnelInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo
        class Fwdg; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg : public ydk::Entity
{
    public:
        Fwdg();
        ~Fwdg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation> > label_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf outgoing_parent_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint8
        ydk::YLeaf tunnel_is_srte; //type: boolean
        ydk::YLeaf tunnel_resolution_incomplete; //type: boolean
        ydk::YLeaf tunnel_resolution_inconsistent; //type: boolean
        ydk::YLeaf tunnel_is_programmed_to_drop; //type: boolean

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_3_ */

