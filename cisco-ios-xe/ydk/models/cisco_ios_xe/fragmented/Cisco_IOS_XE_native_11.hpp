#ifndef _CISCO_IOS_XE_NATIVE_11_
#define _CISCO_IOS_XE_NATIVE_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Nbar::Attribute::ApplicationGroup::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationGroup::Custom


class Native::Ip::Nbar::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationSet::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationSet


class Native::Ip::Nbar::Attribute::ApplicationSet::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationSet::Custom


class Native::Ip::Nbar::Attribute::Category : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::Category::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::Category


class Native::Ip::Nbar::Attribute::Category::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::Category::Custom


class Native::Ip::Nbar::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::SubCategory::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::SubCategory


class Native::Ip::Nbar::Attribute::SubCategory::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

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
        ydk::YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::SubCategory::Custom


class Native::Ip::Nbar::AttributeMap : public ydk::Entity
{
    public:
        AttributeMap();
        ~AttributeMap();

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
        class Attribute; //type: Native::Ip::Nbar::AttributeMap::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap::Attribute> attribute;
        
}; // Native::Ip::Nbar::AttributeMap


class Native::Ip::Nbar::AttributeMap::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_group; //type: string
        ydk::YLeaf application_set; //type: string
        ydk::YLeaf business_relevance; //type: string
        ydk::YLeaf category; //type: string
        ydk::YLeaf encrypted; //type: string
        ydk::YLeaf sub_category; //type: string
        ydk::YLeaf traffic_class; //type: string
        ydk::YLeaf tunnel; //type: string

}; // Native::Ip::Nbar::AttributeMap::Attribute


class Native::Ip::Nbar::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

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

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf profile_name; //type: string

}; // Native::Ip::Nbar::AttributeSet


class Native::Ip::Nbar::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

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

        class AutoLearn; //type: Native::Ip::Nbar::Classification::AutoLearn
        class Dns; //type: Native::Ip::Nbar::Classification::Dns
        class Granularity; //type: Native::Ip::Nbar::Classification::Granularity
        class TunneledTraffic; //type: Native::Ip::Nbar::Classification::TunneledTraffic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn> auto_learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity> granularity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::TunneledTraffic> tunneled_traffic;
        
}; // Native::Ip::Nbar::Classification


class Native::Ip::Nbar::Classification::AutoLearn : public ydk::Entity
{
    public:
        AutoLearn();
        ~AutoLearn();

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

        ydk::YLeaf top_asymmetric_socket; //type: empty
        class TopHosts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopHosts
        class TopPorts; //type: Native::Ip::Nbar::Classification::AutoLearn::TopPorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopHosts> top_hosts; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::AutoLearn::TopPorts> top_ports; // presence node
        
}; // Native::Ip::Nbar::Classification::AutoLearn


class Native::Ip::Nbar::Classification::AutoLearn::TopHosts : public ydk::Entity
{
    public:
        TopHosts();
        ~TopHosts();

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

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopHosts


class Native::Ip::Nbar::Classification::AutoLearn::TopPorts : public ydk::Entity
{
    public:
        TopPorts();
        ~TopPorts();

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

        ydk::YLeaf sample_rate; //type: uint16

}; // Native::Ip::Nbar::Classification::AutoLearn::TopPorts


class Native::Ip::Nbar::Classification::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

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

        ydk::YLeaf classify_by_domain; //type: empty
        class Learning; //type: Native::Ip::Nbar::Classification::Dns::Learning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Dns::Learning> learning; // presence node
        
}; // Native::Ip::Nbar::Classification::Dns


class Native::Ip::Nbar::Classification::Dns::Learning : public ydk::Entity
{
    public:
        Learning();
        ~Learning();

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

        ydk::YLeaf guard; //type: empty

}; // Native::Ip::Nbar::Classification::Dns::Learning


class Native::Ip::Nbar::Classification::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

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

        ydk::YLeaf coarse_grain; //type: empty
        class FineGrain; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain> fine_grain; // presence node
        
}; // Native::Ip::Nbar::Classification::Granularity


class Native::Ip::Nbar::Classification::Granularity::FineGrain : public ydk::Entity
{
    public:
        FineGrain();
        ~FineGrain();

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

        class Attribute; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute
        class Protocol; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol> protocol;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        class ApplicationGroup; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance
        class Category; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category
        class Encrypted; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted
        class SubCategory; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory
        class TrafficClass; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass
        class Tunnel; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        class ProtocolsList; //type: Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList

