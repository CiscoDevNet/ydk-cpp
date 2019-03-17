#ifndef _CISCO_IOS_XR_PING_ACT_
#define _CISCO_IOS_XR_PING_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ping_act {

class Ping : public ydk::Entity
{
    public:
        Ping();
        ~Ping();

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

        class Input; //type: Ping::Input
        class Output; //type: Ping::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output> output;
        
}; // Ping


class Ping::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        class Destination; //type: Ping::Input::Destination
        class Ipv4; //type: Ping::Input::Ipv4
        class Ipv6; //type: Ping::Input::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Input::Destination> destination; // presence node
        ydk::YList ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Input::Ipv6> ipv6; // presence node
        
}; // Ping::Input


class Ping::Input::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf repeat_count; //type: uint64
        ydk::YLeaf data_size; //type: uint64
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf sweep; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf type_of_service; //type: uint8
        ydk::YLeaf do_not_frag; //type: boolean
        ydk::YLeaf validate; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf outgoing_interface; //type: string

}; // Ping::Input::Destination


class Ping::Input::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf repeat_count; //type: uint64
        ydk::YLeaf data_size; //type: uint64
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf sweep; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf type_of_service; //type: uint8
        ydk::YLeaf do_not_frag; //type: boolean
        ydk::YLeaf validate; //type: boolean

}; // Ping::Input::Ipv4


class Ping::Input::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf repeat_count; //type: uint64
        ydk::YLeaf data_size; //type: uint64
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf sweep; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf outgoing_interface; //type: string

}; // Ping::Input::Ipv6


class Ping::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class PingResponse; //type: Ping::Output::PingResponse

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output::PingResponse> ping_response;
        
}; // Ping::Output


class Ping::Output::PingResponse : public ydk::Entity
{
    public:
        PingResponse();
        ~PingResponse();

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

        class Ipv4; //type: Ping::Output::PingResponse::Ipv4
        class Ipv6; //type: Ping::Output::PingResponse::Ipv6

        ydk::YList ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output::PingResponse::Ipv6> ipv6; // presence node
        
}; // Ping::Output::PingResponse


class Ping::Output::PingResponse::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf repeat_count; //type: uint64
        ydk::YLeaf data_size; //type: uint64
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf sweep; //type: boolean
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf total; //type: uint64
        ydk::YLeaf success_rate; //type: uint64
        ydk::YLeaf rtt_min; //type: uint64
        ydk::YLeaf rtt_avg; //type: uint64
        ydk::YLeaf rtt_max; //type: uint64
        ydk::YLeaf sweep_min; //type: uint32
        ydk::YLeaf sweep_max; //type: uint64
        ydk::YLeaf rotate_pattern; //type: boolean
        ydk::YLeaf ping_error_response; //type: string
        class Replies; //type: Ping::Output::PingResponse::Ipv4::Replies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output::PingResponse::Ipv4::Replies> replies;
        
}; // Ping::Output::PingResponse::Ipv4


class Ping::Output::PingResponse::Ipv4::Replies : public ydk::Entity
{
    public:
        Replies();
        ~Replies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reply; //type: Ping::Output::PingResponse::Ipv4::Replies::Reply

        ydk::YList reply;
        
}; // Ping::Output::PingResponse::Ipv4::Replies


class Ping::Output::PingResponse::Ipv4::Replies::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reply_index; //type: uint64
        ydk::YLeaf result; //type: string
        class BroadcastReplyAddresses; //type: Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses> broadcast_reply_addresses;
        
}; // Ping::Output::PingResponse::Ipv4::Replies::Reply


class Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses : public ydk::Entity
{
    public:
        BroadcastReplyAddresses();
        ~BroadcastReplyAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BroadcastReplyAddress; //type: Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress

        ydk::YList broadcast_reply_address;
        
}; // Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses


class Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress : public ydk::Entity
{
    public:
        BroadcastReplyAddress();
        ~BroadcastReplyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reply_address; //type: string
        ydk::YLeaf result; //type: string

}; // Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress


class Ping::Output::PingResponse::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf destination; //type: string
        ydk::YLeaf repeat_count; //type: uint64
        ydk::YLeaf data_size; //type: uint64
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf sweep; //type: boolean
        ydk::YLeaf sweep_min; //type: uint32
        ydk::YLeaf sweep_max; //type: uint64
        ydk::YLeaf rotate_pattern; //type: boolean
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf total; //type: uint64
        ydk::YLeaf success_rate; //type: uint64
        ydk::YLeaf rtt_min; //type: uint64
        ydk::YLeaf rtt_avg; //type: uint64
        ydk::YLeaf rtt_max; //type: uint64
        class Replies; //type: Ping::Output::PingResponse::Ipv6::Replies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ping_act::Ping::Output::PingResponse::Ipv6::Replies> replies;
        
}; // Ping::Output::PingResponse::Ipv6


class Ping::Output::PingResponse::Ipv6::Replies : public ydk::Entity
{
    public:
        Replies();
        ~Replies();

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

        class Reply; //type: Ping::Output::PingResponse::Ipv6::Replies::Reply

        ydk::YList reply;
        
}; // Ping::Output::PingResponse::Ipv6::Replies


class Ping::Output::PingResponse::Ipv6::Replies::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

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

        ydk::YLeaf reply_index; //type: uint64
        ydk::YLeaf result; //type: string

}; // Ping::Output::PingResponse::Ipv6::Replies::Reply


}
}

#endif /* _CISCO_IOS_XR_PING_ACT_ */

