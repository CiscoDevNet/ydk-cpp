#ifndef _CISCO_IOS_XR_INFRA_RCMD_CFG_
#define _CISCO_IOS_XR_INFRA_RCMD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_cfg {

class RouterConvergence : public ydk::Entity
{
    public:
        RouterConvergence();
        ~RouterConvergence();

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

        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf prefix_monitor_limit; //type: uint32
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf max_events_stored; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        class Protocols; //type: RouterConvergence::Protocols
        class StorageLocation; //type: RouterConvergence::StorageLocation
        class MplsLdp; //type: RouterConvergence::MplsLdp
        class CollectDiagnostics; //type: RouterConvergence::CollectDiagnostics
        class Nodes; //type: RouterConvergence::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::StorageLocation> storage_location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp> mpls_ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::CollectDiagnostics> collect_diagnostics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Nodes> nodes;
        
}; // RouterConvergence


class RouterConvergence::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

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

        class Protocol; //type: RouterConvergence::Protocols::Protocol

        ydk::YList protocol;
        
}; // RouterConvergence::Protocols


class RouterConvergence::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        ydk::YLeaf protocol_name; //type: ProtocolName
        ydk::YLeaf enable; //type: empty
        class Priorities; //type: RouterConvergence::Protocols::Protocol::Priorities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol::Priorities> priorities;
        
}; // RouterConvergence::Protocols::Protocol


class RouterConvergence::Protocols::Protocol::Priorities : public ydk::Entity
{
    public:
        Priorities();
        ~Priorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: RouterConvergence::Protocols::Protocol::Priorities::Priority

        ydk::YList priority;
        
}; // RouterConvergence::Protocols::Protocol::Priorities


class RouterConvergence::Protocols::Protocol::Priorities::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rcmd_priority; //type: RcmdPriority
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf leaf_networks; //type: uint32
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf frr_threshold; //type: uint32

}; // RouterConvergence::Protocols::Protocol::Priorities::Priority


class RouterConvergence::StorageLocation : public ydk::Entity
{
    public:
        StorageLocation();
        ~StorageLocation();

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

        ydk::YLeaf diagnostics; //type: string
        ydk::YLeaf diagnostics_size; //type: uint32
        ydk::YLeaf reports_size; //type: uint32
        ydk::YLeaf reports; //type: string

}; // RouterConvergence::StorageLocation


class RouterConvergence::MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

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

        class RemoteLfa; //type: RouterConvergence::MplsLdp::RemoteLfa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp::RemoteLfa> remote_lfa;
        
}; // RouterConvergence::MplsLdp


class RouterConvergence::MplsLdp::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

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

        ydk::YLeaf threshold; //type: uint32

}; // RouterConvergence::MplsLdp::RemoteLfa


class RouterConvergence::CollectDiagnostics : public ydk::Entity
{
    public:
        CollectDiagnostics();
        ~CollectDiagnostics();

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

        class CollectDiagnostic; //type: RouterConvergence::CollectDiagnostics::CollectDiagnostic

        ydk::YList collect_diagnostic;
        
}; // RouterConvergence::CollectDiagnostics


class RouterConvergence::CollectDiagnostics::CollectDiagnostic : public ydk::Entity
{
    public:
        CollectDiagnostic();
        ~CollectDiagnostic();

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
        ydk::YLeaf enable; //type: empty

}; // RouterConvergence::CollectDiagnostics::CollectDiagnostic


class RouterConvergence::Nodes : public ydk::Entity
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

        class Node; //type: RouterConvergence::Nodes::Node

        ydk::YList node;
        
}; // RouterConvergence::Nodes


class RouterConvergence::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // RouterConvergence::Nodes::Node

class RcmdPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

};

class ProtocolName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf isis;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_CFG_ */

