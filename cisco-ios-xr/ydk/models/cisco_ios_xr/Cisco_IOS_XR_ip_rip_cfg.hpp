#ifndef _CISCO_IOS_XR_IP_RIP_CFG_
#define _CISCO_IOS_XR_IP_RIP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rip_cfg {

class Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

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

        class DefaultVrf; //type: Rip::DefaultVrf
        class Vrfs; //type: Rip::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf> default_vrf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs> vrfs;
        
}; // Rip


class Rip::DefaultVrf : public ydk::Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

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
        ydk::YLeaf broadcast_for_v2; //type: empty
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf output_delay; //type: uint32
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf policy_out; //type: string
        ydk::YLeaf validate_source_disable; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf nsf; //type: empty
        ydk::YLeaf policy_in; //type: string
        class DefaultInformation; //type: Rip::DefaultVrf::DefaultInformation
        class Redistribution; //type: Rip::DefaultVrf::Redistribution
        class IpDistances; //type: Rip::DefaultVrf::IpDistances
        class Interfaces; //type: Rip::DefaultVrf::Interfaces
        class Neighbors; //type: Rip::DefaultVrf::Neighbors
        class Timers; //type: Rip::DefaultVrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::DefaultInformation> default_information; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::IpDistances> ip_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Timers> timers; // presence node
        
}; // Rip::DefaultVrf


class Rip::DefaultVrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

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

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf option; //type: DefaultInformationOption

}; // Rip::DefaultVrf::DefaultInformation


class Rip::DefaultVrf::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

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

        class Connected; //type: Rip::DefaultVrf::Redistribution::Connected
        class Bgps; //type: Rip::DefaultVrf::Redistribution::Bgps
        class Isises; //type: Rip::DefaultVrf::Redistribution::Isises
        class EigrpS; //type: Rip::DefaultVrf::Redistribution::EigrpS
        class Static; //type: Rip::DefaultVrf::Redistribution::Static
        class Ospfs; //type: Rip::DefaultVrf::Redistribution::Ospfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Bgps> bgps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Isises> isises;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::EigrpS> eigrp_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Static> static_; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Ospfs> ospfs;
        
}; // Rip::DefaultVrf::Redistribution


class Rip::DefaultVrf::Redistribution::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

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

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::DefaultVrf::Redistribution::Connected


class Rip::DefaultVrf::Redistribution::Bgps : public ydk::Entity
{
    public:
        Bgps();
        ~Bgps();

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

        class Bgp; //type: Rip::DefaultVrf::Redistribution::Bgps::Bgp

        ydk::YList bgp;
        
}; // Rip::DefaultVrf::Redistribution::Bgps


class Rip::DefaultVrf::Redistribution::Bgps::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        ydk::YLeaf asnxx; //type: uint32
        ydk::YLeaf asnyy; //type: uint32
        ydk::YLeaf policy; //type: string
        ydk::YLeaf type; //type: BgpRedistRoute

}; // Rip::DefaultVrf::Redistribution::Bgps::Bgp


class Rip::DefaultVrf::Redistribution::Isises : public ydk::Entity
{
    public:
        Isises();
        ~Isises();

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

        class Isis; //type: Rip::DefaultVrf::Redistribution::Isises::Isis

        ydk::YList isis;
        
}; // Rip::DefaultVrf::Redistribution::Isises


class Rip::DefaultVrf::Redistribution::Isises::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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

        ydk::YLeaf isis_name; //type: string
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: IsisRedistRoute

}; // Rip::DefaultVrf::Redistribution::Isises::Isis


class Rip::DefaultVrf::Redistribution::EigrpS : public ydk::Entity
{
    public:
        EigrpS();
        ~EigrpS();

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

        class Eigrp; //type: Rip::DefaultVrf::Redistribution::EigrpS::Eigrp

        ydk::YList eigrp;
        
}; // Rip::DefaultVrf::Redistribution::EigrpS


class Rip::DefaultVrf::Redistribution::EigrpS::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

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

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::DefaultVrf::Redistribution::EigrpS::Eigrp


class Rip::DefaultVrf::Redistribution::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::DefaultVrf::Redistribution::Static


class Rip::DefaultVrf::Redistribution::Ospfs : public ydk::Entity
{
    public:
        Ospfs();
        ~Ospfs();

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

        class Ospf; //type: Rip::DefaultVrf::Redistribution::Ospfs::Ospf

        ydk::YList ospf;
        
}; // Rip::DefaultVrf::Redistribution::Ospfs


class Rip::DefaultVrf::Redistribution::Ospfs::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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

        ydk::YLeaf ospf_name; //type: string
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf external; //type: boolean
        ydk::YLeaf external_type; //type: uint32
        ydk::YLeaf nssa_external; //type: boolean
        ydk::YLeaf nssa_external_type; //type: uint32

}; // Rip::DefaultVrf::Redistribution::Ospfs::Ospf


class Rip::DefaultVrf::IpDistances : public ydk::Entity
{
    public:
        IpDistances();
        ~IpDistances();

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

        class IpDistance; //type: Rip::DefaultVrf::IpDistances::IpDistance

