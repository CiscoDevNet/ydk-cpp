#ifndef _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_
#define _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_traffmon_netflow_cfg {

class NetFlow : public Entity
{
    public:
        NetFlow();
        ~NetFlow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class FlowExporterMaps : public Entity
    {
        public:
            FlowExporterMaps();
            ~FlowExporterMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class FlowExporterMap : public Entity
        {
            public:
                FlowExporterMap();
                ~FlowExporterMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf exporter_map_name; //type: string
                YLeaf source_interface; //type: string
                YLeaf dscp; //type: uint32

            class Udp : public Entity
            {
                public:
                    Udp();
                    ~Udp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf destination_port; //type: uint32



            }; // NetFlow::FlowExporterMaps::FlowExporterMap::Udp


            class Versions : public Entity
            {
                public:
                    Versions();
                    ~Versions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Version : public Entity
                {
                    public:
                        Version();
                        ~Version();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf version_number; //type: uint32
                        YLeaf options_template_timeout; //type: uint32
                        YLeaf common_template_timeout; //type: uint32
                        YLeaf data_template_timeout; //type: uint32

                    class Options : public Entity
                    {
                        public:
                            Options();
                            ~Options();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_table_export_timeout; //type: uint32
                            YLeaf sampler_table_export_timeout; //type: uint32
                            YLeaf vrf_table_export_timeout; //type: uint32



                    }; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options


                        std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version::Options> options;


                }; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version


                    std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions::Version> > version;


            }; // NetFlow::FlowExporterMaps::FlowExporterMap::Versions


            class Destination : public Entity
            {
                public:
                    Destination();
                    ~Destination();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ip_address; //type: string
                    YLeaf ipv6_address; //type: string
                    YLeaf vrf_name; //type: string



            }; // NetFlow::FlowExporterMaps::FlowExporterMap::Destination


                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Destination> destination;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Udp> udp;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap::Versions> versions;


        }; // NetFlow::FlowExporterMaps::FlowExporterMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps::FlowExporterMap> > flow_exporter_map;


    }; // NetFlow::FlowExporterMaps


    class FlowSamplerMaps : public Entity
    {
        public:
            FlowSamplerMaps();
            ~FlowSamplerMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class FlowSamplerMap : public Entity
        {
            public:
                FlowSamplerMap();
                ~FlowSamplerMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf sampler_map_name; //type: string

            class SamplingModes : public Entity
            {
                public:
                    SamplingModes();
                    ~SamplingModes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SamplingMode : public Entity
                {
                    public:
                        SamplingMode();
                        ~SamplingMode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mode; //type: NfSamplingModeEnum
                        YLeaf sample_number; //type: uint32
                        YLeaf interval; //type: uint32



                }; // NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode


                    std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes::SamplingMode> > sampling_mode;


            }; // NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes


                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap::SamplingModes> sampling_modes;


        }; // NetFlow::FlowSamplerMaps::FlowSamplerMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps::FlowSamplerMap> > flow_sampler_map;


    }; // NetFlow::FlowSamplerMaps


    class FlowMonitorMapTable : public Entity
    {
        public:
            FlowMonitorMapTable();
            ~FlowMonitorMapTable();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class FlowMonitorMap : public Entity
        {
            public:
                FlowMonitorMap();
                ~FlowMonitorMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf monitor_map_name; //type: string
                YLeaf cache_update_aging_timeout; //type: uint32
                YLeaf cache_entries; //type: uint32
                YLeaf cache_inactive_aging_timeout; //type: uint32
                YLeaf cache_active_aging_timeout; //type: uint32
                YLeaf cache_timeout_rate_limit; //type: uint32
                YLeaf cache_aging_mode; //type: NfCacheAgingModeEnum

            class Option : public Entity
            {
                public:
                    Option();
                    ~Option();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf filtered; //type: empty
                    YLeaf out_phys_int; //type: empty



            }; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option


            class Exporters : public Entity
            {
                public:
                    Exporters();
                    ~Exporters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Exporter : public Entity
                {
                    public:
                        Exporter();
                        ~Exporter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf exporter_name; //type: string



                }; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters::Exporter> > exporter;


            }; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters


            class Record : public Entity
            {
                public:
                    Record();
                    ~Record();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf record_name; //type: string
                    YLeaf label; //type: uint32



            }; // NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record


                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Exporters> exporters;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Option> option;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap::Record> record; // presence node


        }; // NetFlow::FlowMonitorMapTable::FlowMonitorMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable::FlowMonitorMap> > flow_monitor_map;


    }; // NetFlow::FlowMonitorMapTable


    class FlowMonitorMapPerformanceTable : public Entity
    {
        public:
            FlowMonitorMapPerformanceTable();
            ~FlowMonitorMapPerformanceTable();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class FlowMonitorMap : public Entity
        {
            public:
                FlowMonitorMap();
                ~FlowMonitorMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf monitor_map_name; //type: string
                YLeaf cache_update_aging_timeout; //type: uint32
                YLeaf cache_entries; //type: uint32
                YLeaf cache_inactive_aging_timeout; //type: uint32
                YLeaf cache_active_aging_timeout; //type: uint32
                YLeaf cache_timeout_rate_limit; //type: uint32
                YLeaf cache_aging_mode; //type: NfCacheAgingModeEnum

            class Option : public Entity
            {
                public:
                    Option();
                    ~Option();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf filtered; //type: empty
                    YLeaf out_phys_int; //type: empty



            }; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option


            class Exporters : public Entity
            {
                public:
                    Exporters();
                    ~Exporters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Exporter : public Entity
                {
                    public:
                        Exporter();
                        ~Exporter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf exporter_name; //type: string



                }; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters::Exporter> > exporter;


            }; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters


            class Record : public Entity
            {
                public:
                    Record();
                    ~Record();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf record_name; //type: string
                    YLeaf label; //type: uint32



            }; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record


                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Exporters> exporters;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Option> option;
                std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap::Record> record; // presence node


        }; // NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable::FlowMonitorMap> > flow_monitor_map;


    }; // NetFlow::FlowMonitorMapPerformanceTable


        std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowExporterMaps> flow_exporter_maps;
        std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapPerformanceTable> flow_monitor_map_performance_table;
        std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowMonitorMapTable> flow_monitor_map_table;
        std::unique_ptr<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow::FlowSamplerMaps> flow_sampler_maps;


}; // NetFlow


class NfSamplingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf random;

};

class NfCacheAgingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf permanent;

};


}
}

#endif /* _CISCO_IOS_XR_TRAFFMON_NETFLOW_CFG_ */

