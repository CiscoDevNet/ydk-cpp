#ifndef _CISCO_IOS_XR_IPV4_MSDP_CFG_
#define _CISCO_IOS_XR_IPV4_MSDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_msdp_cfg {

class Msdp : public Entity
{
    public:
        Msdp();
        ~Msdp();

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

        YLeaf global_max_sa; //type: uint32
        YLeaf nsr_delay; //type: uint32
        class Vrfs; //type: Msdp::Vrfs
        class DefaultContext; //type: Msdp::DefaultContext

        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext> default_context; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs> vrfs;
        
}; // Msdp


class Msdp::Vrfs : public Entity
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

        class Vrf; //type: Msdp::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf> > vrf;
        
}; // Msdp::Vrfs


class Msdp::Vrfs::Vrf : public Entity
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
        YLeaf ttl_threshold; //type: uint32
        YLeaf max_peer_sa; //type: uint32
        YLeaf default_peer; //type: string
        YLeaf originator_id; //type: string
        YLeaf max_sa; //type: uint32
        YLeaf connect_source; //type: string
        class CacheState; //type: Msdp::Vrfs::Vrf::CacheState
        class KeepAlive; //type: Msdp::Vrfs::Vrf::KeepAlive
        class Peers; //type: Msdp::Vrfs::Vrf::Peers
        class SaFilters; //type: Msdp::Vrfs::Vrf::SaFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::CacheState> cache_state;
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::KeepAlive> keep_alive; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::SaFilters> sa_filters;
        
}; // Msdp::Vrfs::Vrf


class Msdp::Vrfs::Vrf::CacheState : public Entity
{
    public:
        CacheState();
        ~CacheState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa_holdtime; //type: uint32
        YLeaf list; //type: string
        YLeaf rp_list; //type: string

}; // Msdp::Vrfs::Vrf::CacheState


class Msdp::Vrfs::Vrf::KeepAlive : public Entity
{
    public:
        KeepAlive();
        ~KeepAlive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keep_alive_period; //type: uint32
        YLeaf peer_timeout_period; //type: uint32

}; // Msdp::Vrfs::Vrf::KeepAlive


class Msdp::Vrfs::Vrf::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Msdp::Vrfs::Vrf::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers::Peer> > peer;
        
}; // Msdp::Vrfs::Vrf::Peers


class Msdp::Vrfs::Vrf::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf shutdown; //type: empty
        YLeaf description; //type: string
        YLeaf enable; //type: empty
        YLeaf max_sa; //type: uint32
        YLeaf nsr_down; //type: empty
        YLeaf peer_password; //type: string
        YLeaf mesh_group; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf connect_source; //type: string
        class RemoteAs; //type: Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs
        class KeepAlive; //type: Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive
        class SaFilters; //type: Msdp::Vrfs::Vrf::Peers::Peer::SaFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive> keep_alive; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs> remote_as; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers::Peer::SaFilters> sa_filters;
        
}; // Msdp::Vrfs::Vrf::Peers::Peer


class Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32

}; // Msdp::Vrfs::Vrf::Peers::Peer::RemoteAs


class Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive : public Entity
{
    public:
        KeepAlive();
        ~KeepAlive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keep_alive_period; //type: uint32
        YLeaf peer_timeout_period; //type: uint32

}; // Msdp::Vrfs::Vrf::Peers::Peer::KeepAlive


class Msdp::Vrfs::Vrf::Peers::Peer::SaFilters : public Entity
{
    public:
        SaFilters();
        ~SaFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SaFilter; //type: Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter> > sa_filter;
        
}; // Msdp::Vrfs::Vrf::Peers::Peer::SaFilters


class Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: MsdpListTypeVrfEnum
        YLeaf filter_type; //type: MsdpFilterTypeVrfEnum
        YLeaf access_list_name; //type: string

}; // Msdp::Vrfs::Vrf::Peers::Peer::SaFilters::SaFilter


class Msdp::Vrfs::Vrf::SaFilters : public Entity
{
    public:
        SaFilters();
        ~SaFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SaFilter; //type: Msdp::Vrfs::Vrf::SaFilters::SaFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::Vrfs::Vrf::SaFilters::SaFilter> > sa_filter;
        
}; // Msdp::Vrfs::Vrf::SaFilters


