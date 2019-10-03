#ifndef _CISCO_IOS_XR_SYSADMIN_RVM_MGR_
#define _CISCO_IOS_XR_SYSADMIN_RVM_MGR_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_rvm_mgr {

class RVM : public ydk::Entity
{
    public:
        RVM();
        ~RVM();

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

        class AllLocations; //type: RVM::AllLocations

        ydk::YList all_locations;
        
}; // RVM


class RVM::AllLocations : public ydk::Entity
{
    public:
        AllLocations();
        ~AllLocations();

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

        ydk::YLeaf location; //type: string
        class Objects; //type: RVM::AllLocations::Objects
        class Node; //type: RVM::AllLocations::Node
        class Card; //type: RVM::AllLocations::Card

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_rvm_mgr::RVM::AllLocations::Objects> objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_rvm_mgr::RVM::AllLocations::Node> node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_rvm_mgr::RVM::AllLocations::Card> card;
        
}; // RVM::AllLocations


class RVM::AllLocations::Objects : public ydk::Entity
{
    public:
        Objects();
        ~Objects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllObjs; //type: RVM::AllLocations::Objects::AllObjs

        ydk::YList all_objs;
        
}; // RVM::AllLocations::Objects


class RVM::AllLocations::Objects::AllObjs : public ydk::Entity
{
    public:
        AllObjs();
        ~AllObjs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf num_allocated; //type: uint32
        ydk::YLeaf num_freed; //type: uint32
        ydk::YLeaf num_objects; //type: uint32

}; // RVM::AllLocations::Objects::AllObjs


class RVM::AllLocations::Node : public ydk::Entity
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

        class AllNodes; //type: RVM::AllLocations::Node::AllNodes

        ydk::YList all_nodes;
        
}; // RVM::AllLocations::Node


class RVM::AllLocations::Node::AllNodes : public ydk::Entity
{
    public:
        AllNodes();
        ~AllNodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: uint32
        ydk::YLeaf ipv4_addr_str; //type: string
        ydk::YLeaf node_info; //type: string
        ydk::YLeaf node_hb_info; //type: string
        ydk::YLeaf node_card_info; //type: string

}; // RVM::AllLocations::Node::AllNodes


class RVM::AllLocations::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllCards; //type: RVM::AllLocations::Card::AllCards

        ydk::YList all_cards;
        
}; // RVM::AllLocations::Card


class RVM::AllLocations::Card::AllCards : public ydk::Entity
{
    public:
        AllCards();
        ~AllCards();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_num; //type: string
        ydk::YLeaf card_flag; //type: string
        ydk::YLeaf card_info; //type: string
        ydk::YLeaf sysadmin_nodes; //type: string
        ydk::YLeaf xr_nodes; //type: string

}; // RVM::AllLocations::Card::AllCards

class NodetypeTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sysadmin;
        static const ydk::Enum::YLeaf service;

        static int get_enum_value(const std::string & name) {
            if (name == "sysadmin") return 1;
            if (name == "service") return 2;
            return -1;
        }
};

class FlagtypeTd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "clear") return 0;
            if (name == "set") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_RVM_MGR_ */

