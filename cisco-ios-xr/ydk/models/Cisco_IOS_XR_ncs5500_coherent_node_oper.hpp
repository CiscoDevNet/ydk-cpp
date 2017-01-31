#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_
#define _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_coherent_node_oper {

class Coherent : public Entity
{
    public:
        Coherent();
        ~Coherent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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

            class CoherentTimeStats : public Entity
            {
                public:
                    CoherentTimeStats();
                    ~CoherentTimeStats();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf driver_init; //type: string
                    YLeaf driver_operational; //type: string
                    YLeaf device_created; //type: string
                    YLeaf optics_controllers_created; //type: string
                    YLeaf dsp_controllers_created; //type: string
                    YLeaf eth_intf_created; //type: string

                class OptsEaBulkCreate : public Entity
                {
                    public:
                        OptsEaBulkCreate();
                        ~OptsEaBulkCreate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf start; //type: string
                        YLeaf end; //type: string
                        YLeaf time_taken; //type: string
                        YLeaf worst_time; //type: string



                }; // Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate


                class OptsEaBulkUpdate : public Entity
                {
                    public:
                        OptsEaBulkUpdate();
                        ~OptsEaBulkUpdate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf start; //type: string
                        YLeaf end; //type: string
                        YLeaf time_taken; //type: string
                        YLeaf worst_time; //type: string



                }; // Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate


                class DspEaBulkCreate : public Entity
                {
                    public:
                        DspEaBulkCreate();
                        ~DspEaBulkCreate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf start; //type: string
                        YLeaf end; //type: string
                        YLeaf time_taken; //type: string
                        YLeaf worst_time; //type: string



                }; // Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate


                class DspEaBulkUpdate : public Entity
                {
                    public:
                        DspEaBulkUpdate();
                        ~DspEaBulkUpdate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf start; //type: string
                        YLeaf end; //type: string
                        YLeaf time_taken; //type: string
                        YLeaf worst_time; //type: string



                }; // Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate


                class PortStat : public Entity
                {
                    public:
                        PortStat();
                        ~PortStat();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf laser_state; //type: boolean
                        YLeaf wavelength; //type: uint32
                        YLeaf tx_power; //type: uint32
                        YLeaf cd_min; //type: uint32
                        YLeaf cd_max; //type: uint32
                        YLeaf traffic_type; //type: uint32

                    class LaserOnStats : public Entity
                    {
                        public:
                            LaserOnStats();
                            ~LaserOnStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats


                    class LaserOffStats : public Entity
                    {
                        public:
                            LaserOffStats();
                            ~LaserOffStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats


                    class WlOpStats : public Entity
                    {
                        public:
                            WlOpStats();
                            ~WlOpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats


                    class TxpwrOpStats : public Entity
                    {
                        public:
                            TxpwrOpStats();
                            ~TxpwrOpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats


                    class CdminOpStats : public Entity
                    {
                        public:
                            CdminOpStats();
                            ~CdminOpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats


                    class CdmaxOpStats : public Entity
                    {
                        public:
                            CdmaxOpStats();
                            ~CdmaxOpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats


                    class TraffictypeOpStats : public Entity
                    {
                        public:
                            TraffictypeOpStats();
                            ~TraffictypeOpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf start; //type: string
                            YLeaf end; //type: string
                            YLeaf time_taken; //type: string
                            YLeaf worst_time; //type: string



                    }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats


                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdmaxOpStats> cdmax_op_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::CdminOpStats> cdmin_op_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOffStats> laser_off_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::LaserOnStats> laser_on_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::TraffictypeOpStats> traffictype_op_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::TxpwrOpStats> txpwr_op_stats;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat::WlOpStats> wl_op_stats;


                }; // Coherent::Nodes::Node::CoherentTimeStats::PortStat


                    std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkCreate> dsp_ea_bulk_create;
                    std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::DspEaBulkUpdate> dsp_ea_bulk_update;
                    std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkCreate> opts_ea_bulk_create;
                    std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::OptsEaBulkUpdate> opts_ea_bulk_update;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats::PortStat> > port_stat;


            }; // Coherent::Nodes::Node::CoherentTimeStats


            class Devicemapping : public Entity
            {
                public:
                    Devicemapping();
                    ~Devicemapping();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf num_entries; //type: uint32

