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


class OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef::State> state;
        
}; // OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef


class OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf subinterface; //type: uint32

}; // OcAftL3::Vrfs::Vrf::AbstractForwardingTables::Ipv4Unicast::PrefixEntries::PrefixEntry::NextHop::InterfaceRef::State

class MplsForwarding : public ydk::Entity
{
    public:
        MplsForwarding();
        ~MplsForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: MplsForwarding::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes> nodes;
        
}; // MplsForwarding


class MplsForwarding::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: MplsForwarding::Nodes::Node

        ydk::YList node;
        
}; // MplsForwarding::Nodes


class MplsForwarding::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class ForwardingSummary; //type: MplsForwarding::Nodes::Node::ForwardingSummary
        class FrrLogs; //type: MplsForwarding::Nodes::Node::FrrLogs
        class LabelFib; //type: MplsForwarding::Nodes::Node::LabelFib
        class Tunnel; //type: MplsForwarding::Nodes::Node::Tunnel
        class FrrDatabase; //type: MplsForwarding::Nodes::Node::FrrDatabase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs> frr_logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib> label_fib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase> frr_database;
        
}; // MplsForwarding::Nodes::Node


class MplsForwarding::Nodes::Node::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_imposition_entries; //type: uint32
        ydk::YLeaf reserved_label_entries; //type: uint32
        ydk::YLeaf label_switched_entries; //type: uint32
        ydk::YLeaf deleted_stale_entries; //type: uint32
        ydk::YLeaf te_head_entries; //type: uint32
        ydk::YLeaf te_frr_head_entries; //type: uint32
        ydk::YLeaf te_frr_interface_entries; //type: uint32
        ydk::YLeaf te_frr_next_hop_entries; //type: uint32
        ydk::YLeaf te_mid_points_entries; //type: uint32
        ydk::YLeaf te_frr_mid_points_entries; //type: uint32
        ydk::YLeaf te_internal_entries; //type: uint32
        ydk::YLeaf te_frr_internal_entries; //type: uint32
        ydk::YLeaf total_forwarding_updates; //type: uint32
        ydk::YLeaf total_forwarding_update_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_updates; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
        ydk::YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
        ydk::YLeaf lowest_label; //type: uint32
        ydk::YLeaf highest_label; //type: uint32
        ydk::YLeaf ignore_protect; //type: uint32
        ydk::YLeaf mte_head_entries; //type: uint32
        ydk::YLeaf mte_ll_entries; //type: uint32
        ydk::YLeaf mte_midpoint_entries; //type: uint32
        ydk::YLeaf global_dropped_packets; //type: uint64
        ydk::YLeaf global_fragmented_packets; //type: uint64
        ydk::YLeaf global_failed_lookups; //type: uint64
        ydk::YLeaf lrpf_entries; //type: uint32

}; // MplsForwarding::Nodes::Node::ForwardingSummary


class MplsForwarding::Nodes::Node::FrrLogs : public ydk::Entity
{
    public:
        FrrLogs();
        ~FrrLogs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLog; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog

        ydk::YList frr_log;
        
}; // MplsForwarding::Nodes::Node::FrrLogs


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog : public ydk::Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf protected_frr_interface_name; //type: string
        ydk::YLeaf next_hop; //type: uint32
        ydk::YLeaf number_of_rewrites_affected; //type: uint32
        ydk::YLeaf switching_time_nsecs; //type: uint32
        ydk::YLeaf main_processing; //type: uint32
        ydk::YLeaf fast_bundle_member_down_interface; //type: uint32
        ydk::YLeaf frr_event_node_id; //type: string
        class StartTime; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime> start_time;
        
}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime


class MplsForwarding::Nodes::Node::LabelFib : public ydk::Entity
{
    public:
        LabelFib();
        ~LabelFib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetails; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails
        class Informations; //type: MplsForwarding::Nodes::Node::LabelFib::Informations
        class LabelSecurity; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations> informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity> label_security;
        
}; // MplsForwarding::Nodes::Node::LabelFib


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails : public ydk::Entity
{
    public:
        ForwardingDetails();
        ~ForwardingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail

        ydk::YList forwarding_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail : public ydk::Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

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
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
        ydk::YList label_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


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


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation : public ydk::Entity
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
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


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

        ydk::YList label_stack;
        
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

        ydk::YList information;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
        ydk::YList label_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


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

        ydk::YList label_stack;
        
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

        ydk::YList interface;
        
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

        ydk::YList forwarding_tunnel;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
        ydk::YList label_information;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


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

        ydk::YList label_stack;
        
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


class MplsForwarding::Nodes::Node::FrrDatabase : public ydk::Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary
        class FrrdbProtectedInterfaceTableSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries
        class FrrdbTunnelMidpointSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary
        class FrrdbTunnelMidpoints; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints
        class FrrdbTunnelHeads; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads
        class FrrdbTunnelHeadSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary
        class FrrdbBackupInterfaceSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary> frrdb_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries> frrdb_protected_interface_table_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary> frrdb_tunnel_midpoint_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints> frrdb_tunnel_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads> frrdb_tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary> frrdb_tunnel_head_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries> frrdb_backup_interface_summaries;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary : public ydk::Entity
{
    public:
        FrrdbSummary();
        ~FrrdbSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummaries();
        ~FrrdbProtectedInterfaceTableSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbProtectedInterfaceTableSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary

        ydk::YList frrdb_protected_interface_table_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummary();
        ~FrrdbProtectedInterfaceTableSummary();

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
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary : public ydk::Entity
{
    public:
        FrrdbTunnelMidpointSummary();
        ~FrrdbTunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoints();
        ~FrrdbTunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelMidpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint

        ydk::YList frrdb_tunnel_midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoint();
        ~FrrdbTunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId> frr_entry_id;
        ydk::YList multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads : public ydk::Entity
{
    public:
        FrrdbTunnelHeads();
        ~FrrdbTunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelHead; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead

        ydk::YList frrdb_tunnel_head;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead : public ydk::Entity
{
    public:
        FrrdbTunnelHead();
        ~FrrdbTunnelHead();

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
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId> frr_entry_id;
        ydk::YList multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary : public ydk::Entity
{
    public:
        FrrdbTunnelHeadSummary();
        ~FrrdbTunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummaries();
        ~FrrdbBackupInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbBackupInterfaceSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary

        ydk::YList frrdb_backup_interface_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummary();
        ~FrrdbBackupInterfaceSummary();

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
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_3_ */

