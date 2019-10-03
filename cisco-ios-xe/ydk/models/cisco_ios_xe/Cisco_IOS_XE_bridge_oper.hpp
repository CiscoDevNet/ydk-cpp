#ifndef _CISCO_IOS_XE_BRIDGE_OPER_
#define _CISCO_IOS_XE_BRIDGE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bridge_oper {

class BridgeInstances : public ydk::Entity
{
    public:
        BridgeInstances();
        ~BridgeInstances();

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

        class BridgeEntry; //type: BridgeInstances::BridgeEntry

        ydk::YList bridge_entry;
        
}; // BridgeInstances


class BridgeInstances::BridgeEntry : public ydk::Entity
{
    public:
        BridgeEntry();
        ~BridgeEntry();

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

        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf routing_interface; //type: string
        ydk::YLeaf max_macs; //type: uint32
        ydk::YLeaf num_macs; //type: uint32
        ydk::YLeaf age_time; //type: uint32
        ydk::YLeaf rx_packets; //type: uint64
        ydk::YLeaf rx_octets; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf tx_octets; //type: uint64
        ydk::YLeaf flood_packets; //type: uint64
        ydk::YLeaf flood_octets; //type: uint64
        ydk::YLeaf rx_routed_packets; //type: uint64
        ydk::YLeaf tx_routed_packets; //type: uint64
        ydk::YLeaf learn; //type: uint64
        ydk::YLeaf age; //type: uint64
        ydk::YLeaf move; //type: uint64
        class BridgeIntfEntries; //type: BridgeInstances::BridgeEntry::BridgeIntfEntries
        class BridgeMatmEntries; //type: BridgeInstances::BridgeEntry::BridgeMatmEntries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bridge_oper::BridgeInstances::BridgeEntry::BridgeIntfEntries> bridge_intf_entries;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bridge_oper::BridgeInstances::BridgeEntry::BridgeMatmEntries> bridge_matm_entries;
        
}; // BridgeInstances::BridgeEntry


class BridgeInstances::BridgeEntry::BridgeIntfEntries : public ydk::Entity
{
    public:
        BridgeIntfEntries();
        ~BridgeIntfEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeIntfEntry; //type: BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry

        ydk::YList bridge_intf_entry;
        
}; // BridgeInstances::BridgeEntry::BridgeIntfEntries


class BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry : public ydk::Entity
{
    public:
        BridgeIntfEntry();
        ~BridgeIntfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_name; //type: string
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf native_vlan; //type: boolean
        ydk::YLeaf admin_status; //type: IntfStatusType
        ydk::YLeaf oper_status; //type: IntfStatusType
        ydk::YLeaf encap_type; //type: string
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf mtu; //type: uint32

}; // BridgeInstances::BridgeEntry::BridgeIntfEntries::BridgeIntfEntry


class BridgeInstances::BridgeEntry::BridgeMatmEntries : public ydk::Entity
{
    public:
        BridgeMatmEntries();
        ~BridgeMatmEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeMatmEntry; //type: BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry

        ydk::YList bridge_matm_entry;
        
}; // BridgeInstances::BridgeEntry::BridgeMatmEntries


class BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry : public ydk::Entity
{
    public:
        BridgeMatmEntry();
        ~BridgeMatmEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf type; //type: BridgeMacType
        ydk::YLeafList interface; //type: list of  string

}; // BridgeInstances::BridgeEntry::BridgeMatmEntries::BridgeMatmEntry

class BridgeMacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bridge_mac_type_static;
        static const ydk::Enum::YLeaf bridge_mac_type_dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "bridge-mac-type-static") return 0;
            if (name == "bridge-mac-type-dynamic") return 1;
            return -1;
        }
};

class IntfStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_BRIDGE_OPER_ */

