#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_oper {

class PerfMgmt : public Entity
{
    public:
        PerfMgmt();
        ~PerfMgmt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Periodic : public Entity
    {
        public:
            Periodic();
            ~Periodic();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Ospf : public Entity
        {
            public:
                Ospf();
                ~Ospf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Ospfv2ProtocolInstances : public Entity
            {
                public:
                    Ospfv2ProtocolInstances();
                    ~Ospfv2ProtocolInstances();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv2ProtocolInstance : public Entity
                {
                    public:
                        Ospfv2ProtocolInstance();
                        ~Ospfv2ProtocolInstance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value instance_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_packets; //type: uint32
                                Value output_packets; //type: uint32
                                Value input_hello_packets; //type: uint32
                                Value output_hello_packets; //type: uint32
                                Value input_db_ds; //type: uint32
                                Value input_db_ds_lsa; //type: uint32
                                Value output_db_ds; //type: uint32
                                Value output_db_ds_lsa; //type: uint32
                                Value input_ls_requests; //type: uint32
                                Value input_ls_requests_lsa; //type: uint32
                                Value output_ls_requests; //type: uint32
                                Value output_ls_requests_lsa; //type: uint32
                                Value input_lsa_updates; //type: uint32
                                Value input_lsa_updates_lsa; //type: uint32
                                Value output_lsa_updates; //type: uint32
                                Value output_lsa_updates_lsa; //type: uint32
                                Value input_lsa_acks; //type: uint32
                                Value input_lsa_acks_lsa; //type: uint32
                                Value output_lsa_acks; //type: uint32
                                Value output_lsa_acks_lsa; //type: uint32
                                Value checksum_errors; //type: uint32




                        }; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples> samples;


                }; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance> > ospfv2_protocol_instance;


            }; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances


            class Ospfv3ProtocolInstances : public Entity
            {
                public:
                    Ospfv3ProtocolInstances();
                    ~Ospfv3ProtocolInstances();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv3ProtocolInstance : public Entity
                {
                    public:
                        Ospfv3ProtocolInstance();
                        ~Ospfv3ProtocolInstance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value instance_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_packets; //type: uint32
                                Value output_packets; //type: uint32
                                Value input_hello_packets; //type: uint32
                                Value output_hello_packets; //type: uint32
                                Value input_db_ds; //type: uint32
                                Value input_db_ds_lsa; //type: uint32
                                Value output_db_ds; //type: uint32
                                Value output_db_ds_lsa; //type: uint32
                                Value input_ls_requests; //type: uint32
                                Value input_ls_requests_lsa; //type: uint32
                                Value output_ls_requests; //type: uint32
                                Value output_ls_requests_lsa; //type: uint32
                                Value input_lsa_updates; //type: uint32
                                Value input_lsa_updates_lsa; //type: uint32
                                Value output_lsa_updates; //type: uint32
                                Value output_lsa_updates_lsa; //type: uint32
                                Value input_lsa_acks; //type: uint32
                                Value input_lsa_acks_lsa; //type: uint32
                                Value output_lsa_acks; //type: uint32
                                Value output_lsa_acks_lsa; //type: uint32




                        }; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples> samples;


                }; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance> > ospfv3_protocol_instance;


            }; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances> ospfv2_protocol_instances;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances> ospfv3_protocol_instances;


        }; // PerfMgmt::Periodic::Ospf


        class Mpls : public Entity
        {
            public:
                Mpls();
                ~Mpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LdpNeighbors : public Entity
            {
                public:
                    LdpNeighbors();
                    ~LdpNeighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LdpNeighbor : public Entity
                {
                    public:
                        LdpNeighbor();
                        ~LdpNeighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value nbr; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value total_msgs_sent; //type: uint16
                                Value total_msgs_rcvd; //type: uint16
                                Value init_msgs_sent; //type: uint16
                                Value init_msgs_rcvd; //type: uint16
                                Value address_msgs_sent; //type: uint16
                                Value address_msgs_rcvd; //type: uint16
                                Value address_withdraw_msgs_sent; //type: uint16
                                Value address_withdraw_msgs_rcvd; //type: uint16
                                Value label_mapping_msgs_sent; //type: uint16
                                Value label_mapping_msgs_rcvd; //type: uint16
                                Value label_withdraw_msgs_sent; //type: uint16
                                Value label_withdraw_msgs_rcvd; //type: uint16
                                Value label_release_msgs_sent; //type: uint16
                                Value label_release_msgs_rcvd; //type: uint16
                                Value notification_msgs_sent; //type: uint16
                                Value notification_msgs_rcvd; //type: uint16
                                Value keepalive_msgs_sent; //type: uint16
                                Value keepalive_msgs_rcvd; //type: uint16




                        }; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples> samples;


                }; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor> > ldp_neighbor;


            }; // PerfMgmt::Periodic::Mpls::LdpNeighbors


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors> ldp_neighbors;


        }; // PerfMgmt::Periodic::Mpls


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
                    Value node_id; //type: string


                class SampleXr : public Entity
                {
                    public:
                        SampleXr();
                        ~SampleXr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Sample : public Entity
                    {
                        public:
                            Sample();
                            ~Sample();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sample_id; //type: int32
                            Value time_stamp; //type: uint64
                            Value no_processes; //type: uint32
                            Value average_cpu_used; //type: uint32




                    }; // PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample> > sample;


                }; // PerfMgmt::Periodic::Nodes::Node::SampleXr


                class Processes : public Entity
                {
                    public:
                        Processes();
                        ~Processes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Process : public Entity
                    {
                        public:
                            Process();
                            ~Process();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value process_id; //type: int32


                        class Samples : public Entity
                        {
                            public:
                                Samples();
                                ~Samples();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Sample : public Entity
                            {
                                public:
                                    Sample();
                                    ~Sample();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sample_id; //type: int32
                                    Value time_stamp; //type: uint64
                                    Value peak_memory; //type: uint32
                                    Value average_cpu_used; //type: uint32
                                    Value no_threads; //type: uint32




                            }; // PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample


                                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample> > sample;


                        }; // PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples


                            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples> samples;


                    }; // PerfMgmt::Periodic::Nodes::Node::Processes::Process


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process> > process;


                }; // PerfMgmt::Periodic::Nodes::Node::Processes


                class Samples : public Entity
                {
                    public:
                        Samples();
                        ~Samples();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Sample : public Entity
                    {
                        public:
                            Sample();
                            ~Sample();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sample_id; //type: int32
                            Value time_stamp; //type: uint64
                            Value curr_memory; //type: uint32
                            Value peak_memory; //type: uint32




                    }; // PerfMgmt::Periodic::Nodes::Node::Samples::Sample


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Samples::Sample> > sample;


                }; // PerfMgmt::Periodic::Nodes::Node::Samples


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes> processes;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::SampleXr> sample_xr;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Samples> samples;


            }; // PerfMgmt::Periodic::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node> > node;


        }; // PerfMgmt::Periodic::Nodes


        class Bgp : public Entity
        {
            public:
                Bgp();
                ~Bgp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BgpNeighbors : public Entity
            {
                public:
                    BgpNeighbors();
                    ~BgpNeighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BgpNeighbor : public Entity
                {
                    public:
                        BgpNeighbor();
                        ~BgpNeighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ip_address; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_messages; //type: uint32
                                Value output_messages; //type: uint32
                                Value input_update_messages; //type: uint32
                                Value output_update_messages; //type: uint32
                                Value conn_established; //type: uint32
                                Value conn_dropped; //type: uint32
                                Value errors_received; //type: uint32
                                Value errors_sent; //type: uint32




                        }; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples> samples;


                }; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor> > bgp_neighbor;


            }; // PerfMgmt::Periodic::Bgp::BgpNeighbors


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors> bgp_neighbors;


        }; // PerfMgmt::Periodic::Bgp


        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class GenericCounterInterfaces : public Entity
            {
                public:
                    GenericCounterInterfaces();
                    ~GenericCounterInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class GenericCounterInterface : public Entity
                {
                    public:
                        GenericCounterInterface();
                        ~GenericCounterInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value in_packets; //type: uint64
                                Value in_octets; //type: uint64
                                Value out_packets; //type: uint64
                                Value out_octets; //type: uint64
                                Value in_ucast_pkts; //type: uint64
                                Value in_multicast_pkts; //type: uint64
                                Value in_broadcast_pkts; //type: uint64
                                Value out_ucast_pkts; //type: uint64
                                Value out_multicast_pkts; //type: uint64
                                Value out_broadcast_pkts; //type: uint64
                                Value output_total_drops; //type: uint32
                                Value input_total_drops; //type: uint32
                                Value input_queue_drops; //type: uint32
                                Value input_unknown_proto; //type: uint32
                                Value output_total_errors; //type: uint32
                                Value output_underrun; //type: uint32
                                Value input_total_errors; //type: uint32
                                Value input_crc; //type: uint32
                                Value input_overrun; //type: uint32
                                Value input_frame; //type: uint32




                        }; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples> samples;


                }; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface> > generic_counter_interface;


            }; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces


            class BasicCounterInterfaces : public Entity
            {
                public:
                    BasicCounterInterfaces();
                    ~BasicCounterInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BasicCounterInterface : public Entity
                {
                    public:
                        BasicCounterInterface();
                        ~BasicCounterInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value in_packets; //type: uint64
                                Value in_octets; //type: uint64
                                Value out_packets; //type: uint64
                                Value out_octets; //type: uint64
                                Value input_total_drops; //type: uint64
                                Value input_queue_drops; //type: uint64
                                Value input_total_errors; //type: uint64
                                Value output_total_drops; //type: uint64
                                Value output_queue_drops; //type: uint64
                                Value output_total_errors; //type: uint64




                        }; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples> samples;


                }; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface> > basic_counter_interface;


            }; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces


            class DataRateInterfaces : public Entity
            {
                public:
                    DataRateInterfaces();
                    ~DataRateInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DataRateInterface : public Entity
                {
                    public:
                        DataRateInterface();
                        ~DataRateInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_data_rate; //type: uint32
                                Value input_packet_rate; //type: uint32
                                Value output_data_rate; //type: uint32
                                Value output_packet_rate; //type: uint32
                                Value input_peak_rate; //type: uint32
                                Value input_peak_pkts; //type: uint32
                                Value output_peak_rate; //type: uint32
                                Value output_peak_pkts; //type: uint32
                                Value bandwidth; //type: uint32




                        }; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples> samples;


                }; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface> > data_rate_interface;


            }; // PerfMgmt::Periodic::Interface::DataRateInterfaces


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces> basic_counter_interfaces;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces> data_rate_interfaces;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces> generic_counter_interfaces;


        }; // PerfMgmt::Periodic::Interface


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp> bgp;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface> interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls> mpls;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes> nodes;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf> ospf;


    }; // PerfMgmt::Periodic


    class Monitor : public Entity
    {
        public:
            Monitor();
            ~Monitor();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Ospf : public Entity
        {
            public:
                Ospf();
                ~Ospf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Ospfv2ProtocolInstances : public Entity
            {
                public:
                    Ospfv2ProtocolInstances();
                    ~Ospfv2ProtocolInstances();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv2ProtocolInstance : public Entity
                {
                    public:
                        Ospfv2ProtocolInstance();
                        ~Ospfv2ProtocolInstance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value instance_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_packets; //type: uint32
                                Value output_packets; //type: uint32
                                Value input_hello_packets; //type: uint32
                                Value output_hello_packets; //type: uint32
                                Value input_db_ds; //type: uint32
                                Value input_db_ds_lsa; //type: uint32
                                Value output_db_ds; //type: uint32
                                Value output_db_ds_lsa; //type: uint32
                                Value input_ls_requests; //type: uint32
                                Value input_ls_requests_lsa; //type: uint32
                                Value output_ls_requests; //type: uint32
                                Value output_ls_requests_lsa; //type: uint32
                                Value input_lsa_updates; //type: uint32
                                Value input_lsa_updates_lsa; //type: uint32
                                Value output_lsa_updates; //type: uint32
                                Value output_lsa_updates_lsa; //type: uint32
                                Value input_lsa_acks; //type: uint32
                                Value input_lsa_acks_lsa; //type: uint32
                                Value output_lsa_acks; //type: uint32
                                Value output_lsa_acks_lsa; //type: uint32
                                Value checksum_errors; //type: uint32




                        }; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples> samples;


                }; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance> > ospfv2_protocol_instance;


            }; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances


            class Ospfv3ProtocolInstances : public Entity
            {
                public:
                    Ospfv3ProtocolInstances();
                    ~Ospfv3ProtocolInstances();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv3ProtocolInstance : public Entity
                {
                    public:
                        Ospfv3ProtocolInstance();
                        ~Ospfv3ProtocolInstance();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value instance_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_packets; //type: uint32
                                Value output_packets; //type: uint32
                                Value input_hello_packets; //type: uint32
                                Value output_hello_packets; //type: uint32
                                Value input_db_ds; //type: uint32
                                Value input_db_ds_lsa; //type: uint32
                                Value output_db_ds; //type: uint32
                                Value output_db_ds_lsa; //type: uint32
                                Value input_ls_requests; //type: uint32
                                Value input_ls_requests_lsa; //type: uint32
                                Value output_ls_requests; //type: uint32
                                Value output_ls_requests_lsa; //type: uint32
                                Value input_lsa_updates; //type: uint32
                                Value input_lsa_updates_lsa; //type: uint32
                                Value output_lsa_updates; //type: uint32
                                Value output_lsa_updates_lsa; //type: uint32
                                Value input_lsa_acks; //type: uint32
                                Value input_lsa_acks_lsa; //type: uint32
                                Value output_lsa_acks; //type: uint32
                                Value output_lsa_acks_lsa; //type: uint32




                        }; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples> samples;


                }; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance> > ospfv3_protocol_instance;


            }; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances> ospfv2_protocol_instances;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances> ospfv3_protocol_instances;


        }; // PerfMgmt::Monitor::Ospf


        class Mpls : public Entity
        {
            public:
                Mpls();
                ~Mpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LdpNeighbors : public Entity
            {
                public:
                    LdpNeighbors();
                    ~LdpNeighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LdpNeighbor : public Entity
                {
                    public:
                        LdpNeighbor();
                        ~LdpNeighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value nbr; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value total_msgs_sent; //type: uint16
                                Value total_msgs_rcvd; //type: uint16
                                Value init_msgs_sent; //type: uint16
                                Value init_msgs_rcvd; //type: uint16
                                Value address_msgs_sent; //type: uint16
                                Value address_msgs_rcvd; //type: uint16
                                Value address_withdraw_msgs_sent; //type: uint16
                                Value address_withdraw_msgs_rcvd; //type: uint16
                                Value label_mapping_msgs_sent; //type: uint16
                                Value label_mapping_msgs_rcvd; //type: uint16
                                Value label_withdraw_msgs_sent; //type: uint16
                                Value label_withdraw_msgs_rcvd; //type: uint16
                                Value label_release_msgs_sent; //type: uint16
                                Value label_release_msgs_rcvd; //type: uint16
                                Value notification_msgs_sent; //type: uint16
                                Value notification_msgs_rcvd; //type: uint16
                                Value keepalive_msgs_sent; //type: uint16
                                Value keepalive_msgs_rcvd; //type: uint16




                        }; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples> samples;


                }; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor> > ldp_neighbor;


            }; // PerfMgmt::Monitor::Mpls::LdpNeighbors


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors> ldp_neighbors;


        }; // PerfMgmt::Monitor::Mpls


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
                    Value node_id; //type: string


                class SampleXr : public Entity
                {
                    public:
                        SampleXr();
                        ~SampleXr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Sample : public Entity
                    {
                        public:
                            Sample();
                            ~Sample();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sample_id; //type: int32
                            Value time_stamp; //type: uint64
                            Value no_processes; //type: uint32
                            Value average_cpu_used; //type: uint32




                    }; // PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample> > sample;


                }; // PerfMgmt::Monitor::Nodes::Node::SampleXr


                class Processes : public Entity
                {
                    public:
                        Processes();
                        ~Processes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Process : public Entity
                    {
                        public:
                            Process();
                            ~Process();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value process_id; //type: int32


                        class Samples : public Entity
                        {
                            public:
                                Samples();
                                ~Samples();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Sample : public Entity
                            {
                                public:
                                    Sample();
                                    ~Sample();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sample_id; //type: int32
                                    Value time_stamp; //type: uint64
                                    Value peak_memory; //type: uint32
                                    Value average_cpu_used; //type: uint32
                                    Value no_threads; //type: uint32




                            }; // PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample


                                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample> > sample;


                        }; // PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples


                            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples> samples;


                    }; // PerfMgmt::Monitor::Nodes::Node::Processes::Process


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process> > process;


                }; // PerfMgmt::Monitor::Nodes::Node::Processes


                class Samples : public Entity
                {
                    public:
                        Samples();
                        ~Samples();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Sample : public Entity
                    {
                        public:
                            Sample();
                            ~Sample();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sample_id; //type: int32
                            Value time_stamp; //type: uint64
                            Value curr_memory; //type: uint32
                            Value peak_memory; //type: uint32




                    }; // PerfMgmt::Monitor::Nodes::Node::Samples::Sample


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Samples::Sample> > sample;


                }; // PerfMgmt::Monitor::Nodes::Node::Samples


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes> processes;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::SampleXr> sample_xr;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Samples> samples;


            }; // PerfMgmt::Monitor::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node> > node;


        }; // PerfMgmt::Monitor::Nodes


        class Bgp : public Entity
        {
            public:
                Bgp();
                ~Bgp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BgpNeighbors : public Entity
            {
                public:
                    BgpNeighbors();
                    ~BgpNeighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BgpNeighbor : public Entity
                {
                    public:
                        BgpNeighbor();
                        ~BgpNeighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ip_address; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_messages; //type: uint32
                                Value output_messages; //type: uint32
                                Value input_update_messages; //type: uint32
                                Value output_update_messages; //type: uint32
                                Value conn_established; //type: uint32
                                Value conn_dropped; //type: uint32
                                Value errors_received; //type: uint32
                                Value errors_sent; //type: uint32




                        }; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples> samples;


                }; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor> > bgp_neighbor;


            }; // PerfMgmt::Monitor::Bgp::BgpNeighbors


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors> bgp_neighbors;


        }; // PerfMgmt::Monitor::Bgp


        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class GenericCounterInterfaces : public Entity
            {
                public:
                    GenericCounterInterfaces();
                    ~GenericCounterInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class GenericCounterInterface : public Entity
                {
                    public:
                        GenericCounterInterface();
                        ~GenericCounterInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value in_packets; //type: uint64
                                Value in_octets; //type: uint64
                                Value out_packets; //type: uint64
                                Value out_octets; //type: uint64
                                Value in_ucast_pkts; //type: uint64
                                Value in_multicast_pkts; //type: uint64
                                Value in_broadcast_pkts; //type: uint64
                                Value out_ucast_pkts; //type: uint64
                                Value out_multicast_pkts; //type: uint64
                                Value out_broadcast_pkts; //type: uint64
                                Value output_total_drops; //type: uint32
                                Value input_total_drops; //type: uint32
                                Value input_queue_drops; //type: uint32
                                Value input_unknown_proto; //type: uint32
                                Value output_total_errors; //type: uint32
                                Value output_underrun; //type: uint32
                                Value input_total_errors; //type: uint32
                                Value input_crc; //type: uint32
                                Value input_overrun; //type: uint32
                                Value input_frame; //type: uint32




                        }; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples> samples;


                }; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface> > generic_counter_interface;


            }; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces


            class BasicCounterInterfaces : public Entity
            {
                public:
                    BasicCounterInterfaces();
                    ~BasicCounterInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BasicCounterInterface : public Entity
                {
                    public:
                        BasicCounterInterface();
                        ~BasicCounterInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value in_packets; //type: uint64
                                Value in_octets; //type: uint64
                                Value out_packets; //type: uint64
                                Value out_octets; //type: uint64
                                Value input_total_drops; //type: uint64
                                Value input_queue_drops; //type: uint64
                                Value input_total_errors; //type: uint64
                                Value output_total_drops; //type: uint64
                                Value output_queue_drops; //type: uint64
                                Value output_total_errors; //type: uint64




                        }; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples> samples;


                }; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface> > basic_counter_interface;


            }; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces


            class DataRateInterfaces : public Entity
            {
                public:
                    DataRateInterfaces();
                    ~DataRateInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DataRateInterface : public Entity
                {
                    public:
                        DataRateInterface();
                        ~DataRateInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Samples : public Entity
                    {
                        public:
                            Samples();
                            ~Samples();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Sample : public Entity
                        {
                            public:
                                Sample();
                                ~Sample();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sample_id; //type: int32
                                Value time_stamp; //type: uint64
                                Value input_data_rate; //type: uint32
                                Value input_packet_rate; //type: uint32
                                Value output_data_rate; //type: uint32
                                Value output_packet_rate; //type: uint32
                                Value input_peak_rate; //type: uint32
                                Value input_peak_pkts; //type: uint32
                                Value output_peak_rate; //type: uint32
                                Value output_peak_pkts; //type: uint32
                                Value bandwidth; //type: uint32




                        }; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample> > sample;


                    }; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples> samples;


                }; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface> > data_rate_interface;


            }; // PerfMgmt::Monitor::Interface::DataRateInterfaces


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces> basic_counter_interfaces;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces> data_rate_interfaces;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces> generic_counter_interfaces;


        }; // PerfMgmt::Monitor::Interface


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp> bgp;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface> interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls> mpls;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes> nodes;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf> ospf;


    }; // PerfMgmt::Monitor


        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor> monitor;
        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic> periodic;


}; // PerfMgmt



}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_ */

