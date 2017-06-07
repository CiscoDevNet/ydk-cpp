#ifndef _CISCO_IOS_XR_IP_DAPS_CFG_
#define _CISCO_IOS_XR_IP_DAPS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_daps_cfg {

class AddressPoolService : public Entity
{
    public:
        AddressPoolService();
        ~AddressPoolService();

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

        class Vrfs; //type: AddressPoolService::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs> vrfs;
        
}; // AddressPoolService


class AddressPoolService::Vrfs : public Entity
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

        class Vrf; //type: AddressPoolService::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf> > vrf;
        
}; // AddressPoolService::Vrfs


class AddressPoolService::Vrfs::Vrf : public Entity
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
        class Ipv6; //type: AddressPoolService::Vrfs::Vrf::Ipv6
        class Ipv4; //type: AddressPoolService::Vrfs::Vrf::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6> ipv6;
        
}; // AddressPoolService::Vrfs::Vrf


class AddressPoolService::Vrfs::Vrf::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pools; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools> pools;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools : public Entity
{
    public:
        Pools();
        ~Pools();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pool; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool> > pool;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_pool_name; //type: string
        YLeaf prefix_length; //type: uint32
        class AddressRanges; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges
        class Excludes; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes
        class UtilizationMark; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark
        class PrefixRanges; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges
        class Networks; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes> excludes;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks> networks;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges> prefix_ranges;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark> utilization_mark;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges : public Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressRange; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange> > address_range;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange : public Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf blocked; //type: int32
        YLeaf end_address; //type: string

}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes : public Entity
{
    public:
        Excludes();
        ~Excludes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exclude; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude> > exclude;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf end_address; //type: string

}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark : public Entity
{
    public:
        UtilizationMark();
        ~UtilizationMark();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high_mark; //type: uint32
        YLeaf low_mark; //type: uint32

}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges : public Entity
{
    public:
        PrefixRanges();
        ~PrefixRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixRange; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange> > prefix_range;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange : public Entity
{
    public:
        PrefixRange();
        ~PrefixRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_prefix; //type: string
        YLeaf blocked; //type: int32
        YLeaf end_prefix; //type: string

}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Network; //type: AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network> > network;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks


class AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf blocked; //type: int32
        YLeaf prefix_length; //type: uint32

}; // AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network


class AddressPoolService::Vrfs::Vrf::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pools; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools> pools;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools : public Entity
{
    public:
        Pools();
        ~Pools();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pool; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool> > pool;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pool_name; //type: string
        class AddressRanges; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges
        class Excludes; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes
        class UtilizationMark; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark
        class Networks; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks

        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges> address_ranges;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes> excludes;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks> networks;
        std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark> utilization_mark;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges : public Entity
{
    public:
        AddressRanges();
        ~AddressRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddressRange; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange> > address_range;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange : public Entity
{
    public:
        AddressRange();
        ~AddressRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf end_address; //type: string
        YLeaf blocked; //type: int32

}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes : public Entity
{
    public:
        Excludes();
        ~Excludes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exclude; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude> > exclude;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_address; //type: string
        YLeaf end_address; //type: string

}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark : public Entity
{
    public:
        UtilizationMark();
        ~UtilizationMark();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high; //type: uint32
        YLeaf low; //type: uint32

}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Network; //type: AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_daps_cfg::AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network> > network;
        
}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks


class AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_prefix; //type: string
        YLeaf blocked; //type: int32
        YLeaf prefix_length; //type: int32
        YLeaf default_router; //type: string

}; // AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network


}
}

#endif /* _CISCO_IOS_XR_IP_DAPS_CFG_ */

