#ifndef _CISCO_IOS_XE_NATIVE_84_
#define _CISCO_IOS_XE_NATIVE_84_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_83.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Mpls::Ldp::Enable2::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

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

        ydk::YLeaf holddown; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Igp::Sync


class Native::Mpls::Ldp::Enable2::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

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

        class LabelModeConfigldplbl; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl> label_mode__config_ldp_lbl;
        
}; // Native::Mpls::Ldp::Enable2::Label


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl : public ydk::Entity
{
    public:
        LabelModeConfigldplbl();
        ~LabelModeConfigldplbl();

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

        class Allocate; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate> allocate;
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

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

        class Global; //type: Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global> global; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate


class Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf host_routes; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global


class Native::Mpls::Ldp::Enable2::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf neighbor_changes; //type: boolean
        class Password; //type: Native::Mpls::Ldp::Enable2::Logging::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Logging


class Native::Mpls::Ldp::Enable2::Logging::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        class ConfigurationConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf
        class RolloverConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf
        class Configuration; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Configuration
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Rollover

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Configuration> configuration; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf> configuration_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Rollover> rollover; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf> rollover_conf;
        
}; // Native::Mpls::Ldp::Enable2::Logging::Password


class Native::Mpls::Ldp::Enable2::Logging::Password::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Configuration


class Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf : public ydk::Entity
{
    public:
        ConfigurationConf();
        ~ConfigurationConf();

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

        ydk::YLeaf configuration; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf


class Native::Mpls::Ldp::Enable2::Logging::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

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

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Rollover


class Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf : public ydk::Entity
{
    public:
        RolloverConf();
        ~RolloverConf();

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

        ydk::YLeaf rollover; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf


class Native::Mpls::Ldp::Enable2::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent> > neighbor_content;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels> labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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

        ydk::YLeaf vrf_name; //type: string
        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent> > neighbor_content;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels> labels;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Password::Rollover

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback> fallback;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Required> required; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Password


class Native::Mpls::Ldp::Enable2::Password::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Fallback


class Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

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

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

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

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

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

        ydk::YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LINE; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE> > line;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE : public ydk::Entity
{
    public:
        LINE();
        ~LINE();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::LINE::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Required : public ydk::Entity
{
    public:
        Required();
        ~Required();

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

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Required


class Native::Mpls::Ldp::Enable2::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

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

        ydk::YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Password::Rollover


class Native::Mpls::Ldp::Enable2::RequestLabels : public ydk::Entity
{
    public:
        RequestLabels();
        ~RequestLabels();

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

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::RequestLabels


class Native::Mpls::Ldp::Enable2::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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

        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId


class Native::Mpls::Ldp::Enable2::RouterId::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf force; //type: empty
        class ATMSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMACRsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::ATMSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::LISPSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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

        ydk::YLeaf vrf_name; //type: string
        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf force; //type: empty
        class ATMSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMACRsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::ATMSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LISPSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf pak_priority; //type: empty

}; // Native::Mpls::Ldp::Enable2::Tcp


class Native::Mpls::Ldp::Enable2::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Vrf


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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

        ydk::YLeaf vrf_name; //type: string
        class Password; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback> fallback;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required> required; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LINE; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE> > line;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE : public ydk::Entity
{
    public:
        LINE();
        ~LINE();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::LINE::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required : public ydk::Entity
{
    public:
        Required();
        ~Required();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover


class Native::Mpls::Ldp::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class Protection; //type: Native::Mpls::Ldp::Session::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection> protection; // presence node
        
}; // Native::Mpls::Ldp::Session


class Native::Mpls::Ldp::Session::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Duration
        class For_; //type: Native::Mpls::Ldp::Session::Protection::For_
        class Vrf; //type: Native::Mpls::Ldp::Session::Protection::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Duration> duration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_> for_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Session::Protection


class Native::Mpls::Ldp::Session::Protection::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

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

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Duration


class Native::Mpls::Ldp::Session::Protection::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

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

        ydk::YLeaf acl_name; //type: string
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::For_::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::For_


class Native::Mpls::Ldp::Session::Protection::For_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

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

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::For_::Duration


class Native::Mpls::Ldp::Session::Protection::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class Vrf_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

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

        ydk::YLeaf vrf_name; //type: string
        class For_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration> duration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_> for_;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration


class Native::Mpls::PrefixMap : public ydk::Entity
{
    public:
        PrefixMap();
        ~PrefixMap();

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

        ydk::YLeaf nr; //type: uint8
        ydk::YLeaf access_list; //type: uint8
        ydk::YLeaf cos_map; //type: uint8

}; // Native::Mpls::PrefixMap


class Native::Mpls::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

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

        class Binding; //type: Native::Mpls::Static_::Binding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding> binding;
        
}; // Native::Mpls::Static_


class Native::Mpls::Static_::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

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

        class Ipv4; //type: Native::Mpls::Static_::Binding::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4> ipv4;
        
}; // Native::Mpls::Static_::Binding


class Native::Mpls::Static_::Binding::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Global; //type: Native::Mpls::Static_::Binding::Ipv4::Global
        class Vrf; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global> > global;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf> > vrf;
        
}; // Native::Mpls::Static_::Binding::Ipv4


class Native::Mpls::Static_::Binding::Ipv4::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Global


class Native::Mpls::Static_::Binding::Ipv4::Global::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Input


class Native::Mpls::Static_::Binding::Ipv4::Global::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_next_hop; //type: string
        ydk::YLeaf label; //type: one of enumeration, uint32
        class Label;

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Output


class Native::Mpls::Static_::Binding::Ipv4::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Vrf


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Input


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_next_hop; //type: string
        ydk::YLeaf label; //type: one of enumeration, uint32
        class Label;

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Output


class Native::Mpls::Tp : public ydk::Entity
{
    public:
        Tp();
        ~Tp();

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


}; // Native::Mpls::Tp


class Native::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

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

