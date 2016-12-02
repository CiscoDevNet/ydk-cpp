#ifndef _CISCO_IOS_XR_ATM_VCM_OPER_
#define _CISCO_IOS_XR_ATM_VCM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_atm_vcm_oper {

class AtmVcm : public Entity
{
    public:
        AtmVcm();
        ~AtmVcm();

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
                Value node_name; //type: string


            class Vcs : public Entity
            {
                public:
                    Vcs();
                    ~Vcs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vc : public Entity
                {
                    public:
                        Vc();
                        ~Vc();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value vpi; //type: uint32
                        Value vci; //type: uint32
                        Value main_interface; //type: string
                        Value sub_interface; //type: string
                        Value vc_interface; //type: string
                        Value vpi_xr; //type: uint16
                        Value vci_xr; //type: uint16
                        Value type; //type: VcEnum
                        Value encapsulation; //type: VcEncapEnum
                        Value shape; //type: VcTrafShapingEnum
                        Value peak_cell_rate; //type: uint32
                        Value sustained_cell_rate; //type: uint32
                        Value burst_rate; //type: uint32
                        Value encaps_inherit_level; //type: VcInheritLevelEnum
                        Value qos_inherit_level; //type: VcInheritLevelEnum
                        Value transmit_mtu; //type: uint32
                        Value receive_mtu; //type: uint32
                        Value vc_onvp_tunnel; //type: boolean
                        Value vc_on_p2p_sub_interface; //type: boolean
                        Value oper_status; //type: boolean
                        Value amin_status; //type: boolean
                        Value internal_state; //type: VcStateEnum
                        Value last_state_change_time; //type: uint32
                        Value test_mode; //type: VcTestModeEnum


                    class CellPackingData : public Entity
                    {
                        public:
                            CellPackingData();
                            ~CellPackingData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_max_cells_packed_per_packet; //type: uint16
                            Value negotiated_max_cells_packed_per_packet; //type: uint16
                            Value max_cell_packed_timeout; //type: uint16




                    }; // AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData> cell_packing_data;
                        class VcInheritLevelEnum;
                        class VcEncapEnum;
                        class VcStateEnum;
                        class VcInheritLevelEnum;
                        class VcTrafShapingEnum;
                        class VcTestModeEnum;
                        class VcEnum;


                }; // AtmVcm::Nodes::Node::Vcs::Vc


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs::Vc> > vc;


            }; // AtmVcm::Nodes::Node::Vcs


            class CellPacks : public Entity
            {
                public:
                    CellPacks();
                    ~CellPacks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CellPack : public Entity
                {
                    public:
                        CellPack();
                        ~CellPack();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value pci; //type: int32
                        Value sub_interface_name; //type: string
                        Value cell_packing_mode; //type: VcCellPackingModeEnum
                        Value vpi; //type: uint32
                        Value vci; //type: uint32
                        Value received_average_cells_packets; //type: uint64
                        Value sent_cells_packets; //type: uint64


                    class CellPacking : public Entity
                    {
                        public:
                            CellPacking();
                            ~CellPacking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_max_cells_packed_per_packet; //type: uint16
                            Value negotiated_max_cells_packed_per_packet; //type: uint16
                            Value max_cell_packed_timeout; //type: uint16




                    }; // AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking> cell_packing;
                        class VcCellPackingModeEnum;


                }; // AtmVcm::Nodes::Node::CellPacks::CellPack


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks::CellPack> > cell_pack;


            }; // AtmVcm::Nodes::Node::CellPacks


            class Pvps : public Entity
            {
                public:
                    Pvps();
                    ~Pvps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Pvp : public Entity
                {
                    public:
                        Pvp();
                        ~Pvp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value vpi; //type: int32
                        Value main_interface; //type: string
                        Value sub_interface; //type: string
                        Value vc_interface; //type: string
                        Value vpi_xr; //type: uint16
                        Value vci_xr; //type: uint16
                        Value type; //type: VcEnum
                        Value encapsulation; //type: VcEncapEnum
                        Value shape; //type: VcTrafShapingEnum
                        Value peak_cell_rate; //type: uint32
                        Value sustained_cell_rate; //type: uint32
                        Value burst_rate; //type: uint32
                        Value encaps_inherit_level; //type: VcInheritLevelEnum
                        Value qos_inherit_level; //type: VcInheritLevelEnum
                        Value transmit_mtu; //type: uint32
                        Value receive_mtu; //type: uint32
                        Value vc_onvp_tunnel; //type: boolean
                        Value vc_on_p2p_sub_interface; //type: boolean
                        Value oper_status; //type: boolean
                        Value amin_status; //type: boolean
                        Value internal_state; //type: VcStateEnum
                        Value last_state_change_time; //type: uint32
                        Value test_mode; //type: VcTestModeEnum


                    class CellPackingData : public Entity
                    {
                        public:
                            CellPackingData();
                            ~CellPackingData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_max_cells_packed_per_packet; //type: uint16
                            Value negotiated_max_cells_packed_per_packet; //type: uint16
                            Value max_cell_packed_timeout; //type: uint16




                    }; // AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData> cell_packing_data;
                        class VcInheritLevelEnum;
                        class VcEncapEnum;
                        class VcStateEnum;
                        class VcInheritLevelEnum;
                        class VcTrafShapingEnum;
                        class VcTestModeEnum;
                        class VcEnum;


                }; // AtmVcm::Nodes::Node::Pvps::Pvp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps::Pvp> > pvp;


            }; // AtmVcm::Nodes::Node::Pvps


