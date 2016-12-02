#ifndef _CISCO_IOS_XR_CRYPTO_SSH_OPER_
#define _CISCO_IOS_XR_CRYPTO_SSH_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_ssh_oper {

class Ssh1 : public Entity
{
    public:
        Ssh1();
        ~Ssh1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Kex : public Entity
    {
        public:
            Kex();
            ~Kex();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node_name; //type: string


                class IncomingSessions : public Entity
                {
                    public:
                        IncomingSessions();
                        ~IncomingSessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SessionDetailInfo : public Entity
                    {
                        public:
                            SessionDetailInfo();
                            ~SessionDetailInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value session_id; //type: uint32
                            Value key_exchange; //type: KexNameEnum
                            Value public_key; //type: HostkeyEnum
                            Value in_cipher; //type: CipherEnum
                            Value out_cipher; //type: CipherEnum
                            Value in_mac; //type: MacEnum
                            Value out_mac; //type: MacEnum


                            class CipherEnum;
                            class MacEnum;
                            class KexNameEnum;
                            class CipherEnum;
                            class MacEnum;
                            class HostkeyEnum;


                    }; // Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo> > session_detail_info;


                }; // Ssh1::Kex::Nodes::Node::IncomingSessions


                class OutgoingConnections : public Entity
                {
                    public:
                        OutgoingConnections();
                        ~OutgoingConnections();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SessionDetailInfo : public Entity
                    {
                        public:
                            SessionDetailInfo();
                            ~SessionDetailInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value session_id; //type: uint32
                            Value key_exchange; //type: KexNameEnum
                            Value public_key; //type: HostkeyEnum
                            Value in_cipher; //type: CipherEnum
                            Value out_cipher; //type: CipherEnum
                            Value in_mac; //type: MacEnum
                            Value out_mac; //type: MacEnum


                            class CipherEnum;
                            class MacEnum;
                            class KexNameEnum;
                            class CipherEnum;
                            class MacEnum;
                            class HostkeyEnum;


                    }; // Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo> > session_detail_info;


                }; // Ssh1::Kex::Nodes::Node::OutgoingConnections


                    std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::IncomingSessions> incoming_sessions;
                    std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node::OutgoingConnections> outgoing_connections;


            }; // Ssh1::Kex::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes::Node> > node;


        }; // Ssh1::Kex::Nodes


            std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex::Nodes> nodes;


    }; // Ssh1::Kex


        std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh1::Kex> kex;


}; // Ssh1