        ydk::YLeaf fault_oam; //type: empty
        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf tunnels; //type: empty
        class AutoBw; //type: Native::Mpls::TrafficEng::AutoBw
        class AutoTunnel; //type: Native::Mpls::TrafficEng::AutoTunnel
        class DsTe; //type: Native::Mpls::TrafficEng::DsTe
        class FastReroute; //type: Native::Mpls::TrafficEng::FastReroute
        class LinkManagement; //type: Native::Mpls::TrafficEng::LinkManagement
        class Logging; //type: Native::Mpls::TrafficEng::Logging
        class Lsp; //type: Native::Mpls::TrafficEng::Lsp
        class PathOption; //type: Native::Mpls::TrafficEng::PathOption
        class PathSelection; //type: Native::Mpls::TrafficEng::PathSelection
        class Pcc; //type: Native::Mpls::TrafficEng::Pcc
        class Reoptimize; //type: Native::Mpls::TrafficEng::Reoptimize
        class Signalling; //type: Native::Mpls::TrafficEng::Signalling
        class Topology; //type: Native::Mpls::TrafficEng::Topology
        class Trace; //type: Native::Mpls::TrafficEng::Trace

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoBw> auto_bw;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe> ds_te;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::LinkManagement> link_management;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp> lsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption> path_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc> pcc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize> reoptimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling> signalling;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Topology> topology;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Trace> trace;
        
}; // Native::Mpls::TrafficEng


class Native::Mpls::TrafficEng::AutoBw : public ydk::Entity
{
    public:
        AutoBw();
        ~AutoBw();

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

        class Timers; //type: Native::Mpls::TrafficEng::AutoBw::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoBw::Timers> timers; // presence node
        
}; // Native::Mpls::TrafficEng::AutoBw


class Native::Mpls::TrafficEng::AutoBw::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf frequency; //type: uint32

}; // Native::Mpls::TrafficEng::AutoBw::Timers


class Native::Mpls::TrafficEng::AutoTunnel : public ydk::Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

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

        class Backup; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup
        class Mesh; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh
        class P2P; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P
        class Primary; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh> mesh; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P> p2p; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary> primary;
        
}; // Native::Mpls::TrafficEng::AutoTunnel


