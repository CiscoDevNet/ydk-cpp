#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

class Sr : public Entity
{
    public:
        Sr();
        ~Sr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf enable; //type: empty

        class GlobalBlock; //type: Sr::GlobalBlock
        class Mappings; //type: Sr::Mappings

        std::shared_ptr<Cisco_IOS_XR_segment_routing_ms_cfg::Sr::GlobalBlock> global_block; // presence node
        std::shared_ptr<Cisco_IOS_XR_segment_routing_ms_cfg::Sr::Mappings> mappings;


}; // Sr


class Sr::GlobalBlock : public Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: uint32
        YLeaf upper_bound; //type: uint32



}; // Sr::GlobalBlock


class Sr::Mappings : public Entity
{
    public:
        Mappings();
        ~Mappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mapping; //type: Sr::Mappings::Mapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_segment_routing_ms_cfg::Sr::Mappings::Mapping> > mapping;


}; // Sr::Mappings


class Sr::Mappings::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: int32
        YLeaf sid_start; //type: uint32
        YLeaf sid_range; //type: int32
        YLeaf flag_attached; //type: SrmsMiFlagEnum



}; // Sr::Mappings::Mapping

class SrmsMiFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_ */

