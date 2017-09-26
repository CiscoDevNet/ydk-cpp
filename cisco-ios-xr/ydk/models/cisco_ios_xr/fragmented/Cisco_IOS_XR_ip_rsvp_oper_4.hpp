#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_4_
#define _CISCO_IOS_XR_IP_RSVP_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


class RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec


class RsvpStandby::PsbDetaileds : public ydk::Entity
{
    public:
        PsbDetaileds();
        ~PsbDetaileds();

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

        class PsbDetailed; //type: RsvpStandby::PsbDetaileds::PsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed> > psb_detailed;
        
}; // RsvpStandby::PsbDetaileds


class RsvpStandby::PsbDetaileds::PsbDetailed : public ydk::Entity
{
    public:
        PsbDetailed();
        ~PsbDetailed();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf is_in_ero_valid; //type: boolean
        ydk::YLeaf is_out_ero_valid; //type: boolean
        class Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session
        class S2LSubLsp; //type: RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp
        class Template_; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_
        class SessionAttribute; //type: RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute
        class TrafficSpec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec
        class GenericTrafficSpec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec
        class PathFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags
        class Hop; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Hop
        class PolicySourceInfo; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo
        class Header; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Header
        class ExpiryTime; //type: RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime
        class PolicyFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo
        class ClassType; //type: RsvpStandby::PsbDetaileds::PsbDetailed::ClassType
        class Pfc; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc
        class InEro; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro
        class OutEro; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ClassType> class_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Hop> hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro> > in_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc> > pfc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed


class RsvpStandby::PsbDetaileds::PsbDetailed::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

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

        ydk::YLeaf is_class_type_info_valid; //type: boolean
        ydk::YLeaf class_type; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ClassType


class RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime : public ydk::Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec : public ydk::Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

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

        ydk::YLeaf tspec_type; //type: RsvpMgmtTspec
        class G709OtnTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

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

