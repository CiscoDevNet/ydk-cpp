#ifndef _CISCO_IOS_XR_PFI_IM_CMD_OPER_
#define _CISCO_IOS_XR_PFI_IM_CMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pfi_im_cmd_oper {

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
        std::unique_ptr<Entity> clone_ptr() override;



    class InterfaceXr : public Entity
    {
        public:
            InterfaceXr();
            ~InterfaceXr();

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
                YLeaf interface_handle; //type: string
                YLeaf interface_type; //type: string
                YLeaf hardware_type_string; //type: string
                YLeaf state; //type: ImStateEnumEnum
                YLeaf line_state; //type: ImStateEnumEnum
                YLeaf encapsulation; //type: string
                YLeaf encapsulation_type_string; //type: string
                YLeaf mtu; //type: uint32
                YLeaf is_l2_transport_enabled; //type: boolean
                YLeaf state_transition_count; //type: uint32
                YLeaf last_state_transition_time; //type: uint32
                YLeaf is_dampening_enabled; //type: boolean
                YLeaf speed; //type: uint32
                YLeaf crc_length; //type: uint32
                YLeaf is_scramble_enabled; //type: boolean
                YLeaf duplexity; //type: ImAttrDuplexEnum
                YLeaf media_type; //type: ImAttrMediaEnum
                YLeaf link_type; //type: ImAttrLinkEnum
                YLeaf in_flow_control; //type: ImAttrFlowControlEnum
                YLeaf out_flow_control; //type: ImAttrFlowControlEnum
                YLeaf bandwidth; //type: uint32
                YLeaf max_bandwidth; //type: uint32
                YLeaf keepalive; //type: uint32
                YLeaf is_l2_looped; //type: boolean
                YLeaf parent_interface_name; //type: string
                YLeaf loopback_configuration; //type: ImCmdLoopbackEnumEnum
                YLeaf description; //type: string
                YLeaf is_maintenance_enabled; //type: boolean
                YLeaf is_data_inverted; //type: boolean
                YLeaf transport_mode; //type: ImAttrTransportModeEnum
                YLeaf if_index; //type: uint32

            class DampeningInformation : public Entity
            {
                public:
                    DampeningInformation();
                    ~DampeningInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf penalty; //type: uint32
                    YLeaf is_suppressed_enabled; //type: boolean
                    YLeaf seconds_remaining; //type: uint32
                    YLeaf half_life; //type: uint32
                    YLeaf reuse_threshold; //type: uint32
                    YLeaf suppress_threshold; //type: uint32
                    YLeaf maximum_suppress_time; //type: uint32
                    YLeaf restart_penalty; //type: uint32



            }; // Interfaces::InterfaceXr::Interface::DampeningInformation


            class MacAddress : public Entity
            {
                public:
                    MacAddress();
                    ~MacAddress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf address; //type: string



            }; // Interfaces::InterfaceXr::Interface::MacAddress


            class BurnedInAddress : public Entity
            {
                public:
                    BurnedInAddress();
                    ~BurnedInAddress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf address; //type: string



            }; // Interfaces::InterfaceXr::Interface::BurnedInAddress


            class CarrierDelay : public Entity
            {
                public:
                    CarrierDelay();
                    ~CarrierDelay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf carrier_delay_up; //type: uint32
                    YLeaf carrier_delay_down; //type: uint32



            }; // Interfaces::InterfaceXr::Interface::CarrierDelay


            class ArpInformation : public Entity
            {
                public:
                    ArpInformation();
                    ~ArpInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf arp_timeout; //type: uint32
                    YLeaf arp_type_name; //type: string
                    YLeaf arp_is_learning_disabled; //type: boolean



            }; // Interfaces::InterfaceXr::Interface::ArpInformation


            class IpInformation : public Entity
            {
                public:
                    IpInformation();
                    ~IpInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ip_address; //type: string
                    YLeaf subnet_mask_length; //type: uint32



            }; // Interfaces::InterfaceXr::Interface::IpInformation


            class EncapsulationInformation : public Entity
            {
                public:
                    EncapsulationInformation();
                    ~EncapsulationInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf encapsulation_type; //type: ImCmdEncapsEnumEnum

                class FrameRelayInformation : public Entity
                {
                    public:
                        FrameRelayInformation();
                        ~FrameRelayInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf fr_encapsulation_type; //type: ImCmdFrTypeEnumEnum
                        YLeaf lmi_type; //type: ImCmdLmiTypeEnumEnum
                        YLeaf lmidlci; //type: uint32
                        YLeaf is_nni; //type: boolean
                        YLeaf is_dte; //type: boolean
                        YLeaf is_lmi_up; //type: boolean
                        YLeaf is_lmi_nni_dce_up; //type: boolean
                        YLeaf is_lmi_enabled; //type: boolean
                        YLeaf enquiries_received; //type: uint32
                        YLeaf enquiries_sent; //type: uint32
                        YLeaf status_received; //type: uint32
                        YLeaf status_sent; //type: uint32
                        YLeaf update_status_received; //type: uint32
                        YLeaf update_status_sent; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation


                class Dot1QInformation : public Entity
                {
                    public:
                        Dot1QInformation();
                        ~Dot1QInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class EncapsulationDetails : public Entity
                    {
                        public:
                            EncapsulationDetails();
                            ~EncapsulationDetails();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf vlan_encapsulation; //type: VlanEncapsEnum
                            YLeaf tag; //type: uint16
                            YLeaf outer_tag; //type: uint16
                            YLeaf native_tag; //type: uint16
                            YLeaf dot1ad_tag; //type: uint16
                            YLeaf dot1ad_native_tag; //type: uint16
                            YLeaf dot1ad_outer_tag; //type: uint16

                        class Stack : public Entity
                        {
                            public:
                                Stack();
                                ~Stack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf outer_tag; //type: uint16
                                YLeaf second_tag; //type: uint16



                        }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack


                        class ServiceInstanceDetails : public Entity
                        {
                            public:
                                ServiceInstanceDetails();
                                ~ServiceInstanceDetails();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf payload_ethertype; //type: EfpPayloadEtypeEnum
                                YLeaf tags_popped; //type: uint16
                                YLeaf is_exact_match; //type: int32
                                YLeaf is_native_vlan; //type: int32
                                YLeaf is_native_preserving; //type: int32
                                YLeaf source_mac_match; //type: string
                                YLeaf destination_mac_match; //type: string

                            class LocalTrafficStack : public Entity
                            {
                                public:
                                    LocalTrafficStack();
                                    ~LocalTrafficStack();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class LocalTrafficTag : public Entity
                                {
                                    public:
                                        LocalTrafficTag();
                                        ~LocalTrafficTag();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf ethertype; //type: EfpTagEtypeEnum
                                        YLeaf vlan_id; //type: uint16



                                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag> > local_traffic_tag;


                            }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


                            class TagsToMatch : public Entity
                            {
                                public:
                                    TagsToMatch();
                                    ~TagsToMatch();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf ethertype; //type: EfpTagEtypeEnum
                                    YLeaf priority; //type: EfpTagPriorityEnum

                                class VlanRange : public Entity
                                {
                                    public:
                                        VlanRange();
                                        ~VlanRange();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf vlan_id_low; //type: uint16
                                        YLeaf vlan_id_high; //type: uint16



                                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;


                            }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


                            class Pushe : public Entity
                            {
                                public:
                                    Pushe();
                                    ~Pushe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf ethertype; //type: EfpTagEtypeEnum
                                    YLeaf vlan_id; //type: uint16



                            }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe


                                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;


                        }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails


                        class Dot1AdDot1QStack : public Entity
                        {
                            public:
                                Dot1AdDot1QStack();
                                ~Dot1AdDot1QStack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf outer_tag; //type: uint16
                                YLeaf second_tag; //type: uint16



                        }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack> stack;


                    }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails> encapsulation_details;


                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation


                class PppInformation : public Entity
                {
                    public:
                        PppInformation();
                        ~PppInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lcp_state; //type: PppFsmStateEnum
                        YLeaf is_loopback_detected; //type: int32
                        YLeaf keepalive_period; //type: uint32
                        YLeaf is_mp_bundle_member; //type: int32
                        YLeaf is_multilink_open; //type: int32

                    class NcpInfoArray : public Entity
                    {
                        public:
                            NcpInfoArray();
                            ~NcpInfoArray();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ncp_state; //type: PppFsmStateEnum
                            YLeaf ncp_identifier; //type: NcpIdentEnum



                    }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray> > ncp_info_array;


                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation> dot1q_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation> frame_relay_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation> ppp_information;


            }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation


            class InterfaceTypeInformation : public Entity
            {
                public:
                    InterfaceTypeInformation();
                    ~InterfaceTypeInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interface_type_info; //type: ImCmdIntfTypeEnumEnum

                class SrpInformation : public Entity
                {
                    public:
                        SrpInformation();
                        ~SrpInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SrpInformation_ : public Entity
                    {
                        public:
                            SrpInformation_();
                            ~SrpInformation_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class IpsInfo : public Entity
                        {
                            public:
                                IpsInfo();
                                ~IpsInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_admin_down; //type: int32

                            class LocalInformation : public Entity
                            {
                                public:
                                    LocalInformation();
                                    ~LocalInformation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mac_address; //type: string
                                    YLeaf is_inter_card_bus_enabled; //type: int32
                                    YLeaf wtr_timer_period; //type: uint32

                                class SideA : public Entity
                                {
                                    public:
                                        SideA();
                                        ~SideA();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mac_address; //type: string
                                        YLeaf wrap_state; //type: SrpMgmtIpsWrapStateEnum
                                        YLeaf packet_sent_timer; //type: uint32
                                        YLeaf send_timer_time_remaining; //type: uint32
                                        YLeaf wtr_timer_remaining; //type: uint32
                                        YLeaf self_detected_request; //type: SrpMgmtIpsReqEnum
                                        YLeaf remote_request; //type: SrpMgmtIpsReqEnum
                                        YLeaf rx_neighbor_mac_address; //type: string
                                        YLeaf rx_message_type; //type: SrpMgmtIpsReqEnum
                                        YLeaf rx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        YLeaf rx_ttl; //type: uint32
                                        YLeaf rx_packet_test; //type: int32
                                        YLeaf tx_neighbor_mac_address; //type: string
                                        YLeaf tx_message_type; //type: SrpMgmtIpsReqEnum
                                        YLeaf tx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        YLeaf tx_ttl; //type: uint32
                                        YLeaf tx_packet_test; //type: int32
                                        YLeaf delay_keep_alive_trigger; //type: uint32

                                    class AssertedFailure : public Entity
                                    {
                                        public:
                                            AssertedFailure();
                                            ~AssertedFailure();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf type; //type: SrpMgmtFailureEtEnum
                                            YLeaf reported_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf debounced_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf current_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf stable_time; //type: uint64
                                            YLeaf debounced_delay; //type: uint32



                                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure> > asserted_failure;


                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA


                                class SideB : public Entity
                                {
                                    public:
                                        SideB();
                                        ~SideB();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mac_address; //type: string
                                        YLeaf wrap_state; //type: SrpMgmtIpsWrapStateEnum
                                        YLeaf packet_sent_timer; //type: uint32
                                        YLeaf send_timer_time_remaining; //type: uint32
                                        YLeaf wtr_timer_remaining; //type: uint32
                                        YLeaf self_detected_request; //type: SrpMgmtIpsReqEnum
                                        YLeaf remote_request; //type: SrpMgmtIpsReqEnum
                                        YLeaf rx_neighbor_mac_address; //type: string
                                        YLeaf rx_message_type; //type: SrpMgmtIpsReqEnum
                                        YLeaf rx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        YLeaf rx_ttl; //type: uint32
                                        YLeaf rx_packet_test; //type: int32
                                        YLeaf tx_neighbor_mac_address; //type: string
                                        YLeaf tx_message_type; //type: SrpMgmtIpsReqEnum
                                        YLeaf tx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        YLeaf tx_ttl; //type: uint32
                                        YLeaf tx_packet_test; //type: int32
                                        YLeaf delay_keep_alive_trigger; //type: uint32

                                    class AssertedFailure : public Entity
                                    {
                                        public:
                                            AssertedFailure();
                                            ~AssertedFailure();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf type; //type: SrpMgmtFailureEtEnum
                                            YLeaf reported_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf debounced_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf current_state; //type: SrpMgmtFailureStateEtEnum
                                            YLeaf stable_time; //type: uint64
                                            YLeaf debounced_delay; //type: uint32



                                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure> > asserted_failure;


                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB


                                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA> side_a;
                                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB> side_b;


                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation> > local_information;


                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo


                        class TopologyInfo : public Entity
                        {
                            public:
                                TopologyInfo();
                                ~TopologyInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_admin_down; //type: int32

                            class LocalInformation : public Entity
                            {
                                public:
                                    LocalInformation();
                                    ~LocalInformation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf topology_timer; //type: uint32
                                    YLeaf next_topology_packet_delay; //type: uint32
                                    YLeaf time_since_last_topology_packet_received; //type: uint32
                                    YLeaf time_since_last_topology_change; //type: uint32
                                    YLeaf number_of_nodes_on_ring; //type: uint16

                                class RingNode : public Entity
                                {
                                    public:
                                        RingNode();
                                        ~RingNode();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf hop_count; //type: uint16
                                        YLeaf mac_address; //type: string
                                        YLeaf ipv4_address; //type: string
                                        YLeaf is_wrapped; //type: int32
                                        YLeaf is_srr_supported; //type: int32
                                        YLeaf node_name; //type: string



                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode> > ring_node;


                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation> > local_information;


                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo


                        class SrrInfo : public Entity
                        {
                            public:
                                SrrInfo();
                                ~SrrInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_admin_down; //type: int32
                                YLeaf is_srr_enabled; //type: int32

                            class SrrDetailedInfo : public Entity
                            {
                                public:
                                    SrrDetailedInfo();
                                    ~SrrDetailedInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf version_number; //type: uint32
                                    YLeaf is_wrong_version_received; //type: int32
                                    YLeaf last_wrong_version_receive_time; //type: uint32
                                    YLeaf mac_address; //type: string
                                    YLeaf node_state; //type: SrpMgmtSrrNodeStateEnum
                                    YLeaf is_outer_ring_in_use; //type: int32
                                    YLeaf is_inner_ring_in_use; //type: int32
                                    YLeaf is_announce; //type: int32
                                    YLeaf outer_fail_type; //type: SrpMgmtSrrFailureEnum
                                    YLeaf inner_fail_type; //type: SrpMgmtSrrFailureEnum
                                    YLeaf packet_send_timer; //type: uint32
                                    YLeaf next_srr_packet_send_time; //type: uint32
                                    YLeaf single_ring_bw; //type: uint32
                                    YLeaf wtr_time; //type: uint32
                                    YLeaf wtr_timer_remaining_outer_ring; //type: uint32
                                    YLeaf wtr_timer_remaining_inner_ring; //type: uint32

                                class NodesOnRing : public Entity
                                {
                                    public:
                                        NodesOnRing();
                                        ~NodesOnRing();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf node_name; //type: string
                                        YLeaf srr_entry_exits; //type: int32
                                        YLeaf mac_address; //type: string
                                        YLeaf outer_failure; //type: SrpMgmtSrrFailureEnum
                                        YLeaf inner_failure; //type: SrpMgmtSrrFailureEnum
                                        YLeaf is_last_announce_received; //type: int32
                                        YLeaf last_announce_received_time; //type: uint32



                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing


                                class NodesNotOnRing : public Entity
                                {
                                    public:
                                        NodesNotOnRing();
                                        ~NodesNotOnRing();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf node_name; //type: string
                                        YLeaf srr_entry_exits; //type: int32
                                        YLeaf mac_address; //type: string
                                        YLeaf outer_failure; //type: SrpMgmtSrrFailureEnum
                                        YLeaf inner_failure; //type: SrpMgmtSrrFailureEnum
                                        YLeaf is_last_announce_received; //type: int32
                                        YLeaf last_announce_received_time; //type: uint32



                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing> > nodes_not_on_ring;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing> > nodes_on_ring;


                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo> > srr_detailed_info;


                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo


                        class RateLimitInfo : public Entity
                        {
                            public:
                                RateLimitInfo();
                                ~RateLimitInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_admin_down; //type: int32

                            class RateLimitDetailedInfo : public Entity
                            {
                                public:
                                    RateLimitDetailedInfo();
                                    ~RateLimitDetailedInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf min_priority_value; //type: uint16



                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo> > rate_limit_detailed_info;


                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo> ips_info;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo> rate_limit_info;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo> srr_info;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo> topology_info;


                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_


                    class SrpStatistics : public Entity
                    {
                        public:
                            SrpStatistics();
                            ~SrpStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf data_rate_interval; //type: uint32

                        class SideADataRate : public Entity
                        {
                            public:
                                SideADataRate();
                                ~SideADataRate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf bit_rate_sent; //type: uint32
                                YLeaf packet_rate_sent; //type: uint32
                                YLeaf bit_rate_received; //type: uint32
                                YLeaf packet_rate_received; //type: uint32



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate


                        class SideBDataRate : public Entity
                        {
                            public:
                                SideBDataRate();
                                ~SideBDataRate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf bit_rate_sent; //type: uint32
                                YLeaf packet_rate_sent; //type: uint32
                                YLeaf bit_rate_received; //type: uint32
                                YLeaf packet_rate_received; //type: uint32



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate


                        class SideAErrors : public Entity
                        {
                            public:
                                SideAErrors();
                                ~SideAErrors();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf error_packets_received; //type: uint32
                                YLeaf crc_errors; //type: uint32
                                YLeaf input_insufficient_resource_events; //type: uint32
                                YLeaf mac_aborts_received; //type: uint32
                                YLeaf mac_runt_packets_received; //type: uint32
                                YLeaf mac_giant_packets_received; //type: uint32
                                YLeaf framer_runt_packets_received; //type: uint32
                                YLeaf framer_giant_packets_received; //type: uint32
                                YLeaf framer_aborts_received; //type: uint32



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors


                        class SideBErrors : public Entity
                        {
                            public:
                                SideBErrors();
                                ~SideBErrors();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf error_packets_received; //type: uint32
                                YLeaf crc_errors; //type: uint32
                                YLeaf input_insufficient_resource_events; //type: uint32
                                YLeaf mac_aborts_received; //type: uint32
                                YLeaf mac_runt_packets_received; //type: uint32
                                YLeaf mac_giant_packets_received; //type: uint32
                                YLeaf framer_runt_packets_received; //type: uint32
                                YLeaf framer_giant_packets_received; //type: uint32
                                YLeaf framer_aborts_received; //type: uint32



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate> side_a_data_rate;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors> side_a_errors;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate> side_b_data_rate;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors> side_b_errors;


                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_> srp_information;
                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics> srp_statistics;


                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation


                class TunnelInformation : public Entity
                {
                    public:
                        TunnelInformation();
                        ~TunnelInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf source_name; //type: string
                        YLeaf source_ipv4_address; //type: string
                        YLeaf destination_ipv4_address; //type: string
                        YLeaf tunnel_type; //type: string
                        YLeaf key; //type: uint32
                        YLeaf ttl; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation


                class BundleInformation : public Entity
                {
                    public:
                        BundleInformation();
                        ~BundleInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Member : public Entity
                    {
                        public:
                            Member();
                            ~Member();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth; //type: uint32
                            YLeaf port_priority; //type: uint16
                            YLeaf port_number; //type: uint16
                            YLeaf underlying_link_id; //type: uint16
                            YLeaf link_order_number; //type: uint16
                            YLeaf interface_name; //type: string
                            YLeaf iccp_node; //type: uint32
                            YLeaf member_type; //type: BmdMemberTypeEnumEnum
                            YLeaf member_name; //type: string

                        class Counters : public Entity
                        {
                            public:
                                Counters();
                                ~Counters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf lacpd_us_received; //type: uint32
                                YLeaf lacpd_us_transmitted; //type: uint32
                                YLeaf marker_packets_received; //type: uint32
                                YLeaf marker_responses_transmitted; //type: uint32
                                YLeaf illegal_packets_received; //type: uint32
                                YLeaf excess_lacpd_us_received; //type: uint32
                                YLeaf excess_marker_packets_received; //type: uint32
                                YLeaf defaulted; //type: uint32
                                YLeaf expired; //type: uint32
                                YLeaf last_cleared_sec; //type: uint32
                                YLeaf last_cleared_nsec; //type: uint32



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters


                        class LinkData : public Entity
                        {
                            public:
                                LinkData();
                                ~LinkData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf interface_handle; //type: string
                                YLeaf actor_system_priority; //type: uint16
                                YLeaf actor_system_mac_address; //type: string
                                YLeaf actor_operational_key; //type: uint16
                                YLeaf partner_system_priority; //type: uint16
                                YLeaf partner_system_mac_address; //type: string
                                YLeaf partner_operational_key; //type: uint16
                                YLeaf selected_aggregator_id; //type: uint32
                                YLeaf attached_aggregator_id; //type: uint32
                                YLeaf actor_port_id; //type: uint16
                                YLeaf actor_port_priority; //type: uint16
                                YLeaf partner_port_id; //type: uint16
                                YLeaf partner_port_priority; //type: uint16
                                YLeaf actor_port_state; //type: uint8
                                YLeaf partner_port_state; //type: uint8



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData


                        class MemberMuxData : public Entity
                        {
                            public:
                                MemberMuxData();
                                ~MemberMuxData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mux_state; //type: BmMuxstateEnum
                                YLeaf error; //type: uint32
                                YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
                                YLeaf member_state; //type: BmdMemberStateEnum
                                YLeaf mux_state_reason; //type: BmMuxreasonEnum

                            class MemberMuxStateReasonData : public Entity
                            {
                                public:
                                    MemberMuxStateReasonData();
                                    ~MemberMuxStateReasonData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf reason_type; //type: BmStateReasonTargetEnum
                                    YLeaf severity; //type: BmSeverityEnum



                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData


                                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;


                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf address; //type: string



                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters> counters;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData> link_data;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress> mac_address;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData> member_mux_data;


                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member> > member;


                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation


                class SerialInformation : public Entity
                {
                    public:
                        SerialInformation();
                        ~SerialInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf timeslots; //type: string



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation


                class SonetPosInformation : public Entity
                {
                    public:
                        SonetPosInformation();
                        ~SonetPosInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf aps_state; //type: SonetApsEtEnum



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation


                class TunnelGreInformation : public Entity
                {
                    public:
                        TunnelGreInformation();
                        ~TunnelGreInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf source_name; //type: string
                        YLeaf tunnel_tos; //type: uint32
                        YLeaf tunnel_ttl; //type: uint32
                        YLeaf key; //type: uint32
                        YLeaf keepalive_period; //type: uint16
                        YLeaf keepalive_maximum_retry; //type: uint8
                        YLeaf tunnel_mode; //type: TunnelGreModeEnum
                        YLeaf keepalive_state; //type: TunnelKaDfStateEnum
                        YLeaf df_bit_state; //type: TunnelKaDfStateEnum
                        YLeaf key_bit_state; //type: TunnelKeyStateEnum

                    class SourceIpAddress : public Entity
                    {
                        public:
                            SourceIpAddress();
                            ~SourceIpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi; //type: TunlPfiAfIdEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress


                    class DestinationIpAddress : public Entity
                    {
                        public:
                            DestinationIpAddress();
                            ~DestinationIpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi; //type: TunlPfiAfIdEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress> destination_ip_address;
                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress> source_ip_address;


                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation


                class PseudowireHeadEndInformation : public Entity
                {
                    public:
                        PseudowireHeadEndInformation();
                        ~PseudowireHeadEndInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_list_name; //type: string
                        YLeaf l2_overhead; //type: uint32
                        YLeaf internal_label; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation


                class CemInformation : public Entity
                {
                    public:
                        CemInformation();
                        ~CemInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf timeslots; //type: string
                        YLeaf payload; //type: uint16
                        YLeaf dejitter_buffer; //type: uint16
                        YLeaf framing; //type: int32



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation


                class GccInformation : public Entity
                {
                    public:
                        GccInformation();
                        ~GccInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf derived_mode; //type: GccDerStateEnum
                        YLeaf sec_state; //type: GccSecStateEnum



                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation> bundle_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation> cem_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation> gcc_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation> pseudowire_head_end_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation> serial_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation> sonet_pos_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation> srp_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation> tunnel_gre_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation> tunnel_information;


            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation


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


                    YLeaf input_data_rate; //type: uint64
                    YLeaf input_packet_rate; //type: uint64
                    YLeaf output_data_rate; //type: uint64
                    YLeaf output_packet_rate; //type: uint64
                    YLeaf peak_input_data_rate; //type: uint64
                    YLeaf peak_input_packet_rate; //type: uint64
                    YLeaf peak_output_data_rate; //type: uint64
                    YLeaf peak_output_packet_rate; //type: uint64
                    YLeaf bandwidth; //type: uint32
                    YLeaf load_interval; //type: uint32
                    YLeaf output_load; //type: uint8
                    YLeaf input_load; //type: uint8
                    YLeaf reliability; //type: uint8



            }; // Interfaces::InterfaceXr::Interface::DataRates


            class InterfaceStatistics : public Entity
            {
                public:
                    InterfaceStatistics();
                    ~InterfaceStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf stats_type; //type: ImCmdStatsEnumEnum

                class FullInterfaceStats : public Entity
                {
                    public:
                        FullInterfaceStats();
                        ~FullInterfaceStats();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats


                class BasicInterfaceStats : public Entity
                {
                    public:
                        BasicInterfaceStats();
                        ~BasicInterfaceStats();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats> basic_interface_stats;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats> full_interface_stats;


            }; // Interfaces::InterfaceXr::Interface::InterfaceStatistics


            class L2InterfaceStatistics : public Entity
            {
                public:
                    L2InterfaceStatistics();
                    ~L2InterfaceStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf stats_type; //type: uint32
                    YLeaf contents; //type: StatsTypeContentsEnum

                class StatsId : public Entity
                {
                    public:
                        StatsId();
                        ~StatsId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf id_type; //type: StatsIdEnum
                        YLeaf unused; //type: uint32
                        YLeaf interface_handle; //type: string
                        YLeaf node_id; //type: string
                        YLeaf feature_id; //type: uint32
                        YLeaf id; //type: uint32



                }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId


                class BlockArray : public Entity
                {
                    public:
                        BlockArray();
                        ~BlockArray();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: StatsCounterEnum
                        YLeaf count; //type: uint32
                        YLeaf data; //type: string



                }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray


                class ElementArray : public Entity
                {
                    public:
                        ElementArray();
                        ~ElementArray();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf key; //type: string

                    class BlockArray : public Entity
                    {
                        public:
                            BlockArray();
                            ~BlockArray();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: StatsCounterEnum
                            YLeaf count; //type: uint32
                            YLeaf data; //type: string



                    }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray> > block_array;


                }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray


                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray> > block_array;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray> > element_array;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId> stats_id;


            }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics


            class NvOptical : public Entity
            {
                public:
                    NvOptical();
                    ~NvOptical();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf controller; //type: string



            }; // Interfaces::InterfaceXr::Interface::NvOptical


                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::ArpInformation> arp_information;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::BurnedInAddress> burned_in_address;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::CarrierDelay> carrier_delay;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::DampeningInformation> dampening_information;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::DataRates> data_rates;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation> encapsulation_information;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics> interface_statistics;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation> interface_type_information;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::IpInformation> ip_information;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics> l2_interface_statistics;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::MacAddress> mac_address;
                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::NvOptical> nv_optical;


        }; // Interfaces::InterfaceXr::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface> > interface;


    }; // Interfaces::InterfaceXr


    class NodeTypeSets : public Entity
    {
        public:
            NodeTypeSets();
            ~NodeTypeSets();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class NodeTypeSet : public Entity
        {
            public:
                NodeTypeSet();
                ~NodeTypeSet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string
                YLeaf type_set_name; //type: InterfaceTypeSetEnum

            class InterfaceSummary : public Entity
            {
                public:
                    InterfaceSummary();
                    ~InterfaceSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceCounts : public Entity
                {
                    public:
                        InterfaceCounts();
                        ~InterfaceCounts();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_count; //type: uint32
                        YLeaf up_interface_count; //type: uint32
                        YLeaf down_interface_count; //type: uint32
                        YLeaf admin_down_interface_count; //type: uint32



                }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts


                class InterfaceType : public Entity
                {
                    public:
                        InterfaceType();
                        ~InterfaceType();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_type_name; //type: string
                        YLeaf interface_type_description; //type: string

                    class InterfaceCounts : public Entity
                    {
                        public:
                            InterfaceCounts();
                            ~InterfaceCounts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_count; //type: uint32
                            YLeaf up_interface_count; //type: uint32
                            YLeaf down_interface_count; //type: uint32
                            YLeaf admin_down_interface_count; //type: uint32



                    }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts> interface_counts;


                }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts> interface_counts;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType> > interface_type;


            }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary


                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary> interface_summary;


        }; // Interfaces::NodeTypeSets::NodeTypeSet


            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet> > node_type_set;


    }; // Interfaces::NodeTypeSets


    class InterfaceBriefs : public Entity
    {
        public:
            InterfaceBriefs();
            ~InterfaceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class InterfaceBrief : public Entity
        {
            public:
                InterfaceBrief();
                ~InterfaceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string
                YLeaf interface; //type: string
                YLeaf parent_interface; //type: string
                YLeaf type; //type: string
                YLeaf state; //type: ImStateEnumEnum
                YLeaf actual_state; //type: ImStateEnumEnum
                YLeaf line_state; //type: ImStateEnumEnum
                YLeaf actual_line_state; //type: ImStateEnumEnum
                YLeaf encapsulation; //type: string
                YLeaf encapsulation_type_string; //type: string
                YLeaf mtu; //type: uint32
                YLeaf sub_interface_mtu_overhead; //type: uint32
                YLeaf l2_transport; //type: boolean
                YLeaf bandwidth; //type: uint32



        }; // Interfaces::InterfaceBriefs::InterfaceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceBriefs::InterfaceBrief> > interface_brief;


    }; // Interfaces::InterfaceBriefs


    class InventorySummary : public Entity
    {
        public:
            InventorySummary();
            ~InventorySummary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class InterfaceCounts : public Entity
        {
            public:
                InterfaceCounts();
                ~InterfaceCounts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_count; //type: uint32
                YLeaf up_interface_count; //type: uint32
                YLeaf down_interface_count; //type: uint32
                YLeaf admin_down_interface_count; //type: uint32



        }; // Interfaces::InventorySummary::InterfaceCounts


        class InterfaceType : public Entity
        {
            public:
                InterfaceType();
                ~InterfaceType();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_type_name; //type: string
                YLeaf interface_type_description; //type: string

            class InterfaceCounts : public Entity
            {
                public:
                    InterfaceCounts();
                    ~InterfaceCounts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interface_count; //type: uint32
                    YLeaf up_interface_count; //type: uint32
                    YLeaf down_interface_count; //type: uint32
                    YLeaf admin_down_interface_count; //type: uint32



            }; // Interfaces::InventorySummary::InterfaceType::InterfaceCounts


                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary::InterfaceType::InterfaceCounts> interface_counts;


        }; // Interfaces::InventorySummary::InterfaceType


            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary::InterfaceCounts> interface_counts;
            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary::InterfaceType> > interface_type;


    }; // Interfaces::InventorySummary


    class Interfaces_ : public Entity
    {
        public:
            Interfaces_();
            ~Interfaces_();

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
                YLeaf interface; //type: string
                YLeaf state; //type: ImStateEnumEnum
                YLeaf line_state; //type: ImStateEnumEnum
                YLeaf description; //type: string



        }; // Interfaces::Interfaces_::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::Interfaces_::Interface> > interface;


    }; // Interfaces::Interfaces_


    class InterfaceSummary : public Entity
    {
        public:
            InterfaceSummary();
            ~InterfaceSummary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class InterfaceCounts : public Entity
        {
            public:
                InterfaceCounts();
                ~InterfaceCounts();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_count; //type: uint32
                YLeaf up_interface_count; //type: uint32
                YLeaf down_interface_count; //type: uint32
                YLeaf admin_down_interface_count; //type: uint32



        }; // Interfaces::InterfaceSummary::InterfaceCounts


        class InterfaceType : public Entity
        {
            public:
                InterfaceType();
                ~InterfaceType();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_type_name; //type: string
                YLeaf interface_type_description; //type: string

            class InterfaceCounts : public Entity
            {
                public:
                    InterfaceCounts();
                    ~InterfaceCounts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interface_count; //type: uint32
                    YLeaf up_interface_count; //type: uint32
                    YLeaf down_interface_count; //type: uint32
                    YLeaf admin_down_interface_count; //type: uint32



            }; // Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts


                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts> interface_counts;


        }; // Interfaces::InterfaceSummary::InterfaceType


            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary::InterfaceCounts> interface_counts;
            std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary::InterfaceType> > interface_type;


    }; // Interfaces::InterfaceSummary


        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceBriefs> interface_briefs;
        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary> interface_summary;
        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr> interface_xr;
        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::Interfaces_> interfaces;
        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary> inventory_summary;
        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets> node_type_sets;


}; // Interfaces


class ImCmdIntfTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf srp;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf bundle;
        static const Enum::YLeaf serial;
        static const Enum::YLeaf sonet_pos;
        static const Enum::YLeaf tunnel_gre;
        static const Enum::YLeaf pseudowire_head_end;
        static const Enum::YLeaf cem;
        static const Enum::YLeaf gcc;

};

class ImCmdStatsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf full;
        static const Enum::YLeaf basic;

};

class SrpMgmtFailureStateEtEnum : public Enum
{
    public:
        static const Enum::YLeaf idle_failure_state;
        static const Enum::YLeaf wait_to_restore_failure_state;
        static const Enum::YLeaf manual_switch_failure_state;
        static const Enum::YLeaf signal_degrade_failure_state;
        static const Enum::YLeaf signal_fail_failure_state;
        static const Enum::YLeaf forced_switch_failure_state;
        static const Enum::YLeaf shutdown_failure_state;
        static const Enum::YLeaf invalid_failure_state;
        static const Enum::YLeaf unknown_failure_state;

};

class GccDerStateEnum : public Enum
{
    public:
        static const Enum::YLeaf in_service;
        static const Enum::YLeaf out_of_service;
        static const Enum::YLeaf maintainance;
        static const Enum::YLeaf ais;

};

class EfpTagEtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf untagged;
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf dot1ad;

};

class TunnelGreModeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf gr_eo_ipv4;
        static const Enum::YLeaf gr_eo_ipv6;
        static const Enum::YLeaf mgr_eo_ipv4;
        static const Enum::YLeaf mgr_eo_ipv6;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class GccSecStateEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf maintainance;
        static const Enum::YLeaf ais;

};

class SrpMgmtIpsWrapStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle_wrap_state;
        static const Enum::YLeaf wrapped_state;
        static const Enum::YLeaf locked_out_wrap_state;
        static const Enum::YLeaf unknown_wrap_state;

};

class StatsCounterEnum : public Enum
{
    public:
        static const Enum::YLeaf stats_counter_rate;
        static const Enum::YLeaf stats_counter_uint32;
        static const Enum::YLeaf stats_counter_uint64;
        static const Enum::YLeaf stats_counter_generic;
        static const Enum::YLeaf stats_counter_proto;
        static const Enum::YLeaf stats_counter_srp;
        static const Enum::YLeaf stats_counter_ipv4_prec;
        static const Enum::YLeaf stats_counter_ipv4_dscp;
        static const Enum::YLeaf stats_counter_mpls_exp;
        static const Enum::YLeaf stats_counter_ipv4_bgppa;
        static const Enum::YLeaf stats_counter_src_bgppa;
        static const Enum::YLeaf stats_counter_basic;
        static const Enum::YLeaf stats_counter_comp_generic;
        static const Enum::YLeaf stats_counter_comp_proto;
        static const Enum::YLeaf stats_counter_comp_basic;
        static const Enum::YLeaf stats_counter_accounting;
        static const Enum::YLeaf stats_counter_comp_accounting;
        static const Enum::YLeaf stats_counter_flow;
        static const Enum::YLeaf stats_counter_comp_flow;

};

class SonetApsEtEnum : public Enum
{
    public:
        static const Enum::YLeaf not_configured;
        static const Enum::YLeaf working_active;
        static const Enum::YLeaf protect_active;
        static const Enum::YLeaf working_inactive;
        static const Enum::YLeaf protect_inactive;

};

class ImAttrDuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf im_attr_duplex_unknown;
        static const Enum::YLeaf im_attr_duplex_half;
        static const Enum::YLeaf im_attr_duplex_full;

};

class SrpMgmtIpsPathIndEnum : public Enum
{
    public:
        static const Enum::YLeaf short_path;
        static const Enum::YLeaf long_path;
        static const Enum::YLeaf unknown_path;

};

class PppFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_fsm_state_initial_0;
        static const Enum::YLeaf ppp_fsm_state_starting_1;
        static const Enum::YLeaf ppp_fsm_state_closed_2;
        static const Enum::YLeaf ppp_fsm_state_stopped_3;
        static const Enum::YLeaf ppp_fsm_state_closing_4;
        static const Enum::YLeaf ppp_fsm_state_stopping_5;
        static const Enum::YLeaf ppp_fsm_state_req_sent_6;
        static const Enum::YLeaf ppp_fsm_state_ack_rcvd_7;
        static const Enum::YLeaf ppp_fsm_state_ack_sent_8;
        static const Enum::YLeaf ppp_fsm_state_opened_9;

};

class EfpTagPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf priority0;
        static const Enum::YLeaf priority1;
        static const Enum::YLeaf priority2;
        static const Enum::YLeaf priority3;
        static const Enum::YLeaf priority4;
        static const Enum::YLeaf priority5;
        static const Enum::YLeaf priority6;
        static const Enum::YLeaf priority7;
        static const Enum::YLeaf priority_any;

};

class ImCmdLoopbackEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf no_loopback;
        static const Enum::YLeaf internal_loopback;
        static const Enum::YLeaf external_loopback;
        static const Enum::YLeaf line_loopback;

};

class ImCmdFrTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf frame_relay_cisco;
        static const Enum::YLeaf frame_relay_ietf;

};

class ImCmdLmiTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf lmi_type_auto;
        static const Enum::YLeaf lmi_type_ansi;
        static const Enum::YLeaf lmi_type_ccitt;
        static const Enum::YLeaf lmi_type_cisco;

};

class SrpMgmtSrrFailureEnum : public Enum
{
    public:
        static const Enum::YLeaf idle_srr_failure;
        static const Enum::YLeaf wait_to_restore_srr_failure;
        static const Enum::YLeaf signal_fail_srr_failure;
        static const Enum::YLeaf forced_switch_srr_failure;
        static const Enum::YLeaf unknown_srr_failure;

};

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf im_state_not_ready;
        static const Enum::YLeaf im_state_admin_down;
        static const Enum::YLeaf im_state_down;
        static const Enum::YLeaf im_state_up;
        static const Enum::YLeaf im_state_shutdown;
        static const Enum::YLeaf im_state_err_disable;
        static const Enum::YLeaf im_state_down_immediate;
        static const Enum::YLeaf im_state_down_immediate_admin;
        static const Enum::YLeaf im_state_down_graceful;
        static const Enum::YLeaf im_state_begin_shutdown;
        static const Enum::YLeaf im_state_end_shutdown;
        static const Enum::YLeaf im_state_begin_error_disable;
        static const Enum::YLeaf im_state_end_error_disable;
        static const Enum::YLeaf im_state_begin_down_graceful;
        static const Enum::YLeaf im_state_reset;
        static const Enum::YLeaf im_state_operational;
        static const Enum::YLeaf im_state_not_operational;
        static const Enum::YLeaf im_state_unknown;
        static const Enum::YLeaf im_state_last;

};

class StatsTypeContentsEnum : public Enum
{
    public:
        static const Enum::YLeaf stats_type_single;
        static const Enum::YLeaf stats_type_variable;

};

class ImAttrFlowControlEnum : public Enum
{
    public:
        static const Enum::YLeaf im_attr_flow_control_off;
        static const Enum::YLeaf im_attr_flow_control_on;
        static const Enum::YLeaf im_attr_flow_control_not_sup;
        static const Enum::YLeaf im_attr_flow_control_priority;

};

class StatsIdEnum : public Enum
{
    public:
        static const Enum::YLeaf stats_id_type_unknown;
        static const Enum::YLeaf stats_id_type_min;
        static const Enum::YLeaf stats_id_type_spare;
        static const Enum::YLeaf stats_id_type_node;
        static const Enum::YLeaf stats_id_type_other;
        static const Enum::YLeaf stats_id_type_feature;
        static const Enum::YLeaf stats_id_type_max;

};

class TunlPfiAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf tunl_pfi_af_id_none;
        static const Enum::YLeaf tunl_pfi_af_id_ipv4;
        static const Enum::YLeaf tunl_pfi_af_id_ipv6;

};

class TunnelKaDfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class BmdMemberTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_mbr_local;
        static const Enum::YLeaf bmd_mbr_foreign;
        static const Enum::YLeaf bmd_mbr_unknown;

};

class TunnelKeyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf absent;
        static const Enum::YLeaf present;

};

class BmMbrStateReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_mbr_state_reason_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_unselectable_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_link_down;
        static const Enum::YLeaf bm_mbr_state_reason_link_deleting;
        static const Enum::YLeaf bm_mbr_state_reason_creating;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_creating;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_deleting;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_admin_down;
        static const Enum::YLeaf bm_mbr_state_reason_replicating;
        static const Enum::YLeaf bm_mbr_state_reason_bandwidth;
        static const Enum::YLeaf bm_mbr_state_reason_loop_back;
        static const Enum::YLeaf bm_mbr_state_reason_activity_type;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_shutdown;
        static const Enum::YLeaf bm_mbr_state_reason_min_selected;
        static const Enum::YLeaf bm_mbr_state_reason_max_selected;
        static const Enum::YLeaf bm_mbr_state_reason_link_limit;
        static const Enum::YLeaf bm_mbr_state_reason_active_limit;
        static const Enum::YLeaf bm_mbr_state_reason_standby_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_expired;
        static const Enum::YLeaf bm_mbr_state_reason_defaulted;
        static const Enum::YLeaf bm_mbr_state_reason_act_or_not_agg;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_agg;
        static const Enum::YLeaf bm_mbr_state_reason_lagid;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_cfgd;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_ready;
        static const Enum::YLeaf bm_mbr_state_reason_partner_ood;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_in_sync;
        static const Enum::YLeaf bm_mbr_state_reason_foreign_partner_oos;
        static const Enum::YLeaf bm_mbr_state_reason_attach_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_partner_not_collecting;
        static const Enum::YLeaf bm_mbr_state_reason_collect_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_standby_foreign;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_starting;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_down;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_nbr_unconfig;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_pe_isolated;
        static const Enum::YLeaf bm_mbr_state_reason_forced_switchover;
        static const Enum::YLeaf bm_mbr_state_reason_errdis_unknown;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const Enum::YLeaf bm_mbr_state_reason_active;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_nak;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_transport_unavailable;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_not_configured;
        static const Enum::YLeaf bm_mbr_state_reason_recovery_timer;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_standby;
        static const Enum::YLeaf bm_mbr_state_reason_maximized_out;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_peer_selected;
        static const Enum::YLeaf bm_mbr_state_reason_mlacp_connect_timer_running;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_not_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_no_lon;
        static const Enum::YLeaf bm_mbr_state_reason_cumul_rel_bw_limit;
        static const Enum::YLeaf bm_mbr_state_reason_no_mac;
        static const Enum::YLeaf bm_mbr_state_reason_no_system_id;
        static const Enum::YLeaf bm_mbr_state_reason_link_shutdown;
        static const Enum::YLeaf bm_mbr_state_reason_activity_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_activity_iccp;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_icpe_mlacp;
        static const Enum::YLeaf bm_mbr_state_reason_no_link_num;
        static const Enum::YLeaf bm_mbr_state_reason_standby_peer_higher_prio;
        static const Enum::YLeaf bm_mbr_state_reason_red_state_standby;
        static const Enum::YLeaf bm_mbr_state_reason_other_red_state_standby;
        static const Enum::YLeaf bm_mbr_state_reason_hold_ing;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_error_disabled;
        static const Enum::YLeaf bm_mbr_state_reason_bundle_efd_disabled;
        static const Enum::YLeaf bm_mbr_state_reason_singleton_pe_isolated;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_starting;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_down;
        static const Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const Enum::YLeaf bm_mbr_state_reason_timer_running;
        static const Enum::YLeaf bm_mbr_state_reason_count;

};

class BmSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf ok;
        static const Enum::YLeaf information;
        static const Enum::YLeaf misconfiguration;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf error;

};

class SrpMgmtIpsReqEnum : public Enum
{
    public:
        static const Enum::YLeaf idle_ips_request;
        static const Enum::YLeaf wait_to_restore_ips_request;
        static const Enum::YLeaf manual_switch_ips_request;
        static const Enum::YLeaf signal_degrade_ips_request;
        static const Enum::YLeaf signal_fail_ips_request;
        static const Enum::YLeaf forced_switch_ips_request;
        static const Enum::YLeaf unknown_ips_request;

};

class SrpMgmtFailureEtEnum : public Enum
{
    public:
        static const Enum::YLeaf hardware_missing_failure;
        static const Enum::YLeaf layer1_admin_state_failure;
        static const Enum::YLeaf layer1_error_failure;
        static const Enum::YLeaf keepalive_missed_failure;
        static const Enum::YLeaf link_quality_degraded_failure;
        static const Enum::YLeaf mate_problem_failure;
        static const Enum::YLeaf side_mismatch_failure;
        static const Enum::YLeaf unknown_failure;

};

class ImAttrTransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf im_attr_transport_mode_unknown;
        static const Enum::YLeaf im_attr_transport_mode_lan;
        static const Enum::YLeaf im_attr_transport_mode_wan;
        static const Enum::YLeaf im_attr_transport_mode_otn_bt_opu1e;
        static const Enum::YLeaf im_attr_transport_mode_otn_bt_opu2e;
        static const Enum::YLeaf im_attr_transport_mode_otn_opu3;
        static const Enum::YLeaf im_attr_transport_mode_otn_opu4;

};

class ImCmdEncapsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf frame_relay;
        static const Enum::YLeaf vlan;
        static const Enum::YLeaf ppp;

};

class BmMuxstateEnum : public Enum
{
    public:
        static const Enum::YLeaf detached;
        static const Enum::YLeaf waiting;
        static const Enum::YLeaf attached;
        static const Enum::YLeaf collecting;
        static const Enum::YLeaf distributing;
        static const Enum::YLeaf collecting_distributing;

};

class NcpIdentEnum : public Enum
{
    public:
        static const Enum::YLeaf cdpcp;
        static const Enum::YLeaf ipcp;
        static const Enum::YLeaf ipcpiw;
        static const Enum::YLeaf ipv6cp;
        static const Enum::YLeaf mplscp;
        static const Enum::YLeaf osicp;

};

class BmdMemberStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bmd_mbr_state_configured;
        static const Enum::YLeaf bmd_mbr_state_standby;
        static const Enum::YLeaf bmd_mbr_state_hot_standby;
        static const Enum::YLeaf bmd_mbr_state_negotiating;
        static const Enum::YLeaf bmd_mbr_state_bfd_running;
        static const Enum::YLeaf bmd_mbr_state_active;

};

class BmMuxreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf bm_mux_reason_no_reason;
        static const Enum::YLeaf bm_mux_reason_link_down;
        static const Enum::YLeaf bm_mux_reason_link_deleted;
        static const Enum::YLeaf bm_mux_reason_duplex;
        static const Enum::YLeaf bm_mux_reason_bandwidth;
        static const Enum::YLeaf bm_mux_reason_loop_back;
        static const Enum::YLeaf bm_mux_reason_activity_type;
        static const Enum::YLeaf bm_mux_reason_link_limit;
        static const Enum::YLeaf bm_mux_reason_shared;
        static const Enum::YLeaf bm_mux_reason_lagid;
        static const Enum::YLeaf bm_mux_reason_no_bundle;
        static const Enum::YLeaf bm_mux_reason_no_primary;
        static const Enum::YLeaf bm_mux_reason_bundle_down;
        static const Enum::YLeaf bm_mux_reason_individual;
        static const Enum::YLeaf bm_mux_reason_defaulted;
        static const Enum::YLeaf bm_mux_reason_in_sync;
        static const Enum::YLeaf bm_mux_reason_collecting;
        static const Enum::YLeaf bm_mux_reason_active_link_limit;
        static const Enum::YLeaf bm_mux_reason_distributing;
        static const Enum::YLeaf bm_mux_reason_count;

};

class ImAttrLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf im_attr_link_type_auto;
        static const Enum::YLeaf im_attr_link_type_force;

};

class VlanEncapsEnum : public Enum
{
    public:
        static const Enum::YLeaf no_encapsulation;
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf qinq;
        static const Enum::YLeaf qin_any;
        static const Enum::YLeaf dot1q_native;
        static const Enum::YLeaf dot1ad;
        static const Enum::YLeaf dot1ad_native;
        static const Enum::YLeaf service_instance;
        static const Enum::YLeaf dot1ad_dot1q;
        static const Enum::YLeaf dot1ad_any;

};

class EfpPayloadEtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf payload_ethertype_any;
        static const Enum::YLeaf payload_ethertype_ip;
        static const Enum::YLeaf payload_ethertype_pppoe;

};

class InterfaceTypeSetEnum : public Enum
{
    public:
        static const Enum::YLeaf hardware_interfaces;

};

class BmStateReasonTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf member_reason;
        static const Enum::YLeaf bundle_reason;

};

class ImAttrMediaEnum : public Enum
{
    public:
        static const Enum::YLeaf im_attr_media_other;
        static const Enum::YLeaf im_attr_media_unknown;
        static const Enum::YLeaf im_attr_media_aui;
        static const Enum::YLeaf im_attr_media_10base5;
        static const Enum::YLeaf im_attr_media_foirl;
        static const Enum::YLeaf im_attr_media_10base2;
        static const Enum::YLeaf im_attr_media_10broad36;
        static const Enum::YLeaf im_attr_media_10base;
        static const Enum::YLeaf im_attr_media_10base_thd;
        static const Enum::YLeaf im_attr_media_10base_tfd;
        static const Enum::YLeaf im_attr_media_10base_fp;
        static const Enum::YLeaf im_attr_media_10base_fb;
        static const Enum::YLeaf im_attr_media_10base_fl;
        static const Enum::YLeaf im_attr_media_10base_flhd;
        static const Enum::YLeaf im_attr_media_10base_flfd;
        static const Enum::YLeaf im_attr_media_100base_t4;
        static const Enum::YLeaf im_attr_media_100base_tx;
        static const Enum::YLeaf im_attr_media_100base_txhd;
        static const Enum::YLeaf im_attr_media_100base_txfd;
        static const Enum::YLeaf im_attr_media_100base_fx;
        static const Enum::YLeaf im_attr_media_100base_fxhd;
        static const Enum::YLeaf im_attr_media_100base_fxfd;
        static const Enum::YLeaf im_attr_media_100base_ex;
        static const Enum::YLeaf im_attr_media_100base_exhd;
        static const Enum::YLeaf im_attr_media_100base_exfd;
        static const Enum::YLeaf im_attr_media_100base_t2;
        static const Enum::YLeaf im_attr_media_100base_t2hd;
        static const Enum::YLeaf im_attr_media_100base_t2fd;
        static const Enum::YLeaf im_attr_media_1000base_x;
        static const Enum::YLeaf im_attr_media_1000base_xhdx;
        static const Enum::YLeaf im_attr_media_1000base_xfd;
        static const Enum::YLeaf im_attr_media_1000base_lx;
        static const Enum::YLeaf im_attr_media_1000base_lxhd;
        static const Enum::YLeaf im_attr_media_1000base_lxfdx;
        static const Enum::YLeaf im_attr_media_1000base_sx;
        static const Enum::YLeaf im_attr_media_1000base_sxhd;
        static const Enum::YLeaf im_attr_media_1000base_sxfd;
        static const Enum::YLeaf im_attr_media_1000base_cx;
        static const Enum::YLeaf im_attr_media_1000base_cxhdx;
        static const Enum::YLeaf im_attr_media_1000base_cxfd;
        static const Enum::YLeaf im_attr_media_1000base;
        static const Enum::YLeaf im_attr_media_1000base_thd;
        static const Enum::YLeaf im_attr_media_1000base_tfd;
        static const Enum::YLeaf im_attr_media_10gbase_x;
        static const Enum::YLeaf im_attr_media_10gbase_lx4;
        static const Enum::YLeaf im_attr_media_10gbase_r;
        static const Enum::YLeaf im_attr_media_10gbase_er;
        static const Enum::YLeaf im_attr_media_10gbase_lr;
        static const Enum::YLeaf im_attr_media_10gbase_sr;
        static const Enum::YLeaf im_attr_media_10gbase_w;
        static const Enum::YLeaf im_attr_media_10gbase_ew;
        static const Enum::YLeaf im_attr_media_10gbase_lw;
        static const Enum::YLeaf im_attr_media_10gbase_sw;
        static const Enum::YLeaf im_attr_media_10gbase_zr;
        static const Enum::YLeaf im_attr_media_802_9a;
        static const Enum::YLeaf im_attr_media_rj45;
        static const Enum::YLeaf im_attr_media_1000base_zx;
        static const Enum::YLeaf im_attr_media_1000base_cwdm;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1470;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1490;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1510;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1530;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1550;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1570;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1590;
        static const Enum::YLeaf im_attr_media_1000base_cwdm_1610;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm;
        static const Enum::YLeaf im_attr_media_100gbase_lr4;
        static const Enum::YLeaf im_attr_media_1000base_dwdm;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1533;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1537;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1541;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1545;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1549;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1553;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1557;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1561;
        static const Enum::YLeaf im_attr_media_40gbase_lr4;
        static const Enum::YLeaf im_attr_media_40gbase_er4;
        static const Enum::YLeaf im_attr_media_100gbase_er4;
        static const Enum::YLeaf im_attr_media_1000base_ex;
        static const Enum::YLeaf im_attr_media_1000base_bx10_d;
        static const Enum::YLeaf im_attr_media_1000base_bx10_u;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1561_42;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1560_61;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1559_79;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1558_98;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1558_17;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1557_36;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1556_55;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1555_75;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1554_94;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1554_13;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1553_33;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1552_52;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1551_72;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1550_92;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1550_12;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1549_32;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1548_51;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1547_72;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1546_92;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1546_12;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1545_32;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1544_53;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1543_73;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1542_94;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1542_14;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1541_35;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1540_56;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1539_77;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1538_98;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1538_19;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1537_40;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1536_61;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1535_82;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1535_04;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1534_25;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1533_47;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1532_68;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1531_90;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1531_12;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_1530_33;
        static const Enum::YLeaf im_attr_media_1000base_dwdm_tunable;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1561_42;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1560_61;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1559_79;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1558_98;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1558_17;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1557_36;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1556_55;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1555_75;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1554_94;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1554_13;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1553_33;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1552_52;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1551_72;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1550_92;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1550_12;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1549_32;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1548_51;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1547_72;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1546_92;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1546_12;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1545_32;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1544_53;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1543_73;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1542_94;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1542_14;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1541_35;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1540_56;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1539_77;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1538_98;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1538_19;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1537_40;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1536_61;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1535_82;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1535_04;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1534_25;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1533_47;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1532_68;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1531_90;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1531_12;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_1530_33;
        static const Enum::YLeaf im_attr_media_10gbase_dwdm_tunable;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1561_42;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1560_61;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1559_79;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1558_98;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1558_17;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1557_36;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1556_55;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1555_75;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1554_94;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1554_13;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1553_33;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1552_52;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1551_72;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1550_92;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1550_12;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1549_32;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1548_51;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1547_72;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1546_92;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1546_12;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1545_32;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1544_53;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1543_73;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1542_94;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1542_14;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1541_35;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1540_56;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1539_77;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1538_98;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1538_19;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1537_40;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1536_61;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1535_82;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1535_04;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1534_25;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1533_47;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1532_68;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1531_90;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1531_12;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_1530_33;
        static const Enum::YLeaf im_attr_media_40gbase_dwdm_tunable;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1561_42;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1560_61;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1559_79;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1558_98;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1558_17;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1557_36;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1556_55;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1555_75;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1554_94;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1554_13;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1553_33;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1552_52;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1551_72;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1550_92;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1550_12;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1549_32;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1548_51;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1547_72;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1546_92;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1546_12;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1545_32;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1544_53;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1543_73;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1542_94;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1542_14;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1541_35;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1540_56;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1539_77;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1538_98;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1538_19;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1537_40;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1536_61;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1535_82;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1535_04;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1534_25;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1533_47;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1532_68;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1531_90;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1531_12;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_1530_33;
        static const Enum::YLeaf im_attr_media_100gbase_dwdm_tunable;
        static const Enum::YLeaf im_attr_media_40gbase_kr4;
        static const Enum::YLeaf im_attr_media_40gbase_cr4;
        static const Enum::YLeaf im_attr_media_40gbase_sr4;
        static const Enum::YLeaf im_attr_media_40gbase_fr;
        static const Enum::YLeaf im_attr_media_100gbase_cr10;
        static const Enum::YLeaf im_attr_media_100gbase_sr10;
        static const Enum::YLeaf im_attr_media_40gbase_csr4;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_tunable;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1470;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1490;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1510;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1530;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1550;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1570;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1590;
        static const Enum::YLeaf im_attr_media_10gbase_cwdm_1610;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_tunable;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1470;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1490;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1510;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1530;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1550;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1570;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1590;
        static const Enum::YLeaf im_attr_media_40gbase_cwdm_1610;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_tunable;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1470;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1490;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1510;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1530;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1550;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1570;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1590;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm_1610;
        static const Enum::YLeaf im_attr_media_40gbase_elpb;
        static const Enum::YLeaf im_attr_media_100gbase_elpb;
        static const Enum::YLeaf im_attr_media_100gbase_lr10;
        static const Enum::YLeaf im_attr_media_40gbase;
        static const Enum::YLeaf im_attr_media_100gbase_kp4;
        static const Enum::YLeaf im_attr_media_100gbase_kr4;
        static const Enum::YLeaf im_attr_media_10gbase_lrm;
        static const Enum::YLeaf im_attr_media_10gbase_cx4;
        static const Enum::YLeaf im_attr_media_10gbase;
        static const Enum::YLeaf im_attr_media_10gbase_kx4;
        static const Enum::YLeaf im_attr_media_10gbase_kr;
        static const Enum::YLeaf im_attr_media_10gbase_pr;
        static const Enum::YLeaf im_attr_media_100base_lx;
        static const Enum::YLeaf im_attr_media_100base_zx;
        static const Enum::YLeaf im_attr_media_1000base_bx_d;
        static const Enum::YLeaf im_attr_media_1000base_bx_u;
        static const Enum::YLeaf im_attr_media_1000base_bx20_d;
        static const Enum::YLeaf im_attr_media_1000base_bx20_u;
        static const Enum::YLeaf im_attr_media_1000base_bx40_d;
        static const Enum::YLeaf im_attr_media_1000base_bx40_da;
        static const Enum::YLeaf im_attr_media_1000base_bx40_u;
        static const Enum::YLeaf im_attr_media_1000base_bx80_d;
        static const Enum::YLeaf im_attr_media_1000base_bx80_u;
        static const Enum::YLeaf im_attr_media_1000base_bx120_d;
        static const Enum::YLeaf im_attr_media_1000base_bx120_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx10_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx10_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx20_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx20_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx40_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx40_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx80_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx80_u;
        static const Enum::YLeaf im_attr_media_10gbase_bx120_d;
        static const Enum::YLeaf im_attr_media_10gbase_bx120_u;
        static const Enum::YLeaf im_attr_media_1000base_dr_lx;
        static const Enum::YLeaf im_attr_media_100gbase_er4l;
        static const Enum::YLeaf im_attr_media_100gbase_sr4;
        static const Enum::YLeaf im_attr_media_40gbase_sr_bd;
        static const Enum::YLeaf im_attr_media_25gbase_cr;
        static const Enum::YLeaf im_attr_media_25gbase_cr_s;
        static const Enum::YLeaf im_attr_media_25gbase_kr;
        static const Enum::YLeaf im_attr_media_25gbase_kr_s;
        static const Enum::YLeaf im_attr_media_25gbase_r;
        static const Enum::YLeaf im_attr_media_25gbase_sr;
        static const Enum::YLeaf im_attr_media_25gbase_dwdm;
        static const Enum::YLeaf im_attr_media_25gbase_dwdm_tunable;
        static const Enum::YLeaf im_attr_media_25gbase_cwdm;
        static const Enum::YLeaf im_attr_media_25gbase_cwdm_tunable;
        static const Enum::YLeaf im_attr_media_100gbase_psm4;
        static const Enum::YLeaf im_attr_media_100gbase_er10;
        static const Enum::YLeaf im_attr_media_100gbase_er10l;
        static const Enum::YLeaf im_attr_media_100gbase_acc;
        static const Enum::YLeaf im_attr_media_100gbase_aoc;
        static const Enum::YLeaf im_attr_media_100gbase_cwdm4;
        static const Enum::YLeaf im_attr_media_40gbase_psm4;
        static const Enum::YLeaf im_attr_media_100gbase_cr4;
        static const Enum::YLeaf im_attr_media_100gbase_act_loop;
        static const Enum::YLeaf im_attr_media_100gbase_pas_loop;

};

class SrpMgmtSrrNodeStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle_srr_state;
        static const Enum::YLeaf discovery_srr_state;
        static const Enum::YLeaf unknown_srr_state;

};


}
}

#endif /* _CISCO_IOS_XR_PFI_IM_CMD_OPER_ */

