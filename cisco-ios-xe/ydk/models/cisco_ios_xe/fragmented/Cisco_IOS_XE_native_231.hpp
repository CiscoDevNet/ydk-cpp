#ifndef _CISCO_IOS_XE_NATIVE_231_
#define _CISCO_IOS_XE_NATIVE_231_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_230.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Allow::Category


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Category; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category

        ydk::YList category;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: UtdCategoryType

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Categories::Block::Category


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_server; //type: string
        ydk::YLeaf page_profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Block


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation : public ydk::Entity
{
    public:
        Reputation();
        ~Reputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_threshold; //type: BlockThreshold
        class BlockThreshold;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb : public ydk::Entity
{
    public:
        Sourcedb();
        ~Sourcedb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fail; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail> fail;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf close; //type: empty

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Sourcedb::Fail


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ParameterMap; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap> parameter_map;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap : public ydk::Entity
{
    public:
        ParameterMap();
        ~ParameterMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regex; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Whitelist::ParameterMap


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

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

        class Whitelist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist
        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist> whitelist;
        ydk::YList profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

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

        class Profile; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile

        ydk::YList profile;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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
        class Generator; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator

        ydk::YList generator;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator : public ydk::Entity
{
    public:
        Generator();
        ~Generator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        class Signature; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature

        ydk::YList signature;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf comment; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Whitelist::Profile::Generator::Signature


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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
        ydk::YLeaf threat; //type: Threat
        ydk::YLeaf policy; //type: Policy
        class Logging; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging
        class Whitelist; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist> whitelist;
                class Threat;
        class Policy;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging : public ydk::Entity
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

        ydk::YLeaf level; //type: Level
        class Level;

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist : public ydk::Entity
{
    public:
        Whitelist();
        ~Whitelist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Whitelist


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_ : public ydk::Entity
{
    public:
        Utd_();
        ~Utd_();

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

        class Global; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global> global; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global : public ydk::Entity
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

        class Logging; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging
        class ThreatInspection; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection
        class WebFilter; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection> threat_inspection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter> web_filter; // presence node
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging : public ydk::Entity
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

        ydk::YLeaf syslog; //type: empty
        class Host; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host

        ydk::YList host;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::Logging::Host


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

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

        class Signature; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature> signature;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature : public ydk::Entity
{
    public:
        Signature();
        ~Signature();

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

        class Update; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update> update;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update : public ydk::Entity
{
    public:
        Update();
        ~Update();

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

        class OccurAt; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt
        class Server; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt> occur_at;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server> server;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt : public ydk::Entity
{
    public:
        OccurAt();
        ~OccurAt();

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

        ydk::YLeaf daily; //type: empty
        ydk::YLeaf monthly; //type: string
        ydk::YLeaf weekly; //type: string
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::OccurAt


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Cisco; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco
        class Url; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco> cisco;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url> url;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Cisco


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

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
        class All; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All> all;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All : public ydk::Entity
{
    public:
        All();
        ~All();

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
        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::ThreatInspection::Signature::Update::Server::Url::All


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

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

        ydk::YLeaf sourcedb; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Utd_::Global::WebFilter


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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
        ydk::YLeaf all_interfaces; //type: empty
        class Fail; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail
        class Vrf; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf
        class ThreatInspection; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection
        class WebFilter; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail> fail;
        ydk::YList vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection> threat_inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter> web_filter;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf close; //type: empty

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Fail


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::Vrf


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection : public ydk::Entity
{
    public:
        ThreatInspection();
        ~ThreatInspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::ThreatInspection


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter : public ydk::Entity
{
    public:
        WebFilter();
        ~WebFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Url; //type: Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url> url;
        
}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter


class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url : public ydk::Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string

}; // Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Log::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detailed;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf info;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::WebFilter::Url::Profile::Reputation::BlockThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_risk;
        static const ydk::Enum::YLeaf low_risk;
        static const ydk::Enum::YLeaf moderate_risk;
        static const ydk::Enum::YLeaf suspicious;
        static const ydk::Enum::YLeaf trustworthy;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Threat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detection;
        static const ydk::Enum::YLeaf protection;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf balanced;
        static const ydk::Enum::YLeaf connectivity;
        static const ydk::Enum::YLeaf security;

};

class Native::UtdMt::Utd::Engine::Standard::MultiTenancy::ThreatInspection::Profile::Logging::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emerg;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf crit;
        static const ydk::Enum::YLeaf err;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_231_ */

