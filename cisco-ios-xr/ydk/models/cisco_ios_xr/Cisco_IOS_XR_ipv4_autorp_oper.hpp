#ifndef _CISCO_IOS_XR_IPV4_AUTORP_OPER_
#define _CISCO_IOS_XR_IPV4_AUTORP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

class AutoRp : public ydk::Entity
{
    public:
        AutoRp();
        ~AutoRp();

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

        class Standby; //type: AutoRp::Standby
        class Active; //type: AutoRp::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby> standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active> active;
        
}; // AutoRp


class AutoRp::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class CandidateRp; //type: AutoRp::Standby::CandidateRp
        class MappingAgent; //type: AutoRp::Standby::MappingAgent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp> candidate_rp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent> mapping_agent;
        
}; // AutoRp::Standby


class AutoRp::Standby::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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

        class Traffic; //type: AutoRp::Standby::CandidateRp::Traffic
        class Rps; //type: AutoRp::Standby::CandidateRp::Rps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Rps> rps;
        
}; // AutoRp::Standby::CandidateRp


class AutoRp::Standby::CandidateRp::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf active_sent_packets; //type: uint32
        ydk::YLeaf standby_sent_packets; //type: uint32

}; // AutoRp::Standby::CandidateRp::Traffic


class AutoRp::Standby::CandidateRp::Rps : public ydk::Entity
{
    public:
        Rps();
        ~Rps();

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

        class Rp; //type: AutoRp::Standby::CandidateRp::Rps::Rp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRp::Rps::Rp> > rp;
        
}; // AutoRp::Standby::CandidateRp::Rps


class AutoRp::Standby::CandidateRp::Rps::Rp : public ydk::Entity
{
    public:
        Rp();
        ~Rp();

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
        ydk::YLeaf protocol_mode; //type: AutoRpProtocolMode
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf candidate_rp_address; //type: string
        ydk::YLeaf ttl; //type: int32
        ydk::YLeaf announce_period; //type: int32
        ydk::YLeaf protocol_mode_xr; //type: AutorpProtocolMode

}; // AutoRp::Standby::CandidateRp::Rps::Rp


class AutoRp::Standby::MappingAgent : public ydk::Entity
{
    public:
        MappingAgent();
        ~MappingAgent();

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

        class Traffic; //type: AutoRp::Standby::MappingAgent::Traffic
        class RpAddresses; //type: AutoRp::Standby::MappingAgent::RpAddresses
        class Summary; //type: AutoRp::Standby::MappingAgent::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses> rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::Summary> summary;
        
}; // AutoRp::Standby::MappingAgent


class AutoRp::Standby::MappingAgent::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf active_sent_packets; //type: uint32
        ydk::YLeaf standby_sent_packets; //type: uint32
        ydk::YLeaf active_received_packets; //type: uint32
        ydk::YLeaf standby_received_packets; //type: uint32

}; // AutoRp::Standby::MappingAgent::Traffic


class AutoRp::Standby::MappingAgent::RpAddresses : public ydk::Entity
{
    public:
        RpAddresses();
        ~RpAddresses();

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

        class RpAddress; //type: AutoRp::Standby::MappingAgent::RpAddresses::RpAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress> > rp_address;
        
}; // AutoRp::Standby::MappingAgent::RpAddresses


class AutoRp::Standby::MappingAgent::RpAddresses::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf rp_address_xr; //type: string
        ydk::YLeaf expiry_time; //type: uint64
        ydk::YLeaf pim_version; //type: uint8
        class Range; //type: AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range> > range;
        
}; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress


class AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf protocol_mode; //type: AutorpProtocolMode
        ydk::YLeaf is_advertised; //type: boolean
        ydk::YLeaf create_type; //type: uint8
        ydk::YLeaf check_point_object_id; //type: uint32
        ydk::YLeaf uptime; //type: uint64

}; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range


class AutoRp::Standby::MappingAgent::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf is_maximum_disabled; //type: boolean
        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf cache_count; //type: uint32

}; // AutoRp::Standby::MappingAgent::Summary


class AutoRp::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class CandidateRp; //type: AutoRp::Active::CandidateRp
        class MappingAgent; //type: AutoRp::Active::MappingAgent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp> candidate_rp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent> mapping_agent;
        
}; // AutoRp::Active


class AutoRp::Active::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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

        class Traffic; //type: AutoRp::Active::CandidateRp::Traffic
        class Rps; //type: AutoRp::Active::CandidateRp::Rps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Rps> rps;
        
}; // AutoRp::Active::CandidateRp


class AutoRp::Active::CandidateRp::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf active_sent_packets; //type: uint32
        ydk::YLeaf standby_sent_packets; //type: uint32

}; // AutoRp::Active::CandidateRp::Traffic


class AutoRp::Active::CandidateRp::Rps : public ydk::Entity
{
    public:
        Rps();
        ~Rps();

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

        class Rp; //type: AutoRp::Active::CandidateRp::Rps::Rp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRp::Rps::Rp> > rp;
        
}; // AutoRp::Active::CandidateRp::Rps


class AutoRp::Active::CandidateRp::Rps::Rp : public ydk::Entity
{
    public:
        Rp();
        ~Rp();

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
        ydk::YLeaf protocol_mode; //type: AutoRpProtocolMode
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf candidate_rp_address; //type: string
        ydk::YLeaf ttl; //type: int32
        ydk::YLeaf announce_period; //type: int32
        ydk::YLeaf protocol_mode_xr; //type: AutorpProtocolMode

}; // AutoRp::Active::CandidateRp::Rps::Rp


class AutoRp::Active::MappingAgent : public ydk::Entity
{
    public:
        MappingAgent();
        ~MappingAgent();

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

        class Traffic; //type: AutoRp::Active::MappingAgent::Traffic
        class RpAddresses; //type: AutoRp::Active::MappingAgent::RpAddresses
        class Summary; //type: AutoRp::Active::MappingAgent::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::Traffic> traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses> rp_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::Summary> summary;
        
}; // AutoRp::Active::MappingAgent


class AutoRp::Active::MappingAgent::Traffic : public ydk::Entity
{
    public:
        Traffic();
        ~Traffic();

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

        ydk::YLeaf active_sent_packets; //type: uint32
        ydk::YLeaf standby_sent_packets; //type: uint32
        ydk::YLeaf active_received_packets; //type: uint32
        ydk::YLeaf standby_received_packets; //type: uint32

}; // AutoRp::Active::MappingAgent::Traffic


class AutoRp::Active::MappingAgent::RpAddresses : public ydk::Entity
{
    public:
        RpAddresses();
        ~RpAddresses();

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

        class RpAddress; //type: AutoRp::Active::MappingAgent::RpAddresses::RpAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress> > rp_address;
        
}; // AutoRp::Active::MappingAgent::RpAddresses


class AutoRp::Active::MappingAgent::RpAddresses::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf rp_address_xr; //type: string
        ydk::YLeaf expiry_time; //type: uint64
        ydk::YLeaf pim_version; //type: uint8
        class Range; //type: AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range> > range;
        
}; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress


class AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf protocol_mode; //type: AutorpProtocolMode
        ydk::YLeaf is_advertised; //type: boolean
        ydk::YLeaf create_type; //type: uint8
        ydk::YLeaf check_point_object_id; //type: uint32
        ydk::YLeaf uptime; //type: uint64

}; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range


class AutoRp::Active::MappingAgent::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf is_maximum_disabled; //type: boolean
        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf cache_count; //type: uint32

}; // AutoRp::Active::MappingAgent::Summary

class AutorpProtocolMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf bidirectional;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_AUTORP_OPER_ */

