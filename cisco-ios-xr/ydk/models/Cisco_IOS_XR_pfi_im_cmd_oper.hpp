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
                Value interface_name; //type: string
                Value interface_handle; //type: string
                Value interface_type; //type: string
                Value hardware_type_string; //type: string
                Value state; //type: ImStateEnumEnum
                Value line_state; //type: ImStateEnumEnum
                Value encapsulation; //type: string
                Value encapsulation_type_string; //type: string
                Value mtu; //type: uint32
                Value is_l2_transport_enabled; //type: boolean
                Value state_transition_count; //type: uint32
                Value last_state_transition_time; //type: uint32
                Value is_dampening_enabled; //type: boolean
                Value speed; //type: uint32
                Value crc_length; //type: uint32
                Value is_scramble_enabled; //type: boolean
                Value duplexity; //type: ImAttrDuplexEnum
                Value media_type; //type: ImAttrMediaEnum
                Value link_type; //type: ImAttrLinkEnum
                Value in_flow_control; //type: ImAttrFlowControlEnum
                Value out_flow_control; //type: ImAttrFlowControlEnum
                Value bandwidth; //type: uint32
                Value max_bandwidth; //type: uint32
                Value keepalive; //type: uint32
                Value is_l2_looped; //type: boolean
                Value parent_interface_name; //type: string
                Value loopback_configuration; //type: ImCmdLoopbackEnumEnum
                Value description; //type: string
                Value is_maintenance_enabled; //type: boolean
                Value is_data_inverted; //type: boolean
                Value transport_mode; //type: ImAttrTransportModeEnum
                Value if_index; //type: uint32


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
                    Value penalty; //type: uint32
                    Value is_suppressed_enabled; //type: boolean
                    Value seconds_remaining; //type: uint32
                    Value half_life; //type: uint32
                    Value reuse_threshold; //type: uint32
                    Value suppress_threshold; //type: uint32
                    Value maximum_suppress_time; //type: uint32
                    Value restart_penalty; //type: uint32




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
                    Value address; //type: string




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
                    Value address; //type: string




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
                    Value carrier_delay_up; //type: uint32
                    Value carrier_delay_down; //type: uint32




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
                    Value arp_timeout; //type: uint32
                    Value arp_type_name; //type: string
                    Value arp_is_learning_disabled; //type: boolean




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
                    Value ip_address; //type: string
                    Value subnet_mask_length; //type: uint32




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
                    Value encapsulation_type; //type: ImCmdEncapsEnumEnum


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
                        Value fr_encapsulation_type; //type: ImCmdFrTypeEnumEnum
                        Value lmi_type; //type: ImCmdLmiTypeEnumEnum
                        Value lmidlci; //type: uint32
                        Value is_nni; //type: boolean
                        Value is_dte; //type: boolean
                        Value is_lmi_up; //type: boolean
                        Value is_lmi_nni_dce_up; //type: boolean
                        Value is_lmi_enabled; //type: boolean
                        Value enquiries_received; //type: uint32
                        Value enquiries_sent; //type: uint32
                        Value status_received; //type: uint32
                        Value status_sent; //type: uint32
                        Value update_status_received; //type: uint32
                        Value update_status_sent; //type: uint32


                        class ImCmdFrTypeEnumEnum;
                        class ImCmdLmiTypeEnumEnum;


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
                            Value vlan_encapsulation; //type: VlanEncapsEnum
                            Value tag; //type: uint16
                            Value outer_tag; //type: uint16
                            Value native_tag; //type: uint16
                            Value dot1ad_tag; //type: uint16
                            Value dot1ad_native_tag; //type: uint16
                            Value dot1ad_outer_tag; //type: uint16


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
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




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
                                Value payload_ethertype; //type: EfpPayloadEtypeEnum
                                Value tags_popped; //type: uint16
                                Value is_exact_match; //type: int32
                                Value is_native_vlan; //type: int32
                                Value is_native_preserving; //type: int32
                                Value source_mac_match; //type: string
                                Value destination_mac_match; //type: string


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
                                        Value ethertype; //type: EfpTagEtypeEnum
                                        Value vlan_id; //type: uint16


                                        class EfpTagEtypeEnum;


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
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value priority; //type: EfpTagPriorityEnum


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
                                        Value vlan_id_low; //type: uint16
                                        Value vlan_id_high; //type: uint16




                                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;
                                    class EfpTagEtypeEnum;
                                    class EfpTagPriorityEnum;


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
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value vlan_id; //type: uint16


                                    class EfpTagEtypeEnum;


                            }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe


                                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;
                                class EfpPayloadEtypeEnum;


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
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




                        }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack> stack;
                            class VlanEncapsEnum;


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
                        Value lcp_state; //type: PppFsmStateEnum
                        Value is_loopback_detected; //type: int32
                        Value keepalive_period; //type: uint32
                        Value is_mp_bundle_member; //type: int32
                        Value is_multilink_open; //type: int32


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
                            Value ncp_state; //type: PppFsmStateEnum
                            Value ncp_identifier; //type: NcpIdentEnum


                            class NcpIdentEnum;
                            class PppFsmStateEnum;


                    }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray> > ncp_info_array;
                        class PppFsmStateEnum;


                }; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation> dot1q_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation> frame_relay_information;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation> ppp_information;
                    class ImCmdEncapsEnumEnum;


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
                    Value interface_type_info; //type: ImCmdIntfTypeEnumEnum


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
                                Value is_admin_down; //type: int32


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
                                    Value mac_address; //type: string
                                    Value is_inter_card_bus_enabled; //type: int32
                                    Value wtr_timer_period; //type: uint32


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
                                        Value mac_address; //type: string
                                        Value wrap_state; //type: SrpMgmtIpsWrapStateEnum
                                        Value packet_sent_timer; //type: uint32
                                        Value send_timer_time_remaining; //type: uint32
                                        Value wtr_timer_remaining; //type: uint32
                                        Value self_detected_request; //type: SrpMgmtIpsReqEnum
                                        Value remote_request; //type: SrpMgmtIpsReqEnum
                                        Value rx_neighbor_mac_address; //type: string
                                        Value rx_message_type; //type: SrpMgmtIpsReqEnum
                                        Value rx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        Value rx_ttl; //type: uint32
                                        Value rx_packet_test; //type: int32
                                        Value tx_neighbor_mac_address; //type: string
                                        Value tx_message_type; //type: SrpMgmtIpsReqEnum
                                        Value tx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        Value tx_ttl; //type: uint32
                                        Value tx_packet_test; //type: int32
                                        Value delay_keep_alive_trigger; //type: uint32


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
                                            Value type; //type: SrpMgmtFailureEtEnum
                                            Value reported_state; //type: SrpMgmtFailureStateEtEnum
                                            Value debounced_state; //type: SrpMgmtFailureStateEtEnum
                                            Value current_state; //type: SrpMgmtFailureStateEtEnum
                                            Value stable_time; //type: uint64
                                            Value debounced_delay; //type: uint32


                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureEtEnum;


                                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure> > asserted_failure;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsPathIndEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsPathIndEnum;
                                        class SrpMgmtIpsWrapStateEnum;


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
                                        Value mac_address; //type: string
                                        Value wrap_state; //type: SrpMgmtIpsWrapStateEnum
                                        Value packet_sent_timer; //type: uint32
                                        Value send_timer_time_remaining; //type: uint32
                                        Value wtr_timer_remaining; //type: uint32
                                        Value self_detected_request; //type: SrpMgmtIpsReqEnum
                                        Value remote_request; //type: SrpMgmtIpsReqEnum
                                        Value rx_neighbor_mac_address; //type: string
                                        Value rx_message_type; //type: SrpMgmtIpsReqEnum
                                        Value rx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        Value rx_ttl; //type: uint32
                                        Value rx_packet_test; //type: int32
                                        Value tx_neighbor_mac_address; //type: string
                                        Value tx_message_type; //type: SrpMgmtIpsReqEnum
                                        Value tx_path_type; //type: SrpMgmtIpsPathIndEnum
                                        Value tx_ttl; //type: uint32
                                        Value tx_packet_test; //type: int32
                                        Value delay_keep_alive_trigger; //type: uint32


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
                                            Value type; //type: SrpMgmtFailureEtEnum
                                            Value reported_state; //type: SrpMgmtFailureStateEtEnum
                                            Value debounced_state; //type: SrpMgmtFailureStateEtEnum
                                            Value current_state; //type: SrpMgmtFailureStateEtEnum
                                            Value stable_time; //type: uint64
                                            Value debounced_delay; //type: uint32


                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureStateEtEnum;
                                            class SrpMgmtFailureEtEnum;


                                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure> > asserted_failure;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsPathIndEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsReqEnum;
                                        class SrpMgmtIpsPathIndEnum;
                                        class SrpMgmtIpsWrapStateEnum;


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
                                Value is_admin_down; //type: int32


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
                                    Value topology_timer; //type: uint32
                                    Value next_topology_packet_delay; //type: uint32
                                    Value time_since_last_topology_packet_received; //type: uint32
                                    Value time_since_last_topology_change; //type: uint32
                                    Value number_of_nodes_on_ring; //type: uint16


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
                                        Value hop_count; //type: uint16
                                        Value mac_address; //type: string
                                        Value ipv4_address; //type: string
                                        Value is_wrapped; //type: int32
                                        Value is_srr_supported; //type: int32
                                        Value node_name; //type: string




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
                                Value is_admin_down; //type: int32
                                Value is_srr_enabled; //type: int32


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
                                    Value version_number; //type: uint32
                                    Value is_wrong_version_received; //type: int32
                                    Value last_wrong_version_receive_time; //type: uint32
                                    Value mac_address; //type: string
                                    Value node_state; //type: SrpMgmtSrrNodeStateEnum
                                    Value is_outer_ring_in_use; //type: int32
                                    Value is_inner_ring_in_use; //type: int32
                                    Value is_announce; //type: int32
                                    Value outer_fail_type; //type: SrpMgmtSrrFailureEnum
                                    Value inner_fail_type; //type: SrpMgmtSrrFailureEnum
                                    Value packet_send_timer; //type: uint32
                                    Value next_srr_packet_send_time; //type: uint32
                                    Value single_ring_bw; //type: uint32
                                    Value wtr_time; //type: uint32
                                    Value wtr_timer_remaining_outer_ring; //type: uint32
                                    Value wtr_timer_remaining_inner_ring; //type: uint32


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
                                        Value node_name; //type: string
                                        Value srr_entry_exits; //type: int32
                                        Value mac_address; //type: string
                                        Value outer_failure; //type: SrpMgmtSrrFailureEnum
                                        Value inner_failure; //type: SrpMgmtSrrFailureEnum
                                        Value is_last_announce_received; //type: int32
                                        Value last_announce_received_time; //type: uint32


                                        class SrpMgmtSrrFailureEnum;
                                        class SrpMgmtSrrFailureEnum;


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
                                        Value node_name; //type: string
                                        Value srr_entry_exits; //type: int32
                                        Value mac_address; //type: string
                                        Value outer_failure; //type: SrpMgmtSrrFailureEnum
                                        Value inner_failure; //type: SrpMgmtSrrFailureEnum
                                        Value is_last_announce_received; //type: int32
                                        Value last_announce_received_time; //type: uint32


                                        class SrpMgmtSrrFailureEnum;
                                        class SrpMgmtSrrFailureEnum;


                                }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing> > nodes_not_on_ring;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing> > nodes_on_ring;
                                    class SrpMgmtSrrFailureEnum;
                                    class SrpMgmtSrrNodeStateEnum;
                                    class SrpMgmtSrrFailureEnum;


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
                                Value is_admin_down; //type: int32


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
                                    Value min_priority_value; //type: uint16




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
                            Value data_rate_interval; //type: uint32


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
                                Value bit_rate_sent; //type: uint32
                                Value packet_rate_sent; //type: uint32
                                Value bit_rate_received; //type: uint32
                                Value packet_rate_received; //type: uint32




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
                                Value bit_rate_sent; //type: uint32
                                Value packet_rate_sent; //type: uint32
                                Value bit_rate_received; //type: uint32
                                Value packet_rate_received; //type: uint32




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
                                Value error_packets_received; //type: uint32
                                Value crc_errors; //type: uint32
                                Value input_insufficient_resource_events; //type: uint32
                                Value mac_aborts_received; //type: uint32
                                Value mac_runt_packets_received; //type: uint32
                                Value mac_giant_packets_received; //type: uint32
                                Value framer_runt_packets_received; //type: uint32
                                Value framer_giant_packets_received; //type: uint32
                                Value framer_aborts_received; //type: uint32




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
                                Value error_packets_received; //type: uint32
                                Value crc_errors; //type: uint32
                                Value input_insufficient_resource_events; //type: uint32
                                Value mac_aborts_received; //type: uint32
                                Value mac_runt_packets_received; //type: uint32
                                Value mac_giant_packets_received; //type: uint32
                                Value framer_runt_packets_received; //type: uint32
                                Value framer_giant_packets_received; //type: uint32
                                Value framer_aborts_received; //type: uint32




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
                        Value source_name; //type: string
                        Value source_ipv4_address; //type: string
                        Value destination_ipv4_address; //type: string
                        Value tunnel_type; //type: string
                        Value key; //type: uint32
                        Value ttl; //type: uint32




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
                            Value bandwidth; //type: uint32
                            Value port_priority; //type: uint16
                            Value port_number; //type: uint16
                            Value underlying_link_id; //type: uint16
                            Value link_order_number; //type: uint16
                            Value interface_name; //type: string
                            Value iccp_node; //type: uint32
                            Value member_type; //type: BmdMemberTypeEnumEnum
                            Value member_name; //type: string


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
                                Value lacpd_us_received; //type: uint32
                                Value lacpd_us_transmitted; //type: uint32
                                Value marker_packets_received; //type: uint32
                                Value marker_responses_transmitted; //type: uint32
                                Value illegal_packets_received; //type: uint32
                                Value excess_lacpd_us_received; //type: uint32
                                Value excess_marker_packets_received; //type: uint32
                                Value defaulted; //type: uint32
                                Value expired; //type: uint32
                                Value last_cleared_sec; //type: uint32
                                Value last_cleared_nsec; //type: uint32




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
                                Value interface_handle; //type: string
                                Value actor_system_priority; //type: uint16
                                Value actor_system_mac_address; //type: string
                                Value actor_operational_key; //type: uint16
                                Value partner_system_priority; //type: uint16
                                Value partner_system_mac_address; //type: string
                                Value partner_operational_key; //type: uint16
                                Value selected_aggregator_id; //type: uint32
                                Value attached_aggregator_id; //type: uint32
                                Value actor_port_id; //type: uint16
                                Value actor_port_priority; //type: uint16
                                Value partner_port_id; //type: uint16
                                Value partner_port_priority; //type: uint16
                                Value actor_port_state; //type: uint8
                                Value partner_port_state; //type: uint8




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
                                Value mux_state; //type: BmMuxstateEnum
                                Value error; //type: uint32
                                Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                                Value member_state; //type: BmdMemberStateEnum
                                Value mux_state_reason; //type: BmMuxreasonEnum


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
                                    Value reason_type; //type: BmStateReasonTargetEnum
                                    Value severity; //type: BmSeverityEnum


                                    class BmStateReasonTargetEnum;
                                    class BmSeverityEnum;


                            }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData


                                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                                class BmMbrStateReasonEnum;
                                class BmdMemberStateEnum;
                                class BmMuxstateEnum;
                                class BmMuxreasonEnum;


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
                                Value address; //type: string




                        }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress


                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters> counters;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData> link_data;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress> mac_address;
                            std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData> member_mux_data;
                            class BmdMemberTypeEnumEnum;


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
                        Value timeslots; //type: string




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
                        Value aps_state; //type: SonetApsEtEnum


                        class SonetApsEtEnum;


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
                        Value source_name; //type: string
                        Value tunnel_tos; //type: uint32
                        Value tunnel_ttl; //type: uint32
                        Value key; //type: uint32
                        Value keepalive_period; //type: uint16
                        Value keepalive_maximum_retry; //type: uint8
                        Value tunnel_mode; //type: TunnelGreModeEnum
                        Value keepalive_state; //type: TunnelKaDfStateEnum
                        Value df_bit_state; //type: TunnelKaDfStateEnum
                        Value key_bit_state; //type: TunnelKeyStateEnum


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
                            Value afi; //type: TunlPfiAfIdEnum
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class TunlPfiAfIdEnum;


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
                            Value afi; //type: TunlPfiAfIdEnum
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class TunlPfiAfIdEnum;


                    }; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress> destination_ip_address;
                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress> source_ip_address;
                        class TunnelKaDfStateEnum;
                        class TunnelKaDfStateEnum;
                        class TunnelKeyStateEnum;
                        class TunnelGreModeEnum;


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
                        Value interface_list_name; //type: string
                        Value l2_overhead; //type: uint32
                        Value internal_label; //type: uint32




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
                        Value timeslots; //type: string
                        Value payload; //type: uint16
                        Value dejitter_buffer; //type: uint16
                        Value framing; //type: int32




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
                        Value derived_mode; //type: GccDerStateEnum
                        Value sec_state; //type: GccSecStateEnum


                        class GccDerStateEnum;
                        class GccSecStateEnum;


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
                    class ImCmdIntfTypeEnumEnum;


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
                    Value input_data_rate; //type: uint64
                    Value input_packet_rate; //type: uint64
                    Value output_data_rate; //type: uint64
                    Value output_packet_rate; //type: uint64
                    Value peak_input_data_rate; //type: uint64
                    Value peak_input_packet_rate; //type: uint64
                    Value peak_output_data_rate; //type: uint64
                    Value peak_output_packet_rate; //type: uint64
                    Value bandwidth; //type: uint32
                    Value load_interval; //type: uint32
                    Value output_load; //type: uint8
                    Value input_load; //type: uint8
                    Value reliability; //type: uint8




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
                    Value stats_type; //type: ImCmdStatsEnumEnum


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
                        Value packets_received; //type: uint64
                        Value bytes_received; //type: uint64
                        Value packets_sent; //type: uint64
                        Value bytes_sent; //type: uint64
                        Value multicast_packets_received; //type: uint64
                        Value broadcast_packets_received; //type: uint64
                        Value multicast_packets_sent; //type: uint64
                        Value broadcast_packets_sent; //type: uint64
                        Value output_drops; //type: uint32
                        Value output_queue_drops; //type: uint32
                        Value input_drops; //type: uint32
                        Value input_queue_drops; //type: uint32
                        Value runt_packets_received; //type: uint32
                        Value giant_packets_received; //type: uint32
                        Value throttled_packets_received; //type: uint32
                        Value parity_packets_received; //type: uint32
                        Value unknown_protocol_packets_received; //type: uint32
                        Value input_errors; //type: uint32
                        Value crc_errors; //type: uint32
                        Value input_overruns; //type: uint32
                        Value framing_errors_received; //type: uint32
                        Value input_ignored_packets; //type: uint32
                        Value input_aborts; //type: uint32
                        Value output_errors; //type: uint32
                        Value output_underruns; //type: uint32
                        Value output_buffer_failures; //type: uint32
                        Value output_buffers_swapped_out; //type: uint32
                        Value applique; //type: uint32
                        Value resets; //type: uint32
                        Value carrier_transitions; //type: uint32
                        Value availability_flag; //type: uint32
                        Value last_data_time; //type: uint32
                        Value seconds_since_last_clear_counters; //type: uint32
                        Value last_discontinuity_time; //type: uint32
                        Value seconds_since_packet_received; //type: uint32
                        Value seconds_since_packet_sent; //type: uint32




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
                        Value packets_received; //type: uint64
                        Value bytes_received; //type: uint64
                        Value packets_sent; //type: uint64
                        Value bytes_sent; //type: uint64
                        Value input_drops; //type: uint32
                        Value input_queue_drops; //type: uint32
                        Value input_errors; //type: uint32
                        Value unknown_protocol_packets_received; //type: uint32
                        Value output_drops; //type: uint32
                        Value output_queue_drops; //type: uint32
                        Value output_errors; //type: uint32
                        Value last_data_time; //type: uint32
                        Value seconds_since_last_clear_counters; //type: uint32
                        Value last_discontinuity_time; //type: uint32
                        Value seconds_since_packet_received; //type: uint32
                        Value seconds_since_packet_sent; //type: uint32




                }; // Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats> basic_interface_stats;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats> full_interface_stats;
                    class ImCmdStatsEnumEnum;


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
                    Value stats_type; //type: uint32
                    Value contents; //type: StatsTypeContentsEnum


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
                        Value id_type; //type: StatsIdEnum
                        Value unused; //type: uint32
                        Value interface_handle; //type: string
                        Value node_id; //type: string
                        Value feature_id; //type: uint32
                        Value id; //type: uint32


                        class StatsIdEnum;


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
                        Value type; //type: StatsCounterEnum
                        Value count; //type: uint32
                        Value data; //type: string


                        class StatsCounterEnum;


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
                        Value key; //type: string


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
                            Value type; //type: StatsCounterEnum
                            Value count; //type: uint32
                            Value data; //type: string


                            class StatsCounterEnum;


                    }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray> > block_array;


                }; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray


                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray> > block_array;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray> > element_array;
                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId> stats_id;
                    class StatsTypeContentsEnum;


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
                    Value controller; //type: string




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
                class ImAttrDuplexEnum;
                class ImAttrFlowControlEnum;
                class ImStateEnumEnum;
                class ImAttrLinkEnum;
                class ImCmdLoopbackEnumEnum;
                class ImAttrMediaEnum;
                class ImAttrFlowControlEnum;
                class ImStateEnumEnum;
                class ImAttrTransportModeEnum;


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
                Value node_name; //type: string
                Value type_set_name; //type: InterfaceTypeSetEnum


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
                        Value interface_count; //type: uint32
                        Value up_interface_count; //type: uint32
                        Value down_interface_count; //type: uint32
                        Value admin_down_interface_count; //type: uint32




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
                        Value interface_type_name; //type: string
                        Value interface_type_description; //type: string


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
                            Value interface_count; //type: uint32
                            Value up_interface_count; //type: uint32
                            Value down_interface_count; //type: uint32
                            Value admin_down_interface_count; //type: uint32




                    }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts


                        std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts> interface_counts;


                }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType


                    std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts> interface_counts;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType> > interface_type;


            }; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary


                std::unique_ptr<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary> interface_summary;
                class InterfaceTypeSetEnum;


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
                Value interface_name; //type: string
                Value interface; //type: string
                Value parent_interface; //type: string
                Value type; //type: string
                Value state; //type: ImStateEnumEnum
                Value actual_state; //type: ImStateEnumEnum
                Value line_state; //type: ImStateEnumEnum
                Value actual_line_state; //type: ImStateEnumEnum
                Value encapsulation; //type: string
                Value encapsulation_type_string; //type: string
                Value mtu; //type: uint32
                Value sub_interface_mtu_overhead; //type: uint32
                Value l2_transport; //type: boolean
                Value bandwidth; //type: uint32


                class ImStateEnumEnum;
                class ImStateEnumEnum;
                class ImStateEnumEnum;
                class ImStateEnumEnum;


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
                Value interface_count; //type: uint32
                Value up_interface_count; //type: uint32
                Value down_interface_count; //type: uint32
                Value admin_down_interface_count; //type: uint32




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
                Value interface_type_name; //type: string
                Value interface_type_description; //type: string


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
                    Value interface_count; //type: uint32
                    Value up_interface_count; //type: uint32
                    Value down_interface_count; //type: uint32
                    Value admin_down_interface_count; //type: uint32




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
                Value interface_name; //type: string
                Value interface; //type: string
                Value state; //type: ImStateEnumEnum
                Value line_state; //type: ImStateEnumEnum
                Value description; //type: string


                class ImStateEnumEnum;
                class ImStateEnumEnum;


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
                Value interface_count; //type: uint32
                Value up_interface_count; //type: uint32
                Value down_interface_count; //type: uint32
                Value admin_down_interface_count; //type: uint32




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
                Value interface_type_name; //type: string
                Value interface_type_description; //type: string


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
                    Value interface_count; //type: uint32
                    Value up_interface_count; //type: uint32
                    Value down_interface_count; //type: uint32
                    Value admin_down_interface_count; //type: uint32




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
        static const Enum::Value srp;
        static const Enum::Value tunnel;
        static const Enum::Value bundle;
        static const Enum::Value serial;
        static const Enum::Value sonet_pos;
        static const Enum::Value tunnel_gre;
        static const Enum::Value pseudowire_head_end;
        static const Enum::Value cem;
        static const Enum::Value gcc;

};