            class ClassLinks : public Entity
            {
                public:
                    ClassLinks();
                    ~ClassLinks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ClassLink : public Entity
                {
                    public:
                        ClassLink();
                        ~ClassLink();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vpi; //type: int32
                        Value vci; //type: int32
                        Value sub_interface_name; //type: string


                    class VcClassNotSupported : public Entity
                    {
                        public:
                            VcClassNotSupported();
                            ~VcClassNotSupported();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value encapsulation_not_supported; //type: VcEncapEnum
                            Value not_supported_inherit_level; //type: VcInheritLevelEnum


                            class VcEncapEnum;
                            class VcInheritLevelEnum;


                    }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported


                    class OamConfig : public Entity
                    {
                        public:
                            OamConfig();
                            ~OamConfig();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ClassLinkShaping : public Entity
                        {
                            public:
                                ClassLinkShaping();
                                ~ClassLinkShaping();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value shaping_type; //type: VcTrafShapingEnum
                                Value peak_output_rate; //type: uint32
                                Value average_output_rate; //type: uint32
                                Value burst_output_rate; //type: uint32
                                Value shaping_inherit_level; //type: VcInheritLevelEnum


                                class VcInheritLevelEnum;
                                class VcTrafShapingEnum;


                        }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping


                        class ClassLinkEncapsulation : public Entity
                        {
                            public:
                                ClassLinkEncapsulation();
                                ~ClassLinkEncapsulation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value encapsulation_type; //type: VcEncapEnum
                                Value encapsulation_inherit_level; //type: VcInheritLevelEnum


                                class VcInheritLevelEnum;
                                class VcEncapEnum;


                        }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation


                        class OamPvc : public Entity
                        {
                            public:
                                OamPvc();
                                ~OamPvc();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value manage_level; //type: VcManageLevelEnum
                                Value pvc_frequency; //type: uint32
                                Value keep_vc_up; //type: boolean
                                Value ais_rdi_failure; //type: boolean
                                Value manage_inherit_level; //type: ClassLinkOamInheritLevelEnum


                                class ClassLinkOamInheritLevelEnum;
                                class VcManageLevelEnum;


                        }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc


                        class OamRetry : public Entity
                        {
                            public:
                                OamRetry();
                                ~OamRetry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value retry_up_count; //type: uint32
                                Value down_count; //type: uint32
                                Value retry_frequency; //type: uint32
                                Value retry_inherit_level; //type: ClassLinkOamInheritLevelEnum


                                class ClassLinkOamInheritLevelEnum;


                        }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry


                        class AisRdi : public Entity
                        {
                            public:
                                AisRdi();
                                ~AisRdi();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ais_rdi_up_count; //type: uint32
                                Value ais_rdi_up_time; //type: uint32
                                Value ais_rdi_inherit_level; //type: ClassLinkOamInheritLevelEnum


                                class ClassLinkOamInheritLevelEnum;


                        }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi


                            std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi> ais_rdi;
                            std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation> class_link_encapsulation;
                            std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping> class_link_shaping;
                            std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc> oam_pvc;
                            std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry> oam_retry;


                    }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig> oam_config;
                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported> vc_class_not_supported;


                }; // AtmVcm::Nodes::Node::ClassLinks::ClassLink


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink> > class_link;


            }; // AtmVcm::Nodes::Node::ClassLinks


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
                        Value ilmi_vpi; //type: uint32
                        Value ilmi_vci; //type: uint32
                        Value pvc_failures; //type: uint32
                        Value currently_failing_layer2pv_ps; //type: uint32
                        Value currently_failing_layer2pv_cs; //type: uint32
                        Value currently_failing_layer3vp_tunnels; //type: uint32
                        Value currently_failing_layer3pv_cs; //type: uint32
                        Value pvc_failures_trap_enable; //type: boolean
                        Value pvc_notification_interval; //type: uint32
                        Value configured_layer2pv_ps; //type: uint32
                        Value configured_layer2pv_cs; //type: uint32
                        Value configured_layer3vp_tunnels; //type: uint32
                        Value configured_layer3pv_cs; //type: uint32
                        Value port_type; //type: VcmPortEnum
                        Value main_interface; //type: string
                        Value l2_cell_packing_count; //type: uint16


