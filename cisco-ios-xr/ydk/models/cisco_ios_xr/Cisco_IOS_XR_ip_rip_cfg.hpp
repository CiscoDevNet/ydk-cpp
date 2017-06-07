#ifndef _CISCO_IOS_XR_IP_RIP_CFG_
#define _CISCO_IOS_XR_IP_RIP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_rip_cfg {

class Rip : public Entity
{
    public:
        Rip();
        ~Rip();

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

        class DefaultVrf; //type: Rip::DefaultVrf
        class Vrfs; //type: Rip::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs> vrfs;
        
}; // Rip


class Rip::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf broadcast_for_v2; //type: empty
        YLeaf distance; //type: uint32
        YLeaf default_metric; //type: uint32
        YLeaf output_delay; //type: uint32
        YLeaf auto_summary; //type: empty
        YLeaf policy_out; //type: string
        YLeaf validate_source_disable; //type: empty
        YLeaf maximum_paths; //type: uint32
        YLeaf nsf; //type: empty
        YLeaf policy_in; //type: string
        class DefaultInformation; //type: Rip::DefaultVrf::DefaultInformation
        class Redistribution; //type: Rip::DefaultVrf::Redistribution
        class IpDistances; //type: Rip::DefaultVrf::IpDistances
        class Interfaces; //type: Rip::DefaultVrf::Interfaces
        class Neighbors; //type: Rip::DefaultVrf::Neighbors
        class Timers; //type: Rip::DefaultVrf::Timers

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::DefaultInformation> default_information; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::IpDistances> ip_distances;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution> redistribution;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Timers> timers;
        
}; // Rip::DefaultVrf


class Rip::DefaultVrf::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf option; //type: DefaultInformationOptionEnum

}; // Rip::DefaultVrf::DefaultInformation


class Rip::DefaultVrf::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Connected; //type: Rip::DefaultVrf::Redistribution::Connected
        class Bgps; //type: Rip::DefaultVrf::Redistribution::Bgps
        class Isises; //type: Rip::DefaultVrf::Redistribution::Isises
        class EigrpS; //type: Rip::DefaultVrf::Redistribution::EigrpS
        class Static_; //type: Rip::DefaultVrf::Redistribution::Static_
        class Ospfs; //type: Rip::DefaultVrf::Redistribution::Ospfs

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Bgps> bgps;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::EigrpS> eigrp_s;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Isises> isises;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Ospfs> ospfs;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Static_> static_; // presence node
        
}; // Rip::DefaultVrf::Redistribution


class Rip::DefaultVrf::Redistribution::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::DefaultVrf::Redistribution::Connected


class Rip::DefaultVrf::Redistribution::Bgps : public Entity
{
    public:
        Bgps();
        ~Bgps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp; //type: Rip::DefaultVrf::Redistribution::Bgps::Bgp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Bgps::Bgp> > bgp;
        
}; // Rip::DefaultVrf::Redistribution::Bgps


class Rip::DefaultVrf::Redistribution::Bgps::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asnxx; //type: uint32
        YLeaf asnyy; //type: uint32
        YLeaf policy; //type: string
        YLeaf type; //type: BgpRedistRouteEnum

}; // Rip::DefaultVrf::Redistribution::Bgps::Bgp


class Rip::DefaultVrf::Redistribution::Isises : public Entity
{
    public:
        Isises();
        ~Isises();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Rip::DefaultVrf::Redistribution::Isises::Isis

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Isises::Isis> > isis;
        
}; // Rip::DefaultVrf::Redistribution::Isises


class Rip::DefaultVrf::Redistribution::Isises::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_name; //type: string
        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: IsisRedistRouteEnum

}; // Rip::DefaultVrf::Redistribution::Isises::Isis


class Rip::DefaultVrf::Redistribution::EigrpS : public Entity
{
    public:
        EigrpS();
        ~EigrpS();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Rip::DefaultVrf::Redistribution::EigrpS::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::EigrpS::Eigrp> > eigrp;
        
}; // Rip::DefaultVrf::Redistribution::EigrpS


class Rip::DefaultVrf::Redistribution::EigrpS::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::DefaultVrf::Redistribution::EigrpS::Eigrp


class Rip::DefaultVrf::Redistribution::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::DefaultVrf::Redistribution::Static_


class Rip::DefaultVrf::Redistribution::Ospfs : public Entity
{
    public:
        Ospfs();
        ~Ospfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospf; //type: Rip::DefaultVrf::Redistribution::Ospfs::Ospf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Redistribution::Ospfs::Ospf> > ospf;
        
}; // Rip::DefaultVrf::Redistribution::Ospfs


class Rip::DefaultVrf::Redistribution::Ospfs::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospf_name; //type: string
        YLeaf route_policy_name; //type: string
        YLeaf internal; //type: boolean
        YLeaf external; //type: boolean
        YLeaf external_type; //type: uint32
        YLeaf nssa_external; //type: boolean
        YLeaf nssa_external_type; //type: uint32

}; // Rip::DefaultVrf::Redistribution::Ospfs::Ospf


