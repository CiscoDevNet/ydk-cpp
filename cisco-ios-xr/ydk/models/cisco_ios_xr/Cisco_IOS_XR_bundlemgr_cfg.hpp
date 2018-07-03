#ifndef _CISCO_IOS_XR_BUNDLEMGR_CFG_
#define _CISCO_IOS_XR_BUNDLEMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_cfg {

class Lacp : public ydk::Entity
{
    public:
        Lacp();
        ~Lacp();

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

        ydk::YLeaf system_mac; //type: string
        ydk::YLeaf system_priority; //type: uint32

}; // Lacp

class BundleMaximumActiveLinksMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf hot_standby;

};

class BundleCiscoExtTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lon_signaling_off;
        static const ydk::Enum::YLeaf lon_signaling_on;

};

class BundleMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class BundleLoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf efp_auto;
        static const ydk::Enum::YLeaf efp_value;
        static const ydk::Enum::YLeaf source_ip;
        static const ydk::Enum::YLeaf destination_ip;

};

class ChurnLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf actor;
        static const ydk::Enum::YLeaf partner;
        static const ydk::Enum::YLeaf both;

};

class MlacpSwitchover : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf brute_force;
        static const ydk::Enum::YLeaf revertive;

};

class MlacpMaximizeParameter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf links;
        static const ydk::Enum::YLeaf bandwidth;

};

class BfdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_cfg;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class PeriodShortEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;

};

class BundleMinimumBandwidthRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

};

class BundlePeriod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;

};

class BundlePortActivity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf inherit;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_CFG_ */