                    class CellPackingData : public Entity
                    {
                        public:
                            CellPackingData();
                            ~CellPackingData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_max_cells_packed_per_packet; //type: uint16
                            Value negotiated_max_cells_packed_per_packet; //type: uint16
                            Value max_cell_packed_timeout; //type: uint16




                    }; // AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData> cell_packing_data;
                        class VcmPortEnum;


                }; // AtmVcm::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces::Interface> > interface;


            }; // AtmVcm::Nodes::Node::Interfaces


            class VpTunnels : public Entity
            {
                public:
                    VpTunnels();
                    ~VpTunnels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class VpTunnel : public Entity
                {
                    public:
                        VpTunnel();
                        ~VpTunnel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value vpi; //type: int32
                        Value main_interface; //type: string
                        Value vp_interface; //type: string
                        Value vpi_xr; //type: uint16
                        Value shape; //type: VpTrafShapingEnum
                        Value peak_cell_rate; //type: uint32
                        Value sustained_cell_rate; //type: uint32
                        Value burst_rate; //type: uint32
                        Value f4oam_enabled; //type: boolean
                        Value data_vc_count; //type: uint32
                        Value oper_status; //type: boolean
                        Value amin_status; //type: boolean
                        Value internal_state; //type: VpStateEnum
                        Value last_vp_state_change_time; //type: uint32


                        class VpStateEnum;
                        class VpTrafShapingEnum;


                }; // AtmVcm::Nodes::Node::VpTunnels::VpTunnel


                    std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::VpTunnels::VpTunnel> > vp_tunnel;


            }; // AtmVcm::Nodes::Node::VpTunnels


                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks> cell_packs;
                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks> class_links;
                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps> pvps;
                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs> vcs;
                std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::VpTunnels> vp_tunnels;


        }; // AtmVcm::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node> > node;


    }; // AtmVcm::Nodes


        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes> nodes;


}; // AtmVcm


class VcEnum : public Enum
{
    public:
        static const Enum::Value layer3_vc;
        static const Enum::Value layer2_vc;
        static const Enum::Value layer2_vp;
        static const Enum::Value vc_type_unknown;

};

class VcEncapEnum : public Enum
{
    public:
        static const Enum::Value ilmi;
        static const Enum::Value qsaal;
        static const Enum::Value snap;
        static const Enum::Value mux;
        static const Enum::Value nlpid;
        static const Enum::Value f4oam;
        static const Enum::Value aal0;
        static const Enum::Value aal5;
        static const Enum::Value encap_unknown;

};

class VcManageLevelEnum : public Enum
{
    public:
        static const Enum::Value manage;
        static const Enum::Value not_managed;

};

class VcTestModeEnum : public Enum
{
    public:
        static const Enum::Value test_mode_none;
        static const Enum::Value loop;
        static const Enum::Value reserved;

};

class VpTrafShapingEnum : public Enum
{
    public:
        static const Enum::Value vp_cbr;
        static const Enum::Value vp_vbr_nrt;
        static const Enum::Value vp_vbr_rt;
        static const Enum::Value vp_abr;
        static const Enum::Value vp_ubr_plus;
        static const Enum::Value vp_ubr;
        static const Enum::Value vp_traf_shaping_unknown;

};

class VcStateEnum : public Enum
{
    public:
        static const Enum::Value initialized;
        static const Enum::Value modifying;
        static const Enum::Value modified;
        static const Enum::Value activating;
        static const Enum::Value activated;
        static const Enum::Value not_verified;
        static const Enum::Value ready;
        static const Enum::Value deactivating;
        static const Enum::Value inactive;
        static const Enum::Value deleting;
        static const Enum::Value deleted;
        static const Enum::Value state_unknown;

};

class ClassLinkOamInheritLevelEnum : public Enum
{
    public:
        static const Enum::Value vc_configured_onvc;
        static const Enum::Value vc_class_onvc;
        static const Enum::Value vc_class_on_sub_interface;
        static const Enum::Value vc_class_on_main_interface;
        static const Enum::Value vc_global_default;
        static const Enum::Value vc_inherit_level_unknown;

};

class VpStateEnum : public Enum
{
    public:
        static const Enum::Value vp_initialized;
        static const Enum::Value vp_modifying;
        static const Enum::Value vp_ready;
        static const Enum::Value vp_mgd_down;
        static const Enum::Value vp_deleting;
        static const Enum::Value vp_deleted;
        static const Enum::Value vp_state_unknown;

};

class VcTrafShapingEnum : public Enum
{
    public:
        static const Enum::Value cbr;
        static const Enum::Value vbr_nrt;
        static const Enum::Value vbr_rt;
        static const Enum::Value abr;
        static const Enum::Value ubr_plus;
        static const Enum::Value ubr;
        static const Enum::Value traf_shaping_unknown;

};

class VcCellPackingModeEnum : public Enum
{
    public:
        static const Enum::Value vp;
        static const Enum::Value vc;
        static const Enum::Value port_mode;

};

class VcmPortEnum : public Enum
{
    public:
        static const Enum::Value port_type_layer_2;
        static const Enum::Value port_type_layer_3;
        static const Enum::Value port_type_unknown;

};

class VcInheritLevelEnum : public Enum
{
    public:
        static const Enum::Value directly_configured_onvc;
        static const Enum::Value vc_class_configured_onvc;
        static const Enum::Value vc_class_configured_on_sub_interface;
        static const Enum::Value vc_class_configured_on_main_interface;
        static const Enum::Value global_default;
        static const Enum::Value unknown;
        static const Enum::Value not_supported;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_OPER_ */