class ImCmdStatsEnumEnum : public Enum
{
    public:
        static const Enum::Value full;
        static const Enum::Value basic;

};

class SrpMgmtFailureStateEtEnum : public Enum
{
    public:
        static const Enum::Value idle_failure_state;
        static const Enum::Value wait_to_restore_failure_state;
        static const Enum::Value manual_switch_failure_state;
        static const Enum::Value signal_degrade_failure_state;
        static const Enum::Value signal_fail_failure_state;
        static const Enum::Value forced_switch_failure_state;
        static const Enum::Value shutdown_failure_state;
        static const Enum::Value invalid_failure_state;
        static const Enum::Value unknown_failure_state;

};

class GccDerStateEnum : public Enum
{
    public:
        static const Enum::Value in_service;
        static const Enum::Value out_of_service;
        static const Enum::Value maintainance;
        static const Enum::Value ais;

};

class EfpTagEtypeEnum : public Enum
{
    public:
        static const Enum::Value untagged;
        static const Enum::Value dot1q;
        static const Enum::Value dot1ad;

};

class TunnelGreModeEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value gr_eo_ipv4;
        static const Enum::Value gr_eo_ipv6;
        static const Enum::Value mgr_eo_ipv4;
        static const Enum::Value mgr_eo_ipv6;
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class GccSecStateEnum : public Enum
{
    public:
        static const Enum::Value normal;
        static const Enum::Value maintainance;
        static const Enum::Value ais;

};

