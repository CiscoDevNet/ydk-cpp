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


                YLeaf node_name; //type: string

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


                        YLeaf interface_name; //type: string
                        YLeaf vpi; //type: uint32
                        YLeaf vci; //type: uint32
                        YLeaf main_interface; //type: string
                        YLeaf sub_interface; //type: string
                        YLeaf vc_interface; //type: string
                        YLeaf vpi_xr; //type: uint16
                        YLeaf vci_xr; //type: uint16
                        YLeaf type; //type: VcEnum
                        YLeaf encapsulation; //type: VcEncapEnum
                        YLeaf shape; //type: VcTrafShapingEnum
                        YLeaf peak_cell_rate; //type: uint32
                        YLeaf sustained_cell_rate; //type: uint32
                        YLeaf burst_rate; //type: uint32
                        YLeaf encaps_inherit_level; //type: VcInheritLevelEnum
                        YLeaf qos_inherit_level; //type: VcInheritLevelEnum
                        YLeaf transmit_mtu; //type: uint32
                        YLeaf receive_mtu; //type: uint32
                        YLeaf vc_onvp_tunnel; //type: boolean
                        YLeaf vc_on_p2p_sub_interface; //type: boolean
                        YLeaf oper_status; //type: boolean
                        YLeaf amin_status; //type: boolean
                        YLeaf internal_state; //type: VcStateEnum
                        YLeaf last_state_change_time; //type: uint32
                        YLeaf test_mode; //type: VcTestModeEnum

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


                            YLeaf local_max_cells_packed_per_packet; //type: uint16
                            YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
                            YLeaf max_cell_packed_timeout; //type: uint16



                    }; // AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData> cell_packing_data;


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


                        YLeaf interface_name; //type: string
                        YLeaf pci; //type: int32
                        YLeaf sub_interface_name; //type: string
                        YLeaf cell_packing_mode; //type: VcCellPackingModeEnum
                        YLeaf vpi; //type: uint32
                        YLeaf vci; //type: uint32
                        YLeaf received_average_cells_packets; //type: uint64
                        YLeaf sent_cells_packets; //type: uint64

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


                            YLeaf local_max_cells_packed_per_packet; //type: uint16
                            YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
                            YLeaf max_cell_packed_timeout; //type: uint16



                    }; // AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking> cell_packing;


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


                        YLeaf interface_name; //type: string
                        YLeaf vpi; //type: int32
                        YLeaf main_interface; //type: string
                        YLeaf sub_interface; //type: string
                        YLeaf vc_interface; //type: string
                        YLeaf vpi_xr; //type: uint16
                        YLeaf vci_xr; //type: uint16
                        YLeaf type; //type: VcEnum
                        YLeaf encapsulation; //type: VcEncapEnum
                        YLeaf shape; //type: VcTrafShapingEnum
                        YLeaf peak_cell_rate; //type: uint32
                        YLeaf sustained_cell_rate; //type: uint32
                        YLeaf burst_rate; //type: uint32
                        YLeaf encaps_inherit_level; //type: VcInheritLevelEnum
                        YLeaf qos_inherit_level; //type: VcInheritLevelEnum
                        YLeaf transmit_mtu; //type: uint32
                        YLeaf receive_mtu; //type: uint32
                        YLeaf vc_onvp_tunnel; //type: boolean
                        YLeaf vc_on_p2p_sub_interface; //type: boolean
                        YLeaf oper_status; //type: boolean
                        YLeaf amin_status; //type: boolean
                        YLeaf internal_state; //type: VcStateEnum
                        YLeaf last_state_change_time; //type: uint32
                        YLeaf test_mode; //type: VcTestModeEnum

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


                            YLeaf local_max_cells_packed_per_packet; //type: uint16
                            YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
                            YLeaf max_cell_packed_timeout; //type: uint16



                    }; // AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData> cell_packing_data;


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


                        YLeaf vpi; //type: int32
                        YLeaf vci; //type: int32
                        YLeaf sub_interface_name; //type: string

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


                            YLeaf encapsulation_not_supported; //type: VcEncapEnum
                            YLeaf not_supported_inherit_level; //type: VcInheritLevelEnum



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


                                YLeaf shaping_type; //type: VcTrafShapingEnum
                                YLeaf peak_output_rate; //type: uint32
                                YLeaf average_output_rate; //type: uint32
                                YLeaf burst_output_rate; //type: uint32
                                YLeaf shaping_inherit_level; //type: VcInheritLevelEnum



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


                                YLeaf encapsulation_type; //type: VcEncapEnum
                                YLeaf encapsulation_inherit_level; //type: VcInheritLevelEnum



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


                                YLeaf manage_level; //type: VcManageLevelEnum
                                YLeaf pvc_frequency; //type: uint32
                                YLeaf keep_vc_up; //type: boolean
                                YLeaf ais_rdi_failure; //type: boolean
                                YLeaf manage_inherit_level; //type: ClassLinkOamInheritLevelEnum



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


                                YLeaf retry_up_count; //type: uint32
                                YLeaf down_count; //type: uint32
                                YLeaf retry_frequency; //type: uint32
                                YLeaf retry_inherit_level; //type: ClassLinkOamInheritLevelEnum



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


                                YLeaf ais_rdi_up_count; //type: uint32
                                YLeaf ais_rdi_up_time; //type: uint32
                                YLeaf ais_rdi_inherit_level; //type: ClassLinkOamInheritLevelEnum



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


                        YLeaf interface_name; //type: string
                        YLeaf ilmi_vpi; //type: uint32
                        YLeaf ilmi_vci; //type: uint32
                        YLeaf pvc_failures; //type: uint32
                        YLeaf currently_failing_layer2pv_ps; //type: uint32
                        YLeaf currently_failing_layer2pv_cs; //type: uint32
                        YLeaf currently_failing_layer3vp_tunnels; //type: uint32
                        YLeaf currently_failing_layer3pv_cs; //type: uint32
                        YLeaf pvc_failures_trap_enable; //type: boolean
                        YLeaf pvc_notification_interval; //type: uint32
                        YLeaf configured_layer2pv_ps; //type: uint32
                        YLeaf configured_layer2pv_cs; //type: uint32
                        YLeaf configured_layer3vp_tunnels; //type: uint32
                        YLeaf configured_layer3pv_cs; //type: uint32
                        YLeaf port_type; //type: VcmPortEnum
                        YLeaf main_interface; //type: string
                        YLeaf l2_cell_packing_count; //type: uint16

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


                            YLeaf local_max_cells_packed_per_packet; //type: uint16
                            YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
                            YLeaf max_cell_packed_timeout; //type: uint16



                    }; // AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData


                        std::unique_ptr<Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData> cell_packing_data;


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


                        YLeaf interface_name; //type: string
                        YLeaf vpi; //type: int32
                        YLeaf main_interface; //type: string
                        YLeaf vp_interface; //type: string
                        YLeaf vpi_xr; //type: uint16
                        YLeaf shape; //type: VpTrafShapingEnum
                        YLeaf peak_cell_rate; //type: uint32
                        YLeaf sustained_cell_rate; //type: uint32
                        YLeaf burst_rate; //type: uint32
                        YLeaf f4oam_enabled; //type: boolean
                        YLeaf data_vc_count; //type: uint32
                        YLeaf oper_status; //type: boolean
                        YLeaf amin_status; //type: boolean
                        YLeaf internal_state; //type: VpStateEnum
                        YLeaf last_vp_state_change_time; //type: uint32



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
        static const Enum::YLeaf layer3_vc;
        static const Enum::YLeaf layer2_vc;
        static const Enum::YLeaf layer2_vp;
        static const Enum::YLeaf vc_type_unknown;

};