        ydk::YLeaf traffic_signal_type; //type: uint8
        ydk::YLeaf traffic_nvc; //type: uint16
        ydk::YLeaf traffic_multiplier; //type: uint16
        ydk::YLeaf traffic_bit_rate; //type: uint64

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::PsbDetaileds::PsbDetailed::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Header


class RsvpStandby::PsbDetaileds::PsbDetailed::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Hop


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro : public ydk::Entity
{
    public:
        InEro();
        ~InEro();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo : public ydk::Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf local_downstream_label; //type: uint32
        ydk::YLeaf outgoing_downstream_label; //type: uint32
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf outgoing_upstream_label; //type: uint32
        ydk::YLeaf local_upstream_label; //type: uint32
        ydk::YLeaf recovery_label; //type: uint32
        ydk::YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro : public ydk::Entity
{
    public:
        OutEro();
        ~OutEro();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


class RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags : public ydk::Entity
{
    public:
        PathFlags();
        ~PathFlags();

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

        ydk::YLeaf is_non_rsvp_hop_upstream; //type: boolean
        ydk::YLeaf is_local_sender; //type: boolean
        ydk::YLeaf is_message_id_valid; //type: boolean
        ydk::YLeaf is_local_repair; //type: boolean
        ydk::YLeaf is_bidirectional; //type: boolean
        ydk::YLeaf is_lockout; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc : public ydk::Entity
{
    public:
        Pfc();
        ~Pfc();

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

        ydk::YLeaf output_interface; //type: string
        class PolicyFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo : public ydk::Entity
{
    public:
        PolicySourceInfo();
        ~PolicySourceInfo();

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

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo


class RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp


class RsvpStandby::PsbDetaileds::PsbDetailed::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute : public ydk::Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf reservation_priority; //type: uint8
        class SessAttributeFlags; //type: RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute


class RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags : public ydk::Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

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

        ydk::YLeaf is_local_protect; //type: boolean
        ydk::YLeaf is_node_protect; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf is_record_labels; //type: boolean
        ydk::YLeaf is_shared_explicit_requested; //type: boolean

}; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        class RsvpFilter; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


class RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec


class RsvpStandby::RequestBriefs : public ydk::Entity
{
    public:
        RequestBriefs();
        ~RequestBriefs();

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

        class RequestBrief; //type: RsvpStandby::RequestBriefs::RequestBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief> > request_brief;
        
}; // RsvpStandby::RequestBriefs


class RsvpStandby::RequestBriefs::RequestBrief : public ydk::Entity
{
    public:
        RequestBrief();
        ~RequestBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf output_interface; //type: string
        class Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Session
        class S2LSubLsp; //type: RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec
        class Filter; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter
        class Style; //type: RsvpStandby::RequestBriefs::RequestBrief::Style

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Style> style;
        
}; // RsvpStandby::RequestBriefs::RequestBrief


class RsvpStandby::RequestBriefs::RequestBrief::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RequestBriefs::RequestBrief::Filter


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RequestBriefs::RequestBrief::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // RsvpStandby::RequestBriefs::RequestBrief::FlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp


class RsvpStandby::RequestBriefs::RequestBrief::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RequestBriefs::RequestBrief::Session


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RequestBriefs::RequestBrief::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // RsvpStandby::RequestBriefs::RequestBrief::Style


class RsvpStandby::RequestDetails : public ydk::Entity
{
    public:
        RequestDetails();
        ~RequestDetails();

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

        class RequestDetail; //type: RsvpStandby::RequestDetails::RequestDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail> > request_detail;
        
}; // RsvpStandby::RequestDetails


class RsvpStandby::RequestDetails::RequestDetail : public ydk::Entity
{
    public:
        RequestDetail();
        ~RequestDetail();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf output_interface; //type: string
        class Session; //type: RsvpStandby::RequestDetails::RequestDetail::Session
        class S2LSubLsp; //type: RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec
        class Filter; //type: RsvpStandby::RequestDetails::RequestDetail::Filter
        class Style; //type: RsvpStandby::RequestDetails::RequestDetail::Style
        class ReqFlags; //type: RsvpStandby::RequestDetails::RequestDetail::ReqFlags
        class Hop; //type: RsvpStandby::RequestDetails::RequestDetail::Hop
        class Header; //type: RsvpStandby::RequestDetails::RequestDetail::Header
        class PolicySources; //type: RsvpStandby::RequestDetails::RequestDetail::PolicySources
        class PolicyFlags; //type: RsvpStandby::RequestDetails::RequestDetail::PolicyFlags
        class PolicyQueryFlags; //type: RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags
        class PsbKey; //type: RsvpStandby::RequestDetails::RequestDetail::PsbKey
        class RsbKey; //type: RsvpStandby::RequestDetails::RequestDetail::RsbKey

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicySources> policy_sources;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PsbKey> > psb_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::ReqFlags> req_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::RsbKey> > rsb_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Style> style;
        
}; // RsvpStandby::RequestDetails::RequestDetail


class RsvpStandby::RequestDetails::RequestDetail::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RequestDetails::RequestDetail::Filter


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RequestDetails::RequestDetail::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // RsvpStandby::RequestDetails::RequestDetail::FlowSpec


class RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec


class RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RequestDetails::RequestDetail::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::Header


class RsvpStandby::RequestDetails::RequestDetail::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::Hop


class RsvpStandby::RequestDetails::RequestDetail::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::RequestDetails::RequestDetail::PolicyFlags


class RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags


class RsvpStandby::RequestDetails::RequestDetail::PolicySources : public ydk::Entity
{
    public:
        PolicySources();
        ~PolicySources();

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

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // RsvpStandby::RequestDetails::RequestDetail::PolicySources


class RsvpStandby::RequestDetails::RequestDetail::PsbKey : public ydk::Entity
{
    public:
        PsbKey();
        ~PsbKey();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port_or_tunnel_id; //type: uint32
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpMgmtSession
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port_or_lsp_id; //type: uint32
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf vrfid; //type: uint32

}; // RsvpStandby::RequestDetails::RequestDetail::PsbKey


class RsvpStandby::RequestDetails::RequestDetail::ReqFlags : public ydk::Entity
{
    public:
        ReqFlags();
        ~ReqFlags();

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

        ydk::YLeaf is_local_receiver; //type: boolean
        ydk::YLeaf is_refreshing; //type: boolean
        ydk::YLeaf is_send_confirm; //type: boolean
        ydk::YLeaf is_ack_outstanding; //type: boolean
        ydk::YLeaf is_message_id_allocated; //type: boolean
        ydk::YLeaf is_nack_received; //type: boolean
        ydk::YLeaf is_retransmit; //type: boolean
        ydk::YLeaf is_paced; //type: boolean
        ydk::YLeaf is_label_request_in_path; //type: boolean
        ydk::YLeaf is_rro_in_path; //type: boolean
        ydk::YLeaf is_record_label_in_path; //type: boolean
        ydk::YLeaf is_merge_point; //type: boolean

}; // RsvpStandby::RequestDetails::RequestDetail::ReqFlags


class RsvpStandby::RequestDetails::RequestDetail::RsbKey : public ydk::Entity
{
    public:
        RsbKey();
        ~RsbKey();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port_or_tunnel_id; //type: uint32
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpMgmtSession
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port_or_lsp_id; //type: uint32
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf vrfid; //type: uint32

}; // RsvpStandby::RequestDetails::RequestDetail::RsbKey


class RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp


class RsvpStandby::RequestDetails::RequestDetail::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RequestDetails::RequestDetail::Session


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RequestDetails::RequestDetail::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // RsvpStandby::RequestDetails::RequestDetail::Style


class RsvpStandby::RsbBriefs : public ydk::Entity
{
    public:
        RsbBriefs();
        ~RsbBriefs();

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

        class RsbBrief; //type: RsvpStandby::RsbBriefs::RsbBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief> > rsb_brief;
        
}; // RsvpStandby::RsbBriefs


class RsvpStandby::RsbBriefs::RsbBrief : public ydk::Entity
{
    public:
        RsbBrief();
        ~RsbBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        class Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Session
        class S2LSubLsp; //type: RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp
        class FlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec
        class Style; //type: RsvpStandby::RsbBriefs::RsbBrief::Style
        class Filter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Style> style;
        
}; // RsvpStandby::RsbBriefs::RsbBrief


class RsvpStandby::RsbBriefs::RsbBrief::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbBriefs::RsbBrief::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // RsvpStandby::RsbBriefs::RsbBrief::FlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp


class RsvpStandby::RsbBriefs::RsbBrief::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbBriefs::RsbBrief::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // RsvpStandby::RsbBriefs::RsbBrief::Style


class RsvpStandby::RsbDetaileds : public ydk::Entity
{
    public:
        RsbDetaileds();
        ~RsbDetaileds();

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

        class RsbDetailed; //type: RsvpStandby::RsbDetaileds::RsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed> > rsb_detailed;
        
}; // RsvpStandby::RsbDetaileds


class RsvpStandby::RsbDetaileds::RsbDetailed : public ydk::Entity
{
    public:
        RsbDetailed();
        ~RsbDetailed();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_adjusted_interface; //type: string
        ydk::YLeaf input_physical_interface; //type: string
        class FlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec
        class GenericFlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec
        class Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session
        class S2LSubLsp; //type: RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp
        class Style; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Style
        class Filter; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter
        class RsbFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags
        class Hop; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Hop
        class PolicySources; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources
        class Header; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Header
        class PolicyFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags
        class ExpiryTime; //type: RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime
        class PolicyQueryFlags; //type: RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Style> style;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed


class RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime : public ydk::Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        class RsvpFilter; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


class RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

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

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

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

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


class RsvpStandby::RsbDetaileds::RsbDetailed::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

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

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Header


class RsvpStandby::RsbDetaileds::RsbDetailed::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

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
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Hop


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo : public ydk::Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf local_downstream_label; //type: uint32
        ydk::YLeaf outgoing_downstream_label; //type: uint32
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf outgoing_upstream_label; //type: uint32
        ydk::YLeaf local_upstream_label; //type: uint32
        ydk::YLeaf recovery_label; //type: uint32
        ydk::YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

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

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

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

        ydk::YLeafList value_; //type: list of  uint32

}; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

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

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

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

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources : public ydk::Entity
{
    public:
        PolicySources();
        ~PolicySources();

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

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources


class RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags : public ydk::Entity
{
    public:
        RsbFlags();
        ~RsbFlags();

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

        ydk::YLeaf is_local_receiver; //type: boolean
        ydk::YLeaf is_message_id_valid; //type: boolean
        ydk::YLeaf is_local_repair; //type: boolean
        ydk::YLeaf is_merge_point; //type: boolean
        ydk::YLeaf is_lockout; //type: boolean

}; // RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags


class RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp


class RsvpStandby::RsbDetaileds::RsbDetailed::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::RsbDetaileds::RsbDetailed::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

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

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // RsvpStandby::RsbDetaileds::RsbDetailed::Style


class RsvpStandby::SessionBriefs : public ydk::Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

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

        class SessionBrief; //type: RsvpStandby::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief> > session_brief;
        
}; // RsvpStandby::SessionBriefs


class RsvpStandby::SessionBriefs::SessionBrief : public ydk::Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ps_bs; //type: uint32
        ydk::YLeaf rs_bs; //type: uint32
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf detail_list_size; //type: uint32
        class Session; //type: RsvpStandby::SessionBriefs::SessionBrief::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session> session;
        
}; // RsvpStandby::SessionBriefs::SessionBrief


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_4_ */

