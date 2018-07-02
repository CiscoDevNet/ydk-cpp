#ifndef _CISCO_IOS_XE_NATIVE_217_
#define _CISCO_IOS_XE_NATIVE_217_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_216.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Cef::Table::Download::DefaultRoute : public ydk::Entity
{
    public:
        DefaultRoute();
        ~DefaultRoute();

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

        class Priority; //type: Native::Cef::Table::Download::DefaultRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::DefaultRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::DefaultRoute


class Native::Cef::Table::Download::DefaultRoute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::DefaultRoute::Priority


class Native::Cef::Table::Download::ReceiveRoute : public ydk::Entity
{
    public:
        ReceiveRoute();
        ~ReceiveRoute();

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

        class Priority; //type: Native::Cef::Table::Download::ReceiveRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ReceiveRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::ReceiveRoute


class Native::Cef::Table::Download::ReceiveRoute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::ReceiveRoute::Priority


class Native::Cef::Table::Download::RecursiveDependents : public ydk::Entity
{
    public:
        RecursiveDependents();
        ~RecursiveDependents();

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

        class Priority; //type: Native::Cef::Table::Download::RecursiveDependents::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RecursiveDependents::Priority> priority;
        
}; // Native::Cef::Table::Download::RecursiveDependents


class Native::Cef::Table::Download::RecursiveDependents::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RecursiveDependents::Priority


class Native::Cef::Table::Download::RouteInVrf : public ydk::Entity
{
    public:
        RouteInVrf();
        ~RouteInVrf();

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

        class Priority; //type: Native::Cef::Table::Download::RouteInVrf::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RouteInVrf::Priority> priority;
        
}; // Native::Cef::Table::Download::RouteInVrf


class Native::Cef::Table::Download::RouteInVrf::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

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

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RouteInVrf::Priority


}
}

#endif /* _CISCO_IOS_XE_NATIVE_217_ */