        ydk::YList protocols_list;
        
}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol


class Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

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

}; // Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList


class Native::Ip::Nbar::Classification::TunneledTraffic : public ydk::Entity
{
    public:
        TunneledTraffic();
        ~TunneledTraffic();

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

        ydk::YLeaf capwap; //type: empty
        ydk::YLeaf ipv6inip; //type: empty
        ydk::YLeaf teredo; //type: empty

}; // Native::Ip::Nbar::Classification::TunneledTraffic


class Native::Ip::Nbar::Custom : public ydk::Entity
{
    public:
        Custom();
        ~Custom();

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
        class Composite; //type: Native::Ip::Nbar::Custom::Composite
        class Dns; //type: Native::Ip::Nbar::Custom::Dns
        class Http; //type: Native::Ip::Nbar::Custom::Http
        class Ssl; //type: Native::Ip::Nbar::Custom::Ssl
        class Transport; //type: Native::Ip::Nbar::Custom::Transport
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Composite> composite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ssl> ssl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_> ip;
        
}; // Native::Ip::Nbar::Custom


class Native::Ip::Nbar::Custom::Composite : public ydk::Entity
{
    public:
        Composite();
        ~Composite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerName; //type: Native::Ip::Nbar::Custom::Composite::ServerName

        ydk::YList server_name;
        
}; // Native::Ip::Nbar::Custom::Composite


class Native::Ip::Nbar::Custom::Composite::ServerName : public ydk::Entity
{
    public:
        ServerName();
        ~ServerName();

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
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Composite::ServerName


class Native::Ip::Nbar::Custom::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainName; //type: Native::Ip::Nbar::Custom::Dns::DomainName

        ydk::YList domain_name;
        
}; // Native::Ip::Nbar::Custom::Dns


class Native::Ip::Nbar::Custom::Dns::DomainName : public ydk::Entity
{
    public:
        DomainName();
        ~DomainName();

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
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf extends; //type: string

}; // Native::Ip::Nbar::Custom::Dns::DomainName


class Native::Ip::Nbar::Custom::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cookie; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf method; //type: string
        ydk::YLeaf referer; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf user_agent; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf via; //type: string
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Http


class Native::Ip::Nbar::Custom::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UniqueName; //type: Native::Ip::Nbar::Custom::Ssl::UniqueName

        ydk::YList unique_name;
        
}; // Native::Ip::Nbar::Custom::Ssl


class Native::Ip::Nbar::Custom::Ssl::UniqueName : public ydk::Entity
{
    public:
        UniqueName();
        ~UniqueName();

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
        ydk::YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Ssl::UniqueName


class Native::Ip::Nbar::Custom::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Native::Ip::Nbar::Custom::Transport::Tcp
        class Udp; //type: Native::Ip::Nbar::Custom::Transport::Udp
        class UdpTcp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp> tcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp> udp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp> udp_tcp; // presence node
        
}; // Native::Ip::Nbar::Custom::Transport


class Native::Ip::Nbar::Custom::Transport::Tcp : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp


class Native::Ip::Nbar::Custom::Transport::Tcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Dscp


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Tcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Direction


class Native::Ip::Nbar::Custom::Transport::Tcp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range


class Native::Ip::Nbar::Custom::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::Udp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::Udp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp


class Native::Ip::Nbar::Custom::Transport::Udp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Dscp


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::Udp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::Udp::Direction


class Native::Ip::Nbar::Custom::Transport::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::Udp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::Udp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::Udp::Port


class Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::Udp::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::Udp::Port::Range