class Msdp::Vrfs::Vrf::SaFilters::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: MsdpListTypeVrfEnum
        YLeaf filter_type; //type: MsdpFilterTypeVrfEnum
        YLeaf access_list_name; //type: string

}; // Msdp::Vrfs::Vrf::SaFilters::SaFilter


class Msdp::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ttl_threshold; //type: uint32
        YLeaf max_peer_sa; //type: uint32
        YLeaf default_peer; //type: string
        YLeaf originator_id; //type: string
        YLeaf max_sa; //type: uint32
        YLeaf connect_source; //type: string
        class CacheState; //type: Msdp::DefaultContext::CacheState
        class KeepAlive; //type: Msdp::DefaultContext::KeepAlive
        class Peers; //type: Msdp::DefaultContext::Peers
        class SaFilters; //type: Msdp::DefaultContext::SaFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::CacheState> cache_state;
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::KeepAlive> keep_alive; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::SaFilters> sa_filters;
        
}; // Msdp::DefaultContext


class Msdp::DefaultContext::CacheState : public Entity
{
    public:
        CacheState();
        ~CacheState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa_holdtime; //type: uint32
        YLeaf list; //type: string
        YLeaf rp_list; //type: string

}; // Msdp::DefaultContext::CacheState


class Msdp::DefaultContext::KeepAlive : public Entity
{
    public:
        KeepAlive();
        ~KeepAlive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keep_alive_period; //type: uint32
        YLeaf peer_timeout_period; //type: uint32

}; // Msdp::DefaultContext::KeepAlive


class Msdp::DefaultContext::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Msdp::DefaultContext::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers::Peer> > peer;
        
}; // Msdp::DefaultContext::Peers


class Msdp::DefaultContext::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf shutdown; //type: empty
        YLeaf description; //type: string
        YLeaf enable; //type: empty
        YLeaf max_sa; //type: uint32
        YLeaf nsr_down; //type: empty
        YLeaf peer_password; //type: string
        YLeaf mesh_group; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf connect_source; //type: string
        class RemoteAs; //type: Msdp::DefaultContext::Peers::Peer::RemoteAs
        class KeepAlive; //type: Msdp::DefaultContext::Peers::Peer::KeepAlive
        class SaFilters; //type: Msdp::DefaultContext::Peers::Peer::SaFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers::Peer::KeepAlive> keep_alive; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers::Peer::RemoteAs> remote_as; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers::Peer::SaFilters> sa_filters;
        
}; // Msdp::DefaultContext::Peers::Peer


class Msdp::DefaultContext::Peers::Peer::RemoteAs : public Entity
{
    public:
        RemoteAs();
        ~RemoteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32

}; // Msdp::DefaultContext::Peers::Peer::RemoteAs


class Msdp::DefaultContext::Peers::Peer::KeepAlive : public Entity
{
    public:
        KeepAlive();
        ~KeepAlive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keep_alive_period; //type: uint32
        YLeaf peer_timeout_period; //type: uint32

}; // Msdp::DefaultContext::Peers::Peer::KeepAlive


class Msdp::DefaultContext::Peers::Peer::SaFilters : public Entity
{
    public:
        SaFilters();
        ~SaFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SaFilter; //type: Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter> > sa_filter;
        
}; // Msdp::DefaultContext::Peers::Peer::SaFilters


class Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: MsdpListTypeVrfEnum
        YLeaf filter_type; //type: MsdpFilterTypeVrfEnum
        YLeaf access_list_name; //type: string

}; // Msdp::DefaultContext::Peers::Peer::SaFilters::SaFilter


class Msdp::DefaultContext::SaFilters : public Entity
{
    public:
        SaFilters();
        ~SaFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SaFilter; //type: Msdp::DefaultContext::SaFilters::SaFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_msdp_cfg::Msdp::DefaultContext::SaFilters::SaFilter> > sa_filter;
        
}; // Msdp::DefaultContext::SaFilters


class Msdp::DefaultContext::SaFilters::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: MsdpListTypeVrfEnum
        YLeaf filter_type; //type: MsdpFilterTypeVrfEnum
        YLeaf access_list_name; //type: string

}; // Msdp::DefaultContext::SaFilters::SaFilter

class MsdpListTypeVrfEnum : public Enum
{
    public:
        static const Enum::YLeaf list;
        static const Enum::YLeaf rp_list;

};

class MsdpFilterTypeVrfEnum : public Enum
{
    public:
        static const Enum::YLeaf incoming;
        static const Enum::YLeaf outgoing;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MSDP_CFG_ */

