#ifndef _CISCO_IOS_XR_INFRA_RCMD_CFG_
#define _CISCO_IOS_XR_INFRA_RCMD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_cfg {

class RouterConvergence : public Entity
{
    public:
        RouterConvergence();
        ~RouterConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf event_buffer_size; //type: uint32
        YLeaf prefix_monitor_limit; //type: uint32
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf max_events_stored; //type: uint32
        YLeaf monitoring_interval; //type: uint32
        class Protocols; //type: RouterConvergence::Protocols
        class StorageLocation; //type: RouterConvergence::StorageLocation
        class MplsLdp; //type: RouterConvergence::MplsLdp
        class CollectDiagnostics; //type: RouterConvergence::CollectDiagnostics
        class Nodes; //type: RouterConvergence::Nodes

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::CollectDiagnostics> collect_diagnostics;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp> mpls_ldp; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols> protocols;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::StorageLocation> storage_location; // presence node
        
}; // RouterConvergence


class RouterConvergence::Protocols : public Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Protocol; //type: RouterConvergence::Protocols::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol> > protocol;
        
}; // RouterConvergence::Protocols


class RouterConvergence::Protocols::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: ProtocolNameEnum
        YLeaf enable; //type: empty
        class Priorities; //type: RouterConvergence::Protocols::Protocol::Priorities

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol::Priorities> priorities;
        
}; // RouterConvergence::Protocols::Protocol


class RouterConvergence::Protocols::Protocol::Priorities : public Entity
{
    public:
        Priorities();
        ~Priorities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: RouterConvergence::Protocols::Protocol::Priorities::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Protocols::Protocol::Priorities::Priority> > priority;
        
}; // RouterConvergence::Protocols::Protocol::Priorities


class RouterConvergence::Protocols::Protocol::Priorities::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rcmd_priority; //type: RcmdPriorityEnum
        YLeaf threshold; //type: int32
        YLeaf leaf_networks; //type: uint32
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf frr_threshold; //type: uint32

}; // RouterConvergence::Protocols::Protocol::Priorities::Priority


class RouterConvergence::StorageLocation : public Entity
{
    public:
        StorageLocation();
        ~StorageLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diagnostics; //type: string
        YLeaf diagnostics_size; //type: uint32
        YLeaf reports_size; //type: uint32
        YLeaf reports; //type: string

}; // RouterConvergence::StorageLocation


class RouterConvergence::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteLfa; //type: RouterConvergence::MplsLdp::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::MplsLdp::RemoteLfa> remote_lfa; // presence node
        
}; // RouterConvergence::MplsLdp


class RouterConvergence::MplsLdp::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint32

}; // RouterConvergence::MplsLdp::RemoteLfa


class RouterConvergence::CollectDiagnostics : public Entity
{
    public:
        CollectDiagnostics();
        ~CollectDiagnostics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CollectDiagnostic; //type: RouterConvergence::CollectDiagnostics::CollectDiagnostic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::CollectDiagnostics::CollectDiagnostic> > collect_diagnostic;
        
}; // RouterConvergence::CollectDiagnostics


class RouterConvergence::CollectDiagnostics::CollectDiagnostic : public Entity
{
    public:
        CollectDiagnostic();
        ~CollectDiagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf enable; //type: empty

}; // RouterConvergence::CollectDiagnostics::CollectDiagnostic


class RouterConvergence::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: RouterConvergence::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence::Nodes::Node> > node;
        
}; // RouterConvergence::Nodes


class RouterConvergence::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty

}; // RouterConvergence::Nodes::Node

class RcmdPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class ProtocolNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf isis;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_CFG_ */