class Native::Ip::Nbar::Custom::Transport::UdpTcp : public ydk::Entity
{
    public:
        UdpTcp();
        ~UdpTcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port> port;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range


class Native::Ip::Nbar::Custom::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Any; //type: Native::Ip::Nbar::Custom::Ip_::Any

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any> any; // presence node
        
}; // Native::Ip::Nbar::Custom::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any : public ydk::Entity
{
    public:
        Any();
        ~Any();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Dscp; //type: Native::Ip::Nbar::Custom::Ip_::Any::Dscp
        class Ip_; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_
        class Ipv6; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6
        class Direction; //type: Native::Ip::Nbar::Custom::Ip_::Any::Direction
        class Port; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Dscp> dscp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Direction> direction;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port> port;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any


class Native::Ip::Nbar::Custom::Ip_::Any::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf af11; //type: empty
        ydk::YLeaf af12; //type: empty
        ydk::YLeaf af13; //type: empty
        ydk::YLeaf af21; //type: empty
        ydk::YLeaf af22; //type: empty
        ydk::YLeaf af23; //type: empty
        ydk::YLeaf af31; //type: empty
        ydk::YLeaf af32; //type: empty
        ydk::YLeaf af33; //type: empty
        ydk::YLeaf af41; //type: empty
        ydk::YLeaf af42; //type: empty
        ydk::YLeaf af43; //type: empty
        ydk::YLeaf cs1; //type: empty
        ydk::YLeaf cs2; //type: empty
        ydk::YLeaf cs3; //type: empty
        ydk::YLeaf cs4; //type: empty
        ydk::YLeaf cs5; //type: empty
        ydk::YLeaf cs6; //type: empty
        ydk::YLeaf cs7; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf ef; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Dscp


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_ : public ydk::Entity
{
    public:
        Ip_();
        ~Ip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address
        class Subnet; //type: Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet

        ydk::YList address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet> subnet;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address0; //type: string
        ydk::YLeaf address1; //type: string
        ydk::YLeaf address2; //type: string
        ydk::YLeaf address3; //type: string
        ydk::YLeaf address4; //type: string
        ydk::YLeaf address5; //type: string
        ydk::YLeaf address6; //type: string
        ydk::YLeaf address7; //type: string

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address


class Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet : public ydk::Entity
{
    public:
        Subnet();
        ~Subnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subnet; //type: string
        ydk::YLeaf mask; //type: uint8

}; // Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet


class Native::Ip::Nbar::Custom::Ip_::Any::Direction : public ydk::Entity
{
    public:
        Direction();
        ~Direction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Ip::Nbar::Custom::Ip_::Any::Direction


class Native::Ip::Nbar::Custom::Ip_::Any::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortNumbers; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers
        class Range; //type: Native::Ip::Nbar::Custom::Ip_::Any::Port::Range

        ydk::YList port_numbers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Ip_::Any::Port::Range> range;
        
}; // Native::Ip::Nbar::Custom::Ip_::Any::Port


class Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers


class Native::Ip::Nbar::Custom::Ip_::Any::Port::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Ip_::Any::Port::Range


class Native::Ip::Nbar::ProtocolPack : public ydk::Entity
{
    public:
        ProtocolPack();
        ~ProtocolPack();

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

        class Filepath; //type: Native::Ip::Nbar::ProtocolPack::Filepath

        ydk::YList filepath;
        
}; // Native::Ip::Nbar::ProtocolPack


class Native::Ip::Nbar::ProtocolPack::Filepath : public ydk::Entity
{
    public:
        Filepath();
        ~Filepath();

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

        ydk::YLeaf filepath; //type: string
        ydk::YLeaf force; //type: empty

}; // Native::Ip::Nbar::ProtocolPack::Filepath


class Native::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

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

        class Entry; //type: Native::Ip::Sla::Entry
        class Enable; //type: Native::Ip::Sla::Enable
        class Responder; //type: Native::Ip::Sla::Responder
        class Logging; //type: Native::Ip::Sla::Logging
        class Group; //type: Native::Ip::Sla::Group
        class Schedule; //type: Native::Ip::Sla::Schedule
        class ReactionConfiguration; //type: Native::Ip::Sla::ReactionConfiguration
        class Server; //type: Native::Ip::Sla::Server

        ydk::YList entry;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder> responder; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group> group;
        ydk::YList schedule;
        ydk::YList reaction_configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Server> server;
        
}; // Native::Ip::Sla


class Native::Ip::Sla::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

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

        ydk::YLeaf number; //type: uint32
        class IcmpEcho; //type: Native::Ip::Sla::Entry::IcmpEcho
        class PathEcho; //type: Native::Ip::Sla::Entry::PathEcho
        class PathJitter; //type: Native::Ip::Sla::Entry::PathJitter
        class UdpEcho; //type: Native::Ip::Sla::Entry::UdpEcho
        class UdpJitter; //type: Native::Ip::Sla::Entry::UdpJitter
        class Http; //type: Native::Ip::Sla::Entry::Http
        class Dhcp; //type: Native::Ip::Sla::Entry::Dhcp
        class Ethernet; //type: Native::Ip::Sla::Entry::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho> icmp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathEcho> path_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter> path_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter> udp_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet> ethernet;
        
}; // Native::Ip::Sla::Entry


