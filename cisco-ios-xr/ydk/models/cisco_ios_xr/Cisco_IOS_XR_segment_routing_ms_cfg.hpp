#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

class Sr : public ydk::Entity
{
    public:
        Sr();
        ~Sr();

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

        ydk::YLeaf enable; //type: empty
        class GlobalBlock; //type: Sr::GlobalBlock
        class LocalBlock; //type: Sr::LocalBlock
        class Mappings; //type: Sr::Mappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::GlobalBlock> global_block; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::LocalBlock> local_block; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::Mappings> mappings;
        
}; // Sr


class Sr::GlobalBlock : public ydk::Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

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

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Sr::GlobalBlock


class Sr::LocalBlock : public ydk::Entity
{
    public:
        LocalBlock();
        ~LocalBlock();

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

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Sr::LocalBlock


class Sr::Mappings : public ydk::Entity
{
    public:
        Mappings();
        ~Mappings();

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

        class Mapping; //type: Sr::Mappings::Mapping

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::Mappings::Mapping> > mapping;
        
}; // Sr::Mappings


class Sr::Mappings::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

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

        ydk::YLeaf af; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: int32
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_range; //type: int32
        ydk::YLeaf flag_attached; //type: SrmsMiFlag

}; // Sr::Mappings::Mapping

class SrmsMiFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_ */

