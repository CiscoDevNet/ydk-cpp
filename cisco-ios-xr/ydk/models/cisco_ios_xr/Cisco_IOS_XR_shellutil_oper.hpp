#ifndef _CISCO_IOS_XR_SHELLUTIL_OPER_
#define _CISCO_IOS_XR_SHELLUTIL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_oper {

class SystemTime : public ydk::Entity
{
    public:
        SystemTime();
        ~SystemTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Clock_; //type: SystemTime::Clock_
        class Uptime; //type: SystemTime::Uptime

        std::shared_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Clock_> clock_;
        std::shared_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Uptime> uptime;
        
}; // SystemTime


class SystemTime::Clock_ : public ydk::Entity
{
    public:
        Clock_();
        ~Clock_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf year; //type: uint16
        ydk::YLeaf month; //type: uint8
        ydk::YLeaf day; //type: uint8
        ydk::YLeaf hour; //type: uint8
        ydk::YLeaf minute; //type: uint8
        ydk::YLeaf second; //type: uint8
        ydk::YLeaf millisecond; //type: uint16
        ydk::YLeaf wday; //type: uint16
        ydk::YLeaf time_zone; //type: string
        ydk::YLeaf time_source; //type: TimeSource

}; // SystemTime::Clock_


class SystemTime::Uptime : public ydk::Entity
{
    public:
        Uptime();
        ~Uptime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf uptime; //type: uint32

}; // SystemTime::Uptime

class TimeSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf calendar;

};


}
}

#endif /* _CISCO_IOS_XR_SHELLUTIL_OPER_ */