class Native::Ip::Sla::Entry::IcmpEcho : public ydk::Entity
{
    public:
        IcmpEcho();
        ~IcmpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf data_pattern; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::IcmpEcho::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History> history;
        
}; // Native::Ip::Sla::Entry::IcmpEcho


class Native::Ip::Sla::Entry::IcmpEcho::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buckets_kept; //type: uint8
        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf filter; //type: Filter
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf lives_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced> enhanced;
                class Filter;

}; // Native::Ip::Sla::Entry::IcmpEcho::History


class Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced


class Native::Ip::Sla::Entry::PathEcho : public ydk::Entity
{
    public:
        PathEcho();
        ~PathEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf paths_of_statistics_kept; //type: uint8
        ydk::YLeaf samples_of_history_kept; //type: uint8
        ydk::YLeaf hops_of_statistics_kept; //type: uint8

}; // Native::Ip::Sla::Entry::PathEcho


class Native::Ip::Sla::Entry::PathJitter : public ydk::Entity
{
    public:
        PathJitter();
        ~PathJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeafList lsr_path; //type: list of  string
        class Default; //type: Native::Ip::Sla::Entry::PathJitter::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter::Default> default_;
        
}; // Native::Ip::Sla::Entry::PathJitter


class Native::Ip::Sla::Entry::PathJitter::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: empty
        ydk::YLeaf lsr_path; //type: empty
        ydk::YLeaf owner; //type: empty
        ydk::YLeaf request_data_size; //type: empty
        ydk::YLeaf tag; //type: empty
        ydk::YLeaf threshold; //type: empty
        ydk::YLeaf timeout; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: empty

}; // Native::Ip::Sla::Entry::PathJitter::Default


class Native::Ip::Sla::Entry::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of union, string
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf source_ip; //type: one of union, string
        ydk::YLeaf source_port; //type: uint16

}; // Native::Ip::Sla::Entry::UdpEcho


class Native::Ip::Sla::Entry::UdpJitter : public ydk::Entity
{
    public:
        UdpJitter();
        ~UdpJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of union, string
        ydk::YLeaf portno; //type: uint16
        ydk::YLeaf codec; //type: Codec
        ydk::YLeaf advantage_factor; //type: uint16
        ydk::YLeaf codec_interval; //type: uint32
        ydk::YLeaf codec_numpackets; //type: uint32
        ydk::YLeaf codec_size; //type: uint16
        ydk::YLeaf num_packets; //type: uint16
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf source_ip; //type: one of union, string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf control; //type: Control
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint16
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::UdpJitter::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History> history;
                class Codec;
        class Control;

}; // Native::Ip::Sla::Entry::UdpJitter


class Native::Ip::Sla::Entry::UdpJitter::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::UdpJitter::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History::Enhanced> enhanced;
        
}; // Native::Ip::Sla::Entry::UdpJitter::History


class Native::Ip::Sla::Entry::UdpJitter::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::UdpJitter::History::Enhanced


class Native::Ip::Sla::Entry::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf vrf; //type: string
        class Get; //type: Native::Ip::Sla::Entry::Http::Get
        class Raw; //type: Native::Ip::Sla::Entry::Http::Raw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Get> get;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Raw> raw;
        
}; // Native::Ip::Sla::Entry::Http


class Native::Ip::Sla::Entry::Http::Get : public ydk::Entity
{
    public:
        Get();
        ~Get();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of union, string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of union, string

}; // Native::Ip::Sla::Entry::Http::Get


class Native::Ip::Sla::Entry::Http::Raw : public ydk::Entity
{
    public:
        Raw();
        ~Raw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of union, string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of union, string

}; // Native::Ip::Sla::Entry::Http::Raw


class Native::Ip::Sla::Entry::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ip::Sla::Entry::Dhcp


class Native::Ip::Sla::Entry::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Y1731; //type: Native::Ip::Sla::Entry::Ethernet::Y1731
        class Aggregate; //type: Native::Ip::Sla::Entry::Ethernet::Aggregate
        class History; //type: Native::Ip::Sla::Entry::Ethernet::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet::Y1731> y1731;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet::Aggregate> aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet::History> history;
        
}; // Native::Ip::Sla::Entry::Ethernet