class SrpMgmtIpsWrapStateEnum : public Enum
{
    public:
        static const Enum::Value idle_wrap_state;
        static const Enum::Value wrapped_state;
        static const Enum::Value locked_out_wrap_state;
        static const Enum::Value unknown_wrap_state;

};

class StatsCounterEnum : public Enum
{
    public:
        static const Enum::Value stats_counter_rate;
        static const Enum::Value stats_counter_uint32;
        static const Enum::Value stats_counter_uint64;
        static const Enum::Value stats_counter_generic;
        static const Enum::Value stats_counter_proto;
        static const Enum::Value stats_counter_srp;
        static const Enum::Value stats_counter_ipv4_prec;
        static const Enum::Value stats_counter_ipv4_dscp;
        static const Enum::Value stats_counter_mpls_exp;
        static const Enum::Value stats_counter_ipv4_bgppa;
        static const Enum::Value stats_counter_src_bgppa;
        static const Enum::Value stats_counter_basic;
        static const Enum::Value stats_counter_comp_generic;
        static const Enum::Value stats_counter_comp_proto;
        static const Enum::Value stats_counter_comp_basic;
        static const Enum::Value stats_counter_accounting;
        static const Enum::Value stats_counter_comp_accounting;
        static const Enum::Value stats_counter_flow;
        static const Enum::Value stats_counter_comp_flow;

};