class Rip::DefaultVrf::IpDistances : public Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpDistance; //type: Rip::DefaultVrf::IpDistances::IpDistance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::IpDistances::IpDistance> > ip_distance;
        
}; // Rip::DefaultVrf::IpDistances


class Rip::DefaultVrf::IpDistances::IpDistance : public Entity
{
    public:
        IpDistance();
        ~IpDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf distance; //type: uint32

}; // Rip::DefaultVrf::IpDistances::IpDistance


class Rip::DefaultVrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Rip::DefaultVrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface> > interface;
        
}; // Rip::DefaultVrf::Interfaces


class Rip::DefaultVrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf broadcast_for_v2; //type: empty
        YLeaf poison_reverse; //type: empty
        YLeaf passive; //type: empty
        YLeaf enable; //type: empty
        YLeaf policy_out; //type: string
        YLeaf accept_metric_zero; //type: empty
        YLeaf policy_in; //type: string
        YLeaf split_horizon_disable; //type: empty
        class Authentication; //type: Rip::DefaultVrf::Interfaces::Interface::Authentication
        class SiteOfOrigin; //type: Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin
        class ReceiveVersion; //type: Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion
        class SendVersion; //type: Rip::DefaultVrf::Interfaces::Interface::SendVersion

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion> receive_version;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::SendVersion> send_version;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        
}; // Rip::DefaultVrf::Interfaces::Interface


class Rip::DefaultVrf::Interfaces::Interface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keychain; //type: string
        YLeaf mode; //type: RipAuthModeEnum

}; // Rip::DefaultVrf::Interfaces::Interface::Authentication


class Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin : public Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: RipExtCommunityEnum
        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf address_index; //type: uint32

}; // Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin


class Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion : public Entity
{
    public:
        ReceiveVersion();
        ~ReceiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version1; //type: boolean
        YLeaf version2; //type: boolean

}; // Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion


class Rip::DefaultVrf::Interfaces::Interface::SendVersion : public Entity
{
    public:
        SendVersion();
        ~SendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version1; //type: boolean
        YLeaf version2; //type: boolean

}; // Rip::DefaultVrf::Interfaces::Interface::SendVersion


class Rip::DefaultVrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Rip::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::DefaultVrf::Neighbors::Neighbor> > neighbor;
        
}; // Rip::DefaultVrf::Neighbors


class Rip::DefaultVrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string

}; // Rip::DefaultVrf::Neighbors::Neighbor


class Rip::DefaultVrf::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_timer; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf holddown_timer; //type: uint32
        YLeaf flush_timer; //type: uint32

}; // Rip::DefaultVrf::Timers


class Rip::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Rip::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf> > vrf;
        
}; // Rip::Vrfs


class Rip::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf enable; //type: empty
        YLeaf broadcast_for_v2; //type: empty
        YLeaf distance; //type: uint32
        YLeaf default_metric; //type: uint32
        YLeaf output_delay; //type: uint32
        YLeaf auto_summary; //type: empty
        YLeaf policy_out; //type: string
        YLeaf validate_source_disable; //type: empty
        YLeaf maximum_paths; //type: uint32
        YLeaf nsf; //type: empty
        YLeaf policy_in; //type: string
        class DefaultInformation; //type: Rip::Vrfs::Vrf::DefaultInformation
        class Redistribution; //type: Rip::Vrfs::Vrf::Redistribution
        class IpDistances; //type: Rip::Vrfs::Vrf::IpDistances
        class Interfaces; //type: Rip::Vrfs::Vrf::Interfaces
        class Neighbors; //type: Rip::Vrfs::Vrf::Neighbors
        class Timers; //type: Rip::Vrfs::Vrf::Timers

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::DefaultInformation> default_information; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::IpDistances> ip_distances;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution> redistribution;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Timers> timers;
        
}; // Rip::Vrfs::Vrf


class Rip::Vrfs::Vrf::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf option; //type: DefaultInformationOptionEnum

}; // Rip::Vrfs::Vrf::DefaultInformation


class Rip::Vrfs::Vrf::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Connected; //type: Rip::Vrfs::Vrf::Redistribution::Connected
        class Bgps; //type: Rip::Vrfs::Vrf::Redistribution::Bgps
        class Isises; //type: Rip::Vrfs::Vrf::Redistribution::Isises
        class EigrpS; //type: Rip::Vrfs::Vrf::Redistribution::EigrpS
        class Static_; //type: Rip::Vrfs::Vrf::Redistribution::Static_
        class Ospfs; //type: Rip::Vrfs::Vrf::Redistribution::Ospfs

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Bgps> bgps;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::EigrpS> eigrp_s;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Isises> isises;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Ospfs> ospfs;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Static_> static_; // presence node
        
}; // Rip::Vrfs::Vrf::Redistribution


class Rip::Vrfs::Vrf::Redistribution::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::Vrfs::Vrf::Redistribution::Connected


class Rip::Vrfs::Vrf::Redistribution::Bgps : public Entity
{
    public:
        Bgps();
        ~Bgps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp; //type: Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp> > bgp;
        
}; // Rip::Vrfs::Vrf::Redistribution::Bgps


class Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asnxx; //type: uint32
        YLeaf asnyy; //type: uint32
        YLeaf policy; //type: string
        YLeaf type; //type: BgpRedistRouteEnum

}; // Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp


class Rip::Vrfs::Vrf::Redistribution::Isises : public Entity
{
    public:
        Isises();
        ~Isises();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Rip::Vrfs::Vrf::Redistribution::Isises::Isis

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Isises::Isis> > isis;
        
}; // Rip::Vrfs::Vrf::Redistribution::Isises


class Rip::Vrfs::Vrf::Redistribution::Isises::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_name; //type: string
        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: IsisRedistRouteEnum

}; // Rip::Vrfs::Vrf::Redistribution::Isises::Isis


class Rip::Vrfs::Vrf::Redistribution::EigrpS : public Entity
{
    public:
        EigrpS();
        ~EigrpS();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp> > eigrp;
        
}; // Rip::Vrfs::Vrf::Redistribution::EigrpS


class Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as; //type: uint32
        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp


class Rip::Vrfs::Vrf::Redistribution::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf route_type; //type: DefaultRedistRouteEnum

}; // Rip::Vrfs::Vrf::Redistribution::Static_


class Rip::Vrfs::Vrf::Redistribution::Ospfs : public Entity
{
    public:
        Ospfs();
        ~Ospfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospf; //type: Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf> > ospf;
        
}; // Rip::Vrfs::Vrf::Redistribution::Ospfs


class Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospf_name; //type: string
        YLeaf route_policy_name; //type: string
        YLeaf internal; //type: boolean
        YLeaf external; //type: boolean
        YLeaf external_type; //type: uint32
        YLeaf nssa_external; //type: boolean
        YLeaf nssa_external_type; //type: uint32

}; // Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf


class Rip::Vrfs::Vrf::IpDistances : public Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpDistance; //type: Rip::Vrfs::Vrf::IpDistances::IpDistance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::IpDistances::IpDistance> > ip_distance;
        
}; // Rip::Vrfs::Vrf::IpDistances


class Rip::Vrfs::Vrf::IpDistances::IpDistance : public Entity
{
    public:
        IpDistance();
        ~IpDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf distance; //type: uint32

}; // Rip::Vrfs::Vrf::IpDistances::IpDistance


class Rip::Vrfs::Vrf::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Rip::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface> > interface;
        
}; // Rip::Vrfs::Vrf::Interfaces


class Rip::Vrfs::Vrf::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf broadcast_for_v2; //type: empty
        YLeaf poison_reverse; //type: empty
        YLeaf passive; //type: empty
        YLeaf enable; //type: empty
        YLeaf policy_out; //type: string
        YLeaf accept_metric_zero; //type: empty
        YLeaf policy_in; //type: string
        YLeaf split_horizon_disable; //type: empty
        class Authentication; //type: Rip::Vrfs::Vrf::Interfaces::Interface::Authentication
        class SiteOfOrigin; //type: Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin
        class ReceiveVersion; //type: Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion
        class SendVersion; //type: Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion

        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion> receive_version;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion> send_version;
        std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin> site_of_origin;
        
}; // Rip::Vrfs::Vrf::Interfaces::Interface


class Rip::Vrfs::Vrf::Interfaces::Interface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keychain; //type: string
        YLeaf mode; //type: RipAuthModeEnum

}; // Rip::Vrfs::Vrf::Interfaces::Interface::Authentication


class Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin : public Entity
{
    public:
        SiteOfOrigin();
        ~SiteOfOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: RipExtCommunityEnum
        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf address_index; //type: uint32

}; // Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin


class Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion : public Entity
{
    public:
        ReceiveVersion();
        ~ReceiveVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version1; //type: boolean
        YLeaf version2; //type: boolean

}; // Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion


class Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion : public Entity
{
    public:
        SendVersion();
        ~SendVersion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version1; //type: boolean
        YLeaf version2; //type: boolean

}; // Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion


class Rip::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Rip::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rip_cfg::Rip::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // Rip::Vrfs::Vrf::Neighbors


class Rip::Vrfs::Vrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string

}; // Rip::Vrfs::Vrf::Neighbors::Neighbor


class Rip::Vrfs::Vrf::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_timer; //type: uint32
        YLeaf invalid_timer; //type: uint32
        YLeaf holddown_timer; //type: uint32
        YLeaf flush_timer; //type: uint32

}; // Rip::Vrfs::Vrf::Timers

class RipAuthModeEnum : public Enum
{
    public:
        static const Enum::YLeaf text;
        static const Enum::YLeaf md5;

};

class IsisRedistRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level1_and2;

};

class DefaultInformationOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf always;
        static const Enum::YLeaf policy;

};

class BgpRedistRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;
        static const Enum::YLeaf local;

};

class RipExtCommunityEnum : public Enum
{
    public:
        static const Enum::YLeaf as;
        static const Enum::YLeaf ipv4_address;
        static const Enum::YLeaf four_byte_as;

};

class DefaultRedistRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RIP_CFG_ */