class VcEncapEnum : public Enum
{
    public:
        static const Enum::YLeaf ilmi;
        static const Enum::YLeaf qsaal;
        static const Enum::YLeaf snap;
        static const Enum::YLeaf mux;
        static const Enum::YLeaf nlpid;
        static const Enum::YLeaf f4oam;
        static const Enum::YLeaf aal0;
        static const Enum::YLeaf aal5;
        static const Enum::YLeaf encap_unknown;

};

class VcManageLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf manage;
        static const Enum::YLeaf not_managed;

};

class VcTestModeEnum : public Enum
{
    public:
        static const Enum::YLeaf test_mode_none;
        static const Enum::YLeaf loop;
        static const Enum::YLeaf reserved;

};

class VpTrafShapingEnum : public Enum
{
    public:
        static const Enum::YLeaf vp_cbr;
        static const Enum::YLeaf vp_vbr_nrt;
        static const Enum::YLeaf vp_vbr_rt;
        static const Enum::YLeaf vp_abr;
        static const Enum::YLeaf vp_ubr_plus;
        static const Enum::YLeaf vp_ubr;
        static const Enum::YLeaf vp_traf_shaping_unknown;

};

class VcStateEnum : public Enum
{
    public:
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf modifying;
        static const Enum::YLeaf modified;
        static const Enum::YLeaf activating;
        static const Enum::YLeaf activated;
        static const Enum::YLeaf not_verified;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf deactivating;
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf deleting;
        static const Enum::YLeaf deleted;
        static const Enum::YLeaf state_unknown;

};

class ClassLinkOamInheritLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf vc_configured_onvc;
        static const Enum::YLeaf vc_class_onvc;
        static const Enum::YLeaf vc_class_on_sub_interface;
        static const Enum::YLeaf vc_class_on_main_interface;
        static const Enum::YLeaf vc_global_default;
        static const Enum::YLeaf vc_inherit_level_unknown;

};

class VpStateEnum : public Enum
{
    public:
        static const Enum::YLeaf vp_initialized;
        static const Enum::YLeaf vp_modifying;
        static const Enum::YLeaf vp_ready;
        static const Enum::YLeaf vp_mgd_down;
        static const Enum::YLeaf vp_deleting;
        static const Enum::YLeaf vp_deleted;
        static const Enum::YLeaf vp_state_unknown;

};

class VcTrafShapingEnum : public Enum
{
    public:
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf vbr_nrt;
        static const Enum::YLeaf vbr_rt;
        static const Enum::YLeaf abr;
        static const Enum::YLeaf ubr_plus;
        static const Enum::YLeaf ubr;
        static const Enum::YLeaf traf_shaping_unknown;

};

class VcCellPackingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf vp;
        static const Enum::YLeaf vc;
        static const Enum::YLeaf port_mode;

};

class VcmPortEnum : public Enum
{
    public:
        static const Enum::YLeaf port_type_layer_2;
        static const Enum::YLeaf port_type_layer_3;
        static const Enum::YLeaf port_type_unknown;

};

class VcInheritLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf directly_configured_onvc;
        static const Enum::YLeaf vc_class_configured_onvc;
        static const Enum::YLeaf vc_class_configured_on_sub_interface;
        static const Enum::YLeaf vc_class_configured_on_main_interface;
        static const Enum::YLeaf global_default;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf not_supported;

};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_OPER_ */

