#ifndef _CISCO_IOS_XR_CRYPTO_SSH_OPER_
#define _CISCO_IOS_XR_CRYPTO_SSH_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_ssh_oper {

class Ssh1 : public ydk::Entity
{
    public:
        Ssh1();
        ~Ssh1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Kex; //type: Ssh1::Kex

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex> kex;
        
}; // Ssh1


class Ssh1::Kex : public ydk::Entity
{
    public:
        Kex();
        ~Kex();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nodes; //type: Ssh1::Kex::Nodes

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes> nodes;
        
}; // Ssh1::Kex


class Ssh1::Kex::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Ssh1::Kex::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node> > node;
        
}; // Ssh1::Kex::Nodes


class Ssh1::Kex::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class IncomingSessions; //type: Ssh1::Kex::Nodes::Node::IncomingSessions
        class OutgoingConnections; //type: Ssh1::Kex::Nodes::Node::OutgoingConnections

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::IncomingSessions> incoming_sessions;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::OutgoingConnections> outgoing_connections;
        
}; // Ssh1::Kex::Nodes::Node


class Ssh1::Kex::Nodes::Node::IncomingSessions : public ydk::Entity
{
    public:
        IncomingSessions();
        ~IncomingSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionDetailInfo; //type: Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo> > session_detail_info;
        
}; // Ssh1::Kex::Nodes::Node::IncomingSessions


class Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo : public ydk::Entity
{
    public:
        SessionDetailInfo();
        ~SessionDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf key_exchange; //type: KexName
        ydk::YLeaf public_key; //type: Hostkey
        ydk::YLeaf in_cipher; //type: Cipher
        ydk::YLeaf out_cipher; //type: Cipher
        ydk::YLeaf in_mac; //type: Mac
        ydk::YLeaf out_mac; //type: Mac

}; // Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo


class Ssh1::Kex::Nodes::Node::OutgoingConnections : public ydk::Entity
{
    public:
        OutgoingConnections();
        ~OutgoingConnections();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionDetailInfo; //type: Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo> > session_detail_info;
        
}; // Ssh1::Kex::Nodes::Node::OutgoingConnections


class Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo : public ydk::Entity
{
    public:
        SessionDetailInfo();
        ~SessionDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf key_exchange; //type: KexName
        ydk::YLeaf public_key; //type: Hostkey
        ydk::YLeaf in_cipher; //type: Cipher
        ydk::YLeaf out_cipher; //type: Cipher
        ydk::YLeaf in_mac; //type: Mac
        ydk::YLeaf out_mac; //type: Mac

}; // Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo

class Ssh : public ydk::Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Session; //type: Ssh::Session

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session> session;
        
}; // Ssh


class Ssh::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rekey; //type: Ssh::Session::Rekey
        class Brief; //type: Ssh::Session::Brief
        class Detail; //type: Ssh::Session::Detail

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Rekey> rekey;
        
}; // Ssh::Session


class Ssh::Session::Rekey : public ydk::Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IncomingSessions; //type: Ssh::Session::Rekey::IncomingSessions
        class OutgoingConnections; //type: Ssh::Session::Rekey::OutgoingConnections

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Rekey::IncomingSessions> incoming_sessions;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Rekey::OutgoingConnections> outgoing_connections;
        
}; // Ssh::Session::Rekey


class Ssh::Session::Rekey::IncomingSessions : public ydk::Entity
{
    public:
        IncomingSessions();
        ~IncomingSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionRekeyInfo; //type: Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo> > session_rekey_info;
        
}; // Ssh::Session::Rekey::IncomingSessions


class Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo : public ydk::Entity
{
    public:
        SessionRekeyInfo();
        ~SessionRekeyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf session_rekey_count; //type: uint32
        ydk::YLeaf time_to_rekey; //type: string
        ydk::YLeaf volume_to_rekey; //type: string

}; // Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo


class Ssh::Session::Rekey::OutgoingConnections : public ydk::Entity
{
    public:
        OutgoingConnections();
        ~OutgoingConnections();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionRekeyInfo; //type: Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo> > session_rekey_info;
        
}; // Ssh::Session::Rekey::OutgoingConnections


class Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo : public ydk::Entity
{
    public:
        SessionRekeyInfo();
        ~SessionRekeyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf session_rekey_count; //type: uint32
        ydk::YLeaf time_to_rekey; //type: string
        ydk::YLeaf volume_to_rekey; //type: string

}; // Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo


class Ssh::Session::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IncomingSessions; //type: Ssh::Session::Brief::IncomingSessions
        class OutgoingSessions; //type: Ssh::Session::Brief::OutgoingSessions

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::IncomingSessions> incoming_sessions;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::OutgoingSessions> outgoing_sessions;
        
}; // Ssh::Session::Brief


class Ssh::Session::Brief::IncomingSessions : public ydk::Entity
{
    public:
        IncomingSessions();
        ~IncomingSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionBriefInfo; //type: Ssh::Session::Brief::IncomingSessions::SessionBriefInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::IncomingSessions::SessionBriefInfo> > session_brief_info;
        
}; // Ssh::Session::Brief::IncomingSessions


class Ssh::Session::Brief::IncomingSessions::SessionBriefInfo : public ydk::Entity
{
    public:
        SessionBriefInfo();
        ~SessionBriefInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf channel_id; //type: uint32
        ydk::YLeaf vty_assigned; //type: boolean
        ydk::YLeaf vty_line_number; //type: uint32
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_state; //type: States
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf host_address; //type: string
        ydk::YLeaf version; //type: Version
        ydk::YLeaf authentication_type; //type: Authen
        ydk::YLeaf connection_type; //type: Connection

}; // Ssh::Session::Brief::IncomingSessions::SessionBriefInfo


