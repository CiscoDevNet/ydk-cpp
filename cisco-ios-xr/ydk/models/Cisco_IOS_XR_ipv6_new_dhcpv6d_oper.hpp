#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_oper {

class Dhcpv6 : public Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Database : public Entity
    {
        public:
            Database();
            ~Database();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf configured; //type: boolean
            YLeaf version; //type: uint32
            YLeaf full_file_write_interval; //type: uint32
            YLeaf last_full_write_file_name; //type: string
            YLeaf last_full_write_time; //type: uint32
            YLeaf full_file_write_count; //type: uint32
            YLeaf failed_full_file_write_count; //type: uint32
            YLeaf full_file_record_count; //type: uint32
            YLeaf last_full_file_write_error_timestamp; //type: uint32
            YLeaf incremental_file_write_interval; //type: uint32
            YLeaf last_incremental_write_file_name; //type: string
            YLeaf last_incremental_write_time; //type: uint32
            YLeaf incremental_file_write_count; //type: uint32
            YLeaf failed_incremental_file_write_count; //type: uint32
            YLeaf incremental_file_record_count; //type: uint32
            YLeaf last_incremental_file_write_error_timestamp; //type: uint32



    }; // Dhcpv6::Database


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


                YLeaf node_name; //type: string

            class Proxy : public Entity
            {
                public:
                    Proxy();
                    ~Proxy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Vrfs : public Entity
                {
                    public:
                        Vrfs();
                        ~Vrfs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Vrf : public Entity
                    {
                        public:
                            Vrf();
                            ~Vrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics : public Entity
                        {
                            public:
                                Statistics();
                                ~Statistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Solicit : public Entity
                            {
                                public:
                                    Solicit();
                                    ~Solicit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit


                            class Advertise : public Entity
                            {
                                public:
                                    Advertise();
                                    ~Advertise();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise


                            class Request : public Entity
                            {
                                public:
                                    Request();
                                    ~Request();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request


                            class Reply : public Entity
                            {
                                public:
                                    Reply();
                                    ~Reply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply


                            class Confirm : public Entity
                            {
                                public:
                                    Confirm();
                                    ~Confirm();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm


                            class Decline : public Entity
                            {
                                public:
                                    Decline();
                                    ~Decline();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline


                            class Renew : public Entity
                            {
                                public:
                                    Renew();
                                    ~Renew();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew


                            class Rebind : public Entity
                            {
                                public:
                                    Rebind();
                                    ~Rebind();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind


                            class Release : public Entity
                            {
                                public:
                                    Release();
                                    ~Release();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release


                            class Reconfig : public Entity
                            {
                                public:
                                    Reconfig();
                                    ~Reconfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig


                            class Inform : public Entity
                            {
                                public:
                                    Inform();
                                    ~Inform();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform


                            class RelayForward : public Entity
                            {
                                public:
                                    RelayForward();
                                    ~RelayForward();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward


                            class RelayReply : public Entity
                            {
                                public:
                                    RelayReply();
                                    ~RelayReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply


                            class LeaseQuery : public Entity
                            {
                                public:
                                    LeaseQuery();
                                    ~LeaseQuery();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery


                            class LeaseQueryReply : public Entity
                            {
                                public:
                                    LeaseQueryReply();
                                    ~LeaseQueryReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply


                            class LeaseQueryDone : public Entity
                            {
                                public:
                                    LeaseQueryDone();
                                    ~LeaseQueryDone();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone


                            class LeaseQueryData : public Entity
                            {
                                public:
                                    LeaseQueryData();
                                    ~LeaseQueryData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise> advertise;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm> confirm;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline> decline;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform> inform;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind> rebind;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig> reconfig;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release> release;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew> renew;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply> reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request> request;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit> solicit;


                        }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics> statistics;


                    }; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf> > vrf;


                }; // Dhcpv6::Nodes::Node::Proxy::Vrfs


                class Profiles : public Entity
                {
                    public:
                        Profiles();
                        ~Profiles();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Profile : public Entity
                    {
                        public:
                            Profile();
                            ~Profile();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf profile_name; //type: string

                        class ThrottleInfos : public Entity
                        {
                            public:
                                ThrottleInfos();
                                ~ThrottleInfos();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class ThrottleInfo : public Entity
                            {
                                public:
                                    ThrottleInfo();
                                    ~ThrottleInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mac_address; //type: string
                                    YLeaf binding_chaddr; //type: string
                                    YLeaf ifname; //type: string
                                    YLeaf state; //type: uint32
                                    YLeaf time_left; //type: uint32



                            }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo> > throttle_info;


                        }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos


                        class Info : public Entity
                        {
                            public:
                                Info();
                                ~Info();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string
                                YLeaf remote_id; //type: string
                                YLeaf profile_link_address; //type: string
                                YLeafList profile_helper_address; //type: list of  string
                                YLeafList vrf_name; //type: list of  string
                                YLeafList interface_name; //type: list of  string

                            class InterfaceIdReferences : public Entity
                            {
                                public:
                                    InterfaceIdReferences();
                                    ~InterfaceIdReferences();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Ipv6Dhcpv6DProxyIidReference : public Entity
                                {
                                    public:
                                        Ipv6Dhcpv6DProxyIidReference();
                                        ~Ipv6Dhcpv6DProxyIidReference();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf proxy_iid_interface_name; //type: string
                                        YLeaf proxy_interface_id; //type: string



                                }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference> > ipv6_dhcpv6d_proxy_iid_reference;


                            }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences


                            class VrfReferences : public Entity
                            {
                                public:
                                    VrfReferences();
                                    ~VrfReferences();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Ipv6Dhcpv6DProxyVrfReference : public Entity
                                {
                                    public:
                                        Ipv6Dhcpv6DProxyVrfReference();
                                        ~Ipv6Dhcpv6DProxyVrfReference();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf proxy_reference_vrf_name; //type: string



                                }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference> > ipv6_dhcpv6d_proxy_vrf_reference;


                            }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences


                            class InterfaceReferences : public Entity
                            {
                                public:
                                    InterfaceReferences();
                                    ~InterfaceReferences();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Ipv6Dhcpv6DProxyInterfaceReference : public Entity
                                {
                                    public:
                                        Ipv6Dhcpv6DProxyInterfaceReference();
                                        ~Ipv6Dhcpv6DProxyInterfaceReference();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf proxy_reference_interface_name; //type: string



                                }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference> > ipv6_dhcpv6d_proxy_interface_reference;


                            }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences> interface_id_references;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences> interface_references;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences> vrf_references;


                        }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info> info;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos> throttle_infos;


                    }; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile> > profile;


                }; // Dhcpv6::Nodes::Node::Proxy::Profiles


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ipv6Dhcpv6DProxyStat : public Entity
                    {
                        public:
                            Ipv6Dhcpv6DProxyStat();
                            ~Ipv6Dhcpv6DProxyStat();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics_ : public Entity
                        {
                            public:
                                Statistics_();
                                ~Statistics_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf received_packets; //type: uint64
                                YLeaf transmitted_packets; //type: uint64
                                YLeaf dropped_packets; //type: uint64



                        }; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_> statistics;


                    }; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat> > ipv6_dhcpv6d_proxy_stat;


                }; // Dhcpv6::Nodes::Node::Proxy::Statistics


                class Binding : public Entity
                {
                    public:
                        Binding();
                        ~Binding();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Clients : public Entity
                    {
                        public:
                            Clients();
                            ~Clients();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Client : public Entity
                        {
                            public:
                                Client();
                                ~Client();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf client_id; //type: string
                                YLeaf duid; //type: string
                                YLeaf client_flag; //type: uint32
                                YLeaf subscriber_label; //type: uint32
                                YLeaf vrf_name; //type: string
                                YLeaf mac_address; //type: string
                                YLeaf ia_id_p_ds; //type: uint32
                                YLeaf interface_name; //type: string
                                YLeaf access_vrf_name; //type: string
                                YLeaf proxy_binding_tags; //type: uint8
                                YLeaf proxy_binding_outer_tag; //type: uint32
                                YLeaf proxy_binding_inner_tag; //type: uint32
                                YLeaf class_name; //type: string
                                YLeaf pool_name; //type: string
                                YLeaf rx_remote_id; //type: string
                                YLeaf tx_remote_id; //type: string
                                YLeaf rx_interface_id; //type: string
                                YLeaf tx_interface_id; //type: string
                                YLeaf server_ipv6_address; //type: string
                                YLeaf profile_name; //type: string
                                YLeaf framed_ipv6_prefix; //type: string
                                YLeaf framed_prefix_length; //type: uint8
                                YLeaf is_nak_next_renew; //type: boolean
                                YLeaf srg_state; //type: uint32
                                YLeaf srg_intf_role; //type: uint32
                                YLeaf srgp2p; //type: boolean
                                YLeaf srg_vrf_name; //type: string

                            class IaIdPd : public Entity
                            {
                                public:
                                    IaIdPd();
                                    ~IaIdPd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class BagDhcpv6DIaIdPdInfo : public Entity
                                {
                                    public:
                                        BagDhcpv6DIaIdPdInfo();
                                        ~BagDhcpv6DIaIdPdInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf ia_type; //type: BagDhcpv6DIaIdEnum
                                        YLeaf ia_id; //type: uint32
                                        YLeaf flags; //type: uint32
                                        YLeaf total_address; //type: uint16
                                        YLeaf state; //type: BagDhcpv6DFsmStateEnum

                                    class Addresses : public Entity
                                    {
                                        public:
                                            Addresses();
                                            ~Addresses();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class BagDhcpv6DAddrAttrb : public Entity
                                        {
                                            public:
                                                BagDhcpv6DAddrAttrb();
                                                ~BagDhcpv6DAddrAttrb();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf prefix; //type: string
                                                YLeaf prefix_length; //type: uint8
                                                YLeaf lease_time; //type: uint32
                                                YLeaf remaining_lease_time; //type: uint32



                                        }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb> > bag_dhcpv6d_addr_attrb;


                                    }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses> addresses;


                                }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo> > bag_dhcpv6d_ia_id_pd_info;


                            }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd> ia_id_pd;


                        }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client> > client;


                    }; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients


                    class Summary : public Entity
                    {
                        public:
                            Summary();
                            ~Summary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf clients; //type: uint32

                        class Iana : public Entity
                        {
                            public:
                                Iana();
                                ~Iana();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initializing_clients; //type: uint32
                                YLeaf dpm_waiting_clients; //type: uint32
                                YLeaf daps_waiting_clients; //type: uint32
                                YLeaf msg_waiting_clients; //type: uint32
                                YLeaf iedge_waiting_clients; //type: uint32
                                YLeaf rib_waiting_clients; //type: uint32
                                YLeaf bound_clients; //type: uint32



                        }; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana


                        class Iapd : public Entity
                        {
                            public:
                                Iapd();
                                ~Iapd();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initializing_clients; //type: uint32
                                YLeaf dpm_waiting_clients; //type: uint32
                                YLeaf daps_waiting_clients; //type: uint32
                                YLeaf msg_waiting_clients; //type: uint32
                                YLeaf iedge_waiting_clients; //type: uint32
                                YLeaf rib_waiting_clients; //type: uint32
                                YLeaf bound_clients; //type: uint32



                        }; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana> iana;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd> iapd;


                    }; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients> clients;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary> summary;


                }; // Dhcpv6::Nodes::Node::Proxy::Binding


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding> binding;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles> profiles;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics> statistics;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs> vrfs;


            }; // Dhcpv6::Nodes::Node::Proxy


            class Server : public Entity
            {
                public:
                    Server();
                    ~Server();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Binding : public Entity
                {
                    public:
                        Binding();
                        ~Binding();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Summary : public Entity
                    {
                        public:
                            Summary();
                            ~Summary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf clients; //type: uint32

                        class Iana : public Entity
                        {
                            public:
                                Iana();
                                ~Iana();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initializing_clients; //type: uint32
                                YLeaf dpm_waiting_clients; //type: uint32
                                YLeaf daps_waiting_clients; //type: uint32
                                YLeaf request_waiting_clients; //type: uint32
                                YLeaf iedge_waiting_clients; //type: uint32
                                YLeaf rib_waiting_clients; //type: uint32
                                YLeaf bound_clients; //type: uint32



                        }; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana


                        class Iapd : public Entity
                        {
                            public:
                                Iapd();
                                ~Iapd();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf initializing_clients; //type: uint32
                                YLeaf dpm_waiting_clients; //type: uint32
                                YLeaf daps_waiting_clients; //type: uint32
                                YLeaf request_waiting_clients; //type: uint32
                                YLeaf iedge_waiting_clients; //type: uint32
                                YLeaf rib_waiting_clients; //type: uint32
                                YLeaf bound_clients; //type: uint32



                        }; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana> iana;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd> iapd;


                    }; // Dhcpv6::Nodes::Node::Server::Binding::Summary


                    class Clients : public Entity
                    {
                        public:
                            Clients();
                            ~Clients();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Client : public Entity
                        {
                            public:
                                Client();
                                ~Client();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf client_id; //type: string
                                YLeaf duid; //type: string
                                YLeaf client_id_xr; //type: uint32
                                YLeaf client_flag; //type: uint32
                                YLeaf subscriber_label; //type: uint32
                                YLeaf vrf_name; //type: string
                                YLeaf mac_address; //type: string
                                YLeaf ia_id_p_ds; //type: uint32
                                YLeaf link_local_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf access_vrf_name; //type: string
                                YLeaf server_binding_tags; //type: uint8
                                YLeaf server_binding_outer_tag; //type: uint32
                                YLeaf server_binding_inner_tag; //type: uint32
                                YLeaf pool_name; //type: string
                                YLeaf profile_name; //type: string
                                YLeaf framed_ipv6_prefix; //type: string
                                YLeaf framed_prefix_length; //type: uint8
                                YLeaf class_name; //type: string
                                YLeaf rx_remote_id; //type: string
                                YLeaf rx_interface_id; //type: string
                                YLeaf prefix_pool_name; //type: string
                                YLeaf address_pool_name; //type: string
                                YLeaf dns_server_count; //type: uint32
                                YLeaf is_nak_next_renew; //type: boolean
                                YLeaf srg_state; //type: uint32
                                YLeaf srg_intf_role; //type: uint32
                                YLeaf srgp2p; //type: boolean
                                YLeaf srg_vrf_name; //type: string

                            class IaIdPd : public Entity
                            {
                                public:
                                    IaIdPd();
                                    ~IaIdPd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class BagDhcpv6DIaIdPdInfo : public Entity
                                {
                                    public:
                                        BagDhcpv6DIaIdPdInfo();
                                        ~BagDhcpv6DIaIdPdInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf ia_type; //type: BagDhcpv6DIaIdEnum
                                        YLeaf ia_id; //type: uint32
                                        YLeaf flags; //type: uint32
                                        YLeaf total_address; //type: uint16
                                        YLeaf state; //type: BagDhcpv6DFsmStateEnum

                                    class Addresses : public Entity
                                    {
                                        public:
                                            Addresses();
                                            ~Addresses();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class BagDhcpv6DAddrAttrb : public Entity
                                        {
                                            public:
                                                BagDhcpv6DAddrAttrb();
                                                ~BagDhcpv6DAddrAttrb();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf prefix; //type: string
                                                YLeaf prefix_length; //type: uint8
                                                YLeaf lease_time; //type: uint32
                                                YLeaf remaining_lease_time; //type: uint32



                                        }; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb> > bag_dhcpv6d_addr_attrb;


                                    }; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses> addresses;


                                }; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo> > bag_dhcpv6d_ia_id_pd_info;


                            }; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd> ia_id_pd;


                        }; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client> > client;


                    }; // Dhcpv6::Nodes::Node::Server::Binding::Clients


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients> clients;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary> summary;


                }; // Dhcpv6::Nodes::Node::Server::Binding


                class Vrfs : public Entity
                {
                    public:
                        Vrfs();
                        ~Vrfs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Vrf : public Entity
                    {
                        public:
                            Vrf();
                            ~Vrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics : public Entity
                        {
                            public:
                                Statistics();
                                ~Statistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Solicit : public Entity
                            {
                                public:
                                    Solicit();
                                    ~Solicit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit


                            class Advertise : public Entity
                            {
                                public:
                                    Advertise();
                                    ~Advertise();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise


                            class Request : public Entity
                            {
                                public:
                                    Request();
                                    ~Request();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request


                            class Reply : public Entity
                            {
                                public:
                                    Reply();
                                    ~Reply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply


                            class Confirm : public Entity
                            {
                                public:
                                    Confirm();
                                    ~Confirm();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm


                            class Decline : public Entity
                            {
                                public:
                                    Decline();
                                    ~Decline();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline


                            class Renew : public Entity
                            {
                                public:
                                    Renew();
                                    ~Renew();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew


                            class Rebind : public Entity
                            {
                                public:
                                    Rebind();
                                    ~Rebind();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind


                            class Release : public Entity
                            {
                                public:
                                    Release();
                                    ~Release();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release


                            class Reconfig : public Entity
                            {
                                public:
                                    Reconfig();
                                    ~Reconfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig


                            class Inform : public Entity
                            {
                                public:
                                    Inform();
                                    ~Inform();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform


                            class RelayForward : public Entity
                            {
                                public:
                                    RelayForward();
                                    ~RelayForward();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward


                            class RelayReply : public Entity
                            {
                                public:
                                    RelayReply();
                                    ~RelayReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply


                            class LeaseQuery : public Entity
                            {
                                public:
                                    LeaseQuery();
                                    ~LeaseQuery();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery


                            class LeaseQueryReply : public Entity
                            {
                                public:
                                    LeaseQueryReply();
                                    ~LeaseQueryReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply


                            class LeaseQueryDone : public Entity
                            {
                                public:
                                    LeaseQueryDone();
                                    ~LeaseQueryDone();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone


                            class LeaseQueryData : public Entity
                            {
                                public:
                                    LeaseQueryData();
                                    ~LeaseQueryData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise> advertise;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm> confirm;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline> decline;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform> inform;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind> rebind;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig> reconfig;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release> release;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew> renew;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply> reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request> request;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit> solicit;


                        }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics> statistics;


                    }; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf> > vrf;


                }; // Dhcpv6::Nodes::Node::Server::Vrfs


                class Profiles : public Entity
                {
                    public:
                        Profiles();
                        ~Profiles();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Profile : public Entity
                    {
                        public:
                            Profile();
                            ~Profile();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf profile_name; //type: string

                        class Info : public Entity
                        {
                            public:
                                Info();
                                ~Info();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf profile_name; //type: string
                                YLeaf domain_name; //type: string
                                YLeaf profile_dns; //type: uint8
                                YLeaf aftr_name; //type: string
                                YLeaf framed_addr_pool_name; //type: string
                                YLeaf delegated_prefix_pool_name; //type: string
                                YLeaf rapid_commit; //type: boolean
                                YLeafList profile_dns_address; //type: list of  string

                            class Lease : public Entity
                            {
                                public:
                                    Lease();
                                    ~Lease();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf seconds; //type: uint32
                                    YLeaf time; //type: string



                            }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease


                            class InterfaceReferences : public Entity
                            {
                                public:
                                    InterfaceReferences();
                                    ~InterfaceReferences();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Ipv6Dhcpv6DServerInterfaceReference : public Entity
                                {
                                    public:
                                        Ipv6Dhcpv6DServerInterfaceReference();
                                        ~Ipv6Dhcpv6DServerInterfaceReference();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf server_reference_interface_name; //type: string



                                }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference> > ipv6_dhcpv6d_server_interface_reference;


                            }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences> interface_references;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease> lease;


                        }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info


                        class ThrottleInfos : public Entity
                        {
                            public:
                                ThrottleInfos();
                                ~ThrottleInfos();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class ThrottleInfo : public Entity
                            {
                                public:
                                    ThrottleInfo();
                                    ~ThrottleInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mac_address; //type: string
                                    YLeaf binding_chaddr; //type: string
                                    YLeaf ifname; //type: string
                                    YLeaf state; //type: uint32
                                    YLeaf time_left; //type: uint32



                            }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo> > throttle_info;


                        }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info> info;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos> throttle_infos;


                    }; // Dhcpv6::Nodes::Node::Server::Profiles::Profile


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile> > profile;


                }; // Dhcpv6::Nodes::Node::Server::Profiles


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ipv6Dhcpv6DServerStat : public Entity
                    {
                        public:
                            Ipv6Dhcpv6DServerStat();
                            ~Ipv6Dhcpv6DServerStat();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics_ : public Entity
                        {
                            public:
                                Statistics_();
                                ~Statistics_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf received_packets; //type: uint64
                                YLeaf transmitted_packets; //type: uint64
                                YLeaf dropped_packets; //type: uint64



                        }; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_> statistics;


                    }; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat> > ipv6_dhcpv6d_server_stat;


                }; // Dhcpv6::Nodes::Node::Server::Statistics


                class BindingOptions : public Entity
                {
                    public:
                        BindingOptions();
                        ~BindingOptions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class MacBindOptions : public Entity
                    {
                        public:
                            MacBindOptions();
                            ~MacBindOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class MacBindOption : public Entity
                        {
                            public:
                                MacBindOption();
                                ~MacBindOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mac_address; //type: string
                                YLeaf mac_address_xr; //type: string
                                YLeaf duid_xr; //type: string
                                YLeaf dns_count; //type: uint8
                                YLeaf opt17; //type: string
                                YLeafList dns_address; //type: list of  string



                        }; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption> > mac_bind_option;


                    }; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions


                    class DuidBindOptions : public Entity
                    {
                        public:
                            DuidBindOptions();
                            ~DuidBindOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class DuidBindOption : public Entity
                        {
                            public:
                                DuidBindOption();
                                ~DuidBindOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf duid; //type: string
                                YLeaf mac_address_xr; //type: string
                                YLeaf duid_xr; //type: string
                                YLeaf dns_count; //type: uint8
                                YLeaf opt17; //type: string
                                YLeafList dns_address; //type: list of  string



                        }; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption> > duid_bind_option;


                    }; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions> duid_bind_options;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions> mac_bind_options;


                }; // Dhcpv6::Nodes::Node::Server::BindingOptions


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding> binding;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions> binding_options;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles> profiles;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics> statistics;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs> vrfs;


            }; // Dhcpv6::Nodes::Node::Server


            class Relay : public Entity
            {
                public:
                    Relay();
                    ~Relay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ipv6Dhcpv6DRelayStat : public Entity
                    {
                        public:
                            Ipv6Dhcpv6DRelayStat();
                            ~Ipv6Dhcpv6DRelayStat();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics_ : public Entity
                        {
                            public:
                                Statistics_();
                                ~Statistics_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf received_packets; //type: uint64
                                YLeaf transmitted_packets; //type: uint64
                                YLeaf dropped_packets; //type: uint64



                        }; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_> statistics;


                    }; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat> > ipv6_dhcpv6d_relay_stat;


                }; // Dhcpv6::Nodes::Node::Relay::Statistics


                class Binding : public Entity
                {
                    public:
                        Binding();
                        ~Binding();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Summary : public Entity
                    {
                        public:
                            Summary();
                            ~Summary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf clients; //type: uint32



                    }; // Dhcpv6::Nodes::Node::Relay::Binding::Summary


                    class Clients : public Entity
                    {
                        public:
                            Clients();
                            ~Clients();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Client : public Entity
                        {
                            public:
                                Client();
                                ~Client();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf client_id; //type: string
                                YLeaf duid; //type: string
                                YLeaf client_id_xr; //type: uint32
                                YLeaf prefix_length; //type: uint8
                                YLeaf prefix; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf lifetime; //type: uint32
                                YLeaf rem_life_time; //type: uint32
                                YLeaf interface_name; //type: string
                                YLeaf next_hop_addr; //type: string
                                YLeaf ia_id; //type: uint32
                                YLeaf relay_profile_name; //type: string



                        }; // Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client> > client;


                    }; // Dhcpv6::Nodes::Node::Relay::Binding::Clients


                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Clients> clients;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Summary> summary;


                }; // Dhcpv6::Nodes::Node::Relay::Binding


                class Vrfs : public Entity
                {
                    public:
                        Vrfs();
                        ~Vrfs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Vrf : public Entity
                    {
                        public:
                            Vrf();
                            ~Vrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vrf_name; //type: string

                        class Statistics : public Entity
                        {
                            public:
                                Statistics();
                                ~Statistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Solicit : public Entity
                            {
                                public:
                                    Solicit();
                                    ~Solicit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit


                            class Advertise : public Entity
                            {
                                public:
                                    Advertise();
                                    ~Advertise();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise


                            class Request : public Entity
                            {
                                public:
                                    Request();
                                    ~Request();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request


                            class Reply : public Entity
                            {
                                public:
                                    Reply();
                                    ~Reply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply


                            class Confirm : public Entity
                            {
                                public:
                                    Confirm();
                                    ~Confirm();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm


                            class Decline : public Entity
                            {
                                public:
                                    Decline();
                                    ~Decline();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline


                            class Renew : public Entity
                            {
                                public:
                                    Renew();
                                    ~Renew();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew


                            class Rebind : public Entity
                            {
                                public:
                                    Rebind();
                                    ~Rebind();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind


                            class Release : public Entity
                            {
                                public:
                                    Release();
                                    ~Release();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release


                            class Reconfig : public Entity
                            {
                                public:
                                    Reconfig();
                                    ~Reconfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig


                            class Inform : public Entity
                            {
                                public:
                                    Inform();
                                    ~Inform();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform


                            class RelayForward : public Entity
                            {
                                public:
                                    RelayForward();
                                    ~RelayForward();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward


                            class RelayReply : public Entity
                            {
                                public:
                                    RelayReply();
                                    ~RelayReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply


                            class LeaseQuery : public Entity
                            {
                                public:
                                    LeaseQuery();
                                    ~LeaseQuery();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery


                            class LeaseQueryReply : public Entity
                            {
                                public:
                                    LeaseQueryReply();
                                    ~LeaseQueryReply();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply


                            class LeaseQueryDone : public Entity
                            {
                                public:
                                    LeaseQueryDone();
                                    ~LeaseQueryDone();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone


                            class LeaseQueryData : public Entity
                            {
                                public:
                                    LeaseQueryData();
                                    ~LeaseQueryData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf received_packets; //type: uint64
                                    YLeaf transmitted_packets; //type: uint64
                                    YLeaf dropped_packets; //type: uint64



                            }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData


                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise> advertise;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm> confirm;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline> decline;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform> inform;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind> rebind;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig> reconfig;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release> release;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew> renew;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply> reply;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request> request;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit> solicit;


                        }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics


                            std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics> statistics;


                    }; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf> > vrf;


                }; // Dhcpv6::Nodes::Node::Relay::Vrfs


                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding> binding;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics> statistics;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs> vrfs;


            }; // Dhcpv6::Nodes::Node::Relay


                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy> proxy;
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay> relay;
                std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server> server;


        }; // Dhcpv6::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node> > node;


    }; // Dhcpv6::Nodes


        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Database> database;
        std::unique_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes> nodes;


}; // Dhcpv6


class BagDhcpv6DIaIdEnum : public Enum
{
    public:
        static const Enum::YLeaf iana;
        static const Enum::YLeaf iapd;
        static const Enum::YLeaf iata;

};

class BagDhcpv6DFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf server_initializing;
        static const Enum::YLeaf server_waiting_dpm;
        static const Enum::YLeaf server_waiting_daps;
        static const Enum::YLeaf server_waiting_client;
        static const Enum::YLeaf server_waiting_subscriber;
        static const Enum::YLeaf server_waiting_rib;
        static const Enum::YLeaf server_bound_client;
        static const Enum::YLeaf proxy_initializing;
        static const Enum::YLeaf proxy_waiting_dpm;
        static const Enum::YLeaf proxy_waiting_daps;
        static const Enum::YLeaf proxy_waiting_client_server;
        static const Enum::YLeaf proxy_waiting_subscriber;
        static const Enum::YLeaf proxy_waiting_rib;
        static const Enum::YLeaf proxy_bound_client;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_ */

