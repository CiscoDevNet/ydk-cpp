#ifndef _CISCO_IOS_XR_DNX_DRIVER_OPER_
#define _CISCO_IOS_XR_DNX_DRIVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dnx_driver_oper {

class Fia : public Entity
{
    public:
        Fia();
        ~Fia();

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


            class RxLinkInformation : public Entity
            {
                public:
                    RxLinkInformation();
                    ~RxLinkInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LinkOptions : public Entity
                {
                    public:
                        LinkOptions();
                        ~LinkOptions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LinkOption : public Entity
                    {
                        public:
                            LinkOption();
                            ~LinkOption();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value option; //type: string


                        class RxAsicInstances : public Entity
                        {
                            public:
                                RxAsicInstances();
                                ~RxAsicInstances();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class RxAsicInstance : public Entity
                            {
                                public:
                                    RxAsicInstance();
                                    ~RxAsicInstance();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value instance; //type: uint32


                                class RxLinks : public Entity
                                {
                                    public:
                                        RxLinks();
                                        ~RxLinks();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class RxLink : public Entity
                                    {
                                        public:
                                            RxLink();
                                            ~RxLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_number; //type: uint32
                                            Value end_number; //type: uint32
                                            Value status_option; //type: string


                                        class RxLink_ : public Entity
                                        {
                                            public:
                                                RxLink_();
                                                ~RxLink_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value link; //type: int32
                                                Value speed; //type: uint32
                                                Value stage; //type: LinkStageEnum
                                                Value is_link_valid; //type: boolean
                                                Value is_conf_pending; //type: boolean
                                                Value admin_state; //type: AdminStateEnum
                                                Value oper_state; //type: OperStateEnum
                                                Value error_state; //type: LinkErrorStateEnum
                                                Value flags; //type: string
                                                Value flap_cnt; //type: uint32
                                                Value num_admin_shuts; //type: uint32


                                            class ThisLink : public Entity
                                            {
                                                public:
                                                    ThisLink();
                                                    ~ThisLink();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_type; //type: LinkEnum
                                                    Value link_stage; //type: LinkStageEnum
                                                    Value link_num; //type: uint32
                                                    Value phy_link_num; //type: uint32


                                                class AsicId : public Entity
                                                {
                                                    public:
                                                        AsicId();
                                                        ~AsicId();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value rack_type; //type: RackEnum
                                                        Value asic_type; //type: AsicEnum
                                                        Value rack_num; //type: uint32
                                                        Value slot_num; //type: uint32
                                                        Value asic_instance; //type: uint32


                                                        class AsicEnum;
                                                        class RackEnum;


                                                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId


                                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId> asic_id;
                                                    class LinkStageEnum;
                                                    class LinkEnum;


                                            }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink


                                            class FarEndLink : public Entity
                                            {
                                                public:
                                                    FarEndLink();
                                                    ~FarEndLink();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_type; //type: LinkEnum
                                                    Value link_stage; //type: LinkStageEnum
                                                    Value link_num; //type: uint32
                                                    Value phy_link_num; //type: uint32


                                                class AsicId : public Entity
                                                {
                                                    public:
                                                        AsicId();
                                                        ~AsicId();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value rack_type; //type: RackEnum
                                                        Value asic_type; //type: AsicEnum
                                                        Value rack_num; //type: uint32
                                                        Value slot_num; //type: uint32
                                                        Value asic_instance; //type: uint32


                                                        class AsicEnum;
                                                        class RackEnum;


                                                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId


                                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId> asic_id;
                                                    class LinkStageEnum;
                                                    class LinkEnum;


                                            }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink


                                            class FarEndLinkInHw : public Entity
                                            {
                                                public:
                                                    FarEndLinkInHw();
                                                    ~FarEndLinkInHw();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_type; //type: LinkEnum
                                                    Value link_stage; //type: LinkStageEnum
                                                    Value link_num; //type: uint32
                                                    Value phy_link_num; //type: uint32


                                                class AsicId : public Entity
                                                {
                                                    public:
                                                        AsicId();
                                                        ~AsicId();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value rack_type; //type: RackEnum
                                                        Value asic_type; //type: AsicEnum
                                                        Value rack_num; //type: uint32
                                                        Value slot_num; //type: uint32
                                                        Value asic_instance; //type: uint32


                                                        class AsicEnum;
                                                        class RackEnum;


                                                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId


                                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId> asic_id;
                                                    class LinkStageEnum;
                                                    class LinkEnum;


                                            }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw


                                            class History : public Entity
                                            {
                                                public:
                                                    History();
                                                    ~History();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value histnum; //type: uint8
                                                    Value start_index; //type: uint8


                                                class Hist : public Entity
                                                {
                                                    public:
                                                        Hist();
                                                        ~Hist();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value admin_state; //type: AdminStateEnum
                                                        Value oper_state; //type: OperStateEnum
                                                        Value error_state; //type: LinkErrorStateEnum
                                                        Value timestamp; //type: uint64
                                                        Value reasons; //type: string


                                                        class AdminStateEnum;
                                                        class LinkErrorStateEnum;
                                                        class OperStateEnum;


                                                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist> > hist;


                                            }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History


                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink> far_end_link;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw> far_end_link_in_hw;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History> history;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink> this_link;
                                                class AdminStateEnum;
                                                class LinkErrorStateEnum;
                                                class OperStateEnum;
                                                class LinkStageEnum;


                                        }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_> > rx_link;


                                    }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink> > rx_link;


                                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks


                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks> rx_links;


                            }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance


                                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance> > rx_asic_instance;


                        }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances


                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances> rx_asic_instances;


                    }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption> > link_option;


                }; // Fia::Nodes::Node::RxLinkInformation::LinkOptions


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions> link_options;


            }; // Fia::Nodes::Node::RxLinkInformation


            class DriverInformation : public Entity
            {
                public:
                    DriverInformation();
                    ~DriverInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value drv_version; //type: uint32
                    Value coeff_major_rev; //type: uint32
                    Value coeff_minor_rev; //type: uint32
                    Value functional_role; //type: uint8
                    Value issu_role; //type: uint8
                    Value rack_name; //type: string
                    Value rack_type; //type: int32
                    Value rack_num; //type: uint8
                    Value is_driver_ready; //type: boolean
                    Value card_avail_mask; //type: uint32
                    Value asic_avail_mask; //type: uint64
                    Value exp_asic_avail_mask; //type: uint64
                    Value ucmc_ratio; //type: uint32
                    Value asic_oper_notify_to_fsdb_pending_bmap; //type: uint64
                    Value is_full_fgid_download_req; //type: boolean
                    Value is_fgid_download_in_progress; //type: boolean
                    Value is_fgid_download_completed; //type: boolean
                    Value fsdb_conn_active; //type: boolean
                    Value fgid_conn_active; //type: boolean
                    Value issu_mgr_conn_active; //type: boolean
                    Value fsdb_reg_active; //type: boolean
                    Value fgid_reg_active; //type: boolean
                    Value issu_mgr_reg_active; //type: boolean
                    Value num_pm_conn_reqs; //type: uint8
                    Value num_fsdb_conn_reqs; //type: uint8
                    Value num_fgid_conn_reqs; //type: uint8
                    Value num_fstats_conn_reqs; //type: uint8
                    Value num_cm_conn_reqs; //type: uint8
                    Value num_issu_mgr_conn_reqs; //type: uint8
                    Value num_peer_fia_conn_reqs; //type: uint8
                    Value is_gaspp_registered; //type: boolean
                    Value is_cih_registered; //type: boolean
                    Value drvr_initial_startup_timestamp; //type: string
                    Value drvr_current_startup_timestamp; //type: string
                    Value num_intf_ports; //type: uint32
                    Value uc_weight; //type: uint8
                    Value respawn_count; //type: uint8
                    Value total_asics; //type: uint8
                    Value issu_ready_ntfy_pending; //type: boolean
                    Value issu_abort_sent; //type: boolean
                    Value issu_abort_rcvd; //type: boolean
                    Value fc_mode; //type: FcModeEnum
                    Value board_rev_id; //type: uint32


                class DeviceInfo : public Entity
                {
                    public:
                        DeviceInfo();
                        ~DeviceInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_valid; //type: boolean
                        Value fapid; //type: uint32
                        Value hotplug_event; //type: uint32
                        Value slice_state; //type: SliceStateEnum
                        Value admin_state; //type: AdminStateEnum
                        Value oper_state; //type: AsicOperStateEnum
                        Value asic_state; //type: AsicAccessStateEnum
                        Value last_init_cause; //type: AsicInitMethodEnum
                        Value num_pon_resets; //type: uint32
                        Value num_hard_resets; //type: uint32
                        Value local_switch_state; //type: boolean


                    class AsicId : public Entity
                    {
                        public:
                            AsicId();
                            ~AsicId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rack_type; //type: RackEnum
                            Value asic_type; //type: AsicEnum
                            Value rack_num; //type: uint32
                            Value slot_num; //type: uint32
                            Value asic_instance; //type: uint32


                            class AsicEnum;
                            class RackEnum;


                    }; // Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId


                        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId> asic_id;
                        class AdminStateEnum;
                        class AsicAccessStateEnum;
                        class AsicInitMethodEnum;
                        class AsicOperStateEnum;
                        class SliceStateEnum;


                }; // Fia::Nodes::Node::DriverInformation::DeviceInfo


                class CardInfo : public Entity
                {
                    public:
                        CardInfo();
                        ~CardInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value card_type; //type: int32
                        Value card_name; //type: string
                        Value slot_no; //type: int32
                        Value card_flag; //type: int32
                        Value evt_flag; //type: int32
                        Value reg_flag; //type: int32
                        Value instance; //type: int32
                        Value card_state; //type: uint8
                        Value exp_num_asics; //type: uint32
                        Value exp_num_asics_per_fsdb; //type: uint32
                        Value is_powered; //type: boolean
                        Value cxp_avail_bitmap; //type: uint64
                        Value num_ilkns_per_asic; //type: uint32
                        Value num_local_ports_per_ilkn; //type: uint32
                        Value num_cos_per_port; //type: uint8


                    class OirCircularBuffer : public Entity
                    {
                        public:
                            OirCircularBuffer();
                            ~OirCircularBuffer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value count; //type: int32
                            Value start; //type: int32
                            Value end; //type: int32


                        class FiaOirInfo : public Entity
                        {
                            public:
                                FiaOirInfo();
                                ~FiaOirInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value card_flag; //type: int32
                                Value card_type; //type: int32
                                Value reg_flag; //type: int32
                                Value evt_flag; //type: int32
                                Value rack_num; //type: int32
                                Value instance; //type: int32
                                Value cur_card_state; //type: int32




                        }; // Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo> > fia_oir_info;


                    }; // Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer


                        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer> oir_circular_buffer;


                }; // Fia::Nodes::Node::DriverInformation::CardInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo> > card_info;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::DeviceInfo> > device_info;
                    class FcModeEnum;


            }; // Fia::Nodes::Node::DriverInformation


            class ClearStatistics : public Entity
            {
                public:
                    ClearStatistics();
                    ~ClearStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AsicInstances : public Entity
                {
                    public:
                        AsicInstances();
                        ~AsicInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AsicInstance : public Entity
                    {
                        public:
                            AsicInstance();
                            ~AsicInstance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value asic_instance; //type: uint32
                            Value instance; //type: int32




                    }; // Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance> > asic_instance;


                }; // Fia::Nodes::Node::ClearStatistics::AsicInstances


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics::AsicInstances> asic_instances;


            }; // Fia::Nodes::Node::ClearStatistics


            class TxLinkInformation : public Entity
            {
                public:
                    TxLinkInformation();
                    ~TxLinkInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TxStatusOptionTable : public Entity
                {
                    public:
                        TxStatusOptionTable();
                        ~TxStatusOptionTable();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class TxStatusOption : public Entity
                    {
                        public:
                            TxStatusOption();
                            ~TxStatusOption();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class TxAsicInstances : public Entity
                        {
                            public:
                                TxAsicInstances();
                                ~TxAsicInstances();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class TxAsicInstance : public Entity
                            {
                                public:
                                    TxAsicInstance();
                                    ~TxAsicInstance();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value instance; //type: uint32


                                class TxLinks : public Entity
                                {
                                    public:
                                        TxLinks();
                                        ~TxLinks();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class TxLink : public Entity
                                    {
                                        public:
                                            TxLink();
                                            ~TxLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value start_number; //type: uint32
                                            Value end_number; //type: uint32


                                        class TxLink_ : public Entity
                                        {
                                            public:
                                                TxLink_();
                                                ~TxLink_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value link; //type: int32
                                                Value speed; //type: uint32
                                                Value stage; //type: uint8
                                                Value is_link_valid; //type: boolean
                                                Value is_conf_pending; //type: boolean
                                                Value is_power_enabled; //type: boolean
                                                Value coeff1; //type: uint32
                                                Value coeff2; //type: uint32
                                                Value admin_state; //type: AdminStateEnum
                                                Value oper_state; //type: OperStateEnum
                                                Value error_state; //type: LinkErrorStateEnum
                                                Value num_admin_shuts; //type: uint32


                                            class ThisLink : public Entity
                                            {
                                                public:
                                                    ThisLink();
                                                    ~ThisLink();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_type; //type: LinkEnum
                                                    Value link_stage; //type: LinkStageEnum
                                                    Value link_num; //type: uint32
                                                    Value phy_link_num; //type: uint32


                                                class AsicId : public Entity
                                                {
                                                    public:
                                                        AsicId();
                                                        ~AsicId();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value rack_type; //type: RackEnum
                                                        Value asic_type; //type: AsicEnum
                                                        Value rack_num; //type: uint32
                                                        Value slot_num; //type: uint32
                                                        Value asic_instance; //type: uint32


                                                        class AsicEnum;
                                                        class RackEnum;


                                                }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId


                                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId> asic_id;
                                                    class LinkStageEnum;
                                                    class LinkEnum;


                                            }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink


                                            class FarEndLink : public Entity
                                            {
                                                public:
                                                    FarEndLink();
                                                    ~FarEndLink();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_type; //type: LinkEnum
                                                    Value link_stage; //type: LinkStageEnum
                                                    Value link_num; //type: uint32
                                                    Value phy_link_num; //type: uint32


                                                class AsicId : public Entity
                                                {
                                                    public:
                                                        AsicId();
                                                        ~AsicId();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value rack_type; //type: RackEnum
                                                        Value asic_type; //type: AsicEnum
                                                        Value rack_num; //type: uint32
                                                        Value slot_num; //type: uint32
                                                        Value asic_instance; //type: uint32


                                                        class AsicEnum;
                                                        class RackEnum;


                                                }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId


                                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId> asic_id;
                                                    class LinkStageEnum;
                                                    class LinkEnum;


                                            }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink


                                            class Stats : public Entity
                                            {
                                                public:
                                                    Stats();
                                                    ~Stats();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value dummy; //type: uint32




                                            }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats


                                            class History : public Entity
                                            {
                                                public:
                                                    History();
                                                    ~History();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value histnum; //type: uint8
                                                    Value start_index; //type: uint8


                                                class Hist : public Entity
                                                {
                                                    public:
                                                        Hist();
                                                        ~Hist();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value admin_state; //type: AdminStateEnum
                                                        Value oper_state; //type: OperStateEnum
                                                        Value error_state; //type: LinkErrorStateEnum
                                                        Value timestamp; //type: uint64
                                                        Value reasons; //type: string


                                                        class AdminStateEnum;
                                                        class LinkErrorStateEnum;
                                                        class OperStateEnum;


                                                }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist> > hist;


                                            }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History


                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink> far_end_link;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History> history;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats> stats;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink> this_link;
                                                class AdminStateEnum;
                                                class LinkErrorStateEnum;
                                                class OperStateEnum;


                                        }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_> > tx_link;


                                    }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink> > tx_link;


                                }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks


                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks> tx_links;


                            }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance


                                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance> > tx_asic_instance;


                        }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances


                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances> tx_asic_instances;


                    }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption


                        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption> tx_status_option;


                }; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable> tx_status_option_table;


            }; // Fia::Nodes::Node::TxLinkInformation


            class RegisterDump : public Entity
            {
                public:
                    RegisterDump();
                    ~RegisterDump();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RegisterDumpUnits : public Entity
                {
                    public:
                        RegisterDumpUnits();
                        ~RegisterDumpUnits();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class RegisterDumpUnit : public Entity
                    {
                        public:
                            RegisterDumpUnit();
                            ~RegisterDumpUnit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value unit; //type: int32
                            Value output; //type: string




                    }; // Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RegisterDump::RegisterDumpUnits::RegisterDumpUnit> > register_dump_unit;


                }; // Fia::Nodes::Node::RegisterDump::RegisterDumpUnits


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RegisterDump::RegisterDumpUnits> register_dump_units;


            }; // Fia::Nodes::Node::RegisterDump


            class DiagShell : public Entity
            {
                public:
                    DiagShell();
                    ~DiagShell();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DiagShellUnits : public Entity
                {
                    public:
                        DiagShellUnits();
                        ~DiagShellUnits();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DiagShellUnit : public Entity
                    {
                        public:
                            DiagShellUnit();
                            ~DiagShellUnit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value unit; //type: uint32


                        class Commands : public Entity
                        {
                            public:
                                Commands();
                                ~Commands();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Command : public Entity
                            {
                                public:
                                    Command();
                                    ~Command();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value cmd; //type: string


                                class Output : public Entity
                                {
                                    public:
                                        Output();
                                        ~Output();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value output; //type: string
                                        Value output_xr; //type: string




                                }; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output> > output;


                            }; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command


                                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command> > command;


                        }; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands


                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands> commands;


                    }; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit> > diag_shell_unit;


                }; // Fia::Nodes::Node::DiagShell::DiagShellUnits


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits> diag_shell_units;


            }; // Fia::Nodes::Node::DiagShell


            class OirHistory : public Entity
            {
                public:
                    OirHistory();
                    ~OirHistory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Flags : public Entity
                {
                    public:
                        Flags();
                        ~Flags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Flag : public Entity
                    {
                        public:
                            Flag();
                            ~Flag();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flag; //type: int32


                        class Slots : public Entity
                        {
                            public:
                                Slots();
                                ~Slots();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Slot : public Entity
                            {
                                public:
                                    Slot();
                                    ~Slot();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value slot; //type: int32
                                    Value drv_version; //type: uint32
                                    Value coeff_major_rev; //type: uint32
                                    Value coeff_minor_rev; //type: uint32
                                    Value functional_role; //type: uint8
                                    Value issu_role; //type: uint8
                                    Value rack_name; //type: string
                                    Value rack_type; //type: int32
                                    Value rack_num; //type: uint8
                                    Value is_driver_ready; //type: boolean
                                    Value card_avail_mask; //type: uint32
                                    Value asic_avail_mask; //type: uint64
                                    Value exp_asic_avail_mask; //type: uint64
                                    Value ucmc_ratio; //type: uint32
                                    Value asic_oper_notify_to_fsdb_pending_bmap; //type: uint64
                                    Value is_full_fgid_download_req; //type: boolean
                                    Value is_fgid_download_in_progress; //type: boolean
                                    Value is_fgid_download_completed; //type: boolean
                                    Value fsdb_conn_active; //type: boolean
                                    Value fgid_conn_active; //type: boolean
                                    Value issu_mgr_conn_active; //type: boolean
                                    Value fsdb_reg_active; //type: boolean
                                    Value fgid_reg_active; //type: boolean
                                    Value issu_mgr_reg_active; //type: boolean
                                    Value num_pm_conn_reqs; //type: uint8
                                    Value num_fsdb_conn_reqs; //type: uint8
                                    Value num_fgid_conn_reqs; //type: uint8
                                    Value num_fstats_conn_reqs; //type: uint8
                                    Value num_cm_conn_reqs; //type: uint8
                                    Value num_issu_mgr_conn_reqs; //type: uint8
                                    Value num_peer_fia_conn_reqs; //type: uint8
                                    Value is_gaspp_registered; //type: boolean
                                    Value is_cih_registered; //type: boolean
                                    Value drvr_initial_startup_timestamp; //type: string
                                    Value drvr_current_startup_timestamp; //type: string
                                    Value num_intf_ports; //type: uint32
                                    Value uc_weight; //type: uint8
                                    Value respawn_count; //type: uint8
                                    Value total_asics; //type: uint8
                                    Value issu_ready_ntfy_pending; //type: boolean
                                    Value issu_abort_sent; //type: boolean
                                    Value issu_abort_rcvd; //type: boolean
                                    Value fc_mode; //type: FcModeEnum
                                    Value board_rev_id; //type: uint32


                                class DeviceInfo : public Entity
                                {
                                    public:
                                        DeviceInfo();
                                        ~DeviceInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value is_valid; //type: boolean
                                        Value fapid; //type: uint32
                                        Value hotplug_event; //type: uint32
                                        Value slice_state; //type: SliceStateEnum
                                        Value admin_state; //type: AdminStateEnum
                                        Value oper_state; //type: AsicOperStateEnum
                                        Value asic_state; //type: AsicAccessStateEnum
                                        Value last_init_cause; //type: AsicInitMethodEnum
                                        Value num_pon_resets; //type: uint32
                                        Value num_hard_resets; //type: uint32
                                        Value local_switch_state; //type: boolean


                                    class AsicId : public Entity
                                    {
                                        public:
                                            AsicId();
                                            ~AsicId();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value rack_type; //type: RackEnum
                                            Value asic_type; //type: AsicEnum
                                            Value rack_num; //type: uint32
                                            Value slot_num; //type: uint32
                                            Value asic_instance; //type: uint32


                                            class AsicEnum;
                                            class RackEnum;


                                    }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId


                                        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId> asic_id;
                                        class AdminStateEnum;
                                        class AsicAccessStateEnum;
                                        class AsicInitMethodEnum;
                                        class AsicOperStateEnum;
                                        class SliceStateEnum;


                                }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo


                                class CardInfo : public Entity
                                {
                                    public:
                                        CardInfo();
                                        ~CardInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value card_type; //type: int32
                                        Value card_name; //type: string
                                        Value slot_no; //type: int32
                                        Value card_flag; //type: int32
                                        Value evt_flag; //type: int32
                                        Value reg_flag; //type: int32
                                        Value instance; //type: int32
                                        Value card_state; //type: uint8
                                        Value exp_num_asics; //type: uint32
                                        Value exp_num_asics_per_fsdb; //type: uint32
                                        Value is_powered; //type: boolean
                                        Value cxp_avail_bitmap; //type: uint64
                                        Value num_ilkns_per_asic; //type: uint32
                                        Value num_local_ports_per_ilkn; //type: uint32
                                        Value num_cos_per_port; //type: uint8


                                    class OirCircularBuffer : public Entity
                                    {
                                        public:
                                            OirCircularBuffer();
                                            ~OirCircularBuffer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value count; //type: int32
                                            Value start; //type: int32
                                            Value end; //type: int32


                                        class FiaOirInfo : public Entity
                                        {
                                            public:
                                                FiaOirInfo();
                                                ~FiaOirInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value card_flag; //type: int32
                                                Value card_type; //type: int32
                                                Value reg_flag; //type: int32
                                                Value evt_flag; //type: int32
                                                Value rack_num; //type: int32
                                                Value instance; //type: int32
                                                Value cur_card_state; //type: int32




                                        }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo> > fia_oir_info;


                                    }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer


                                        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer> oir_circular_buffer;


                                }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo> > card_info;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo> > device_info;
                                    class FcModeEnum;


                            }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot


                                std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot> > slot;


                        }; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots


                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots> slots;


                    }; // Fia::Nodes::Node::OirHistory::Flags::Flag


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag> > flag;


                }; // Fia::Nodes::Node::OirHistory::Flags


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags> flags;


            }; // Fia::Nodes::Node::OirHistory


            class AsicStatistics : public Entity
            {
                public:
                    AsicStatistics();
                    ~AsicStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class StatisticsAsicInstances : public Entity
                {
                    public:
                        StatisticsAsicInstances();
                        ~StatisticsAsicInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StatisticsAsicInstance : public Entity
                    {
                        public:
                            StatisticsAsicInstance();
                            ~StatisticsAsicInstance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance; //type: uint32


                        class PbcStatistics : public Entity
                        {
                            public:
                                PbcStatistics();
                                ~PbcStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PbcStats : public Entity
                            {
                                public:
                                    PbcStats();
                                    ~PbcStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value valid; //type: boolean
                                    Value rack_no; //type: uint32
                                    Value slot_no; //type: uint32
                                    Value asic_instance; //type: uint32
                                    Value chip_ver; //type: uint16


                                class StatsInfo : public Entity
                                {
                                    public:
                                        StatsInfo();
                                        ~StatsInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value num_blocks; //type: uint8


                                    class BlockInfo : public Entity
                                    {
                                        public:
                                            BlockInfo();
                                            ~BlockInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value block_name; //type: string
                                            Value num_fields; //type: uint8


                                        class FieldInfo : public Entity
                                        {
                                            public:
                                                FieldInfo();
                                                ~FieldInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value field_name; //type: string
                                                Value field_value; //type: uint64
                                                Value is_ovf; //type: boolean




                                        }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo> > field_info;


                                    }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo> > block_info;


                                }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo


                                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo> stats_info;


                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats


                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats> pbc_stats;


                        }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics


                        class FmacStatistics : public Entity
                        {
                            public:
                                FmacStatistics();
                                ~FmacStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FmacLinks : public Entity
                            {
                                public:
                                    FmacLinks();
                                    ~FmacLinks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FmacLink : public Entity
                                {
                                    public:
                                        FmacLink();
                                        ~FmacLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link; //type: int32


                                    class FmacAsic : public Entity
                                    {
                                        public:
                                            FmacAsic();
                                            ~FmacAsic();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value asic; //type: int32
                                            Value valid; //type: boolean
                                            Value rack_no; //type: uint32
                                            Value slot_no; //type: uint32
                                            Value asic_instance; //type: uint32
                                            Value link_no; //type: uint32
                                            Value link_valid; //type: boolean


                                        class AggrStats : public Entity
                                        {
                                            public:
                                                AggrStats();
                                                ~AggrStats();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class LinkErrorStatus : public Entity
                                            {
                                                public:
                                                    LinkErrorStatus();
                                                    ~LinkErrorStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_crc_error; //type: uint32
                                                    Value link_size_error; //type: uint32
                                                    Value link_mis_align_error; //type: uint32
                                                    Value link_code_group_error; //type: uint32
                                                    Value link_no_sig_lock_error; //type: uint32
                                                    Value link_no_sig_accept_error; //type: uint32
                                                    Value link_tokens_error; //type: uint32
                                                    Value error_token_count; //type: uint32




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus


                                            class LinkCounters : public Entity
                                            {
                                                public:
                                                    LinkCounters();
                                                    ~LinkCounters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tx_control_cells_counter; //type: uint64
                                                    Value tx_data_cell_counter; //type: uint64
                                                    Value tx_data_byte_counter; //type: uint64
                                                    Value rx_crc_errors_counter; //type: uint64
                                                    Value rx_lfec_fec_correctable_error; //type: uint64
                                                    Value rx_8b_10b_disparity_errors; //type: uint64
                                                    Value rx_control_cells_counter; //type: uint64
                                                    Value rx_data_cell_counter; //type: uint64
                                                    Value rx_data_byte_counter; //type: uint64
                                                    Value rx_dropped_retransmitted_control; //type: uint64
                                                    Value tx_asyn_fifo_rate; //type: uint64
                                                    Value rx_asyn_fifo_rate; //type: uint64
                                                    Value rx_lfec_fec_uncorrectable_errors; //type: uint64
                                                    Value rx_8b_10b_code_errors; //type: uint64




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters


                                            class OvfStatus : public Entity
                                            {
                                                public:
                                                    OvfStatus();
                                                    ~OvfStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tx_control_cells_counter; //type: string
                                                    Value tx_data_cell_counter; //type: string
                                                    Value tx_data_byte_counter; //type: string
                                                    Value rx_crc_errors_counter; //type: string
                                                    Value rx_lfec_fec_correctable_error; //type: string
                                                    Value rx_8b_10b_disparity_errors; //type: string
                                                    Value rx_control_cells_counter; //type: string
                                                    Value rx_data_cell_counter; //type: string
                                                    Value rx_data_byte_counter; //type: string
                                                    Value rx_dropped_retransmitted_control; //type: string
                                                    Value tx_asyn_fifo_rate; //type: string
                                                    Value rx_asyn_fifo_rate; //type: string
                                                    Value rx_lfec_fec_uncorrectable_errors; //type: string
                                                    Value rx_8b_10b_code_errors; //type: string




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus


                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters> link_counters;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus> link_error_status;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus> ovf_status;


                                        }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats


                                        class IncrStats : public Entity
                                        {
                                            public:
                                                IncrStats();
                                                ~IncrStats();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class LinkErrorStatus : public Entity
                                            {
                                                public:
                                                    LinkErrorStatus();
                                                    ~LinkErrorStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value link_crc_error; //type: uint32
                                                    Value link_size_error; //type: uint32
                                                    Value link_mis_align_error; //type: uint32
                                                    Value link_code_group_error; //type: uint32
                                                    Value link_no_sig_lock_error; //type: uint32
                                                    Value link_no_sig_accept_error; //type: uint32
                                                    Value link_tokens_error; //type: uint32
                                                    Value error_token_count; //type: uint32




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus


                                            class LinkCounters : public Entity
                                            {
                                                public:
                                                    LinkCounters();
                                                    ~LinkCounters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tx_control_cells_counter; //type: uint64
                                                    Value tx_data_cell_counter; //type: uint64
                                                    Value tx_data_byte_counter; //type: uint64
                                                    Value rx_crc_errors_counter; //type: uint64
                                                    Value rx_lfec_fec_correctable_error; //type: uint64
                                                    Value rx_8b_10b_disparity_errors; //type: uint64
                                                    Value rx_control_cells_counter; //type: uint64
                                                    Value rx_data_cell_counter; //type: uint64
                                                    Value rx_data_byte_counter; //type: uint64
                                                    Value rx_dropped_retransmitted_control; //type: uint64
                                                    Value tx_asyn_fifo_rate; //type: uint64
                                                    Value rx_asyn_fifo_rate; //type: uint64
                                                    Value rx_lfec_fec_uncorrectable_errors; //type: uint64
                                                    Value rx_8b_10b_code_errors; //type: uint64




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters


                                            class OvfStatus : public Entity
                                            {
                                                public:
                                                    OvfStatus();
                                                    ~OvfStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value tx_control_cells_counter; //type: string
                                                    Value tx_data_cell_counter; //type: string
                                                    Value tx_data_byte_counter; //type: string
                                                    Value rx_crc_errors_counter; //type: string
                                                    Value rx_lfec_fec_correctable_error; //type: string
                                                    Value rx_8b_10b_disparity_errors; //type: string
                                                    Value rx_control_cells_counter; //type: string
                                                    Value rx_data_cell_counter; //type: string
                                                    Value rx_data_byte_counter; //type: string
                                                    Value rx_dropped_retransmitted_control; //type: string
                                                    Value tx_asyn_fifo_rate; //type: string
                                                    Value rx_asyn_fifo_rate; //type: string
                                                    Value rx_lfec_fec_uncorrectable_errors; //type: string
                                                    Value rx_8b_10b_code_errors; //type: string




                                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus


                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters> link_counters;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus> link_error_status;
                                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus> ovf_status;


                                        }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats


                                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats> aggr_stats;
                                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats> incr_stats;


                                    }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic> > fmac_asic;


                                }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink> > fmac_link;


                            }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks


                                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks> fmac_links;


                        }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics


                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics> fmac_statistics;
                            std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics> pbc_statistics;


                    }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance> > statistics_asic_instance;


                }; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances


                    std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances> statistics_asic_instances;


            }; // Fia::Nodes::Node::AsicStatistics


                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics> asic_statistics;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics> clear_statistics;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell> diag_shell;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation> driver_information;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory> oir_history;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RegisterDump> register_dump;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation> rx_link_information;
                std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation> tx_link_information;


        }; // Fia::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node> > node;


    }; // Fia::Nodes


        std::unique_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes> nodes;


}; // Fia


class SliceStateEnum : public Enum
{
    public:
        static const Enum::Value slice_oper_unset;
        static const Enum::Value slice_oper_down;
        static const Enum::Value slice_oper_up;
        static const Enum::Value slice_oper_na;

};

class AsicAccessStateEnum : public Enum
{
    public:
        static const Enum::Value asic_state_unset;
        static const Enum::Value asic_state_none;
        static const Enum::Value asic_state_device_off_line;
        static const Enum::Value asic_state_device_created;
        static const Enum::Value asic_state_device_online;
        static const Enum::Value asic_state_warmboot;
        static const Enum::Value asic_state_de_init_start;
        static const Enum::Value asic_state_intr_de_init;
        static const Enum::Value asic_state_bcm_detach;
        static const Enum::Value asic_state_soc_de_init;
        static const Enum::Value asic_state_de_init_done;
        static const Enum::Value asic_state_soc_init;
        static const Enum::Value asic_state_bcm_init;
        static const Enum::Value asic_state_intr_init;
        static const Enum::Value asic_state_soc_init_start;
        static const Enum::Value asic_state_bcm_init_start;
        static const Enum::Value asic_state_intr_init_start;
        static const Enum::Value asic_state_hard_reset;
        static const Enum::Value asic_state_normal;
        static const Enum::Value asic_state_exception;
        static const Enum::Value asic_state_hp_attached;
        static const Enum::Value asic_state_quiesce;
        static const Enum::Value asic_state_issu_started;
        static const Enum::Value asic_state_issu_started_nn;
        static const Enum::Value asic_state_issu_abort;
        static const Enum::Value asic_state_max;

};

class LinkErrorStateEnum : public Enum
{
    public:
        static const Enum::Value link_error_unset;
        static const Enum::Value link_error_none;
        static const Enum::Value link_error_shut;
        static const Enum::Value link_error_max;

};

class FcModeEnum : public Enum
{
    public:
        static const Enum::Value fc_mode_unset;
        static const Enum::Value fc_mode_unavail;
        static const Enum::Value fc_mode_inband;
        static const Enum::Value fc_mode_oob;

};

class AsicEnum : public Enum
{
    public:
        static const Enum::Value asic_unset;
        static const Enum::Value asic_unavail;
        static const Enum::Value asic_fia;
        static const Enum::Value asic_s123;
        static const Enum::Value asic_s13;
        static const Enum::Value asic_s2;
        static const Enum::Value asic_b2b;
        static const Enum::Value asic_unknown;

};

class AsicOperStateEnum : public Enum
{
    public:
        static const Enum::Value asic_oper_unset;
        static const Enum::Value asic_oper_unknown;
        static const Enum::Value asic_oper_up;
        static const Enum::Value asic_oper_down;
        static const Enum::Value asic_card_down;

};

class LinkEnum : public Enum
{
    public:
        static const Enum::Value link_type_unset;
        static const Enum::Value link_type_unavail;
        static const Enum::Value link_type_tx;
        static const Enum::Value link_type_rx;

};

class OperStateEnum : public Enum
{
    public:
        static const Enum::Value oper_unset;
        static const Enum::Value oper_unknown;
        static const Enum::Value oper_up;
        static const Enum::Value oper_down;
        static const Enum::Value card_down;

};

class AsicInitMethodEnum : public Enum
{
    public:
        static const Enum::Value asic_init_method_unset;
        static const Enum::Value asic_init_method_no_reset;
        static const Enum::Value asic_init_method_pon_reset;
        static const Enum::Value asic_init_method_pon_reset_on_intr;
        static const Enum::Value asic_init_method_hard_reset;
        static const Enum::Value asic_init_method_warmboot;
        static const Enum::Value asic_init_method_issu_wb;
        static const Enum::Value asic_init_method_pci_shutdown;
        static const Enum::Value asic_init_method_quiesce;
        static const Enum::Value asic_init_method_issu_started;
        static const Enum::Value asic_init_method_issu_rollback;
        static const Enum::Value asic_init_method_issu_abort;
        static const Enum::Value asic_init_method_slice_cleanup;
        static const Enum::Value asic_init_method_lc_remove;
        static const Enum::Value asic_init_method_node_down;
        static const Enum::Value asic_init_method_intr;
        static const Enum::Value asic_init_method_board_reload;
        static const Enum::Value asic_init_method_max;

};

class AdminStateEnum : public Enum
{
    public:
        static const Enum::Value admin_unset;
        static const Enum::Value admin_up;
        static const Enum::Value admin_down;

};

class LinkStageEnum : public Enum
{
    public:
        static const Enum::Value link_stage_unset;
        static const Enum::Value link_stage_unused;
        static const Enum::Value link_stage_fia;
        static const Enum::Value link_stage_s1;
        static const Enum::Value link_stage_s2;
        static const Enum::Value link_stage_s3;
        static const Enum::Value link_stage_unknown;

};

class RackEnum : public Enum
{
    public:
        static const Enum::Value rack_type_unset;
        static const Enum::Value rack_type_lcc;
        static const Enum::Value rack_type_fcc;

};


}
}

#endif /* _CISCO_IOS_XR_DNX_DRIVER_OPER_ */

