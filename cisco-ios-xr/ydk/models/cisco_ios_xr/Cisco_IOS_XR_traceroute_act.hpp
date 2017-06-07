#ifndef _CISCO_IOS_XR_TRACEROUTE_ACT_
#define _CISCO_IOS_XR_TRACEROUTE_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_traceroute_act {

class TracerouteRpc : public Entity
{
    public:
        TracerouteRpc();
        ~TracerouteRpc();

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

        class Input; //type: TracerouteRpc::Input
        class Output; //type: TracerouteRpc::Output

        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Input> input;
        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output> output;
        
}; // TracerouteRpc


class TracerouteRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: TracerouteRpc::Input::Destination
        class Ipv4; //type: TracerouteRpc::Input::Ipv4
        class Ipv6; //type: TracerouteRpc::Input::Ipv6

        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Input::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Input::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Input::Ipv6> ipv6;
        
}; // TracerouteRpc::Input


class TracerouteRpc::Input::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: string
        YLeaf source; //type: string
        YLeaf timeout; //type: uint32
        YLeaf probe; //type: uint16
        YLeaf numeric; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf min_ttl; //type: uint16
        YLeaf max_ttl; //type: uint16
        YLeaf port; //type: uint32
        YLeaf verbose; //type: boolean
        YLeaf priority; //type: uint16
        YLeaf outgoing_interface; //type: string

}; // TracerouteRpc::Input::Destination


class TracerouteRpc::Input::Ipv4 : public Entity
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

        YLeaf destination; //type: string
        YLeaf source; //type: string
        YLeaf timeout; //type: uint32
        YLeaf probe; //type: uint16
        YLeaf numeric; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf min_ttl; //type: uint16
        YLeaf max_ttl; //type: uint16
        YLeaf port; //type: uint32
        YLeaf verbose; //type: boolean

}; // TracerouteRpc::Input::Ipv4


class TracerouteRpc::Input::Ipv6 : public Entity
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

        YLeaf destination; //type: string
        YLeaf source; //type: string
        YLeaf timeout; //type: uint32
        YLeaf probe; //type: uint16
        YLeaf numeric; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf min_ttl; //type: uint16
        YLeaf max_ttl; //type: uint16
        YLeaf port; //type: uint32
        YLeaf verbose; //type: boolean
        YLeaf priority; //type: uint16
        YLeaf outgoing_interface; //type: string

}; // TracerouteRpc::Input::Ipv6


class TracerouteRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TracerouteResponse; //type: TracerouteRpc::Output::TracerouteResponse

        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse> traceroute_response;
        
}; // TracerouteRpc::Output


class TracerouteRpc::Output::TracerouteResponse : public Entity
{
    public:
        TracerouteResponse();
        ~TracerouteResponse();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: TracerouteRpc::Output::TracerouteResponse::Ipv4
        class Ipv6; //type: TracerouteRpc::Output::TracerouteResponse::Ipv6

        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv6> ipv6;
        
}; // TracerouteRpc::Output::TracerouteResponse


class TracerouteRpc::Output::TracerouteResponse::Ipv4 : public Entity
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

        YLeaf destination; //type: string
        YLeaf verbose_output; //type: string
        class Hops; //type: TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops

        std::vector<std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops> > hops;
        
}; // TracerouteRpc::Output::TracerouteResponse::Ipv4


class TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hop_index; //type: uint32
        YLeaf hop_address; //type: string
        YLeaf hop_hostname; //type: string
        class Probes; //type: TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes

        std::vector<std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes> > probes;
        
}; // TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops


class TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes : public Entity
{
    public:
        Probes();
        ~Probes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf probe_index; //type: uint32
        YLeaf result; //type: string
        YLeaf delta_time; //type: uint32
        YLeaf hop_address; //type: string
        YLeaf hop_hostname; //type: string

}; // TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes


class TracerouteRpc::Output::TracerouteResponse::Ipv6 : public Entity
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

        YLeaf destination; //type: string
        YLeaf verbose_output; //type: string
        class Hops; //type: TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops

        std::vector<std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops> > hops;
        
}; // TracerouteRpc::Output::TracerouteResponse::Ipv6


class TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hop_index; //type: uint32
        YLeaf hop_address; //type: string
        YLeaf hop_hostname; //type: string
        class Probes; //type: TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes

        std::vector<std::shared_ptr<Cisco_IOS_XR_traceroute_act::TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes> > probes;
        
}; // TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops


class TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes : public Entity
{
    public:
        Probes();
        ~Probes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf probe_index; //type: uint32
        YLeaf result; //type: string
        YLeaf delta_time; //type: uint32
        YLeaf hop_address; //type: string
        YLeaf hop_hostname; //type: string

}; // TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes


}
}

#endif /* _CISCO_IOS_XR_TRACEROUTE_ACT_ */