class Native::Ip::Sla::Entry::Ethernet::Y1731 : public ydk::Entity
{
    public:
        Y1731();
        ~Y1731();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Ip::Sla::Entry::Ethernet::Y1731::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet::Y1731::Delay> delay;
        
}; // Native::Ip::Sla::Entry::Ethernet::Y1731


class Native::Ip::Sla::Entry::Ethernet::Y1731::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: Name
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf domain; //type: string
        ydk::YLeaf evc; //type: string
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mpid; //type: uint16
        ydk::YLeaf cos; //type: uint8
        class Source; //type: Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source> source;
                class Name;

}; // Native::Ip::Sla::Entry::Ethernet::Y1731::Delay


class Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        ydk::YLeaf mpid; //type: uint16

}; // Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source


class Native::Ip::Sla::Entry::Ethernet::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::Ip::Sla::Entry::Ethernet::Aggregate


class Native::Ip::Sla::Entry::Ethernet::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint8

}; // Native::Ip::Sla::Entry::Ethernet::History


class Native::Ip::Sla::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        ydk::YLeaf reaction_alerts; //type: empty

}; // Native::Ip::Sla::Enable


class Native::Ip::Sla::Responder : public ydk::Entity
{
    public:
        Responder();
        ~Responder();

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

        class UdpEcho; //type: Native::Ip::Sla::Responder::UdpEcho
        class TcpConnect; //type: Native::Ip::Sla::Responder::TcpConnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect> tcp_connect;
        
}; // Native::Ip::Sla::Responder


class Native::Ip::Sla::Responder::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

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

        ydk::YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::UdpEcho::Ipaddress

        ydk::YList ipaddress;
        
}; // Native::Ip::Sla::Responder::UdpEcho


class Native::Ip::Sla::Responder::UdpEcho::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::UdpEcho::Ipaddress


class Native::Ip::Sla::Responder::TcpConnect : public ydk::Entity
{
    public:
        TcpConnect();
        ~TcpConnect();

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

        ydk::YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::TcpConnect::Ipaddress

        ydk::YList ipaddress;
        
}; // Native::Ip::Sla::Responder::TcpConnect


class Native::Ip::Sla::Responder::TcpConnect::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::TcpConnect::Ipaddress


class Native::Ip::Sla::Logging : public ydk::Entity
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

        ydk::YLeaf traps; //type: empty

}; // Native::Ip::Sla::Logging


class Native::Ip::Sla::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        class Schedule; //type: Native::Ip::Sla::Group::Schedule

        ydk::YList schedule;
        
}; // Native::Ip::Sla::Group


class Native::Ip::Sla::Group::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        ydk::YLeaf entry_number; //type: uint32
        class ProbeIds; //type: Native::Ip::Sla::Group::Schedule::ProbeIds

        ydk::YList probe_ids;
        
}; // Native::Ip::Sla::Group::Schedule


class Native::Ip::Sla::Group::Schedule::ProbeIds : public ydk::Entity
{
    public:
        ProbeIds();
        ~ProbeIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class SchedulePeriod; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod> schedule_period;
        
}; // Native::Ip::Sla::Group::Schedule::ProbeIds


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod : public ydk::Entity
{
    public:
        SchedulePeriod();
        ~SchedulePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf life; //type: one of uint32, enumeration
        class Frequency; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency
        class StartTime; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency> frequency;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime> start_time;
                class Life;

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency : public ydk::Entity
{
    public:
        Frequency();
        ~Frequency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency_val; //type: uint32
        ydk::YLeaf range; //type: string

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf now; //type: empty

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime


class Native::Ip::Sla::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        //type: uint32 (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::number)
        ydk::YLeaf entry_number;
        ydk::YLeaf ageout; //type: uint32
        ydk::YLeaf life; //type: one of uint32, enumeration
        ydk::YLeaf recurring; //type: empty
        class StartTime; //type: Native::Ip::Sla::Schedule::StartTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Schedule::StartTime> start_time;
                class Life;

}; // Native::Ip::Sla::Schedule


class Native::Ip::Sla::Schedule::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf after; //type: string
        ydk::YLeaf hour_min; //type: string
        ydk::YLeaf hour_min_sec; //type: string
        ydk::YLeaf now; //type: empty
        ydk::YLeaf pending; //type: empty
        ydk::YLeaf random; //type: uint32

}; // Native::Ip::Sla::Schedule::StartTime