class SonetApsEtEnum : public Enum
{
    public:
        static const Enum::Value not_configured;
        static const Enum::Value working_active;
        static const Enum::Value protect_active;
        static const Enum::Value working_inactive;
        static const Enum::Value protect_inactive;

};

class ImAttrDuplexEnum : public Enum
{
    public:
        static const Enum::Value im_attr_duplex_unknown;
        static const Enum::Value im_attr_duplex_half;
        static const Enum::Value im_attr_duplex_full;

};

class SrpMgmtIpsPathIndEnum : public Enum
{
    public:
        static const Enum::Value short_path;
        static const Enum::Value long_path;
        static const Enum::Value unknown_path;

};

class PppFsmStateEnum : public Enum
{
    public:
        static const Enum::Value ppp_fsm_state_initial_0;
        static const Enum::Value ppp_fsm_state_starting_1;
        static const Enum::Value ppp_fsm_state_closed_2;
        static const Enum::Value ppp_fsm_state_stopped_3;
        static const Enum::Value ppp_fsm_state_closing_4;
        static const Enum::Value ppp_fsm_state_stopping_5;
        static const Enum::Value ppp_fsm_state_req_sent_6;
        static const Enum::Value ppp_fsm_state_ack_rcvd_7;
        static const Enum::Value ppp_fsm_state_ack_sent_8;
        static const Enum::Value ppp_fsm_state_opened_9;

};

class EfpTagPriorityEnum : public Enum
{
    public:
        static const Enum::Value priority0;
        static const Enum::Value priority1;
        static const Enum::Value priority2;
        static const Enum::Value priority3;
        static const Enum::Value priority4;
        static const Enum::Value priority5;
        static const Enum::Value priority6;
        static const Enum::Value priority7;
        static const Enum::Value priority_any;

};

class ImCmdLoopbackEnumEnum : public Enum
{
    public:
        static const Enum::Value no_loopback;
        static const Enum::Value internal_loopback;
        static const Enum::Value external_loopback;
        static const Enum::Value line_loopback;

};

class ImCmdFrTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value frame_relay_cisco;
        static const Enum::Value frame_relay_ietf;

};

class ImCmdLmiTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value lmi_type_auto;
        static const Enum::Value lmi_type_ansi;
        static const Enum::Value lmi_type_ccitt;
        static const Enum::Value lmi_type_cisco;

};

class SrpMgmtSrrFailureEnum : public Enum
{
    public:
        static const Enum::Value idle_srr_failure;
        static const Enum::Value wait_to_restore_srr_failure;
        static const Enum::Value signal_fail_srr_failure;
        static const Enum::Value forced_switch_srr_failure;
        static const Enum::Value unknown_srr_failure;

};

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::Value im_state_not_ready;
        static const Enum::Value im_state_admin_down;
        static const Enum::Value im_state_down;
        static const Enum::Value im_state_up;
        static const Enum::Value im_state_shutdown;
        static const Enum::Value im_state_err_disable;
        static const Enum::Value im_state_down_immediate;
        static const Enum::Value im_state_down_immediate_admin;
        static const Enum::Value im_state_down_graceful;
        static const Enum::Value im_state_begin_shutdown;
        static const Enum::Value im_state_end_shutdown;
        static const Enum::Value im_state_begin_error_disable;
        static const Enum::Value im_state_end_error_disable;
        static const Enum::Value im_state_begin_down_graceful;
        static const Enum::Value im_state_reset;
        static const Enum::Value im_state_operational;
        static const Enum::Value im_state_not_operational;
        static const Enum::Value im_state_unknown;
        static const Enum::Value im_state_last;

};

class StatsTypeContentsEnum : public Enum
{
    public:
        static const Enum::Value stats_type_single;
        static const Enum::Value stats_type_variable;

};

class ImAttrFlowControlEnum : public Enum
{
    public:
        static const Enum::Value im_attr_flow_control_off;
        static const Enum::Value im_attr_flow_control_on;
        static const Enum::Value im_attr_flow_control_not_sup;
        static const Enum::Value im_attr_flow_control_priority;

};

class StatsIdEnum : public Enum
{
    public:
        static const Enum::Value stats_id_type_unknown;
        static const Enum::Value stats_id_type_min;
        static const Enum::Value stats_id_type_spare;
        static const Enum::Value stats_id_type_node;
        static const Enum::Value stats_id_type_other;
        static const Enum::Value stats_id_type_feature;
        static const Enum::Value stats_id_type_max;

};

class TunlPfiAfIdEnum : public Enum
{
    public:
        static const Enum::Value tunl_pfi_af_id_none;
        static const Enum::Value tunl_pfi_af_id_ipv4;
        static const Enum::Value tunl_pfi_af_id_ipv6;

};

class TunnelKaDfStateEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value enable;

};

class BmdMemberTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value bmd_mbr_local;
        static const Enum::Value bmd_mbr_foreign;
        static const Enum::Value bmd_mbr_unknown;

};

class TunnelKeyStateEnum : public Enum
{
    public:
        static const Enum::Value absent;
        static const Enum::Value present;

};

