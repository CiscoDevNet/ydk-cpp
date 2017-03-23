#ifndef _CISCO_IOS_XR_PING_ACT_
#define _CISCO_IOS_XR_PING_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ping_act {

class PingRpc : public Entity
{
    public:
        PingRpc();
        ~PingRpc();

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



        class Output; //type: PingRpc::Output
        class Destination; //type: PingRpc::Destination
        class Ipv4; //type: PingRpc::Ipv4
        class Ipv6; //type: PingRpc::Ipv6

        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Destination> destination;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Ipv4> > ipv4;
        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output> output;


}; // PingRpc


class PingRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PingResponse; //type: PingRpc::Output::PingResponse

        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse> ping_response;


}; // PingRpc::Output


class PingRpc::Output::PingResponse : public Entity
{
    public:
        PingResponse();
        ~PingResponse();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4; //type: PingRpc::Output::PingResponse::Ipv4
        class Ipv6; //type: PingRpc::Output::PingResponse::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv4> > ipv4;
        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv6> ipv6;


}; // PingRpc::Output::PingResponse


class PingRpc::Output::PingResponse::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: string
        YLeaf repeat_count; //type: uint64
        YLeaf data_size; //type: uint64
        YLeaf timeout; //type: uint64
        YLeaf interval; //type: uint32
        YLeaf pattern; //type: string
        YLeaf sweep; //type: boolean
        YLeaf hits; //type: uint64
        YLeaf total; //type: uint64
        YLeaf success_rate; //type: uint64
        YLeaf rtt_min; //type: uint64
        YLeaf rtt_avg; //type: uint64
        YLeaf rtt_max; //type: uint64
        YLeaf sweep_min; //type: uint32
        YLeaf sweep_max; //type: uint64
        YLeaf rotate_pattern; //type: boolean
        YLeaf ping_error_response; //type: string

        class Replies; //type: PingRpc::Output::PingResponse::Ipv4::Replies

        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv4::Replies> replies;


}; // PingRpc::Output::PingResponse::Ipv4


class PingRpc::Output::PingResponse::Ipv4::Replies : public Entity
{
    public:
        Replies();
        ~Replies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reply; //type: PingRpc::Output::PingResponse::Ipv4::Replies::Reply

        std::vector<std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv4::Replies::Reply> > reply;


}; // PingRpc::Output::PingResponse::Ipv4::Replies


class PingRpc::Output::PingResponse::Ipv4::Replies::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reply_index; //type: uint64
        YLeaf result; //type: string

        class BroadcastReplyAddresses; //type: PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses

        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses> broadcast_reply_addresses;


}; // PingRpc::Output::PingResponse::Ipv4::Replies::Reply


class PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses : public Entity
{
    public:
        BroadcastReplyAddresses();
        ~BroadcastReplyAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BroadcastReplyAddress; //type: PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress> > broadcast_reply_address;


}; // PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses


class PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress : public Entity
{
    public:
        BroadcastReplyAddress();
        ~BroadcastReplyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reply_address; //type: string
        YLeaf result; //type: string



}; // PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress


class PingRpc::Output::PingResponse::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: string
        YLeaf repeat_count; //type: uint64
        YLeaf data_size; //type: uint64
        YLeaf timeout; //type: uint64
        YLeaf interval; //type: uint32
        YLeaf pattern; //type: string
        YLeaf sweep; //type: boolean
        YLeaf sweep_min; //type: uint32
        YLeaf sweep_max; //type: uint64
        YLeaf rotate_pattern; //type: boolean
        YLeaf hits; //type: uint64
        YLeaf total; //type: uint64
        YLeaf success_rate; //type: uint64
        YLeaf rtt_min; //type: uint64
        YLeaf rtt_avg; //type: uint64
        YLeaf rtt_max; //type: uint64

        class Replies; //type: PingRpc::Output::PingResponse::Ipv6::Replies

        std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv6::Replies> replies;


}; // PingRpc::Output::PingResponse::Ipv6


class PingRpc::Output::PingResponse::Ipv6::Replies : public Entity
{
    public:
        Replies();
        ~Replies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reply; //type: PingRpc::Output::PingResponse::Ipv6::Replies::Reply

        std::vector<std::shared_ptr<Cisco_IOS_XR_ping_act::PingRpc::Output::PingResponse::Ipv6::Replies::Reply> > reply;


}; // PingRpc::Output::PingResponse::Ipv6::Replies


class PingRpc::Output::PingResponse::Ipv6::Replies::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reply_index; //type: uint64
        YLeaf result; //type: string



}; // PingRpc::Output::PingResponse::Ipv6::Replies::Reply


class PingRpc::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: string
        YLeaf repeat_count; //type: uint64
        YLeaf data_size; //type: uint64
        YLeaf timeout; //type: uint64
        YLeaf interval; //type: uint32
        YLeaf pattern; //type: string
        YLeaf sweep; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf source; //type: string
        YLeaf verbose; //type: boolean
        YLeaf type_of_service; //type: uint8
        YLeaf do_not_frag; //type: boolean
        YLeaf validate; //type: boolean
        YLeaf priority; //type: uint8
        YLeaf outgoing_interface; //type: string



}; // PingRpc::Destination


class PingRpc::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: string
        YLeaf repeat_count; //type: uint64
        YLeaf data_size; //type: uint64
        YLeaf timeout; //type: uint64
        YLeaf interval; //type: uint32
        YLeaf pattern; //type: string
        YLeaf sweep; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf source; //type: string
        YLeaf verbose; //type: boolean
        YLeaf type_of_service; //type: uint8
        YLeaf do_not_frag; //type: boolean
        YLeaf validate; //type: boolean



}; // PingRpc::Ipv4


class PingRpc::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: string
        YLeaf repeat_count; //type: uint64
        YLeaf data_size; //type: uint64
        YLeaf timeout; //type: uint64
        YLeaf interval; //type: uint32
        YLeaf pattern; //type: string
        YLeaf sweep; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf source; //type: string
        YLeaf verbose; //type: boolean
        YLeaf priority; //type: uint8
        YLeaf outgoing_interface; //type: string



}; // PingRpc::Ipv6


}
}

#endif /* _CISCO_IOS_XR_PING_ACT_ */