class Ssh : public Entity
{
    public:
        Ssh();
        ~Ssh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Session : public Entity
    {
        public:
            Session();
            ~Session();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Brief : public Entity
        {
            public:
                Brief();
                ~Brief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IncomingSessions : public Entity
            {
                public:
                    IncomingSessions();
                    ~IncomingSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SessionBriefInfo : public Entity
                {
                    public:
                        SessionBriefInfo();
                        ~SessionBriefInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: uint32
                        Value channel_id; //type: uint32
                        Value vty_assigned; //type: boolean
                        Value vty_line_number; //type: uint32
                        Value node_name; //type: string
                        Value session_state; //type: StatesEnum
                        Value user_id; //type: string
                        Value host_address; //type: string
                        Value version; //type: VersionEnum
                        Value authentication_type; //type: AuthenEnum
                        Value connection_type; //type: ConnectionEnum


                        class AuthenEnum;
                        class ConnectionEnum;
                        class StatesEnum;
                        class VersionEnum;


                }; // Ssh::Session::Brief::IncomingSessions::SessionBriefInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::IncomingSessions::SessionBriefInfo> > session_brief_info;


            }; // Ssh::Session::Brief::IncomingSessions


            class OutgoingSessions : public Entity
            {
                public:
                    OutgoingSessions();
                    ~OutgoingSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SessionBriefInfo : public Entity
                {
                    public:
                        SessionBriefInfo();
                        ~SessionBriefInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: uint32
                        Value channel_id; //type: uint32
                        Value vty_assigned; //type: boolean
                        Value vty_line_number; //type: uint32
                        Value node_name; //type: string
                        Value session_state; //type: StatesEnum
                        Value user_id; //type: string
                        Value host_address; //type: string
                        Value version; //type: VersionEnum
                        Value authentication_type; //type: AuthenEnum
                        Value connection_type; //type: ConnectionEnum


                        class AuthenEnum;
                        class ConnectionEnum;
                        class StatesEnum;
                        class VersionEnum;


                }; // Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo> > session_brief_info;


            }; // Ssh::Session::Brief::OutgoingSessions


                std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::IncomingSessions> incoming_sessions;
                std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief::OutgoingSessions> outgoing_sessions;


        }; // Ssh::Session::Brief


        class Detail : public Entity
        {
            public:
                Detail();
                ~Detail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IncomingSessions : public Entity
            {
                public:
                    IncomingSessions();
                    ~IncomingSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SessionDetailInfo : public Entity
                {
                    public:
                        SessionDetailInfo();
                        ~SessionDetailInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: uint32
                        Value key_exchange; //type: KexNameEnum
                        Value public_key; //type: HostkeyEnum
                        Value in_cipher; //type: CipherEnum
                        Value out_cipher; //type: CipherEnum
                        Value in_mac; //type: MacEnum
                        Value out_mac; //type: MacEnum


                        class CipherEnum;
                        class MacEnum;
                        class KexNameEnum;
                        class CipherEnum;
                        class MacEnum;
                        class HostkeyEnum;


                }; // Ssh::Session::Detail::IncomingSessions::SessionDetailInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::IncomingSessions::SessionDetailInfo> > session_detail_info;


            }; // Ssh::Session::Detail::IncomingSessions


            class OutgoingConnections : public Entity
            {
                public:
                    OutgoingConnections();
                    ~OutgoingConnections();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SessionDetailInfo : public Entity
                {
                    public:
                        SessionDetailInfo();
                        ~SessionDetailInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_id; //type: uint32
                        Value key_exchange; //type: KexNameEnum
                        Value public_key; //type: HostkeyEnum
                        Value in_cipher; //type: CipherEnum
                        Value out_cipher; //type: CipherEnum
                        Value in_mac; //type: MacEnum
                        Value out_mac; //type: MacEnum


                        class CipherEnum;
                        class MacEnum;
                        class KexNameEnum;
                        class CipherEnum;
                        class MacEnum;
                        class HostkeyEnum;


                }; // Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo> > session_detail_info;


            }; // Ssh::Session::Detail::OutgoingConnections


                std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::IncomingSessions> incoming_sessions;
                std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail::OutgoingConnections> outgoing_connections;


        }; // Ssh::Session::Detail


            std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Brief> brief;
            std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session::Detail> detail;


    }; // Ssh::Session


        std::unique_ptr<Cisco_IOS_XR_crypto_ssh_oper::Ssh::Session> session;


}; // Ssh


class KexNameEnum : public Enum
{
    public:
        static const Enum::Value diffie_hellman;
        static const Enum::Value password_authenticated;

};

class HostkeyEnum : public Enum
{
    public:
        static const Enum::Value ssh_dss;
        static const Enum::Value ssh_rsa;

};

class VersionEnum : public Enum
{
    public:
        static const Enum::Value v2;
        static const Enum::Value v1;

};

class ConnectionEnum : public Enum
{
    public:
        static const Enum::Value undefined;
        static const Enum::Value shell;
        static const Enum::Value exec;
        static const Enum::Value scp;
        static const Enum::Value sftp_subsystem;
        static const Enum::Value netconf_subsystem;

};

class StatesEnum : public Enum
{
    public:
        static const Enum::Value open;
        static const Enum::Value version_ok;
        static const Enum::Value key_exchange_initialize;
        static const Enum::Value key_exchange_dh;
        static const Enum::Value new_keys;
        static const Enum::Value authenticate_information;
        static const Enum::Value authenticated;
        static const Enum::Value channel_open;
        static const Enum::Value pty_open;
        static const Enum::Value session_open;
        static const Enum::Value rekey;
        static const Enum::Value suspended;
        static const Enum::Value session_closed;

};

class MacEnum : public Enum
{
    public:
        static const Enum::Value hmac_md5;
        static const Enum::Value hmac_sha1;

};

class CipherEnum : public Enum
{
    public:
        static const Enum::Value aes128_cbc;
        static const Enum::Value aes192_cbc;
        static const Enum::Value aes256_cbc;
        static const Enum::Value triple_des_cbc;
        static const Enum::Value aes128_ctr;
        static const Enum::Value aes192_ctr;
        static const Enum::Value aes256_ctr;

};

class AuthenEnum : public Enum
{
    public:
        static const Enum::Value password;
        static const Enum::Value rsa_public_key;
        static const Enum::Value keyboard_interactive;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_SSH_OPER_ */

