#ifndef _CISCO_IOS_XR_FIB_COMMON_CFG_
#define _CISCO_IOS_XR_FIB_COMMON_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_cfg {

class Fib : public ydk::Entity
{
    public:
        Fib();
        ~Fib();

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

        ydk::YLeaf prefer_aib_routes; //type: boolean
        class PbtsForwardClassFallbacks; //type: Fib::PbtsForwardClassFallbacks
        class Platform; //type: Fib::Platform

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks> pbts_forward_class_fallbacks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_cfg::Fib::Platform> platform;
        
}; // Fib


class Fib::PbtsForwardClassFallbacks : public ydk::Entity
{
    public:
        PbtsForwardClassFallbacks();
        ~PbtsForwardClassFallbacks();

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

        class PbtsForwardClassFallback; //type: Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_cfg::Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback> > pbts_forward_class_fallback;
        
}; // Fib::PbtsForwardClassFallbacks


class Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback : public ydk::Entity
{
    public:
        PbtsForwardClassFallback();
        ~PbtsForwardClassFallback();

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

        ydk::YLeaf forward_class_number; //type: one of enumeration, uint32
        ydk::YLeaf fallback_type; //type: FibPbtsFallback
        ydk::YLeafList fallback_class_number_array; //type: list of  uint32

}; // Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback


class Fib::Platform : public ydk::Entity
{
    public:
        Platform();
        ~Platform();

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

        class LabelSwitchedMulticast; //type: Fib::Platform::LabelSwitchedMulticast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_cfg::Fib::Platform::LabelSwitchedMulticast> label_switched_multicast;
        
}; // Fib::Platform


class Fib::Platform::LabelSwitchedMulticast : public ydk::Entity
{
    public:
        LabelSwitchedMulticast();
        ~LabelSwitchedMulticast();

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

        ydk::YLeaf frr_holdtime; //type: uint32

}; // Fib::Platform::LabelSwitchedMulticast

class FibPbtsForwardClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class FibPbtsFallback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf list;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf drop;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_CFG_ */