        ydk::YList ip_distance;
        
}; // Rip::DefaultVrf::IpDistances


class Rip::DefaultVrf::IpDistances::IpDistance : public ydk::Entity
{
    public:
        IpDistance();
        ~IpDistance();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf distance; //type: uint32

}; // Rip::DefaultVrf::IpDistances::IpDistance


class Rip::DefaultVrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Rip::DefaultVrf::Interfaces::Interface

        ydk::YList interface;
        
}; // Rip::DefaultVrf::Interfaces


class Rip::DefaultVrf::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf broadcast_for_v2; //type: empty
        ydk::YLeaf poison_reverse; //type: empty
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy_out; //type: string
        ydk::YLeaf accept_metric_zero; //type: empty
        ydk::YLeaf policy_in; //type: string
        ydk::YLeaf split_horizon_disable; //type: empty
        class Authentication; //type: Rip::DefaultVrf::Interfaces::Interface::Authentication
        class SiteOfOrigin; //type: Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin
        class ReceiveVersion; //type: Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion
        class SendVersion; //type: Rip::DefaultVrf::Interfaces::Interface::SendVersion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion> receive_version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::SendVersion> send_version;
        
}; // Rip::DefaultVrf::Interfaces::Interface


class Rip::DefaultVrf::Interfaces::Interface::Authentication : public ydk::Entity
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

        ydk::YLeaf keychain; //type: string
        ydk::YLeaf mode; //type: RipAuthMode

}; // Rip::DefaultVrf::Interfaces::Interface::Authentication


class Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RipExtCommunity
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin


class Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion : public ydk::Entity
{
    public:
        ReceiveVersion();
        ~ReceiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version1; //type: boolean
        ydk::YLeaf version2; //type: boolean

}; // Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion


class Rip::DefaultVrf::Interfaces::Interface::SendVersion : public ydk::Entity
{
    public:
        SendVersion();
        ~SendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version1; //type: boolean
        ydk::YLeaf version2; //type: boolean

}; // Rip::DefaultVrf::Interfaces::Interface::SendVersion


class Rip::DefaultVrf::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Rip::DefaultVrf::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Rip::DefaultVrf::Neighbors


class Rip::DefaultVrf::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf neighbor_address; //type: string

}; // Rip::DefaultVrf::Neighbors::Neighbor


class Rip::DefaultVrf::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

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

        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf holddown_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32

}; // Rip::DefaultVrf::Timers


class Rip::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Rip::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Rip::Vrfs


class Rip::Vrfs::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf broadcast_for_v2; //type: empty
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf output_delay; //type: uint32
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf policy_out; //type: string
        ydk::YLeaf validate_source_disable; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf nsf; //type: empty
        ydk::YLeaf policy_in; //type: string
        class DefaultInformation; //type: Rip::Vrfs::Vrf::DefaultInformation
        class Redistribution; //type: Rip::Vrfs::Vrf::Redistribution
        class IpDistances; //type: Rip::Vrfs::Vrf::IpDistances
        class Interfaces; //type: Rip::Vrfs::Vrf::Interfaces
        class Neighbors; //type: Rip::Vrfs::Vrf::Neighbors
        class Timers; //type: Rip::Vrfs::Vrf::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::DefaultInformation> default_information; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution> redistribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::IpDistances> ip_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Timers> timers; // presence node
        
}; // Rip::Vrfs::Vrf


class Rip::Vrfs::Vrf::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf option; //type: DefaultInformationOption

}; // Rip::Vrfs::Vrf::DefaultInformation


class Rip::Vrfs::Vrf::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Connected; //type: Rip::Vrfs::Vrf::Redistribution::Connected
        class Bgps; //type: Rip::Vrfs::Vrf::Redistribution::Bgps
        class Isises; //type: Rip::Vrfs::Vrf::Redistribution::Isises
        class EigrpS; //type: Rip::Vrfs::Vrf::Redistribution::EigrpS
        class Static; //type: Rip::Vrfs::Vrf::Redistribution::Static
        class Ospfs; //type: Rip::Vrfs::Vrf::Redistribution::Ospfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Bgps> bgps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Isises> isises;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::EigrpS> eigrp_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Static> static_; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Ospfs> ospfs;
        
}; // Rip::Vrfs::Vrf::Redistribution


class Rip::Vrfs::Vrf::Redistribution::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::Vrfs::Vrf::Redistribution::Connected


class Rip::Vrfs::Vrf::Redistribution::Bgps : public ydk::Entity
{
    public:
        Bgps();
        ~Bgps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp

        ydk::YList bgp;
        
}; // Rip::Vrfs::Vrf::Redistribution::Bgps


class Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asnxx; //type: uint32
        ydk::YLeaf asnyy; //type: uint32
        ydk::YLeaf policy; //type: string
        ydk::YLeaf type; //type: BgpRedistRoute

}; // Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp


class Rip::Vrfs::Vrf::Redistribution::Isises : public ydk::Entity
{
    public:
        Isises();
        ~Isises();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Rip::Vrfs::Vrf::Redistribution::Isises::Isis

