#ifndef _CISCO_IOS_XR_BUNDLEMGR_CFG_
#define _CISCO_IOS_XR_BUNDLEMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_cfg {

class Lacp : public Entity
{
    public:
        Lacp();
        ~Lacp();

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


        YLeaf system_mac; //type: string
        YLeaf system_priority; //type: uint32



}; // Lacp

class BundleMaximumActiveLinksModeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf hot_standby;

};

class BundleCiscoExtTypesEnum : public Enum
{
    public:
        static const Enum::YLeaf lon_signaling_off;
        static const Enum::YLeaf lon_signaling_on;

};

class BundleModeEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class BundleLoadBalanceEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf efp_auto;
        static const Enum::YLeaf efp_value;
        static const Enum::YLeaf source_ip;
        static const Enum::YLeaf destination_ip;

};

class ChurnLoggingEnum : public Enum
{
    public:
        static const Enum::YLeaf actor;
        static const Enum::YLeaf partner;
        static const Enum::YLeaf both;

};

class MlacpSwitchoverEnum : public Enum
{
    public:
        static const Enum::YLeaf brute_force;
        static const Enum::YLeaf revertive;

};

class MlacpMaximizeParameterEnum : public Enum
{
    public:
        static const Enum::YLeaf links;
        static const Enum::YLeaf bandwidth;

};

class BfdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf no_cfg;
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class PeriodShortEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;

};

class BundleMinimumBandwidthRangeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf mbps;
        static const Enum::YLeaf gbps;

};

class BundlePeriodEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;

};

class BundlePortActivityEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;
        static const Enum::YLeaf inherit;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_CFG_ */

