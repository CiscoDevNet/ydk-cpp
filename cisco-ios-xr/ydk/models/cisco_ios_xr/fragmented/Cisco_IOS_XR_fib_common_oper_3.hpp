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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary> > frrdb_protected_interface_table_summary;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint> > frrdb_tunnel_midpoint;
        
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
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg> > multicast_leg;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead> > frrdb_tunnel_head;
        
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
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg> > multicast_leg;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary> > frrdb_backup_interface_summary;
        
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

