#ifndef _CISCO_IOS_XR_NCS1K_MXP_CFG_
#define _CISCO_IOS_XR_NCS1K_MXP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_cfg {

class HardwareModule : public Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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



        class Node; //type: HardwareModule::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node> > node;


}; // HardwareModule


class HardwareModule::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location; //type: string

        class Slice; //type: HardwareModule::Node::Slice

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice> > slice;


}; // HardwareModule::Node


class HardwareModule::Node::Slice : public Entity
{
    public:
        Slice();
        ~Slice();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slice_id; //type: string
        YLeaf lldp; //type: boolean

        class Values; //type: HardwareModule::Node::Slice::Values

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice::Values> values;


}; // HardwareModule::Node::Slice


class HardwareModule::Node::Slice::Values : public Entity
{
    public:
        Values();
        ~Values();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_rate; //type: ClientDataRateEnum
        YLeaf trunk_rate; //type: TrunkDataRateEnum
        YLeaf fec; //type: FecEnum
        YLeaf encrypted; //type: boolean



}; // HardwareModule::Node::Slice::Values

class ClientDataRateEnum : public Enum
{
    public:
        static const Enum::YLeaf ten_gig;
        static const Enum::YLeaf forty_gig;
        static const Enum::YLeaf hundred_gig;

};

class TrunkDataRateEnum : public Enum
{
    public:
        static const Enum::YLeaf hundred_gig;
        static const Enum::YLeaf two_hundred_gig;
        static const Enum::YLeaf two_hundred_fifty_gig;

};

class FecEnum : public Enum
{
    public:
        static const Enum::YLeaf sd7;
        static const Enum::YLeaf sd20;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_CFG_ */

