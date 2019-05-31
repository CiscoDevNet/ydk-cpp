#ifndef _CISCO_IOS_XR_IP_NTP_OPER_
#define _CISCO_IOS_XR_IP_NTP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_ntp_oper {

class Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

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

        class Nodes; //type: Ntp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes> nodes;
        
}; // Ntp


class Ntp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Ntp::Nodes::Node

        ydk::YList node;
        
}; // Ntp::Nodes


class Ntp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class AssociationsDetail; //type: Ntp::Nodes::Node::AssociationsDetail
        class Status; //type: Ntp::Nodes::Node::Status
        class Associations; //type: Ntp::Nodes::Node::Associations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail> associations_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations> associations;
        
}; // Ntp::Nodes::Node


class Ntp::Nodes::Node::AssociationsDetail : public ydk::Entity
{
    public:
        AssociationsDetail();
        ~AssociationsDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_leap; //type: NtpLeap
        class PeerDetailInfo; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo

        ydk::YList peer_detail_info;
        
}; // Ntp::Nodes::Node::AssociationsDetail


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo : public ydk::Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leap; //type: NtpLeap
        ydk::YLeaf peer_mode; //type: NtpMode
        ydk::YLeaf poll_interval; //type: uint8
        ydk::YLeaf is_ref_clock; //type: boolean
        ydk::YLeaf is_authenticated; //type: boolean
        ydk::YLeaf root_delay; //type: string
        ydk::YLeaf root_dispersion; //type: string
        ydk::YLeaf synch_distance; //type: string
        ydk::YLeaf precision; //type: int8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf filter_index; //type: uint32
        ydk::YLeaf cast_flags; //type: uint8
        class PeerInfoCommon; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon
        class RefTime; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime
        class OriginateTime; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime
        class ReceiveTime; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime
        class TransmitTime; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime
        class FilterDetail; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon> peer_info_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime> ref_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime> originate_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime> receive_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime> transmit_time;
        ydk::YList filter_detail;
        
}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon : public ydk::Entity
{
    public:
        PeerInfoCommon();
        ~PeerInfoCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_mode; //type: NtpMode
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf address; //type: string
        ydk::YLeaf reference_id; //type: string
        ydk::YLeaf host_poll; //type: uint8
        ydk::YLeaf reachability; //type: uint8
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf status; //type: NtpPeerStatus
        ydk::YLeaf delay; //type: string
        ydk::YLeaf offset; //type: string
        ydk::YLeaf dispersion; //type: string
        ydk::YLeaf is_sys_peer; //type: boolean

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime : public ydk::Entity
{
    public:
        RefTime();
        ~RefTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec
        class FracSecs; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime : public ydk::Entity
{
    public:
        OriginateTime();
        ~OriginateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec
        class FracSecs; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime : public ydk::Entity
{
    public:
        ReceiveTime();
        ~ReceiveTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec
        class FracSecs; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime : public ydk::Entity
{
    public:
        TransmitTime();
        ~TransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec
        class FracSecs; //type: Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs


class Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail : public ydk::Entity
{
    public:
        FilterDetail();
        ~FilterDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_delay; //type: string
        ydk::YLeaf filter_offset; //type: string
        ydk::YLeaf filter_disp; //type: string

}; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail


class Ntp::Nodes::Node::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_dispersion; //type: string
        ydk::YLeaf sys_offset; //type: string
        ydk::YLeaf clock_period; //type: uint32
        ydk::YLeaf sys_leap; //type: NtpLeap
        ydk::YLeaf sys_precision; //type: int8
        ydk::YLeaf sys_stratum; //type: uint8
        ydk::YLeaf sys_ref_id; //type: string
        ydk::YLeaf sys_root_delay; //type: string
        ydk::YLeaf sys_root_dispersion; //type: string
        ydk::YLeaf loop_filter_state; //type: NtpLoopFilterState
        ydk::YLeaf poll_interval; //type: uint8
        ydk::YLeaf is_updated; //type: ClockUpdateNode
        ydk::YLeaf last_update; //type: int32
        ydk::YLeaf is_auth_enabled; //type: boolean
        class SysRefTime; //type: Ntp::Nodes::Node::Status::SysRefTime
        class SysDrift; //type: Ntp::Nodes::Node::Status::SysDrift

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime> sys_ref_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift> sys_drift;
        
}; // Ntp::Nodes::Node::Status


class Ntp::Nodes::Node::Status::SysRefTime : public ydk::Entity
{
    public:
        SysRefTime();
        ~SysRefTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::Status::SysRefTime::Sec
        class FracSecs; //type: Ntp::Nodes::Node::Status::SysRefTime::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::Status::SysRefTime


class Ntp::Nodes::Node::Status::SysRefTime::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::Status::SysRefTime::Sec


class Ntp::Nodes::Node::Status::SysRefTime::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::Status::SysRefTime::FracSecs


class Ntp::Nodes::Node::Status::SysDrift : public ydk::Entity
{
    public:
        SysDrift();
        ~SysDrift();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sec; //type: Ntp::Nodes::Node::Status::SysDrift::Sec
        class FracSecs; //type: Ntp::Nodes::Node::Status::SysDrift::FracSecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::Sec> sec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::FracSecs> frac_secs;
        
}; // Ntp::Nodes::Node::Status::SysDrift


class Ntp::Nodes::Node::Status::SysDrift::Sec : public ydk::Entity
{
    public:
        Sec();
        ~Sec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf int_; //type: uint32

}; // Ntp::Nodes::Node::Status::SysDrift::Sec


class Ntp::Nodes::Node::Status::SysDrift::FracSecs : public ydk::Entity
{
    public:
        FracSecs();
        ~FracSecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frac; //type: uint32

}; // Ntp::Nodes::Node::Status::SysDrift::FracSecs


class Ntp::Nodes::Node::Associations : public ydk::Entity
{
    public:
        Associations();
        ~Associations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ntp_enabled; //type: boolean
        ydk::YLeaf sys_leap; //type: NtpLeap
        class PeerSummaryInfo; //type: Ntp::Nodes::Node::Associations::PeerSummaryInfo

        ydk::YList peer_summary_info;
        
}; // Ntp::Nodes::Node::Associations


class Ntp::Nodes::Node::Associations::PeerSummaryInfo : public ydk::Entity
{
    public:
        PeerSummaryInfo();
        ~PeerSummaryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since; //type: int32
        class PeerInfoCommon; //type: Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon> peer_info_common;
        
}; // Ntp::Nodes::Node::Associations::PeerSummaryInfo


class Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon : public ydk::Entity
{
    public:
        PeerInfoCommon();
        ~PeerInfoCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_mode; //type: NtpMode
        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf address; //type: string
        ydk::YLeaf reference_id; //type: string
        ydk::YLeaf host_poll; //type: uint8
        ydk::YLeaf reachability; //type: uint8
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf status; //type: NtpPeerStatus
        ydk::YLeaf delay; //type: string
        ydk::YLeaf offset; //type: string
        ydk::YLeaf dispersion; //type: string
        ydk::YLeaf is_sys_peer; //type: boolean

}; // Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon

class ClockUpdateNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clk_never_updated;
        static const ydk::Enum::YLeaf clk_updated;
        static const ydk::Enum::YLeaf clk_no_update_info;

};

class NtpLoopFilterState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_loop_flt_n_set;
        static const ydk::Enum::YLeaf ntp_loop_flt_f_set;
        static const ydk::Enum::YLeaf ntp_loop_flt_spik;
        static const ydk::Enum::YLeaf ntp_loop_flt_freq;
        static const ydk::Enum::YLeaf ntp_loop_flt_sync;
        static const ydk::Enum::YLeaf ntp_loop_flt_unkn;

};

class NtpPeerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_reject;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sane;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_correct;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_selcand;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sync_cand;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_distsys_peer;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_sys_peer;
        static const ydk::Enum::YLeaf ntp_ctl_pst_sel_pps;

};

class NtpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_mode_unspec;
        static const ydk::Enum::YLeaf ntp_mode_symetric_active;
        static const ydk::Enum::YLeaf ntp_mode_symetric_passive;
        static const ydk::Enum::YLeaf ntp_mode_client;
        static const ydk::Enum::YLeaf ntp_mode_server;
        static const ydk::Enum::YLeaf ntp_mode_xcast_server;
        static const ydk::Enum::YLeaf ntp_mode_control;
        static const ydk::Enum::YLeaf ntp_mode_private;
        static const ydk::Enum::YLeaf ntp_mode_xcast_client;

};

class NtpLeap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_leap_no_warning;
        static const ydk::Enum::YLeaf ntp_leap_addse_cond;
        static const ydk::Enum::YLeaf ntp_leap_delse_cond;
        static const ydk::Enum::YLeaf ntp_leap_not_in_sync;

};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_OPER_ */