class BmMbrStateReasonEnum : public Enum
{
    public:
        static const Enum::Value bm_mbr_state_reason_unknown;
        static const Enum::Value bm_mbr_state_reason_unselectable_unknown;
        static const Enum::Value bm_mbr_state_reason_link_down;
        static const Enum::Value bm_mbr_state_reason_link_deleting;
        static const Enum::Value bm_mbr_state_reason_creating;
        static const Enum::Value bm_mbr_state_reason_bundle_creating;
        static const Enum::Value bm_mbr_state_reason_bundle_deleting;
        static const Enum::Value bm_mbr_state_reason_bundle_admin_down;
        static const Enum::Value bm_mbr_state_reason_replicating;
        static const Enum::Value bm_mbr_state_reason_bandwidth;
        static const Enum::Value bm_mbr_state_reason_loop_back;
        static const Enum::Value bm_mbr_state_reason_activity_type;
        static const Enum::Value bm_mbr_state_reason_bundle_shutdown;
        static const Enum::Value bm_mbr_state_reason_min_selected;
        static const Enum::Value bm_mbr_state_reason_max_selected;
        static const Enum::Value bm_mbr_state_reason_link_limit;
        static const Enum::Value bm_mbr_state_reason_active_limit;
        static const Enum::Value bm_mbr_state_reason_standby_unknown;
        static const Enum::Value bm_mbr_state_reason_expired;
        static const Enum::Value bm_mbr_state_reason_defaulted;
        static const Enum::Value bm_mbr_state_reason_act_or_not_agg;
        static const Enum::Value bm_mbr_state_reason_partner_not_agg;
        static const Enum::Value bm_mbr_state_reason_lagid;
        static const Enum::Value bm_mbr_state_reason_bundle_not_cfgd;
        static const Enum::Value bm_mbr_state_reason_bundle_not_ready;
        static const Enum::Value bm_mbr_state_reason_partner_ood;
        static const Enum::Value bm_mbr_state_reason_partner_not_in_sync;
        static const Enum::Value bm_mbr_state_reason_foreign_partner_oos;
        static const Enum::Value bm_mbr_state_reason_attach_unknown;
        static const Enum::Value bm_mbr_state_reason_partner_not_collecting;
        static const Enum::Value bm_mbr_state_reason_collect_unknown;
        static const Enum::Value bm_mbr_state_reason_standby_foreign;
        static const Enum::Value bm_mbr_state_reason_bfd_starting;
        static const Enum::Value bm_mbr_state_reason_bfd_down;
        static const Enum::Value bm_mbr_state_reason_bfd_nbr_unconfig;
        static const Enum::Value bm_mbr_state_reason_mlacp;
        static const Enum::Value bm_mbr_state_reason_pe_isolated;
        static const Enum::Value bm_mbr_state_reason_forced_switchover;
        static const Enum::Value bm_mbr_state_reason_errdis_unknown;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const Enum::Value bm_mbr_state_reason_active;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const Enum::Value bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const Enum::Value bm_mbr_state_reason_mlacp_nak;
        static const Enum::Value bm_mbr_state_reason_mlacp_transport_unavailable;
        static const Enum::Value bm_mbr_state_reason_mlacp_not_configured;
        static const Enum::Value bm_mbr_state_reason_recovery_timer;
        static const Enum::Value bm_mbr_state_reason_mlacp_standby;
        static const Enum::Value bm_mbr_state_reason_maximized_out;
        static const Enum::Value bm_mbr_state_reason_mlacp_peer_selected;
        static const Enum::Value bm_mbr_state_reason_mlacp_connect_timer_running;
        static const Enum::Value bm_mbr_state_reason_bundle_not_mlacp;
        static const Enum::Value bm_mbr_state_reason_no_lon;
        static const Enum::Value bm_mbr_state_reason_cumul_rel_bw_limit;
        static const Enum::Value bm_mbr_state_reason_no_mac;
        static const Enum::Value bm_mbr_state_reason_no_system_id;
        static const Enum::Value bm_mbr_state_reason_link_shutdown;
        static const Enum::Value bm_mbr_state_reason_activity_mlacp;
        static const Enum::Value bm_mbr_state_reason_activity_iccp;
        static const Enum::Value bm_mbr_state_reason_bundle_icpe_mlacp;
        static const Enum::Value bm_mbr_state_reason_no_link_num;
        static const Enum::Value bm_mbr_state_reason_standby_peer_higher_prio;
        static const Enum::Value bm_mbr_state_reason_red_state_standby;
        static const Enum::Value bm_mbr_state_reason_other_red_state_standby;
        static const Enum::Value bm_mbr_state_reason_hold_ing;
        static const Enum::Value bm_mbr_state_reason_bundle_error_disabled;
        static const Enum::Value bm_mbr_state_reason_bundle_efd_disabled;
        static const Enum::Value bm_mbr_state_reason_singleton_pe_isolated;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_starting;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_down;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const Enum::Value bm_mbr_state_reason_timer_running;
        static const Enum::Value bm_mbr_state_reason_count;

};

class BmSeverityEnum : public Enum
{
    public:
        static const Enum::Value ok;
        static const Enum::Value information;
        static const Enum::Value misconfiguration;
        static const Enum::Value warning;
        static const Enum::Value error;

};

class SrpMgmtIpsReqEnum : public Enum
{
    public:
        static const Enum::Value idle_ips_request;
        static const Enum::Value wait_to_restore_ips_request;
        static const Enum::Value manual_switch_ips_request;
        static const Enum::Value signal_degrade_ips_request;
        static const Enum::Value signal_fail_ips_request;
        static const Enum::Value forced_switch_ips_request;
        static const Enum::Value unknown_ips_request;

};

class SrpMgmtFailureEtEnum : public Enum
{
    public:
        static const Enum::Value hardware_missing_failure;
        static const Enum::Value layer1_admin_state_failure;
        static const Enum::Value layer1_error_failure;
        static const Enum::Value keepalive_missed_failure;
        static const Enum::Value link_quality_degraded_failure;
        static const Enum::Value mate_problem_failure;
        static const Enum::Value side_mismatch_failure;
        static const Enum::Value unknown_failure;

};

class ImAttrTransportModeEnum : public Enum
{
    public:
        static const Enum::Value im_attr_transport_mode_unknown;
        static const Enum::Value im_attr_transport_mode_lan;
        static const Enum::Value im_attr_transport_mode_wan;
        static const Enum::Value im_attr_transport_mode_otn_bt_opu1e;
        static const Enum::Value im_attr_transport_mode_otn_bt_opu2e;
        static const Enum::Value im_attr_transport_mode_otn_opu3;
        static const Enum::Value im_attr_transport_mode_otn_opu4;

};

class ImCmdEncapsEnumEnum : public Enum
{
    public:
        static const Enum::Value frame_relay;
        static const Enum::Value vlan;
        static const Enum::Value ppp;

};

class BmMuxstateEnum : public Enum
{
    public:
        static const Enum::Value detached;
        static const Enum::Value waiting;
        static const Enum::Value attached;
        static const Enum::Value collecting;
        static const Enum::Value distributing;
        static const Enum::Value collecting_distributing;

};

class NcpIdentEnum : public Enum
{
    public:
        static const Enum::Value cdpcp;
        static const Enum::Value ipcp;
        static const Enum::Value ipcpiw;
        static const Enum::Value ipv6cp;
        static const Enum::Value mplscp;
        static const Enum::Value osicp;

};

class BmdMemberStateEnum : public Enum
{
    public:
        static const Enum::Value bmd_mbr_state_configured;
        static const Enum::Value bmd_mbr_state_standby;
        static const Enum::Value bmd_mbr_state_hot_standby;
        static const Enum::Value bmd_mbr_state_negotiating;
        static const Enum::Value bmd_mbr_state_bfd_running;
        static const Enum::Value bmd_mbr_state_active;

};

class BmMuxreasonEnum : public Enum
{
    public:
        static const Enum::Value bm_mux_reason_no_reason;
        static const Enum::Value bm_mux_reason_link_down;
        static const Enum::Value bm_mux_reason_link_deleted;
        static const Enum::Value bm_mux_reason_duplex;
        static const Enum::Value bm_mux_reason_bandwidth;
        static const Enum::Value bm_mux_reason_loop_back;
        static const Enum::Value bm_mux_reason_activity_type;
        static const Enum::Value bm_mux_reason_link_limit;
        static const Enum::Value bm_mux_reason_shared;
        static const Enum::Value bm_mux_reason_lagid;
        static const Enum::Value bm_mux_reason_no_bundle;
        static const Enum::Value bm_mux_reason_no_primary;
        static const Enum::Value bm_mux_reason_bundle_down;
        static const Enum::Value bm_mux_reason_individual;
        static const Enum::Value bm_mux_reason_defaulted;
        static const Enum::Value bm_mux_reason_in_sync;
        static const Enum::Value bm_mux_reason_collecting;
        static const Enum::Value bm_mux_reason_active_link_limit;
        static const Enum::Value bm_mux_reason_distributing;
        static const Enum::Value bm_mux_reason_count;

};

class ImAttrLinkEnum : public Enum
{
    public:
        static const Enum::Value im_attr_link_type_auto;
        static const Enum::Value im_attr_link_type_force;

};

class VlanEncapsEnum : public Enum
{
    public:
        static const Enum::Value no_encapsulation;
        static const Enum::Value dot1q;
        static const Enum::Value qinq;
        static const Enum::Value qin_any;
        static const Enum::Value dot1q_native;
        static const Enum::Value dot1ad;
        static const Enum::Value dot1ad_native;
        static const Enum::Value service_instance;
        static const Enum::Value dot1ad_dot1q;
        static const Enum::Value dot1ad_any;

};

