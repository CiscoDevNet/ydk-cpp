#ifndef _CISCO_IOS_XR_IP_BFD_CFG_
#define _CISCO_IOS_XR_IP_BFD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_cfg {

class Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        ydk::YLeaf global_echo_usage; //type: empty
        ydk::YLeaf ipv6_checksum_disable; //type: empty
        ydk::YLeaf global_echo_min_interval; //type: uint32
        ydk::YLeaf ttl_drop_threshold; //type: uint32
        ydk::YLeaf single_hop_trap; //type: empty
        ydk::YLeaf global_ipv4_echo_source; //type: string
        class FlapDamp; //type: Bfd::FlapDamp
        class EchoLatency; //type: Bfd::EchoLatency
        class EchoStartup; //type: Bfd::EchoStartup
        class Interfaces; //type: Bfd::Interfaces
        class MultiPathIncludes; //type: Bfd::MultiPathIncludes
        class Bundle; //type: Bfd::Bundle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp> flap_damp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoLatency> echo_latency;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoStartup> echo_startup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::MultiPathIncludes> multi_path_includes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::Bundle> bundle;
        
}; // Bfd


class Bfd::FlapDamp : public ydk::Entity
{
    public:
        FlapDamp();
        ~FlapDamp();

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

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32
        ydk::YLeaf dampen_disable; //type: empty
        ydk::YLeaf secondary_delay; //type: uint32
        class BundleMember; //type: Bfd::FlapDamp::BundleMember
        class Extensions; //type: Bfd::FlapDamp::Extensions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp::BundleMember> bundle_member;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp::Extensions> extensions;
        
}; // Bfd::FlapDamp


class Bfd::FlapDamp::BundleMember : public ydk::Entity
{
    public:
        BundleMember();
        ~BundleMember();

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

        ydk::YLeaf initial_delay; //type: uint32
        ydk::YLeaf maximum_delay; //type: uint32
        ydk::YLeaf secondary_delay; //type: uint32
        ydk::YLeaf l3_only_mode; //type: empty

}; // Bfd::FlapDamp::BundleMember


class Bfd::FlapDamp::Extensions : public ydk::Entity
{
    public:
        Extensions();
        ~Extensions();

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

        ydk::YLeaf down_monitor; //type: empty

}; // Bfd::FlapDamp::Extensions


class Bfd::EchoLatency : public ydk::Entity
{
    public:
        EchoLatency();
        ~EchoLatency();

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

        class Detect; //type: Bfd::EchoLatency::Detect

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoLatency::Detect> detect;
        
}; // Bfd::EchoLatency


class Bfd::EchoLatency::Detect : public ydk::Entity
{
    public:
        Detect();
        ~Detect();

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

        ydk::YLeaf latency_detect_enabled; //type: boolean
        ydk::YLeaf latency_detect_percentage; //type: uint32
        ydk::YLeaf latency_detect_count; //type: uint32

}; // Bfd::EchoLatency::Detect


class Bfd::EchoStartup : public ydk::Entity
{
    public:
        EchoStartup();
        ~EchoStartup();

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

        ydk::YLeaf validate; //type: BfdEchoStartupValidate

}; // Bfd::EchoStartup


class Bfd::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Bfd::Interfaces::Interface

        ydk::YList interface;
        
}; // Bfd::Interfaces


class Bfd::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_echo_usage; //type: BfdIfEchoUsage
        ydk::YLeaf ipv6_checksum; //type: BfdIfIpv6ChecksumUsage
        ydk::YLeaf interface_ipv4_echo_source; //type: string

}; // Bfd::Interfaces::Interface


class Bfd::MultiPathIncludes : public ydk::Entity
{
    public:
        MultiPathIncludes();
        ~MultiPathIncludes();

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

        class MultiPathInclude; //type: Bfd::MultiPathIncludes::MultiPathInclude

        ydk::YList multi_path_include;
        
}; // Bfd::MultiPathIncludes


class Bfd::MultiPathIncludes::MultiPathInclude : public ydk::Entity
{
    public:
        MultiPathInclude();
        ~MultiPathInclude();

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

        ydk::YLeaf location; //type: string

}; // Bfd::MultiPathIncludes::MultiPathInclude


class Bfd::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

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

        class Coexistence; //type: Bfd::Bundle::Coexistence

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_cfg::Bfd::Bundle::Coexistence> coexistence;
        
}; // Bfd::Bundle


class Bfd::Bundle::Coexistence : public ydk::Entity
{
    public:
        Coexistence();
        ~Coexistence();

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

        ydk::YLeaf bob_blb; //type: BfdBundleCoexistenceBobBlb

}; // Bfd::Bundle::Coexistence

class BfdEchoStartupValidate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf force;

};

class BfdBundleCoexistenceBobBlb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inherited;
        static const ydk::Enum::YLeaf logical;

};

class BfdIfEchoUsage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class BfdIfIpv6ChecksumUsage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_CFG_ */

