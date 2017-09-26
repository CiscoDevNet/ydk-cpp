#ifndef _CISCO_IOS_XR_NCS1K_MXP_CFG_
#define _CISCO_IOS_XR_NCS1K_MXP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_cfg {

class HardwareModule : public ydk::Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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

        class Node; //type: HardwareModule::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node> > node;
        
}; // HardwareModule


class HardwareModule::Node : public ydk::Entity
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

        ydk::YLeaf location; //type: string
        class Slice; //type: HardwareModule::Node::Slice

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice> > slice;
        
}; // HardwareModule::Node


class HardwareModule::Node::Slice : public ydk::Entity
{
    public:
        Slice();
        ~Slice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_id; //type: string
        ydk::YLeaf lldp; //type: boolean
        class Values; //type: HardwareModule::Node::Slice::Values

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice::Values> values;
        
}; // HardwareModule::Node::Slice


class HardwareModule::Node::Slice::Values : public ydk::Entity
{
    public:
        Values();
        ~Values();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_rate; //type: ClientDataRate
        ydk::YLeaf trunk_rate; //type: TrunkDataRate
        ydk::YLeaf fec; //type: Fec
        ydk::YLeaf encrypted; //type: boolean

}; // HardwareModule::Node::Slice::Values

class Fec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sd7;
        static const ydk::Enum::YLeaf sd20;

};

class ClientDataRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ten_gig;
        static const ydk::Enum::YLeaf forty_gig;
        static const ydk::Enum::YLeaf hundred_gig;
        static const ydk::Enum::YLeaf ten_and_hundred_gig;

};

class TrunkDataRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hundred_gig;
        static const ydk::Enum::YLeaf two_hundred_gig;
        static const ydk::Enum::YLeaf two_hundred_fifty_gig;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_CFG_ */

