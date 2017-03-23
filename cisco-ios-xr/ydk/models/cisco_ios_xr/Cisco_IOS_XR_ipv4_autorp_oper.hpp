#ifndef _CISCO_IOS_XR_IPV4_AUTORP_OPER_
#define _CISCO_IOS_XR_IPV4_AUTORP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

class AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

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



        class Standby; //type: AutoRp::Standby
        class Active; //type: AutoRp::Active

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby> standby;


}; // AutoRp


class AutoRp::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: AutoRp::Standby::CandidateRp
        class MappingAgent; //type: AutoRp::Standby::MappingAgent

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp> candidate_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent> mapping_agent;


}; // AutoRp::Standby


class AutoRp::Standby::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Traffic; //type: AutoRp::Standby::CandidateRp::Traffic
        class Rps; //type: AutoRp::Standby::CandidateRp::Rps

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Rps> rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Traffic> traffic;


}; // AutoRp::Standby::CandidateRp


class AutoRp::Standby::CandidateRp::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sent_packets; //type: uint32
        YLeaf standby_sent_packets; //type: uint32



}; // AutoRp::Standby::CandidateRp::Traffic


class AutoRp::Standby::CandidateRp::Rps : public Entity
{
    public:
        Rps();
        ~Rps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rp; //type: AutoRp::Standby::CandidateRp::Rps::Rp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Rps::Rp> > rp;


}; // AutoRp::Standby::CandidateRp::Rps


class AutoRp::Standby::CandidateRp::Rps::Rp : public Entity
{
    public:
        Rp();
        ~Rp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf protocol_mode; //type: AutoRpProtocolModeEnum
        YLeaf access_list_name; //type: string
        YLeaf candidate_rp_address; //type: string
        YLeaf ttl; //type: int32
        YLeaf announce_period; //type: int32
        YLeaf protocol_mode_xr; //type: AutorpProtocolModeEnum



}; // AutoRp::Standby::CandidateRp::Rps::Rp


class AutoRp::Standby::MappingAgent : public Entity
{
    public:
        MappingAgent();
        ~MappingAgent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Traffic; //type: AutoRp::Standby::MappingAgent::Traffic
        class RpAddresses; //type: AutoRp::Standby::MappingAgent::RpAddresses
        class Summary; //type: AutoRp::Standby::MappingAgent::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses> rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::Traffic> traffic;


}; // AutoRp::Standby::MappingAgent


class AutoRp::Standby::MappingAgent::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sent_packets; //type: uint32
        YLeaf standby_sent_packets; //type: uint32
        YLeaf active_received_packets; //type: uint32
        YLeaf standby_received_packets; //type: uint32



}; // AutoRp::Standby::MappingAgent::Traffic


class AutoRp::Standby::MappingAgent::RpAddresses : public Entity
{
    public:
        RpAddresses();
        ~RpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpAddress; //type: AutoRp::Standby::MappingAgent::RpAddresses::RpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress> > rp_address;


}; // AutoRp::Standby::MappingAgent::RpAddresses


class AutoRp::Standby::MappingAgent::RpAddresses::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf rp_address_xr; //type: string
        YLeaf expiry_time; //type: uint64
        YLeaf pim_version; //type: uint8

        class Range; //type: AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range> > range;


}; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress


class AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf protocol_mode; //type: AutorpProtocolModeEnum
        YLeaf is_advertised; //type: boolean
        YLeaf create_type; //type: uint8
        YLeaf check_point_object_id; //type: uint32
        YLeaf uptime; //type: uint64



}; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range


class AutoRp::Standby::MappingAgent::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_maximum_disabled; //type: boolean
        YLeaf cache_limit; //type: uint32
        YLeaf cache_count; //type: uint32



}; // AutoRp::Standby::MappingAgent::Summary


class AutoRp::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: AutoRp::Active::CandidateRp
        class MappingAgent; //type: AutoRp::Active::MappingAgent

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp> candidate_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent> mapping_agent;


}; // AutoRp::Active


class AutoRp::Active::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Traffic; //type: AutoRp::Active::CandidateRp::Traffic
        class Rps; //type: AutoRp::Active::CandidateRp::Rps

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Rps> rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Traffic> traffic;


}; // AutoRp::Active::CandidateRp


class AutoRp::Active::CandidateRp::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sent_packets; //type: uint32
        YLeaf standby_sent_packets; //type: uint32



}; // AutoRp::Active::CandidateRp::Traffic


class AutoRp::Active::CandidateRp::Rps : public Entity
{
    public:
        Rps();
        ~Rps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rp; //type: AutoRp::Active::CandidateRp::Rps::Rp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Rps::Rp> > rp;


}; // AutoRp::Active::CandidateRp::Rps


class AutoRp::Active::CandidateRp::Rps::Rp : public Entity
{
    public:
        Rp();
        ~Rp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf protocol_mode; //type: AutoRpProtocolModeEnum
        YLeaf access_list_name; //type: string
        YLeaf candidate_rp_address; //type: string
        YLeaf ttl; //type: int32
        YLeaf announce_period; //type: int32
        YLeaf protocol_mode_xr; //type: AutorpProtocolModeEnum



}; // AutoRp::Active::CandidateRp::Rps::Rp


class AutoRp::Active::MappingAgent : public Entity
{
    public:
        MappingAgent();
        ~MappingAgent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Traffic; //type: AutoRp::Active::MappingAgent::Traffic
        class RpAddresses; //type: AutoRp::Active::MappingAgent::RpAddresses
        class Summary; //type: AutoRp::Active::MappingAgent::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses> rp_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::Traffic> traffic;


}; // AutoRp::Active::MappingAgent


class AutoRp::Active::MappingAgent::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_sent_packets; //type: uint32
        YLeaf standby_sent_packets; //type: uint32
        YLeaf active_received_packets; //type: uint32
        YLeaf standby_received_packets; //type: uint32



}; // AutoRp::Active::MappingAgent::Traffic


class AutoRp::Active::MappingAgent::RpAddresses : public Entity
{
    public:
        RpAddresses();
        ~RpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpAddress; //type: AutoRp::Active::MappingAgent::RpAddresses::RpAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress> > rp_address;


}; // AutoRp::Active::MappingAgent::RpAddresses


class AutoRp::Active::MappingAgent::RpAddresses::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf rp_address_xr; //type: string
        YLeaf expiry_time; //type: uint64
        YLeaf pim_version; //type: uint8

        class Range; //type: AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range> > range;


}; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress


class AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf protocol_mode; //type: AutorpProtocolModeEnum
        YLeaf is_advertised; //type: boolean
        YLeaf create_type; //type: uint8
        YLeaf check_point_object_id; //type: uint32
        YLeaf uptime; //type: uint64



}; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range


class AutoRp::Active::MappingAgent::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_maximum_disabled; //type: boolean
        YLeaf cache_limit; //type: uint32
        YLeaf cache_count; //type: uint32



}; // AutoRp::Active::MappingAgent::Summary

class AutorpProtocolModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse;
        static const Enum::YLeaf bidirectional;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_AUTORP_OPER_ */