class Native::Mpls::TrafficEng::AutoTunnel::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

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

        ydk::YLeaf nhop_only; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config
        class Srlg; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg> srlg;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        class AffinityMask; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask> affinity_mask;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

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

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

        ydk::YLeaf exclude; //type: Exclude
        class Exclude;

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

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

        class Unused; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused> unused;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf duration; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

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

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

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

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::Mesh : public ydk::Entity
{
    public:
        Mesh();
        ~Mesh();

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

        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

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

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

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

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::P2P : public ydk::Entity
{
    public:
        P2P();
        ~P2P();

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

        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

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

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

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

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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

        ydk::YLeaf onehop; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config> config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        class Mpls_; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_ : public ydk::Entity
{
    public:
        Mpls_();
        ~Mpls_();

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

        ydk::YLeaf ip; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMACRsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::ATMSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LISPSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

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

        ydk::YLeaf rerouted; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

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

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

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

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax


class Native::Mpls::TrafficEng::DsTe : public ydk::Entity
{
    public:
        DsTe();
        ~DsTe();

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

        ydk::YLeaf bc_model; //type: BcModel
        ydk::YLeaf mode; //type: Mode
        class TeClasses; //type: Native::Mpls::TrafficEng::DsTe::TeClasses

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses> te_classes; // presence node
                class BcModel;
        class Mode;

}; // Native::Mpls::TrafficEng::DsTe


class Native::Mpls::TrafficEng::DsTe::TeClasses : public ydk::Entity
{
    public:
        TeClasses();
        ~TeClasses();

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

        class TeClass; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass> > te_class;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass : public ydk::Entity
{
    public:
        TeClass();
        ~TeClass();

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

        ydk::YLeaf te_idx; //type: uint8
        ydk::YLeaf unused; //type: empty
        class ClassType; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType> class_type;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType


class Native::Mpls::TrafficEng::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

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

        class BackupProtPreempt; //type: Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt
        class Timers; //type: Native::Mpls::TrafficEng::FastReroute::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt> backup_prot_preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::Timers> timers;
        
}; // Native::Mpls::TrafficEng::FastReroute


class Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt : public ydk::Entity
{
    public:
        BackupProtPreempt();
        ~BackupProtPreempt();

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

        ydk::YLeaf optimize_bw; //type: empty

}; // Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt


class Native::Mpls::TrafficEng::FastReroute::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf promotion; //type: uint32

}; // Native::Mpls::TrafficEng::FastReroute::Timers


class Native::Mpls::TrafficEng::LinkManagement : public ydk::Entity
{
    public:
        LinkManagement();
        ~LinkManagement();

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

        class Timers; //type: Native::Mpls::TrafficEng::LinkManagement::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::LinkManagement::Timers> timers;
        
}; // Native::Mpls::TrafficEng::LinkManagement


class Native::Mpls::TrafficEng::LinkManagement::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf bandwidth_hold; //type: uint16
        ydk::YLeaf periodic_flooding; //type: uint16

}; // Native::Mpls::TrafficEng::LinkManagement::Timers


class Native::Mpls::TrafficEng::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        class Lsp; //type: Native::Mpls::TrafficEng::Logging::Lsp
        class Tunnel; //type: Native::Mpls::TrafficEng::Logging::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp> lsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel> tunnel;
        
}; // Native::Mpls::TrafficEng::Logging


class Native::Mpls::TrafficEng::Logging::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

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

        class PathErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::PathErrors
        class Preemption; //type: Native::Mpls::TrafficEng::Logging::Lsp::Preemption
        class ReservationErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors
        class Setups; //type: Native::Mpls::TrafficEng::Logging::Lsp::Setups
        class Teardowns; //type: Native::Mpls::TrafficEng::Logging::Lsp::Teardowns

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::PathErrors> path_errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Preemption> preemption; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors> reservation_errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Setups> setups; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Teardowns> teardowns; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Lsp


class Native::Mpls::TrafficEng::Logging::Lsp::PathErrors : public ydk::Entity
{
    public:
        PathErrors();
        ~PathErrors();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::PathErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Preemption : public ydk::Entity
{
    public:
        Preemption();
        ~Preemption();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Preemption


class Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors : public ydk::Entity
{
    public:
        ReservationErrors();
        ~ReservationErrors();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Setups : public ydk::Entity
{
    public:
        Setups();
        ~Setups();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Setups


class Native::Mpls::TrafficEng::Logging::Lsp::Teardowns : public ydk::Entity
{
    public:
        Teardowns();
        ~Teardowns();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Teardowns


class Native::Mpls::TrafficEng::Logging::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        class LspSelection; //type: Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection
        class LspSwitchover; //type: Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover
        class Path; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection> lsp_selection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover> lsp_switchover; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path> path;
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel


class Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection : public ydk::Entity
{
    public:
        LspSelection();
        ~LspSelection();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection


class Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover : public ydk::Entity
{
    public:
        LspSwitchover();
        ~LspSwitchover();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover


class Native::Mpls::TrafficEng::Logging::Tunnel::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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

        class Change; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change> change; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path


class Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change : public ydk::Entity
{
    public:
        Change();
        ~Change();

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

        ydk::YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change


class Native::Mpls::TrafficEng::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

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

        class Attributes; //type: Native::Mpls::TrafficEng::Lsp::Attributes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes> > attributes;
        
}; // Native::Mpls::TrafficEng::Lsp


class Native::Mpls::TrafficEng::Lsp::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

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

        ydk::YLeaf name; //type: string
        class MplsTeModeConfigLspAttr; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr> mpls_te_mode_config_lsp_attr;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr : public ydk::Entity
{
    public:
        MplsTeModeConfigLspAttr();
        ~MplsTeModeConfigLspAttr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf record_route; //type: empty
        class AffinityMask; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask
        class AutoBw; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw
        class Bandwidth; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth
        class BfdReversePath; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath
        class Lockdown; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown
        class PathSelection; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection
        class Pce; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce
        class Priority; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority
        class Protection; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask> affinity_mask;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw> auto_bw; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath> bfd_reverse_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown> lockdown; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce> pce; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection> protection; // presence node
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw : public ydk::Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf collect_bw; //type: empty
        ydk::YLeaf adjustment_threshold; //type: uint8
        ydk::YLeaf max_bw; //type: uint32
        ydk::YLeaf min_bw; //type: uint32
        class OverflowLimit; //type: Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit> overflow_limit;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit : public ydk::Entity
{
    public:
        OverflowLimit();
        ~OverflowLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint8
        ydk::YLeaf overflow_threshold; //type: uint8

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit


class Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth

class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Static_::Binding::Ipv4::Global::Output::Label : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf implicit_null;

};

class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Label : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf implicit_null;

};

class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf force;
        static const ydk::Enum::YLeaf preferred;

};

class Native::Mpls::TrafficEng::DsTe::BcModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mam;

};

class Native::Mpls::TrafficEng::DsTe::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf;
        static const ydk::Enum::YLeaf migration;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_84_ */

