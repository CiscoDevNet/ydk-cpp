#ifndef _CISCO_IOS_XR_LPTS_IFIB_OPER_
#define _CISCO_IOS_XR_LPTS_IFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lpts_ifib_oper {

class LptsIfib : public Entity
{
    public:
        LptsIfib();
        ~LptsIfib();

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

        class Nodes; //type: LptsIfib::Nodes

        std::shared_ptr<Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes> nodes;
        
}; // LptsIfib


class LptsIfib::Nodes : public Entity
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

        class Node; //type: LptsIfib::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node> > node;
        
}; // LptsIfib::Nodes


class LptsIfib::Nodes::Node : public Entity
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
        class SliceIds; //type: LptsIfib::Nodes::Node::SliceIds

        std::shared_ptr<Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds> slice_ids;
        
}; // LptsIfib::Nodes::Node


class LptsIfib::Nodes::Node::SliceIds : public Entity
{
    public:
        SliceIds();
        ~SliceIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SliceId; //type: LptsIfib::Nodes::Node::SliceIds::SliceId

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds::SliceId> > slice_id;
        
}; // LptsIfib::Nodes::Node::SliceIds


class LptsIfib::Nodes::Node::SliceIds::SliceId : public Entity
{
    public:
        SliceId();
        ~SliceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slice_name; //type: string
        class Entry; //type: LptsIfib::Nodes::Node::SliceIds::SliceId::Entry

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_ifib_oper::LptsIfib::Nodes::Node::SliceIds::SliceId::Entry> > entry;
        
}; // LptsIfib::Nodes::Node::SliceIds::SliceId


class LptsIfib::Nodes::Node::SliceIds::SliceId::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: int32
        YLeaf destination_type; //type: string
        YLeaf destination_value; //type: string
        YLeaf source_port; //type: string
        YLeaf destination_addr; //type: string
        YLeaf source_addr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf vid; //type: uint32
        YLeaf l3protocol; //type: uint32
        YLeaf l4protocol; //type: uint32
        YLeaf intf_name; //type: string
        YLeaf intf_handle; //type: uint32
        YLeaf is_syn; //type: uint8
        YLeaf opcode; //type: string
        YLeaf accepts; //type: uint64
        YLeaf drops; //type: uint64
        YLeaf flow_type; //type: string
        YLeaf listener_tag; //type: string
        YLeaf local_flag; //type: uint8
        YLeaf is_fgid; //type: uint8
        YLeaf deliver_list_short; //type: string
        YLeaf deliver_list_long; //type: string
        YLeaf min_ttl; //type: uint8
        YLeaf pending_ifibq_delay; //type: uint32
        YLeaf sl_ifibq_delay; //type: uint32
        YLeaf ifib_program_time; //type: string

}; // LptsIfib::Nodes::Node::SliceIds::SliceId::Entry


}
}

#endif /* _CISCO_IOS_XR_LPTS_IFIB_OPER_ */