class EfpPayloadEtypeEnum : public Enum
{
    public:
        static const Enum::Value payload_ethertype_any;
        static const Enum::Value payload_ethertype_ip;
        static const Enum::Value payload_ethertype_pppoe;

};

class InterfaceTypeSetEnum : public Enum
{
    public:
        static const Enum::Value hardware_interfaces;

};

class BmStateReasonTargetEnum : public Enum
{
    public:
        static const Enum::Value member_reason;
        static const Enum::Value bundle_reason;

};

class ImAttrMediaEnum : public Enum
{
    public:
        static const Enum::Value im_attr_media_other;
        static const Enum::Value im_attr_media_unknown;
        static const Enum::Value im_attr_media_aui;
        static const Enum::Value im_attr_media_10base5;
        static const Enum::Value im_attr_media_foirl;
        static const Enum::Value im_attr_media_10base2;
        static const Enum::Value im_attr_media_10broad36;
        static const Enum::Value im_attr_media_10base;
        static const Enum::Value im_attr_media_10base_thd;
        static const Enum::Value im_attr_media_10base_tfd;
        static const Enum::Value im_attr_media_10base_fp;
        static const Enum::Value im_attr_media_10base_fb;
        static const Enum::Value im_attr_media_10base_fl;
        static const Enum::Value im_attr_media_10base_flhd;
        static const Enum::Value im_attr_media_10base_flfd;
        static const Enum::Value im_attr_media_100base_t4;
        static const Enum::Value im_attr_media_100base_tx;
        static const Enum::Value im_attr_media_100base_txhd;
        static const Enum::Value im_attr_media_100base_txfd;
        static const Enum::Value im_attr_media_100base_fx;
        static const Enum::Value im_attr_media_100base_fxhd;
        static const Enum::Value im_attr_media_100base_fxfd;
        static const Enum::Value im_attr_media_100base_ex;
        static const Enum::Value im_attr_media_100base_exhd;
        static const Enum::Value im_attr_media_100base_exfd;
        static const Enum::Value im_attr_media_100base_t2;
        static const Enum::Value im_attr_media_100base_t2hd;
        static const Enum::Value im_attr_media_100base_t2fd;
        static const Enum::Value im_attr_media_1000base_x;
        static const Enum::Value im_attr_media_1000base_xhdx;
        static const Enum::Value im_attr_media_1000base_xfd;
        static const Enum::Value im_attr_media_1000base_lx;
        static const Enum::Value im_attr_media_1000base_lxhd;
        static const Enum::Value im_attr_media_1000base_lxfdx;
        static const Enum::Value im_attr_media_1000base_sx;
        static const Enum::Value im_attr_media_1000base_sxhd;
        static const Enum::Value im_attr_media_1000base_sxfd;
        static const Enum::Value im_attr_media_1000base_cx;
        static const Enum::Value im_attr_media_1000base_cxhdx;
        static const Enum::Value im_attr_media_1000base_cxfd;
        static const Enum::Value im_attr_media_1000base;
        static const Enum::Value im_attr_media_1000base_thd;
        static const Enum::Value im_attr_media_1000base_tfd;
        static const Enum::Value im_attr_media_10gbase_x;
        static const Enum::Value im_attr_media_10gbase_lx4;
        static const Enum::Value im_attr_media_10gbase_r;
        static const Enum::Value im_attr_media_10gbase_er;
        static const Enum::Value im_attr_media_10gbase_lr;
        static const Enum::Value im_attr_media_10gbase_sr;
        static const Enum::Value im_attr_media_10gbase_w;
        static const Enum::Value im_attr_media_10gbase_ew;
        static const Enum::Value im_attr_media_10gbase_lw;
        static const Enum::Value im_attr_media_10gbase_sw;
        static const Enum::Value im_attr_media_10gbase_zr;
        static const Enum::Value im_attr_media_802_9a;
        static const Enum::Value im_attr_media_rj45;
        static const Enum::Value im_attr_media_1000base_zx;
        static const Enum::Value im_attr_media_1000base_cwdm;
        static const Enum::Value im_attr_media_1000base_cwdm_1470;
        static const Enum::Value im_attr_media_1000base_cwdm_1490;
        static const Enum::Value im_attr_media_1000base_cwdm_1510;
        static const Enum::Value im_attr_media_1000base_cwdm_1530;
        static const Enum::Value im_attr_media_1000base_cwdm_1550;
        static const Enum::Value im_attr_media_1000base_cwdm_1570;
        static const Enum::Value im_attr_media_1000base_cwdm_1590;
        static const Enum::Value im_attr_media_1000base_cwdm_1610;
        static const Enum::Value im_attr_media_10gbase_dwdm;
        static const Enum::Value im_attr_media_100gbase_lr4;
        static const Enum::Value im_attr_media_1000base_dwdm;
        static const Enum::Value im_attr_media_1000base_dwdm_1533;
        static const Enum::Value im_attr_media_1000base_dwdm_1537;
        static const Enum::Value im_attr_media_1000base_dwdm_1541;
        static const Enum::Value im_attr_media_1000base_dwdm_1545;
        static const Enum::Value im_attr_media_1000base_dwdm_1549;
        static const Enum::Value im_attr_media_1000base_dwdm_1553;
        static const Enum::Value im_attr_media_1000base_dwdm_1557;
        static const Enum::Value im_attr_media_1000base_dwdm_1561;
        static const Enum::Value im_attr_media_40gbase_lr4;
        static const Enum::Value im_attr_media_40gbase_er4;
        static const Enum::Value im_attr_media_100gbase_er4;
        static const Enum::Value im_attr_media_1000base_ex;
        static const Enum::Value im_attr_media_1000base_bx10_d;
        static const Enum::Value im_attr_media_1000base_bx10_u;
        static const Enum::Value im_attr_media_1000base_dwdm_1561_42;
        static const Enum::Value im_attr_media_1000base_dwdm_1560_61;
        static const Enum::Value im_attr_media_1000base_dwdm_1559_79;
        static const Enum::Value im_attr_media_1000base_dwdm_1558_98;
        static const Enum::Value im_attr_media_1000base_dwdm_1558_17;
        static const Enum::Value im_attr_media_1000base_dwdm_1557_36;
        static const Enum::Value im_attr_media_1000base_dwdm_1556_55;
        static const Enum::Value im_attr_media_1000base_dwdm_1555_75;
        static const Enum::Value im_attr_media_1000base_dwdm_1554_94;
        static const Enum::Value im_attr_media_1000base_dwdm_1554_13;
        static const Enum::Value im_attr_media_1000base_dwdm_1553_33;
        static const Enum::Value im_attr_media_1000base_dwdm_1552_52;
        static const Enum::Value im_attr_media_1000base_dwdm_1551_72;
        static const Enum::Value im_attr_media_1000base_dwdm_1550_92;
        static const Enum::Value im_attr_media_1000base_dwdm_1550_12;
        static const Enum::Value im_attr_media_1000base_dwdm_1549_32;
        static const Enum::Value im_attr_media_1000base_dwdm_1548_51;
        static const Enum::Value im_attr_media_1000base_dwdm_1547_72;
        static const Enum::Value im_attr_media_1000base_dwdm_1546_92;
        static const Enum::Value im_attr_media_1000base_dwdm_1546_12;
        static const Enum::Value im_attr_media_1000base_dwdm_1545_32;
        static const Enum::Value im_attr_media_1000base_dwdm_1544_53;
        static const Enum::Value im_attr_media_1000base_dwdm_1543_73;
        static const Enum::Value im_attr_media_1000base_dwdm_1542_94;
        static const Enum::Value im_attr_media_1000base_dwdm_1542_14;
        static const Enum::Value im_attr_media_1000base_dwdm_1541_35;
        static const Enum::Value im_attr_media_1000base_dwdm_1540_56;
        static const Enum::Value im_attr_media_1000base_dwdm_1539_77;
        static const Enum::Value im_attr_media_1000base_dwdm_1538_98;
        static const Enum::Value im_attr_media_1000base_dwdm_1538_19;
        static const Enum::Value im_attr_media_1000base_dwdm_1537_40;
        static const Enum::Value im_attr_media_1000base_dwdm_1536_61;
        static const Enum::Value im_attr_media_1000base_dwdm_1535_82;
        static const Enum::Value im_attr_media_1000base_dwdm_1535_04;
        static const Enum::Value im_attr_media_1000base_dwdm_1534_25;
        static const Enum::Value im_attr_media_1000base_dwdm_1533_47;
        static const Enum::Value im_attr_media_1000base_dwdm_1532_68;
        static const Enum::Value im_attr_media_1000base_dwdm_1531_90;
        static const Enum::Value im_attr_media_1000base_dwdm_1531_12;
        static const Enum::Value im_attr_media_1000base_dwdm_1530_33;
        static const Enum::Value im_attr_media_1000base_dwdm_tunable;
        static const Enum::Value im_attr_media_10gbase_dwdm_1561_42;
        static const Enum::Value im_attr_media_10gbase_dwdm_1560_61;
        static const Enum::Value im_attr_media_10gbase_dwdm_1559_79;
        static const Enum::Value im_attr_media_10gbase_dwdm_1558_98;
        static const Enum::Value im_attr_media_10gbase_dwdm_1558_17;
        static const Enum::Value im_attr_media_10gbase_dwdm_1557_36;
        static const Enum::Value im_attr_media_10gbase_dwdm_1556_55;
        static const Enum::Value im_attr_media_10gbase_dwdm_1555_75;
        static const Enum::Value im_attr_media_10gbase_dwdm_1554_94;
        static const Enum::Value im_attr_media_10gbase_dwdm_1554_13;
        static const Enum::Value im_attr_media_10gbase_dwdm_1553_33;
        static const Enum::Value im_attr_media_10gbase_dwdm_1552_52;
        static const Enum::Value im_attr_media_10gbase_dwdm_1551_72;
        static const Enum::Value im_attr_media_10gbase_dwdm_1550_92;
        static const Enum::Value im_attr_media_10gbase_dwdm_1550_12;
        static const Enum::Value im_attr_media_10gbase_dwdm_1549_32;
        static const Enum::Value im_attr_media_10gbase_dwdm_1548_51;
        static const Enum::Value im_attr_media_10gbase_dwdm_1547_72;
        static const Enum::Value im_attr_media_10gbase_dwdm_1546_92;
        static const Enum::Value im_attr_media_10gbase_dwdm_1546_12;
        static const Enum::Value im_attr_media_10gbase_dwdm_1545_32;
        static const Enum::Value im_attr_media_10gbase_dwdm_1544_53;
        static const Enum::Value im_attr_media_10gbase_dwdm_1543_73;
        static const Enum::Value im_attr_media_10gbase_dwdm_1542_94;
        static const Enum::Value im_attr_media_10gbase_dwdm_1542_14;
        static const Enum::Value im_attr_media_10gbase_dwdm_1541_35;
        static const Enum::Value im_attr_media_10gbase_dwdm_1540_56;
        static const Enum::Value im_attr_media_10gbase_dwdm_1539_77;
        static const Enum::Value im_attr_media_10gbase_dwdm_1538_98;
        static const Enum::Value im_attr_media_10gbase_dwdm_1538_19;
        static const Enum::Value im_attr_media_10gbase_dwdm_1537_40;
        static const Enum::Value im_attr_media_10gbase_dwdm_1536_61;
        static const Enum::Value im_attr_media_10gbase_dwdm_1535_82;
        static const Enum::Value im_attr_media_10gbase_dwdm_1535_04;
        static const Enum::Value im_attr_media_10gbase_dwdm_1534_25;
        static const Enum::Value im_attr_media_10gbase_dwdm_1533_47;
        static const Enum::Value im_attr_media_10gbase_dwdm_1532_68;
        static const Enum::Value im_attr_media_10gbase_dwdm_1531_90;
        static const Enum::Value im_attr_media_10gbase_dwdm_1531_12;
        static const Enum::Value im_attr_media_10gbase_dwdm_1530_33;
        static const Enum::Value im_attr_media_10gbase_dwdm_tunable;
        static const Enum::Value im_attr_media_40gbase_dwdm_1561_42;
        static const Enum::Value im_attr_media_40gbase_dwdm_1560_61;
        static const Enum::Value im_attr_media_40gbase_dwdm_1559_79;
        static const Enum::Value im_attr_media_40gbase_dwdm_1558_98;
        static const Enum::Value im_attr_media_40gbase_dwdm_1558_17;
        static const Enum::Value im_attr_media_40gbase_dwdm_1557_36;
        static const Enum::Value im_attr_media_40gbase_dwdm_1556_55;
        static const Enum::Value im_attr_media_40gbase_dwdm_1555_75;
        static const Enum::Value im_attr_media_40gbase_dwdm_1554_94;
        static const Enum::Value im_attr_media_40gbase_dwdm_1554_13;
        static const Enum::Value im_attr_media_40gbase_dwdm_1553_33;
        static const Enum::Value im_attr_media_40gbase_dwdm_1552_52;
        static const Enum::Value im_attr_media_40gbase_dwdm_1551_72;
        static const Enum::Value im_attr_media_40gbase_dwdm_1550_92;
        static const Enum::Value im_attr_media_40gbase_dwdm_1550_12;
        static const Enum::Value im_attr_media_40gbase_dwdm_1549_32;
        static const Enum::Value im_attr_media_40gbase_dwdm_1548_51;
        static const Enum::Value im_attr_media_40gbase_dwdm_1547_72;
        static const Enum::Value im_attr_media_40gbase_dwdm_1546_92;
        static const Enum::Value im_attr_media_40gbase_dwdm_1546_12;
        static const Enum::Value im_attr_media_40gbase_dwdm_1545_32;
        static const Enum::Value im_attr_media_40gbase_dwdm_1544_53;
        static const Enum::Value im_attr_media_40gbase_dwdm_1543_73;
        static const Enum::Value im_attr_media_40gbase_dwdm_1542_94;
        static const Enum::Value im_attr_media_40gbase_dwdm_1542_14;
        static const Enum::Value im_attr_media_40gbase_dwdm_1541_35;
        static const Enum::Value im_attr_media_40gbase_dwdm_1540_56;
        static const Enum::Value im_attr_media_40gbase_dwdm_1539_77;
        static const Enum::Value im_attr_media_40gbase_dwdm_1538_98;
        static const Enum::Value im_attr_media_40gbase_dwdm_1538_19;
        static const Enum::Value im_attr_media_40gbase_dwdm_1537_40;
        static const Enum::Value im_attr_media_40gbase_dwdm_1536_61;
        static const Enum::Value im_attr_media_40gbase_dwdm_1535_82;
        static const Enum::Value im_attr_media_40gbase_dwdm_1535_04;
        static const Enum::Value im_attr_media_40gbase_dwdm_1534_25;
        static const Enum::Value im_attr_media_40gbase_dwdm_1533_47;
        static const Enum::Value im_attr_media_40gbase_dwdm_1532_68;
        static const Enum::Value im_attr_media_40gbase_dwdm_1531_90;
        static const Enum::Value im_attr_media_40gbase_dwdm_1531_12;
        static const Enum::Value im_attr_media_40gbase_dwdm_1530_33;
        static const Enum::Value im_attr_media_40gbase_dwdm_tunable;
        static const Enum::Value im_attr_media_100gbase_dwdm_1561_42;
        static const Enum::Value im_attr_media_100gbase_dwdm_1560_61;
        static const Enum::Value im_attr_media_100gbase_dwdm_1559_79;
        static const Enum::Value im_attr_media_100gbase_dwdm_1558_98;
        static const Enum::Value im_attr_media_100gbase_dwdm_1558_17;
        static const Enum::Value im_attr_media_100gbase_dwdm_1557_36;
        static const Enum::Value im_attr_media_100gbase_dwdm_1556_55;
        static const Enum::Value im_attr_media_100gbase_dwdm_1555_75;
        static const Enum::Value im_attr_media_100gbase_dwdm_1554_94;
        static const Enum::Value im_attr_media_100gbase_dwdm_1554_13;
        static const Enum::Value im_attr_media_100gbase_dwdm_1553_33;
        static const Enum::Value im_attr_media_100gbase_dwdm_1552_52;
        static const Enum::Value im_attr_media_100gbase_dwdm_1551_72;
        static const Enum::Value im_attr_media_100gbase_dwdm_1550_92;
        static const Enum::Value im_attr_media_100gbase_dwdm_1550_12;
        static const Enum::Value im_attr_media_100gbase_dwdm_1549_32;
        static const Enum::Value im_attr_media_100gbase_dwdm_1548_51;
        static const Enum::Value im_attr_media_100gbase_dwdm_1547_72;
        static const Enum::Value im_attr_media_100gbase_dwdm_1546_92;
        static const Enum::Value im_attr_media_100gbase_dwdm_1546_12;
        static const Enum::Value im_attr_media_100gbase_dwdm_1545_32;
        static const Enum::Value im_attr_media_100gbase_dwdm_1544_53;
        static const Enum::Value im_attr_media_100gbase_dwdm_1543_73;
        static const Enum::Value im_attr_media_100gbase_dwdm_1542_94;
        static const Enum::Value im_attr_media_100gbase_dwdm_1542_14;
        static const Enum::Value im_attr_media_100gbase_dwdm_1541_35;
        static const Enum::Value im_attr_media_100gbase_dwdm_1540_56;
        static const Enum::Value im_attr_media_100gbase_dwdm_1539_77;
        static const Enum::Value im_attr_media_100gbase_dwdm_1538_98;
        static const Enum::Value im_attr_media_100gbase_dwdm_1538_19;
        static const Enum::Value im_attr_media_100gbase_dwdm_1537_40;
        static const Enum::Value im_attr_media_100gbase_dwdm_1536_61;
        static const Enum::Value im_attr_media_100gbase_dwdm_1535_82;
        static const Enum::Value im_attr_media_100gbase_dwdm_1535_04;
        static const Enum::Value im_attr_media_100gbase_dwdm_1534_25;
        static const Enum::Value im_attr_media_100gbase_dwdm_1533_47;
        static const Enum::Value im_attr_media_100gbase_dwdm_1532_68;
        static const Enum::Value im_attr_media_100gbase_dwdm_1531_90;
        static const Enum::Value im_attr_media_100gbase_dwdm_1531_12;
        static const Enum::Value im_attr_media_100gbase_dwdm_1530_33;
        static const Enum::Value im_attr_media_100gbase_dwdm_tunable;
        static const Enum::Value im_attr_media_40gbase_kr4;
        static const Enum::Value im_attr_media_40gbase_cr4;
        static const Enum::Value im_attr_media_40gbase_sr4;
        static const Enum::Value im_attr_media_40gbase_fr;
        static const Enum::Value im_attr_media_100gbase_cr10;
        static const Enum::Value im_attr_media_100gbase_sr10;
        static const Enum::Value im_attr_media_40gbase_csr4;
        static const Enum::Value im_attr_media_10gbase_cwdm;
        static const Enum::Value im_attr_media_10gbase_cwdm_tunable;
        static const Enum::Value im_attr_media_10gbase_cwdm_1470;
        static const Enum::Value im_attr_media_10gbase_cwdm_1490;
        static const Enum::Value im_attr_media_10gbase_cwdm_1510;
        static const Enum::Value im_attr_media_10gbase_cwdm_1530;
        static const Enum::Value im_attr_media_10gbase_cwdm_1550;
        static const Enum::Value im_attr_media_10gbase_cwdm_1570;
        static const Enum::Value im_attr_media_10gbase_cwdm_1590;
        static const Enum::Value im_attr_media_10gbase_cwdm_1610;
        static const Enum::Value im_attr_media_40gbase_cwdm;
        static const Enum::Value im_attr_media_40gbase_cwdm_tunable;
        static const Enum::Value im_attr_media_40gbase_cwdm_1470;
        static const Enum::Value im_attr_media_40gbase_cwdm_1490;
        static const Enum::Value im_attr_media_40gbase_cwdm_1510;
        static const Enum::Value im_attr_media_40gbase_cwdm_1530;
        static const Enum::Value im_attr_media_40gbase_cwdm_1550;
        static const Enum::Value im_attr_media_40gbase_cwdm_1570;
        static const Enum::Value im_attr_media_40gbase_cwdm_1590;
        static const Enum::Value im_attr_media_40gbase_cwdm_1610;
        static const Enum::Value im_attr_media_100gbase_cwdm;
        static const Enum::Value im_attr_media_100gbase_cwdm_tunable;
        static const Enum::Value im_attr_media_100gbase_cwdm_1470;
        static const Enum::Value im_attr_media_100gbase_cwdm_1490;
        static const Enum::Value im_attr_media_100gbase_cwdm_1510;
        static const Enum::Value im_attr_media_100gbase_cwdm_1530;
        static const Enum::Value im_attr_media_100gbase_cwdm_1550;
        static const Enum::Value im_attr_media_100gbase_cwdm_1570;
        static const Enum::Value im_attr_media_100gbase_cwdm_1590;
        static const Enum::Value im_attr_media_100gbase_cwdm_1610;
        static const Enum::Value im_attr_media_40gbase_elpb;
        static const Enum::Value im_attr_media_100gbase_elpb;
        static const Enum::Value im_attr_media_100gbase_lr10;
        static const Enum::Value im_attr_media_40gbase;
        static const Enum::Value im_attr_media_100gbase_kp4;
        static const Enum::Value im_attr_media_100gbase_kr4;
        static const Enum::Value im_attr_media_10gbase_lrm;
        static const Enum::Value im_attr_media_10gbase_cx4;
        static const Enum::Value im_attr_media_10gbase;
        static const Enum::Value im_attr_media_10gbase_kx4;
        static const Enum::Value im_attr_media_10gbase_kr;
        static const Enum::Value im_attr_media_10gbase_pr;
        static const Enum::Value im_attr_media_100base_lx;
        static const Enum::Value im_attr_media_100base_zx;
        static const Enum::Value im_attr_media_1000base_bx_d;
        static const Enum::Value im_attr_media_1000base_bx_u;
        static const Enum::Value im_attr_media_1000base_bx20_d;
        static const Enum::Value im_attr_media_1000base_bx20_u;
        static const Enum::Value im_attr_media_1000base_bx40_d;
        static const Enum::Value im_attr_media_1000base_bx40_da;
        static const Enum::Value im_attr_media_1000base_bx40_u;
        static const Enum::Value im_attr_media_1000base_bx80_d;
        static const Enum::Value im_attr_media_1000base_bx80_u;
        static const Enum::Value im_attr_media_1000base_bx120_d;
        static const Enum::Value im_attr_media_1000base_bx120_u;
        static const Enum::Value im_attr_media_10gbase_bx_d;
        static const Enum::Value im_attr_media_10gbase_bx_u;
        static const Enum::Value im_attr_media_10gbase_bx10_d;
        static const Enum::Value im_attr_media_10gbase_bx10_u;
        static const Enum::Value im_attr_media_10gbase_bx20_d;
        static const Enum::Value im_attr_media_10gbase_bx20_u;
        static const Enum::Value im_attr_media_10gbase_bx40_d;
        static const Enum::Value im_attr_media_10gbase_bx40_u;
        static const Enum::Value im_attr_media_10gbase_bx80_d;
        static const Enum::Value im_attr_media_10gbase_bx80_u;
        static const Enum::Value im_attr_media_10gbase_bx120_d;
        static const Enum::Value im_attr_media_10gbase_bx120_u;
        static const Enum::Value im_attr_media_1000base_dr_lx;
        static const Enum::Value im_attr_media_100gbase_er4l;
        static const Enum::Value im_attr_media_100gbase_sr4;
        static const Enum::Value im_attr_media_40gbase_sr_bd;
        static const Enum::Value im_attr_media_25gbase_cr;
        static const Enum::Value im_attr_media_25gbase_cr_s;
        static const Enum::Value im_attr_media_25gbase_kr;
        static const Enum::Value im_attr_media_25gbase_kr_s;
        static const Enum::Value im_attr_media_25gbase_r;
        static const Enum::Value im_attr_media_25gbase_sr;
        static const Enum::Value im_attr_media_25gbase_dwdm;
        static const Enum::Value im_attr_media_25gbase_dwdm_tunable;
        static const Enum::Value im_attr_media_25gbase_cwdm;
        static const Enum::Value im_attr_media_25gbase_cwdm_tunable;
        static const Enum::Value im_attr_media_100gbase_psm4;
        static const Enum::Value im_attr_media_100gbase_er10;
        static const Enum::Value im_attr_media_100gbase_er10l;
        static const Enum::Value im_attr_media_100gbase_acc;
        static const Enum::Value im_attr_media_100gbase_aoc;
        static const Enum::Value im_attr_media_100gbase_cwdm4;
        static const Enum::Value im_attr_media_40gbase_psm4;
        static const Enum::Value im_attr_media_100gbase_cr4;
        static const Enum::Value im_attr_media_100gbase_act_loop;
        static const Enum::Value im_attr_media_100gbase_pas_loop;

};

class SrpMgmtSrrNodeStateEnum : public Enum
{
    public:
        static const Enum::Value idle_srr_state;
        static const Enum::Value discovery_srr_state;
        static const Enum::Value unknown_srr_state;

};


}
}

#endif /* _CISCO_IOS_XR_PFI_IM_CMD_OPER_ */