class Ssh::Session::Brief::OutgoingSessions : public ydk::Entity
{
    public:
        OutgoingSessions();
        ~OutgoingSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionBriefInfo; //type: Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo> > session_brief_info;
        
}; // Ssh::Session::Brief::OutgoingSessions


class Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo : public ydk::Entity
{
    public:
        SessionBriefInfo();
        ~SessionBriefInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf channel_id; //type: uint32
        ydk::YLeaf vty_assigned; //type: boolean
        ydk::YLeaf vty_line_number; //type: uint32
        ydk::YLeaf node_name; //type: string
        ydk::YLeaf session_state; //type: States
        ydk::YLeaf user_id; //type: string
        ydk::YLeaf host_address; //type: string
        ydk::YLeaf version; //type: Version
        ydk::YLeaf authentication_type; //type: Authen
        ydk::YLeaf connection_type; //type: Connection

}; // Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo


class Ssh::Session::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IncomingSessions; //type: Ssh::Session::Detail::IncomingSessions
        class OutgoingConnections; //type: Ssh::Session::Detail::OutgoingConnections

        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::IncomingSessions> incoming_sessions;
        std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::OutgoingConnections> outgoing_connections;
        
}; // Ssh::Session::Detail


class Ssh::Session::Detail::IncomingSessions : public ydk::Entity
{
    public:
        IncomingSessions();
        ~IncomingSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionDetailInfo; //type: Ssh::Session::Detail::IncomingSessions::SessionDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::IncomingSessions::SessionDetailInfo> > session_detail_info;
        
}; // Ssh::Session::Detail::IncomingSessions


class Ssh::Session::Detail::IncomingSessions::SessionDetailInfo : public ydk::Entity
{
    public:
        SessionDetailInfo();
        ~SessionDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf key_exchange; //type: KexName
        ydk::YLeaf public_key; //type: Hostkey
        ydk::YLeaf in_cipher; //type: Cipher
        ydk::YLeaf out_cipher; //type: Cipher
        ydk::YLeaf in_mac; //type: Mac
        ydk::YLeaf out_mac; //type: Mac

}; // Ssh::Session::Detail::IncomingSessions::SessionDetailInfo


class Ssh::Session::Detail::OutgoingConnections : public ydk::Entity
{
    public:
        OutgoingConnections();
        ~OutgoingConnections();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionDetailInfo; //type: Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo> > session_detail_info;
        
}; // Ssh::Session::Detail::OutgoingConnections


class Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo : public ydk::Entity
{
    public:
        SessionDetailInfo();
        ~SessionDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf key_exchange; //type: KexName
        ydk::YLeaf public_key; //type: Hostkey
        ydk::YLeaf in_cipher; //type: Cipher
        ydk::YLeaf out_cipher; //type: Cipher
        ydk::YLeaf in_mac; //type: Mac
        ydk::YLeaf out_mac; //type: Mac

}; // Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo

class Mac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hmac_md5;
        static const ydk::Enum::YLeaf hmac_sha1;
        static const ydk::Enum::YLeaf hmac_sha2_256;
        static const ydk::Enum::YLeaf hmac_sha2_512;

};

class Authen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf password;
        static const ydk::Enum::YLeaf rsa_public_key;
        static const ydk::Enum::YLeaf keyboard_interactive;

};

class Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v2;
        static const ydk::Enum::YLeaf v1;

};

class Hostkey : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssh_dss;
        static const ydk::Enum::YLeaf ssh_rsa;

};

class States : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf version_ok;
        static const ydk::Enum::YLeaf key_exchange_initialize;
        static const ydk::Enum::YLeaf key_exchange_dh;
        static const ydk::Enum::YLeaf new_keys;
        static const ydk::Enum::YLeaf authenticate_information;
        static const ydk::Enum::YLeaf authenticated;
        static const ydk::Enum::YLeaf channel_open;
        static const ydk::Enum::YLeaf pty_open;
        static const ydk::Enum::YLeaf session_open;
        static const ydk::Enum::YLeaf rekey;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf session_closed;

};

class KexName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf diffie_hellman_group1;
        static const ydk::Enum::YLeaf diffie_hellman_group14;
        static const ydk::Enum::YLeaf diffie_hellman_group15;
        static const ydk::Enum::YLeaf diffie_hellman_group16;
        static const ydk::Enum::YLeaf diffie_hellman_group17;
        static const ydk::Enum::YLeaf diffie_hellman_group18;
        static const ydk::Enum::YLeaf ecdh_nistp256;
        static const ydk::Enum::YLeaf ecdh_nistp384;
        static const ydk::Enum::YLeaf ecdh_nistp521;
        static const ydk::Enum::YLeaf password_authenticated;

};

class Connection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp_subsystem;
        static const ydk::Enum::YLeaf netconf_subsystem;
        static const ydk::Enum::YLeaf tl1_subsystem;
        static const ydk::Enum::YLeaf netconf_xml_subsystem;

};

class Cipher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes128_cbc;
        static const ydk::Enum::YLeaf aes192_cbc;
        static const ydk::Enum::YLeaf aes256_cbc;
        static const ydk::Enum::YLeaf triple_des_cbc;
        static const ydk::Enum::YLeaf aes128_ctr;
        static const ydk::Enum::YLeaf aes192_ctr;
        static const ydk::Enum::YLeaf aes256_ctr;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SSH_OPER_ */