        ydk::YList isis;
        
}; // Rip::Vrfs::Vrf::Redistribution::Isises


class Rip::Vrfs::Vrf::Redistribution::Isises::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_name; //type: string
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: IsisRedistRoute

}; // Rip::Vrfs::Vrf::Redistribution::Isises::Isis


class Rip::Vrfs::Vrf::Redistribution::EigrpS : public ydk::Entity
{
    public:
        EigrpS();
        ~EigrpS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eigrp; //type: Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp

        ydk::YList eigrp;
        
}; // Rip::Vrfs::Vrf::Redistribution::EigrpS


class Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp


class Rip::Vrfs::Vrf::Redistribution::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf route_type; //type: DefaultRedistRoute

}; // Rip::Vrfs::Vrf::Redistribution::Static


class Rip::Vrfs::Vrf::Redistribution::Ospfs : public ydk::Entity
{
    public:
        Ospfs();
        ~Ospfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospf; //type: Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf

        ydk::YList ospf;
        
}; // Rip::Vrfs::Vrf::Redistribution::Ospfs


class Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospf_name; //type: string
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf external; //type: boolean
        ydk::YLeaf external_type; //type: uint32
        ydk::YLeaf nssa_external; //type: boolean
        ydk::YLeaf nssa_external_type; //type: uint32

}; // Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf


class Rip::Vrfs::Vrf::IpDistances : public ydk::Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpDistance; //type: Rip::Vrfs::Vrf::IpDistances::IpDistance

        ydk::YList ip_distance;
        
}; // Rip::Vrfs::Vrf::IpDistances


class Rip::Vrfs::Vrf::IpDistances::IpDistance : public ydk::Entity
{
    public:
        IpDistance();
        ~IpDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf distance; //type: uint32

}; // Rip::Vrfs::Vrf::IpDistances::IpDistance


class Rip::Vrfs::Vrf::Interfaces : public ydk::Entity
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

        class Interface; //type: Rip::Vrfs::Vrf::Interfaces::Interface

        ydk::YList interface;
        
}; // Rip::Vrfs::Vrf::Interfaces


class Rip::Vrfs::Vrf::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf broadcast_for_v2; //type: empty
        ydk::YLeaf poison_reverse; //type: empty
        ydk::YLeaf passive; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf policy_out; //type: string
        ydk::YLeaf accept_metric_zero; //type: empty
        ydk::YLeaf policy_in; //type: string
        ydk::YLeaf split_horizon_disable; //type: empty
        class Authentication; //type: Rip::Vrfs::Vrf::Interfaces::Interface::Authentication
        class SiteOfOrigin; //type: Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin
        class ReceiveVersion; //type: Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion
        class SendVersion; //type: Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion> receive_version;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion> send_version;
        
}; // Rip::Vrfs::Vrf::Interfaces::Interface


class Rip::Vrfs::Vrf::Interfaces::Interface::Authentication : public ydk::Entity
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

        ydk::YLeaf keychain; //type: string
        ydk::YLeaf mode; //type: RipAuthMode

}; // Rip::Vrfs::Vrf::Interfaces::Interface::Authentication


class Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin : public ydk::Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RipExtCommunity
        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin


class Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion : public ydk::Entity
{
    public:
        ReceiveVersion();
        ~ReceiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version1; //type: boolean
        ydk::YLeaf version2; //type: boolean

}; // Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion


class Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion : public ydk::Entity
{
    public:
        SendVersion();
        ~SendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version1; //type: boolean
        ydk::YLeaf version2; //type: boolean

}; // Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion


class Rip::Vrfs::Vrf::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Rip::Vrfs::Vrf::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Rip::Vrfs::Vrf::Neighbors


class Rip::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf neighbor_address; //type: string

}; // Rip::Vrfs::Vrf::Neighbors::Neighbor


class Rip::Vrfs::Vrf::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_timer; //type: uint32
        ydk::YLeaf invalid_timer; //type: uint32
        ydk::YLeaf holddown_timer; //type: uint32
        ydk::YLeaf flush_timer; //type: uint32

}; // Rip::Vrfs::Vrf::Timers

class RipAuthMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf text;
        static const ydk::Enum::YLeaf md5;

        static int get_enum_value(const std::string & name) {
            if (name == "text") return 2;
            if (name == "md5") return 3;
            return -1;
        }
};

class IsisRedistRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1_and2;

        static int get_enum_value(const std::string & name) {
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            if (name == "level1-and2") return 3;
            return -1;
        }
};

class DefaultInformationOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf policy;

        static int get_enum_value(const std::string & name) {
            if (name == "always") return 0;
            if (name == "policy") return 1;
            return -1;
        }
};

class BgpRedistRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "internal") return 512;
            if (name == "external") return 1024;
            if (name == "local") return 2048;
            return -1;
        }
};

class RipExtCommunity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf four_byte_as;

        static int get_enum_value(const std::string & name) {
            if (name == "as") return 0;
            if (name == "ipv4-address") return 1;
            if (name == "four-byte-as") return 2;
            return -1;
        }
};

class DefaultRedistRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IP_RIP_CFG_ */