                class DevMap : public Entity
                {
                    public:
                        DevMap();
                        ~DevMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf device_address; //type: uint32
                        YLeaf ifhandle; //type: uint32
                        YLeaf intf_name; //type: string



                }; // Coherent::Nodes::Node::Devicemapping::DevMap


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Devicemapping::DevMap> > dev_map;


            }; // Coherent::Nodes::Node::Devicemapping


            class Coherenthealth : public Entity
            {
                public:
                    Coherenthealth();
                    ~Coherenthealth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf im_state; //type: boolean
                    YLeaf aipc_srvr_state; //type: boolean
                    YLeaf sysdb_state; //type: boolean
                    YLeaf pm_state; //type: boolean
                    YLeaf optics_ea_conn; //type: boolean
                    YLeaf dsp_ea_conn; //type: boolean
                    YLeaf vether_state; //type: boolean
                    YLeaf morgoth_alive; //type: boolean
                    YLeaf prov_infra_state; //type: boolean
                    YLeaf sdk_fpga_compatible; //type: boolean
                    YLeaf sdk_version; //type: string
                    YLeaf morgoth_running_version; //type: string
                    YLeaf morgoth_downloaded_version; //type: string
                    YLeaf morgoth_golden_version; //type: string
                    YLeaf denali_version; //type: string
                    YLeaf board_type; //type: string
                    YLeaf jlink_op; //type: string

                class PortData : public Entity
                {
                    public:
                        PortData();
                        ~PortData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf optics_ctrl_created; //type: boolean
                        YLeaf dsp_ctrl_created; //type: boolean
                        YLeaf has_pluggable; //type: boolean
                        YLeaf optics_admin_up; //type: boolean
                        YLeaf dsp_admin_up; //type: boolean
                        YLeaf laser_state; //type: boolean
                        YLeaf fp_port_idx; //type: uint32
                        YLeaf wavelength; //type: uint32
                        YLeaf traffic_type; //type: uint32
                        YLeaf laser_op_rc; //type: int32
                        YLeaf wlen_op_rc; //type: int32
                        YLeaf traffic_op_rc; //type: int32

                    class CtpInfo : public Entity
                    {
                        public:
                            CtpInfo();
                            ~CtpInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf deviation; //type: string
                            YLeaf part_number; //type: string
                            YLeaf serial_number; //type: string
                            YLeaf date_code_number; //type: string
                            YLeaf clei_code_number; //type: string
                            YLeaf module_hardware_version_number; //type: uint16
                            YLeaf module_firmware_running_version_number; //type: uint16
                            YLeaf module_firmware_committed_version_number; //type: uint16
                            YLeaf vendorname; //type: string
                            YLeaf description; //type: string
                            YLeaf pid; //type: string
                            YLeaf vid; //type: string
                            YLeaf ctp_type; //type: uint32



                    }; // Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo


                    class InterfaceInfo : public Entity
                    {
                        public:
                            InterfaceInfo();
                            ~InterfaceInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf intf_count; //type: int32

                        class EthData : public Entity
                        {
                            public:
                                EthData();
                                ~EthData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ifname; //type: string
                                YLeaf intf_handle; //type: uint32
                                YLeaf admin_state; //type: boolean



                        }; // Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo::EthData> > eth_data;


                    }; // Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo


                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::CtpInfo> ctp_info;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData::InterfaceInfo> interface_info;


                }; // Coherent::Nodes::Node::Coherenthealth::PortData


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth::PortData> > port_data;


            }; // Coherent::Nodes::Node::Coherenthealth


            class PortModeAllInfo : public Entity
            {
                public:
                    PortModeAllInfo();
                    ~PortModeAllInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf num_entries; //type: uint32

                class PortmodeEntry : public Entity
                {
                    public:
                        PortmodeEntry();
                        ~PortmodeEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf intf_name; //type: string
                        YLeaf speed; //type: string
                        YLeaf fec; //type: string
                        YLeaf diff; //type: string
                        YLeaf modulation; //type: string



                }; // Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::PortModeAllInfo::PortmodeEntry> > portmode_entry;


            }; // Coherent::Nodes::Node::PortModeAllInfo


                std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::CoherentTimeStats> coherent_time_stats;
                std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Coherenthealth> coherenthealth;
                std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::Devicemapping> devicemapping;
                std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node::PortModeAllInfo> port_mode_all_info;


        }; // Coherent::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes::Node> > node;


    }; // Coherent::Nodes


        std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent::Nodes> nodes;


}; // Coherent



}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_NODE_OPER_ */