class Native::Ip::Sla::ReactionConfiguration : public ydk::Entity
{
    public:
        ReactionConfiguration();
        ~ReactionConfiguration();

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

        ydk::YLeaf entry_number; //type: uint64
        class React; //type: Native::Ip::Sla::ReactionConfiguration::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React> react;
        
}; // Native::Ip::Sla::ReactionConfiguration


class Native::Ip::Sla::ReactionConfiguration::React : public ydk::Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectionLoss; //type: Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss
        class Rtt; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss> connectionloss; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt> rtt; // presence node
        
}; // Native::Ip::Sla::ReactionConfiguration::React


class Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss : public ydk::Entity
{
    public:
        ConnectionLoss();
        ~ConnectionLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdType; //type: Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType> threshold_type;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss


class Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XOfy; //type: Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy> xofy;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType


class Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy : public ydk::Entity
{
    public:
        XOfy();
        ~XOfy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf x_val; //type: uint8
        ydk::YLeaf y_val; //type: uint8
        ydk::YLeaf action_type; //type: ActionType
        class ActionType;

}; // Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy


class Native::Ip::Sla::ReactionConfiguration::React::Rtt : public ydk::Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdValue; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue> threshold_value;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt


class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue : public ydk::Entity
{
    public:
        ThresholdValue();
        ~ThresholdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf upper_limit_val; //type: uint32
        ydk::YLeaf lower_limit_val; //type: uint32
        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf action_type; //type: ActionType
        class ThresholdType;
        class ActionType;

}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue


class Native::Ip::Sla::Server : public ydk::Entity
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

        class Twamp; //type: Native::Ip::Sla::Server::Twamp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Server::Twamp> twamp; // presence node
        
}; // Native::Ip::Sla::Server


class Native::Ip::Sla::Server::Twamp : public ydk::Entity
{
    public:
        Twamp();
        ~Twamp();

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


}; // Native::Ip::Sla::Server::Twamp


class Native::Ip::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

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

        class Authentication; //type: Native::Ip::Rsvp::Authentication
        class Signalling; //type: Native::Ip::Rsvp::Signalling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling> signalling;
        
}; // Native::Ip::Rsvp


class Native::Ip::Rsvp::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Neighbor; //type: Native::Ip::Rsvp::Authentication::Neighbor
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication


class Native::Ip::Rsvp::Authentication::Neighbor : public ydk::Entity
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

        class AccessList; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList
        class Address; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address> address;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

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

        class Number; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number
        class Name; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name

        ydk::YList number;
        ydk::YList name;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number : public ydk::Entity
{
    public:
        Number();
        ~Number();

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

        ydk::YLeaf acl_number; //type: uint8
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        class Ipv4; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4

        ydk::YList ipv4;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::Address


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime


class Native::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

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

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Lifetime


class Native::Ip::Rsvp::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

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

        ydk::YLeaf initial_retransmit_delay; //type: uint16
        class FastLocalRepair; //type: Native::Ip::Rsvp::Signalling::FastLocalRepair
        class Hello; //type: Native::Ip::Rsvp::Signalling::Hello
        class Patherr; //type: Native::Ip::Rsvp::Signalling::Patherr
        class RateLimit; //type: Native::Ip::Rsvp::Signalling::RateLimit
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::FastLocalRepair> fast_local_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello> hello; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr> patherr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::RateLimit> rate_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh> refresh;
        
}; // Native::Ip::Rsvp::Signalling


class Native::Ip::Rsvp::Signalling::FastLocalRepair : public ydk::Entity
{
    public:
        FastLocalRepair();
        ~FastLocalRepair();

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

        ydk::YLeaf notifications; //type: uint16
        ydk::YLeaf rate; //type: uint16

}; // Native::Ip::Rsvp::Signalling::FastLocalRepair

class Native::Ip::Sla::Entry::IcmpEcho::History::Filter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf failures;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf overThreshold;

};

class Native::Ip::Sla::Entry::UdpJitter::Codec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g711ulaw;
        static const ydk::Enum::YLeaf g729a;

};

class Native::Ip::Sla::Entry::UdpJitter::Control : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1DM;
        static const ydk::Enum::YLeaf DMM;
        static const ydk::Enum::YLeaf DMMv1;

};

class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Life : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forever;

};

class Native::Ip::Sla::Schedule::Life : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forever;

};

class Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;

};

class Native::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_11_ */

