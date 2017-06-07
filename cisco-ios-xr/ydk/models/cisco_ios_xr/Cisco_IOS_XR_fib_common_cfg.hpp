#ifndef _CISCO_IOS_XR_FIB_COMMON_CFG_
#define _CISCO_IOS_XR_FIB_COMMON_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fib_common_cfg {

class Fib : public Entity
{
    public:
        Fib();
        ~Fib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf prefer_aib_routes; //type: boolean
        class PbtsForwardClassFallbacks; //type: Fib::PbtsForwardClassFallbacks
        class Platform; //type: Fib::Platform

        std::shared_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks> pbts_forward_class_fallbacks;
        std::shared_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::Platform> platform;
        
}; // Fib


class Fib::PbtsForwardClassFallbacks : public Entity
{
    public:
        PbtsForwardClassFallbacks();
        ~PbtsForwardClassFallbacks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PbtsForwardClassFallback; //type: Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback

        std::vector<std::shared_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback> > pbts_forward_class_fallback;
        
}; // Fib::PbtsForwardClassFallbacks


class Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback : public Entity
{
    public:
        PbtsForwardClassFallback();
        ~PbtsForwardClassFallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forward_class_number; //type: one of uint32, enumeration
        YLeaf fallback_type; //type: FibPbtsFallbackEnum
        YLeafList fallback_class_number_array; //type: list of  uint32

}; // Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback


class Fib::Platform : public Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSwitchedMulticast; //type: Fib::Platform::LabelSwitchedMulticast

        std::shared_ptr<Cisco_IOS_XR_fib_common_cfg::Fib::Platform::LabelSwitchedMulticast> label_switched_multicast;
        
}; // Fib::Platform


class Fib::Platform::LabelSwitchedMulticast : public Entity
{
    public:
        LabelSwitchedMulticast();
        ~LabelSwitchedMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frr_holdtime; //type: uint32

}; // Fib::Platform::LabelSwitchedMulticast

class FibPbtsFallbackEnum : public Enum
{
    public:
        static const Enum::YLeaf list;
        static const Enum::YLeaf any;
        static const Enum::YLeaf drop;

};

class FibPbtsForwardClassEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_CFG_ */

