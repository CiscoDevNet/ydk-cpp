#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

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


    class Resources : public Entity
    {
        public:
            Resources();
            ~Resources();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TftpResources : public Entity
        {
            public:
                TftpResources();
                ~TftpResources();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value server_address; //type: string
                Value directory; //type: string
                Value vrf_name; //type: string




        }; // PerfMgmt::Resources::TftpResources


        class DumpLocal : public Entity
        {
            public:
                DumpLocal();
                ~DumpLocal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // PerfMgmt::Resources::DumpLocal


        class MemoryResources : public Entity
        {
            public:
                MemoryResources();
                ~MemoryResources();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value max_limit; //type: int32
                Value min_reserved; //type: int32




        }; // PerfMgmt::Resources::MemoryResources


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::DumpLocal> dump_local;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::MemoryResources> memory_resources;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::TftpResources> tftp_resources; // presence node


    }; // PerfMgmt::Resources


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


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::GenericCounterInterface::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates> templates;


        }; // PerfMgmt::Statistics::GenericCounterInterface


        class ProcessNode : public Entity
        {
            public:
                ProcessNode();
                ~ProcessNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::ProcessNode::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::ProcessNode::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates> templates;


        }; // PerfMgmt::Statistics::ProcessNode


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


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::BasicCounterInterface::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates> templates;


        }; // PerfMgmt::Statistics::BasicCounterInterface


        class Ospfv3Protocol : public Entity
        {
            public:
                Ospfv3Protocol();
                ~Ospfv3Protocol();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::Ospfv3Protocol::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates> templates;


        }; // PerfMgmt::Statistics::Ospfv3Protocol


        class CpuNode : public Entity
        {
            public:
                CpuNode();
                ~CpuNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::CpuNode::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::CpuNode::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates> templates;


        }; // PerfMgmt::Statistics::CpuNode


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


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::DataRateInterface::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::DataRateInterface::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates> templates;


        }; // PerfMgmt::Statistics::DataRateInterface


        class MemoryNode : public Entity
        {
            public:
                MemoryNode();
                ~MemoryNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::MemoryNode::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::MemoryNode::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates> templates;


        }; // PerfMgmt::Statistics::MemoryNode


        class LdpMpls : public Entity
        {
            public:
                LdpMpls();
                ~LdpMpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::LdpMpls::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::LdpMpls::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates> templates;


        }; // PerfMgmt::Statistics::LdpMpls


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


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::Bgp::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::Bgp::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates> templates;


        }; // PerfMgmt::Statistics::Bgp


        class Ospfv2Protocol : public Entity
        {
            public:
                Ospfv2Protocol();
                ~Ospfv2Protocol();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Templates : public Entity
            {
                public:
                    Templates();
                    ~Templates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Template_ : public Entity
                {
                    public:
                        Template_();
                        ~Template_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value reg_exp_group; //type: string
                        Value history_persistent; //type: empty
                        Value vrf_group; //type: string
                        Value sample_interval; //type: uint32
                        Value sample_size; //type: uint32




                }; // PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_> > template_;


            }; // PerfMgmt::Statistics::Ospfv2Protocol::Templates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates> templates;


        }; // PerfMgmt::Statistics::Ospfv2Protocol


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface> basic_counter_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp> bgp;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode> cpu_node;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface> data_rate_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface> generic_counter_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls> ldp_mpls;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode> memory_node;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol> ospfv2_protocol;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol> ospfv3_protocol;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode> process_node;


    }; // PerfMgmt::Statistics


    class Enable : public Entity
    {
        public:
            Enable();
            ~Enable();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Threshold : public Entity
        {
            public:
                Threshold();
                ~Threshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Ospfv3Protocol : public Entity
            {
                public:
                    Ospfv3Protocol();
                    ~Ospfv3Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::Ospfv3Protocol


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::Bgp


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::DataRateInterface


            class Ospfv2Protocol : public Entity
            {
                public:
                    Ospfv2Protocol();
                    ~Ospfv2Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::Ospfv2Protocol


            class MemoryNode : public Entity
            {
                public:
                    MemoryNode();
                    ~MemoryNode();

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
                            Value node_id; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Threshold::MemoryNode::NodeAll


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Threshold::MemoryNode


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::GenericCounterInterface


            class CpuNode : public Entity
            {
                public:
                    CpuNode();
                    ~CpuNode();

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
                            Value node_id; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Threshold::CpuNode::Nodes


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Threshold::CpuNode::NodeAll


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Threshold::CpuNode


            class LdpMpls : public Entity
            {
                public:
                    LdpMpls();
                    ~LdpMpls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::LdpMpls


            class ProcessNode : public Entity
            {
                public:
                    ProcessNode();
                    ~ProcessNode();

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
                            Value node_id; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Threshold::ProcessNode::NodeAll


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Threshold::ProcessNode


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Threshold::BasicCounterInterface


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::BasicCounterInterface> basic_counter_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Bgp> bgp;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode> cpu_node;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::DataRateInterface> data_rate_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::GenericCounterInterface> generic_counter_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::LdpMpls> ldp_mpls;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode> memory_node;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv2Protocol> ospfv2_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv3Protocol> ospfv3_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode> process_node;


        }; // PerfMgmt::Enable::Threshold


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::GenericCounterInterface


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::Bgp


            class Ospfv2Protocol : public Entity
            {
                public:
                    Ospfv2Protocol();
                    ~Ospfv2Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::Ospfv2Protocol


            class Ospfv3Protocol : public Entity
            {
                public:
                    Ospfv3Protocol();
                    ~Ospfv3Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::Ospfv3Protocol


            class CpuNode : public Entity
            {
                public:
                    CpuNode();
                    ~CpuNode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Statistics::CpuNode::NodeAll


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
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Statistics::CpuNode::Nodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Statistics::CpuNode


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::BasicCounterInterface


            class ProcessNode : public Entity
            {
                public:
                    ProcessNode();
                    ~ProcessNode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Statistics::ProcessNode::NodeAll


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
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Statistics::ProcessNode


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
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::DataRateInterface


            class MemoryNode : public Entity
            {
                public:
                    MemoryNode();
                    ~MemoryNode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NodeAll : public Entity
                {
                    public:
                        NodeAll();
                        ~NodeAll();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string




                }; // PerfMgmt::Enable::Statistics::MemoryNode::NodeAll


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
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node> > node;


                }; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::NodeAll> node_all;
                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes> nodes;


            }; // PerfMgmt::Enable::Statistics::MemoryNode


            class LdpMpls : public Entity
            {
                public:
                    LdpMpls();
                    ~LdpMpls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value template_name; //type: string




            }; // PerfMgmt::Enable::Statistics::LdpMpls


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::BasicCounterInterface> basic_counter_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Bgp> bgp;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode> cpu_node;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::DataRateInterface> data_rate_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::GenericCounterInterface> generic_counter_interface;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::LdpMpls> ldp_mpls;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode> memory_node;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv2Protocol> ospfv2_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv3Protocol> ospfv3_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode> process_node;


        }; // PerfMgmt::Enable::Statistics


        class MonitorEnable : public Entity
        {
            public:
                MonitorEnable();
                ~MonitorEnable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LdpMpls : public Entity
            {
                public:
                    LdpMpls();
                    ~LdpMpls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Sessions : public Entity
                {
                    public:
                        Sessions();
                        ~Sessions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value session; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session> > session;


                }; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions> sessions;


            }; // PerfMgmt::Enable::MonitorEnable::LdpMpls


            class Ospfv3Protocol : public Entity
            {
                public:
                    Ospfv3Protocol();
                    ~Ospfv3Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OspfInstances : public Entity
                {
                    public:
                        OspfInstances();
                        ~OspfInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class OspfInstance : public Entity
                    {
                        public:
                            OspfInstance();
                            ~OspfInstance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance_name; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance> > ospf_instance;


                }; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances> ospf_instances;


            }; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol


            class GenericCounters : public Entity
            {
                public:
                    GenericCounters();
                    ~GenericCounters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value interface_name; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface> > interface;


                }; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces> interfaces;


            }; // PerfMgmt::Enable::MonitorEnable::GenericCounters


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


                class ProcessNodes : public Entity
                {
                    public:
                        ProcessNodes();
                        ~ProcessNodes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ProcessNode : public Entity
                    {
                        public:
                            ProcessNode();
                            ~ProcessNode();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value node_id; //type: string


                        class Pids : public Entity
                        {
                            public:
                                Pids();
                                ~Pids();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Pid : public Entity
                            {
                                public:
                                    Pid();
                                    ~Pid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pid; //type: uint32
                                    Value template_name; //type: string




                            }; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid


                                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid> > pid;


                        }; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids


                            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids> pids;


                    }; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode> > process_node;


                }; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes> process_nodes;


            }; // PerfMgmt::Enable::MonitorEnable::Process


            class BasicCounters : public Entity
            {
                public:
                    BasicCounters();
                    ~BasicCounters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value interface_name; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface> > interface;


                }; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces> interfaces;


            }; // PerfMgmt::Enable::MonitorEnable::BasicCounters


            class Memory : public Entity
            {
                public:
                    Memory();
                    ~Memory();

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
                            Value node_id; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node> > node;


                }; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes> nodes;


            }; // PerfMgmt::Enable::MonitorEnable::Memory


            class Ospfv2Protocol : public Entity
            {
                public:
                    Ospfv2Protocol();
                    ~Ospfv2Protocol();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OspfInstances : public Entity
                {
                    public:
                        OspfInstances();
                        ~OspfInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class OspfInstance : public Entity
                    {
                        public:
                            OspfInstance();
                            ~OspfInstance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance_name; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance> > ospf_instance;


                }; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances> ospf_instances;


            }; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol


            class Cpu : public Entity
            {
                public:
                    Cpu();
                    ~Cpu();

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
                            Value node_id; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node> > node;


                }; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes> nodes;


            }; // PerfMgmt::Enable::MonitorEnable::Cpu


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


                class Neighbors : public Entity
                {
                    public:
                        Neighbors();
                        ~Neighbors();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Neighbor : public Entity
                    {
                        public:
                            Neighbor();
                            ~Neighbor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value peer_address; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor> > neighbor;


                }; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors> neighbors;


            }; // PerfMgmt::Enable::MonitorEnable::Bgp


            class DataRates : public Entity
            {
                public:
                    DataRates();
                    ~DataRates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value interface_name; //type: string
                            Value template_name; //type: string




                    }; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface> > interface;


                }; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces> interfaces;


            }; // PerfMgmt::Enable::MonitorEnable::DataRates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters> basic_counters;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp> bgp;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu> cpu;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates> data_rates;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters> generic_counters;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls> ldp_mpls;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory> memory;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol> ospfv2_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol> ospfv3_protocol;
                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process> process;


        }; // PerfMgmt::Enable::MonitorEnable


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable> monitor_enable;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics> statistics;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold> threshold;


    }; // PerfMgmt::Enable


    class RegExpGroups : public Entity
    {
        public:
            RegExpGroups();
            ~RegExpGroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RegExpGroup : public Entity
        {
            public:
                RegExpGroup();
                ~RegExpGroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value reg_exp_group_name; //type: string


            class RegExps : public Entity
            {
                public:
                    RegExps();
                    ~RegExps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RegExp : public Entity
                {
                    public:
                        RegExp();
                        ~RegExp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value reg_exp_index; //type: uint32
                        Value reg_exp_string; //type: string




                }; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp> > reg_exp;


            }; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps> reg_exps;


        }; // PerfMgmt::RegExpGroups::RegExpGroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup> > reg_exp_group;


    }; // PerfMgmt::RegExpGroups


    class Threshold : public Entity
    {
        public:
            Threshold();
            ~Threshold();

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


            class GenericCounterInterfaceTemplates : public Entity
            {
                public:
                    GenericCounterInterfaceTemplates();
                    ~GenericCounterInterfaceTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class GenericCounterInterfaceTemplate : public Entity
                {
                    public:
                        GenericCounterInterfaceTemplate();
                        ~GenericCounterInterfaceTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32
                        Value reg_exp_group; //type: string
                        Value vrf_group; //type: string


                    class InOctets : public Entity
                    {
                        public:
                            InOctets();
                            ~InOctets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets


                    class InUcastPkts : public Entity
                    {
                        public:
                            InUcastPkts();
                            ~InUcastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts


                    class OutUcastPkts : public Entity
                    {
                        public:
                            OutUcastPkts();
                            ~OutUcastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts


                    class OutBroadcastPkts : public Entity
                    {
                        public:
                            OutBroadcastPkts();
                            ~OutBroadcastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts


                    class OutMulticastPkts : public Entity
                    {
                        public:
                            OutMulticastPkts();
                            ~OutMulticastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts


                    class InputOverrun : public Entity
                    {
                        public:
                            InputOverrun();
                            ~InputOverrun();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun


                    class OutOctets : public Entity
                    {
                        public:
                            OutOctets();
                            ~OutOctets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets


                    class OutputUnderrun : public Entity
                    {
                        public:
                            OutputUnderrun();
                            ~OutputUnderrun();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun


                    class InputTotalErrors : public Entity
                    {
                        public:
                            InputTotalErrors();
                            ~InputTotalErrors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors


                    class OutputTotalDrops : public Entity
                    {
                        public:
                            OutputTotalDrops();
                            ~OutputTotalDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops


                    class InputCrc : public Entity
                    {
                        public:
                            InputCrc();
                            ~InputCrc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc


                    class InBroadcastPkts : public Entity
                    {
                        public:
                            InBroadcastPkts();
                            ~InBroadcastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts


                    class InMulticastPkts : public Entity
                    {
                        public:
                            InMulticastPkts();
                            ~InMulticastPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts


                    class OutPackets : public Entity
                    {
                        public:
                            OutPackets();
                            ~OutPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets


                    class OutputTotalErrors : public Entity
                    {
                        public:
                            OutputTotalErrors();
                            ~OutputTotalErrors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors


                    class InPackets : public Entity
                    {
                        public:
                            InPackets();
                            ~InPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets


                    class InputUnknownProto : public Entity
                    {
                        public:
                            InputUnknownProto();
                            ~InputUnknownProto();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto


                    class InputQueueDrops : public Entity
                    {
                        public:
                            InputQueueDrops();
                            ~InputQueueDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops


                    class InputTotalDrops : public Entity
                    {
                        public:
                            InputTotalDrops();
                            ~InputTotalDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops


                    class InputFrame : public Entity
                    {
                        public:
                            InputFrame();
                            ~InputFrame();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts> in_broadcast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts> in_multicast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets> in_octets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets> in_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts> in_ucast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc> input_crc; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame> input_frame; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun> input_overrun; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto> input_unknown_proto; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts> out_broadcast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts> out_multicast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets> out_octets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets> out_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts> out_ucast_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun> output_underrun; // presence node


                }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate> > generic_counter_interface_template;


            }; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates> generic_counter_interface_templates;


        }; // PerfMgmt::Threshold::GenericCounterInterface


        class LdpMpls : public Entity
        {
            public:
                LdpMpls();
                ~LdpMpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LdpMplsTemplates : public Entity
            {
                public:
                    LdpMplsTemplates();
                    ~LdpMplsTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LdpMplsTemplate : public Entity
                {
                    public:
                        LdpMplsTemplate();
                        ~LdpMplsTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class AddressWithdrawMsgsRcvd : public Entity
                    {
                        public:
                            AddressWithdrawMsgsRcvd();
                            ~AddressWithdrawMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd


                    class LabelWithdrawMsgsRcvd : public Entity
                    {
                        public:
                            LabelWithdrawMsgsRcvd();
                            ~LabelWithdrawMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd


                    class AddressWithdrawMsgsSent : public Entity
                    {
                        public:
                            AddressWithdrawMsgsSent();
                            ~AddressWithdrawMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent


                    class LabelWithdrawMsgsSent : public Entity
                    {
                        public:
                            LabelWithdrawMsgsSent();
                            ~LabelWithdrawMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent


                    class NotificationMsgsRcvd : public Entity
                    {
                        public:
                            NotificationMsgsRcvd();
                            ~NotificationMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd


                    class TotalMsgsRcvd : public Entity
                    {
                        public:
                            TotalMsgsRcvd();
                            ~TotalMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd


                    class NotificationMsgsSent : public Entity
                    {
                        public:
                            NotificationMsgsSent();
                            ~NotificationMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent


                    class TotalMsgsSent : public Entity
                    {
                        public:
                            TotalMsgsSent();
                            ~TotalMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent


                    class LabelReleaseMsgsRcvd : public Entity
                    {
                        public:
                            LabelReleaseMsgsRcvd();
                            ~LabelReleaseMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd


                    class InitMsgsRcvd : public Entity
                    {
                        public:
                            InitMsgsRcvd();
                            ~InitMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd


                    class LabelReleaseMsgsSent : public Entity
                    {
                        public:
                            LabelReleaseMsgsSent();
                            ~LabelReleaseMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent


                    class InitMsgsSent : public Entity
                    {
                        public:
                            InitMsgsSent();
                            ~InitMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent


                    class LabelMappingMsgsRcvd : public Entity
                    {
                        public:
                            LabelMappingMsgsRcvd();
                            ~LabelMappingMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd


                    class KeepaliveMsgsRcvd : public Entity
                    {
                        public:
                            KeepaliveMsgsRcvd();
                            ~KeepaliveMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd


                    class LabelMappingMsgsSent : public Entity
                    {
                        public:
                            LabelMappingMsgsSent();
                            ~LabelMappingMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent


                    class KeepaliveMsgsSent : public Entity
                    {
                        public:
                            KeepaliveMsgsSent();
                            ~KeepaliveMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent


                    class AddressMsgsRcvd : public Entity
                    {
                        public:
                            AddressMsgsRcvd();
                            ~AddressMsgsRcvd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd


                    class AddressMsgsSent : public Entity
                    {
                        public:
                            AddressMsgsSent();
                            ~AddressMsgsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd> address_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent> address_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd> address_withdraw_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent> address_withdraw_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd> init_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent> init_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd> keepalive_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent> keepalive_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd> label_mapping_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent> label_mapping_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd> label_release_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent> label_release_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd> label_withdraw_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent> label_withdraw_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd> notification_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent> notification_msgs_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd> total_msgs_rcvd; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent> total_msgs_sent; // presence node


                }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate> > ldp_mpls_template;


            }; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates> ldp_mpls_templates;


        }; // PerfMgmt::Threshold::LdpMpls


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


            class BasicCounterInterfaceTemplates : public Entity
            {
                public:
                    BasicCounterInterfaceTemplates();
                    ~BasicCounterInterfaceTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BasicCounterInterfaceTemplate : public Entity
                {
                    public:
                        BasicCounterInterfaceTemplate();
                        ~BasicCounterInterfaceTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32
                        Value reg_exp_group; //type: string
                        Value vrf_group; //type: string


                    class InOctets : public Entity
                    {
                        public:
                            InOctets();
                            ~InOctets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets


                    class OutOctets : public Entity
                    {
                        public:
                            OutOctets();
                            ~OutOctets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets


                    class OutputQueueDrops : public Entity
                    {
                        public:
                            OutputQueueDrops();
                            ~OutputQueueDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops


                    class InputTotalErrors : public Entity
                    {
                        public:
                            InputTotalErrors();
                            ~InputTotalErrors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors


                    class OutputTotalDrops : public Entity
                    {
                        public:
                            OutputTotalDrops();
                            ~OutputTotalDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops


                    class OutPackets : public Entity
                    {
                        public:
                            OutPackets();
                            ~OutPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets


                    class OutputTotalErrors : public Entity
                    {
                        public:
                            OutputTotalErrors();
                            ~OutputTotalErrors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors


                    class InPackets : public Entity
                    {
                        public:
                            InPackets();
                            ~InPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets


                    class InputQueueDrops : public Entity
                    {
                        public:
                            InputQueueDrops();
                            ~InputQueueDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops


                    class InputTotalDrops : public Entity
                    {
                        public:
                            InputTotalDrops();
                            ~InputTotalDrops();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets> in_octets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets> in_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets> out_octets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets> out_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops> output_queue_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node


                }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate> > basic_counter_interface_template;


            }; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates> basic_counter_interface_templates;


        }; // PerfMgmt::Threshold::BasicCounterInterface


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


            class BgpTemplates : public Entity
            {
                public:
                    BgpTemplates();
                    ~BgpTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BgpTemplate : public Entity
                {
                    public:
                        BgpTemplate();
                        ~BgpTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class OutputUpdateMessages : public Entity
                    {
                        public:
                            OutputUpdateMessages();
                            ~OutputUpdateMessages();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages


                    class ErrorsReceived : public Entity
                    {
                        public:
                            ErrorsReceived();
                            ~ErrorsReceived();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived


                    class ConnEstablished : public Entity
                    {
                        public:
                            ConnEstablished();
                            ~ConnEstablished();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished


                    class OutputMessages : public Entity
                    {
                        public:
                            OutputMessages();
                            ~OutputMessages();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages


                    class ConnDropped : public Entity
                    {
                        public:
                            ConnDropped();
                            ~ConnDropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped


                    class InputUpdateMessages : public Entity
                    {
                        public:
                            InputUpdateMessages();
                            ~InputUpdateMessages();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages


                    class ErrorsSent : public Entity
                    {
                        public:
                            ErrorsSent();
                            ~ErrorsSent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent


                    class InputMessages : public Entity
                    {
                        public:
                            InputMessages();
                            ~InputMessages();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped> conn_dropped; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished> conn_established; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived> errors_received; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent> errors_sent; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages> input_messages; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages> input_update_messages; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages> output_messages; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages> output_update_messages; // presence node


                }; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate> > bgp_template;


            }; // PerfMgmt::Threshold::Bgp::BgpTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates> bgp_templates;


        }; // PerfMgmt::Threshold::Bgp


        class Ospfv2Protocol : public Entity
        {
            public:
                Ospfv2Protocol();
                ~Ospfv2Protocol();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Ospfv2ProtocolTemplates : public Entity
            {
                public:
                    Ospfv2ProtocolTemplates();
                    ~Ospfv2ProtocolTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv2ProtocolTemplate : public Entity
                {
                    public:
                        Ospfv2ProtocolTemplate();
                        ~Ospfv2ProtocolTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class ChecksumErrors : public Entity
                    {
                        public:
                            ChecksumErrors();
                            ~ChecksumErrors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors


                    class InputLsaAcksLsa : public Entity
                    {
                        public:
                            InputLsaAcksLsa();
                            ~InputLsaAcksLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa


                    class OutputDbDsLsa : public Entity
                    {
                        public:
                            OutputDbDsLsa();
                            ~OutputDbDsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa


                    class InputDbDsLsa : public Entity
                    {
                        public:
                            InputDbDsLsa();
                            ~InputDbDsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa


                    class InputLsaUpdates : public Entity
                    {
                        public:
                            InputLsaUpdates();
                            ~InputLsaUpdates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates


                    class OutputDbDs : public Entity
                    {
                        public:
                            OutputDbDs();
                            ~OutputDbDs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs


                    class OutputLsaUpdatesLsa : public Entity
                    {
                        public:
                            OutputLsaUpdatesLsa();
                            ~OutputLsaUpdatesLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa


                    class InputDbDs : public Entity
                    {
                        public:
                            InputDbDs();
                            ~InputDbDs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs


                    class InputLsaUpdatesLsa : public Entity
                    {
                        public:
                            InputLsaUpdatesLsa();
                            ~InputLsaUpdatesLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa


                    class OutputPackets : public Entity
                    {
                        public:
                            OutputPackets();
                            ~OutputPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets


                    class InputPackets : public Entity
                    {
                        public:
                            InputPackets();
                            ~InputPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets


                    class OutputHelloPackets : public Entity
                    {
                        public:
                            OutputHelloPackets();
                            ~OutputHelloPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets


                    class InputHelloPackets : public Entity
                    {
                        public:
                            InputHelloPackets();
                            ~InputHelloPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets


                    class OutputLsRequests : public Entity
                    {
                        public:
                            OutputLsRequests();
                            ~OutputLsRequests();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests


                    class OutputLsaAcksLsa : public Entity
                    {
                        public:
                            OutputLsaAcksLsa();
                            ~OutputLsaAcksLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa


                    class OutputLsaAcks : public Entity
                    {
                        public:
                            OutputLsaAcks();
                            ~OutputLsaAcks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks


                    class InputLsaAcks : public Entity
                    {
                        public:
                            InputLsaAcks();
                            ~InputLsaAcks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks


                    class OutputLsaUpdates : public Entity
                    {
                        public:
                            OutputLsaUpdates();
                            ~OutputLsaUpdates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates


                    class OutputLsRequestsLsa : public Entity
                    {
                        public:
                            OutputLsRequestsLsa();
                            ~OutputLsRequestsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa


                    class InputLsRequestsLsa : public Entity
                    {
                        public:
                            InputLsRequestsLsa();
                            ~InputLsRequestsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa


                    class InputLsRequests : public Entity
                    {
                        public:
                            InputLsRequests();
                            ~InputLsRequests();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors> checksum_errors; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs> input_db_ds; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets> input_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets> output_packets; // presence node


                }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate> > ospfv2_protocol_template;


            }; // PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates> ospfv2_protocol_templates;


        }; // PerfMgmt::Threshold::Ospfv2Protocol


        class CpuNode : public Entity
        {
            public:
                CpuNode();
                ~CpuNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class CpuNodeTemplates : public Entity
            {
                public:
                    CpuNodeTemplates();
                    ~CpuNodeTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CpuNodeTemplate : public Entity
                {
                    public:
                        CpuNodeTemplate();
                        ~CpuNodeTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class AverageCpuUsed : public Entity
                    {
                        public:
                            AverageCpuUsed();
                            ~AverageCpuUsed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed


                    class NoProcesses : public Entity
                    {
                        public:
                            NoProcesses();
                            ~NoProcesses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses> no_processes; // presence node


                }; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate> > cpu_node_template;


            }; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates> cpu_node_templates;


        }; // PerfMgmt::Threshold::CpuNode


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


            class DataRateInterfaceTemplates : public Entity
            {
                public:
                    DataRateInterfaceTemplates();
                    ~DataRateInterfaceTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DataRateInterfaceTemplate : public Entity
                {
                    public:
                        DataRateInterfaceTemplate();
                        ~DataRateInterfaceTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32
                        Value reg_exp_group; //type: string
                        Value vrf_group; //type: string


                    class InputDataRate : public Entity
                    {
                        public:
                            InputDataRate();
                            ~InputDataRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate


                    class Bandwidth : public Entity
                    {
                        public:
                            Bandwidth();
                            ~Bandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth


                    class OutputPacketRate : public Entity
                    {
                        public:
                            OutputPacketRate();
                            ~OutputPacketRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate


                    class InputPeakPkts : public Entity
                    {
                        public:
                            InputPeakPkts();
                            ~InputPeakPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts


                    class OutputPeakRate : public Entity
                    {
                        public:
                            OutputPeakRate();
                            ~OutputPeakRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate


                    class OutputDataRate : public Entity
                    {
                        public:
                            OutputDataRate();
                            ~OutputDataRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate


                    class InputPacketRate : public Entity
                    {
                        public:
                            InputPacketRate();
                            ~InputPacketRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate


                    class OutputPeakPkts : public Entity
                    {
                        public:
                            OutputPeakPkts();
                            ~OutputPeakPkts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts


                    class InputPeakRate : public Entity
                    {
                        public:
                            InputPeakRate();
                            ~InputPeakRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth> bandwidth; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate> input_data_rate; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate> input_packet_rate; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts> input_peak_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate> input_peak_rate; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate> output_data_rate; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate> output_packet_rate; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts> output_peak_pkts; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate> output_peak_rate; // presence node


                }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate> > data_rate_interface_template;


            }; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates> data_rate_interface_templates;


        }; // PerfMgmt::Threshold::DataRateInterface


        class ProcessNode : public Entity
        {
            public:
                ProcessNode();
                ~ProcessNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ProcessNodeTemplates : public Entity
            {
                public:
                    ProcessNodeTemplates();
                    ~ProcessNodeTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ProcessNodeTemplate : public Entity
                {
                    public:
                        ProcessNodeTemplate();
                        ~ProcessNodeTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class AverageCpuUsed : public Entity
                    {
                        public:
                            AverageCpuUsed();
                            ~AverageCpuUsed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed


                    class PeakMemory : public Entity
                    {
                        public:
                            PeakMemory();
                            ~PeakMemory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory


                    class NoThreads : public Entity
                    {
                        public:
                            NoThreads();
                            ~NoThreads();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads> no_threads; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory> peak_memory; // presence node


                }; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate> > process_node_template;


            }; // PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates> process_node_templates;


        }; // PerfMgmt::Threshold::ProcessNode


        class MemoryNode : public Entity
        {
            public:
                MemoryNode();
                ~MemoryNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MemoryNodeTemplates : public Entity
            {
                public:
                    MemoryNodeTemplates();
                    ~MemoryNodeTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class MemoryNodeTemplate : public Entity
                {
                    public:
                        MemoryNodeTemplate();
                        ~MemoryNodeTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class PeakMemory : public Entity
                    {
                        public:
                            PeakMemory();
                            ~PeakMemory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory


                    class CurrMemory : public Entity
                    {
                        public:
                            CurrMemory();
                            ~CurrMemory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: int32
                            Value end_range_value; //type: int32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory> curr_memory; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory> peak_memory; // presence node


                }; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate> > memory_node_template;


            }; // PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates> memory_node_templates;


        }; // PerfMgmt::Threshold::MemoryNode


        class Ospfv3Protocol : public Entity
        {
            public:
                Ospfv3Protocol();
                ~Ospfv3Protocol();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Ospfv3ProtocolTemplates : public Entity
            {
                public:
                    Ospfv3ProtocolTemplates();
                    ~Ospfv3ProtocolTemplates();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ospfv3ProtocolTemplate : public Entity
                {
                    public:
                        Ospfv3ProtocolTemplate();
                        ~Ospfv3ProtocolTemplate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value template_name; //type: string
                        Value sample_interval; //type: uint32


                    class InputLsaAcksLsa : public Entity
                    {
                        public:
                            InputLsaAcksLsa();
                            ~InputLsaAcksLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa


                    class OutputDbDsLsa : public Entity
                    {
                        public:
                            OutputDbDsLsa();
                            ~OutputDbDsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa


                    class InputDbDsLsa : public Entity
                    {
                        public:
                            InputDbDsLsa();
                            ~InputDbDsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa


                    class InputLsaUpdates : public Entity
                    {
                        public:
                            InputLsaUpdates();
                            ~InputLsaUpdates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates


                    class OutputDbDs : public Entity
                    {
                        public:
                            OutputDbDs();
                            ~OutputDbDs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs


                    class OutputLsaUpdatesLsa : public Entity
                    {
                        public:
                            OutputLsaUpdatesLsa();
                            ~OutputLsaUpdatesLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa


                    class InputDbDs : public Entity
                    {
                        public:
                            InputDbDs();
                            ~InputDbDs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs


                    class InputLsaUpdatesLsa : public Entity
                    {
                        public:
                            InputLsaUpdatesLsa();
                            ~InputLsaUpdatesLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa


                    class OutputPackets : public Entity
                    {
                        public:
                            OutputPackets();
                            ~OutputPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets


                    class InputPackets : public Entity
                    {
                        public:
                            InputPackets();
                            ~InputPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets


                    class OutputHelloPackets : public Entity
                    {
                        public:
                            OutputHelloPackets();
                            ~OutputHelloPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets


                    class InputHelloPackets : public Entity
                    {
                        public:
                            InputHelloPackets();
                            ~InputHelloPackets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets


                    class OutputLsRequests : public Entity
                    {
                        public:
                            OutputLsRequests();
                            ~OutputLsRequests();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests


                    class OutputLsaAcksLsa : public Entity
                    {
                        public:
                            OutputLsaAcksLsa();
                            ~OutputLsaAcksLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa


                    class OutputLsaAcks : public Entity
                    {
                        public:
                            OutputLsaAcks();
                            ~OutputLsaAcks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks


                    class InputLsaAcks : public Entity
                    {
                        public:
                            InputLsaAcks();
                            ~InputLsaAcks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks


                    class OutputLsaUpdates : public Entity
                    {
                        public:
                            OutputLsaUpdates();
                            ~OutputLsaUpdates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates


                    class OutputLsRequestsLsa : public Entity
                    {
                        public:
                            OutputLsRequestsLsa();
                            ~OutputLsRequestsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa


                    class InputLsRequestsLsa : public Entity
                    {
                        public:
                            InputLsRequestsLsa();
                            ~InputLsRequestsLsa();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa


                    class InputLsRequests : public Entity
                    {
                        public:
                            InputLsRequests();
                            ~InputLsRequests();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_; //type: PmThresholdOpEnum
                            Value value_; //type: uint32
                            Value end_range_value; //type: uint32
                            Value percent; //type: boolean
                            Value rearm_type; //type: PmThresholdRearmEnum
                            Value rearm_window; //type: uint32


                            class PmThresholdOpEnum;
                            class PmThresholdRearmEnum;


                    }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests


                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs> input_db_ds; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa> input_db_ds_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets> input_hello_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests> input_ls_requests; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa> input_ls_requests_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks> input_lsa_acks; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa> input_lsa_acks_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates> input_lsa_updates; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa> input_lsa_updates_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets> input_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs> output_db_ds; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa> output_db_ds_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets> output_hello_packets; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests> output_ls_requests; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa> output_ls_requests_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks> output_lsa_acks; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa> output_lsa_acks_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates> output_lsa_updates; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa> output_lsa_updates_lsa; // presence node
                        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets> output_packets; // presence node


                }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate> > ospfv3_protocol_template;


            }; // PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates


                std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates> ospfv3_protocol_templates;


        }; // PerfMgmt::Threshold::Ospfv3Protocol


            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface> basic_counter_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp> bgp;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode> cpu_node;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface> data_rate_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface> generic_counter_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls> ldp_mpls;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode> memory_node;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol> ospfv2_protocol;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol> ospfv3_protocol;
            std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode> process_node;


    }; // PerfMgmt::Threshold


        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable> enable;
        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups> reg_exp_groups;
        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources> resources;
        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics> statistics;
        std::unique_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold> threshold;


}; // PerfMgmt


class PmThresholdOpEnum : public Enum
{
    public:
        static const Enum::Value eq;
        static const Enum::Value ne;
        static const Enum::Value lt;
        static const Enum::Value le;
        static const Enum::Value gt;
        static const Enum::Value ge;
        static const Enum::Value rg;

};

class PmThresholdRearmEnum : public Enum
{
    public:
        static const Enum::Value always;
        static const Enum::Value window;
        static const Enum::Value toggle;

};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_ */

