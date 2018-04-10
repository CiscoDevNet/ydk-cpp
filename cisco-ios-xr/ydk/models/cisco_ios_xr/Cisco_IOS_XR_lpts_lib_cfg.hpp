#ifndef _CISCO_IOS_XR_LPTS_LIB_CFG_
#define _CISCO_IOS_XR_LPTS_LIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_lib_cfg {

class Lpts : public ydk::Entity
{
    public:
        Lpts();
        ~Lpts();

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

        class Ipolicer; //type: Lpts::Ipolicer
        class Punt; //type: Lpts::Punt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer> ipolicer; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt> punt;
        
}; // Lpts


class Lpts::Ipolicer : public ydk::Entity
{
    public:
        Ipolicer();
        ~Ipolicer();

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

        ydk::YLeaf enable; //type: empty
        class Ipv4Acls; //type: Lpts::Ipolicer::Ipv4Acls
        class Flows; //type: Lpts::Ipolicer::Flows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls> ipv4acls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows> flows;
        
}; // Lpts::Ipolicer


class Lpts::Ipolicer::Ipv4Acls : public ydk::Entity
{
    public:
        Ipv4Acls();
        ~Ipv4Acls();

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

        class Ipv4Acl; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl> > ipv4acl;
        
}; // Lpts::Ipolicer::Ipv4Acls


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl : public ydk::Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

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
        class Ipv4VrfNames; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames> ipv4vrf_names;
        
}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames : public ydk::Entity
{
    public:
        Ipv4VrfNames();
        ~Ipv4VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4VrfName; //type: Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName> > ipv4vrf_name;
        
}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames


class Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName : public ydk::Entity
{
    public:
        Ipv4VrfName();
        ~Ipv4VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf acl_rate; //type: uint32

}; // Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName


class Lpts::Ipolicer::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

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

        class Flow; //type: Lpts::Ipolicer::Flows::Flow

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows::Flow> > flow;
        
}; // Lpts::Ipolicer::Flows


class Lpts::Ipolicer::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

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

        ydk::YLeaf flow_type; //type: LptsFlow
        ydk::YLeaf rate; //type: uint32
        class Precedences; //type: Lpts::Ipolicer::Flows::Flow::Precedences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Ipolicer::Flows::Flow::Precedences> precedences;
        
}; // Lpts::Ipolicer::Flows::Flow


class Lpts::Ipolicer::Flows::Flow::Precedences : public ydk::Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList precedence; //type: list of  one of uint32, enumeration

}; // Lpts::Ipolicer::Flows::Flow::Precedences


class Lpts::Punt : public ydk::Entity
{
    public:
        Punt();
        ~Punt();

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

        class Flowtrap; //type: Lpts::Punt::Flowtrap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap> flowtrap;
        
}; // Lpts::Punt


class Lpts::Punt::Flowtrap : public ydk::Entity
{
    public:
        Flowtrap();
        ~Flowtrap();

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

        ydk::YLeaf max_flow_gap; //type: uint32
        ydk::YLeaf et_size; //type: uint32
        ydk::YLeaf eviction_threshold; //type: uint32
        ydk::YLeaf report_threshold; //type: uint16
        ydk::YLeaf non_subscriber_interfaces; //type: int32
        ydk::YLeaf sample_prob; //type: string
        ydk::YLeaf eviction_search_limit; //type: uint32
        ydk::YLeaf routing_protocols_enable; //type: boolean
        ydk::YLeaf subscriber_interfaces; //type: boolean
        ydk::YLeaf interface_based_flow; //type: boolean
        ydk::YLeaf dampening; //type: uint32
        class PenaltyRates; //type: Lpts::Punt::Flowtrap::PenaltyRates
        class PenaltyTimeouts; //type: Lpts::Punt::Flowtrap::PenaltyTimeouts
        class Exclude; //type: Lpts::Punt::Flowtrap::Exclude

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyRates> penalty_rates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyTimeouts> penalty_timeouts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude> exclude;
        
}; // Lpts::Punt::Flowtrap


class Lpts::Punt::Flowtrap::PenaltyRates : public ydk::Entity
{
    public:
        PenaltyRates();
        ~PenaltyRates();

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

        class PenaltyRate; //type: Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate> > penalty_rate;
        
}; // Lpts::Punt::Flowtrap::PenaltyRates


class Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate : public ydk::Entity
{
    public:
        PenaltyRate();
        ~PenaltyRate();

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

        ydk::YLeaf protocol_name; //type: LptsPuntFlowtrapProtoId
        ydk::YLeaf rate; //type: uint32

}; // Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate


class Lpts::Punt::Flowtrap::PenaltyTimeouts : public ydk::Entity
{
    public:
        PenaltyTimeouts();
        ~PenaltyTimeouts();

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

        class PenaltyTimeout; //type: Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout> > penalty_timeout;
        
}; // Lpts::Punt::Flowtrap::PenaltyTimeouts


class Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout : public ydk::Entity
{
    public:
        PenaltyTimeout();
        ~PenaltyTimeout();

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

        ydk::YLeaf protocol_name; //type: LptsPuntFlowtrapProtoId
        ydk::YLeaf timeout; //type: uint32

}; // Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout


class Lpts::Punt::Flowtrap::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

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

        class InterfaceNames; //type: Lpts::Punt::Flowtrap::Exclude::InterfaceNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude::InterfaceNames> interface_names;
        
}; // Lpts::Punt::Flowtrap::Exclude


class Lpts::Punt::Flowtrap::Exclude::InterfaceNames : public ydk::Entity
{
    public:
        InterfaceNames();
        ~InterfaceNames();

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

        class InterfaceName; //type: Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_lib_cfg::Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName> > interface_name;
        
}; // Lpts::Punt::Flowtrap::Exclude::InterfaceNames


class Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName : public ydk::Entity
{
    public:
        InterfaceName();
        ~InterfaceName();

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

        ydk::YLeaf ifname; //type: string
        ydk::YLeaf id1; //type: boolean

}; // Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName


}
}

#endif /* _CISCO_IOS_XR_LPTS_LIB_CFG_ */

