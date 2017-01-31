#ifndef _CISCO_IOS_XR_NCS5500_QOS_OPER_
#define _CISCO_IOS_XR_NCS5500_QOS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_qos_oper {

class PlatformQos : public Entity
{
    public:
        PlatformQos();
        ~PlatformQos();

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

            class BundleInterfaces : public Entity
            {
                public:
                    BundleInterfaces();
                    ~BundleInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BundleInterface : public Entity
                {
                    public:
                        BundleInterface();
                        ~BundleInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf npu_id; //type: int32
                        YLeaf qos_direction; //type: string

                    class MemberInterfaces : public Entity
                    {
                        public:
                            MemberInterfaces();
                            ~MemberInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class MemberInterface : public Entity
                        {
                            public:
                                MemberInterface();
                                ~MemberInterface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf interface_name; //type: string

                            class PolicyDetails : public Entity
                            {
                                public:
                                    PolicyDetails();
                                    ~PolicyDetails();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf npu_id; //type: uint32
                                    YLeaf interface_handle; //type: uint32
                                    YLeaf interface_bandwidth_kbps; //type: uint32
                                    YLeaf policy_name; //type: string
                                    YLeaf total_number_of_classes; //type: uint16
                                    YLeaf voq_base_address; //type: uint32
                                    YLeaf voq_stats_handle; //type: uint64
                                    YLeaf stats_accounting_type; //type: QosPolicyAccountEnumEnum
                                    YLeaf policy_status; //type: DnxQoseaShowPolicyStatusEnum
                                    YLeaf interface_status; //type: DnxQoseaShowIntfStatusEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails


                            class Classes : public Entity
                            {
                                public:
                                    Classes();
                                    ~Classes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Class_ : public Entity
                                {
                                    public:
                                        Class_();
                                        ~Class_();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf level_one_class_name; //type: string
                                        YLeaf level_two_class_name; //type: string
                                        YLeaf class_level; //type: DnxQoseaShowLevelEnum
                                        YLeaf egress_queue_id; //type: int32
                                        YLeaf queue_type; //type: DnxQoseaShowQueueEnum
                                        YLeaf priority_level; //type: DnxQoseaShowHpLevelEnum
                                        YLeaf hardware_max_rate_kbps; //type: uint32
                                        YLeaf hardware_min_rate_kbps; //type: uint32
                                        YLeaf config_excess_bandwidth_percent; //type: uint32
                                        YLeaf config_excess_bandwidth_unit; //type: uint32
                                        YLeaf hardware_excess_bandwidth_weight; //type: uint32
                                        YLeaf network_min_bandwidth_kbps; //type: uint32
                                        YLeaf hardware_queue_limit_bytes; //type: uint64
                                        YLeaf hardware_queue_limit_microseconds; //type: uint64
                                        YLeaf policer_bucket_id; //type: uint32
                                        YLeaf policer_stats_handle; //type: uint64
                                        YLeaf hardware_policer_average_rate_kbps; //type: uint32
                                        YLeaf hardware_policer_peak_rate_kbps; //type: uint32
                                        YLeaf hardware_policer_conform_burst_bytes; //type: uint32
                                        YLeaf hardware_policer_excess_burst_bytes; //type: uint32

                                    class ConfigMaxRate : public Entity
                                    {
                                        public:
                                            ConfigMaxRate();
                                            ~ConfigMaxRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate


                                    class ConfigMinRate : public Entity
                                    {
                                        public:
                                            ConfigMinRate();
                                            ~ConfigMinRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate


                                    class ConfigQueueLimit : public Entity
                                    {
                                        public:
                                            ConfigQueueLimit();
                                            ~ConfigQueueLimit();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit


                                    class ConfigPolicerAverageRate : public Entity
                                    {
                                        public:
                                            ConfigPolicerAverageRate();
                                            ~ConfigPolicerAverageRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate


                                    class ConfigPolicerPeakRate : public Entity
                                    {
                                        public:
                                            ConfigPolicerPeakRate();
                                            ~ConfigPolicerPeakRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate


                                    class ConfigPolicerConformBurst : public Entity
                                    {
                                        public:
                                            ConfigPolicerConformBurst();
                                            ~ConfigPolicerConformBurst();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst


                                    class ConfigPolicerExcessBurst : public Entity
                                    {
                                        public:
                                            ConfigPolicerExcessBurst();
                                            ~ConfigPolicerExcessBurst();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf policy_value; //type: uint32
                                            YLeaf policy_unit; //type: PolicyParamUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst


                                    class ConformAction : public Entity
                                    {
                                        public:
                                            ConformAction();
                                            ~ConformAction();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf action_type; //type: DnxQoseaShowActionEnum

                                        class Mark : public Entity
                                        {
                                            public:
                                                Mark();
                                                ~Mark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                                YLeaf mark_value; //type: uint16



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction::Mark> > mark;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction


                                    class ExceedAction : public Entity
                                    {
                                        public:
                                            ExceedAction();
                                            ~ExceedAction();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf action_type; //type: DnxQoseaShowActionEnum

                                        class Mark : public Entity
                                        {
                                            public:
                                                Mark();
                                                ~Mark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                                YLeaf mark_value; //type: uint16



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction::Mark> > mark;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction


                                    class ViolateAction : public Entity
                                    {
                                        public:
                                            ViolateAction();
                                            ~ViolateAction();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf action_type; //type: DnxQoseaShowActionEnum

                                        class Mark : public Entity
                                        {
                                            public:
                                                Mark();
                                                ~Mark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                                YLeaf mark_value; //type: uint16



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction::Mark> > mark;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction


                                    class IpMark : public Entity
                                    {
                                        public:
                                            IpMark();
                                            ~IpMark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                            YLeaf mark_value; //type: uint16



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark


                                    class CommonMark : public Entity
                                    {
                                        public:
                                            CommonMark();
                                            ~CommonMark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                            YLeaf mark_value; //type: uint16



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark


                                    class MplsMark : public Entity
                                    {
                                        public:
                                            MplsMark();
                                            ~MplsMark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                            YLeaf mark_value; //type: uint16



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark


                                    class Wred : public Entity
                                    {
                                        public:
                                            Wred();
                                            ~Wred();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf wred_match_type; //type: DnxQoseaShowWredEnum
                                            YLeaf hardware_min_threshold_bytes; //type: uint32
                                            YLeaf hardware_max_threshold_bytes; //type: uint32
                                            YLeaf first_segment; //type: uint16
                                            YLeaf segment_size; //type: uint32

                                        class WredMatchValue : public Entity
                                        {
                                            public:
                                                WredMatchValue();
                                                ~WredMatchValue();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DnxQoseaShowRedMatchValue : public Entity
                                            {
                                                public:
                                                    DnxQoseaShowRedMatchValue();
                                                    ~DnxQoseaShowRedMatchValue();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf range_start; //type: uint8
                                                    YLeaf range_end; //type: uint8



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue


                                        class ConfigMinThreshold : public Entity
                                        {
                                            public:
                                                ConfigMinThreshold();
                                                ~ConfigMinThreshold();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf policy_value; //type: uint32
                                                YLeaf policy_unit; //type: PolicyParamUnitEnum



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold


                                        class ConfigMaxThreshold : public Entity
                                        {
                                            public:
                                                ConfigMaxThreshold();
                                                ~ConfigMaxThreshold();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf policy_value; //type: uint32
                                                YLeaf policy_unit; //type: PolicyParamUnitEnum



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold


                                            std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
                                            std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
                                            std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred::WredMatchValue> wred_match_value;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::CommonMark> > common_mark;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMaxRate> config_max_rate;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigMinRate> config_min_rate;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ConformAction> conform_action;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ExceedAction> exceed_action;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::IpMark> > ip_mark;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::MplsMark> > mpls_mark;
                                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::ViolateAction> violate_action;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_::Wred> > wred;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class_> > class_;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes


                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes> classes;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails> policy_details;


                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface> > member_interface;


                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces


                    class PolicyDetails : public Entity
                    {
                        public:
                            PolicyDetails();
                            ~PolicyDetails();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: uint32
                            YLeaf interface_handle; //type: uint32
                            YLeaf interface_bandwidth_kbps; //type: uint32
                            YLeaf policy_name; //type: string
                            YLeaf total_number_of_classes; //type: uint16
                            YLeaf voq_base_address; //type: uint32
                            YLeaf voq_stats_handle; //type: uint64
                            YLeaf stats_accounting_type; //type: QosPolicyAccountEnumEnum
                            YLeaf policy_status; //type: DnxQoseaShowPolicyStatusEnum
                            YLeaf interface_status; //type: DnxQoseaShowIntfStatusEnum



                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails


                    class Classes : public Entity
                    {
                        public:
                            Classes();
                            ~Classes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Class_ : public Entity
                        {
                            public:
                                Class_();
                                ~Class_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf level_one_class_name; //type: string
                                YLeaf level_two_class_name; //type: string
                                YLeaf class_level; //type: DnxQoseaShowLevelEnum
                                YLeaf egress_queue_id; //type: int32
                                YLeaf queue_type; //type: DnxQoseaShowQueueEnum
                                YLeaf priority_level; //type: DnxQoseaShowHpLevelEnum
                                YLeaf hardware_max_rate_kbps; //type: uint32
                                YLeaf hardware_min_rate_kbps; //type: uint32
                                YLeaf config_excess_bandwidth_percent; //type: uint32
                                YLeaf config_excess_bandwidth_unit; //type: uint32
                                YLeaf hardware_excess_bandwidth_weight; //type: uint32
                                YLeaf network_min_bandwidth_kbps; //type: uint32
                                YLeaf hardware_queue_limit_bytes; //type: uint64
                                YLeaf hardware_queue_limit_microseconds; //type: uint64
                                YLeaf policer_bucket_id; //type: uint32
                                YLeaf policer_stats_handle; //type: uint64
                                YLeaf hardware_policer_average_rate_kbps; //type: uint32
                                YLeaf hardware_policer_peak_rate_kbps; //type: uint32
                                YLeaf hardware_policer_conform_burst_bytes; //type: uint32
                                YLeaf hardware_policer_excess_burst_bytes; //type: uint32

                            class ConfigMaxRate : public Entity
                            {
                                public:
                                    ConfigMaxRate();
                                    ~ConfigMaxRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate


                            class ConfigMinRate : public Entity
                            {
                                public:
                                    ConfigMinRate();
                                    ~ConfigMinRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate


                            class ConfigQueueLimit : public Entity
                            {
                                public:
                                    ConfigQueueLimit();
                                    ~ConfigQueueLimit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit


                            class ConfigPolicerAverageRate : public Entity
                            {
                                public:
                                    ConfigPolicerAverageRate();
                                    ~ConfigPolicerAverageRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate


                            class ConfigPolicerPeakRate : public Entity
                            {
                                public:
                                    ConfigPolicerPeakRate();
                                    ~ConfigPolicerPeakRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate


                            class ConfigPolicerConformBurst : public Entity
                            {
                                public:
                                    ConfigPolicerConformBurst();
                                    ~ConfigPolicerConformBurst();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst


                            class ConfigPolicerExcessBurst : public Entity
                            {
                                public:
                                    ConfigPolicerExcessBurst();
                                    ~ConfigPolicerExcessBurst();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst


                            class ConformAction : public Entity
                            {
                                public:
                                    ConformAction();
                                    ~ConformAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction


                            class ExceedAction : public Entity
                            {
                                public:
                                    ExceedAction();
                                    ~ExceedAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction


                            class ViolateAction : public Entity
                            {
                                public:
                                    ViolateAction();
                                    ~ViolateAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction


                            class IpMark : public Entity
                            {
                                public:
                                    IpMark();
                                    ~IpMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark


                            class CommonMark : public Entity
                            {
                                public:
                                    CommonMark();
                                    ~CommonMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark


                            class MplsMark : public Entity
                            {
                                public:
                                    MplsMark();
                                    ~MplsMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark


                            class Wred : public Entity
                            {
                                public:
                                    Wred();
                                    ~Wred();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf wred_match_type; //type: DnxQoseaShowWredEnum
                                    YLeaf hardware_min_threshold_bytes; //type: uint32
                                    YLeaf hardware_max_threshold_bytes; //type: uint32
                                    YLeaf first_segment; //type: uint16
                                    YLeaf segment_size; //type: uint32

                                class WredMatchValue : public Entity
                                {
                                    public:
                                        WredMatchValue();
                                        ~WredMatchValue();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class DnxQoseaShowRedMatchValue : public Entity
                                    {
                                        public:
                                            DnxQoseaShowRedMatchValue();
                                            ~DnxQoseaShowRedMatchValue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf range_start; //type: uint8
                                            YLeaf range_end; //type: uint8



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue


                                class ConfigMinThreshold : public Entity
                                {
                                    public:
                                        ConfigMinThreshold();
                                        ~ConfigMinThreshold();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf policy_value; //type: uint32
                                        YLeaf policy_unit; //type: PolicyParamUnitEnum



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold


                                class ConfigMaxThreshold : public Entity
                                {
                                    public:
                                        ConfigMaxThreshold();
                                        ~ConfigMaxThreshold();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf policy_value; //type: uint32
                                        YLeaf policy_unit; //type: PolicyParamUnitEnum



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold


                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred::WredMatchValue> wred_match_value;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::CommonMark> > common_mark;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMaxRate> config_max_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigMinRate> config_min_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ConformAction> conform_action;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ExceedAction> exceed_action;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::IpMark> > ip_mark;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::MplsMark> > mpls_mark;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::ViolateAction> violate_action;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_::Wred> > wred;


                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class_> > class_;


                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes


                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes> classes;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces> member_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails> policy_details;


                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


            }; // PlatformQos::Nodes::Node::BundleInterfaces


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
                        YLeaf qos_direction; //type: string

                    class PolicyDetails : public Entity
                    {
                        public:
                            PolicyDetails();
                            ~PolicyDetails();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: uint32
                            YLeaf interface_handle; //type: uint32
                            YLeaf interface_bandwidth_kbps; //type: uint32
                            YLeaf policy_name; //type: string
                            YLeaf total_number_of_classes; //type: uint16
                            YLeaf voq_base_address; //type: uint32
                            YLeaf voq_stats_handle; //type: uint64
                            YLeaf stats_accounting_type; //type: QosPolicyAccountEnumEnum
                            YLeaf policy_status; //type: DnxQoseaShowPolicyStatusEnum
                            YLeaf interface_status; //type: DnxQoseaShowIntfStatusEnum



                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails


                    class Classes : public Entity
                    {
                        public:
                            Classes();
                            ~Classes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Class_ : public Entity
                        {
                            public:
                                Class_();
                                ~Class_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf level_one_class_name; //type: string
                                YLeaf level_two_class_name; //type: string
                                YLeaf class_level; //type: DnxQoseaShowLevelEnum
                                YLeaf egress_queue_id; //type: int32
                                YLeaf queue_type; //type: DnxQoseaShowQueueEnum
                                YLeaf priority_level; //type: DnxQoseaShowHpLevelEnum
                                YLeaf hardware_max_rate_kbps; //type: uint32
                                YLeaf hardware_min_rate_kbps; //type: uint32
                                YLeaf config_excess_bandwidth_percent; //type: uint32
                                YLeaf config_excess_bandwidth_unit; //type: uint32
                                YLeaf hardware_excess_bandwidth_weight; //type: uint32
                                YLeaf network_min_bandwidth_kbps; //type: uint32
                                YLeaf hardware_queue_limit_bytes; //type: uint64
                                YLeaf hardware_queue_limit_microseconds; //type: uint64
                                YLeaf policer_bucket_id; //type: uint32
                                YLeaf policer_stats_handle; //type: uint64
                                YLeaf hardware_policer_average_rate_kbps; //type: uint32
                                YLeaf hardware_policer_peak_rate_kbps; //type: uint32
                                YLeaf hardware_policer_conform_burst_bytes; //type: uint32
                                YLeaf hardware_policer_excess_burst_bytes; //type: uint32

                            class ConfigMaxRate : public Entity
                            {
                                public:
                                    ConfigMaxRate();
                                    ~ConfigMaxRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate


                            class ConfigMinRate : public Entity
                            {
                                public:
                                    ConfigMinRate();
                                    ~ConfigMinRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate


                            class ConfigQueueLimit : public Entity
                            {
                                public:
                                    ConfigQueueLimit();
                                    ~ConfigQueueLimit();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit


                            class ConfigPolicerAverageRate : public Entity
                            {
                                public:
                                    ConfigPolicerAverageRate();
                                    ~ConfigPolicerAverageRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate


                            class ConfigPolicerPeakRate : public Entity
                            {
                                public:
                                    ConfigPolicerPeakRate();
                                    ~ConfigPolicerPeakRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate


                            class ConfigPolicerConformBurst : public Entity
                            {
                                public:
                                    ConfigPolicerConformBurst();
                                    ~ConfigPolicerConformBurst();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst


                            class ConfigPolicerExcessBurst : public Entity
                            {
                                public:
                                    ConfigPolicerExcessBurst();
                                    ~ConfigPolicerExcessBurst();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf policy_value; //type: uint32
                                    YLeaf policy_unit; //type: PolicyParamUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst


                            class ConformAction : public Entity
                            {
                                public:
                                    ConformAction();
                                    ~ConformAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction


                            class ExceedAction : public Entity
                            {
                                public:
                                    ExceedAction();
                                    ~ExceedAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction


                            class ViolateAction : public Entity
                            {
                                public:
                                    ViolateAction();
                                    ~ViolateAction();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf action_type; //type: DnxQoseaShowActionEnum

                                class Mark : public Entity
                                {
                                    public:
                                        Mark();
                                        ~Mark();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                        YLeaf mark_value; //type: uint16



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction::Mark> > mark;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction


                            class IpMark : public Entity
                            {
                                public:
                                    IpMark();
                                    ~IpMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark


                            class CommonMark : public Entity
                            {
                                public:
                                    CommonMark();
                                    ~CommonMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark


                            class MplsMark : public Entity
                            {
                                public:
                                    MplsMark();
                                    ~MplsMark();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mark_type; //type: DnxQoseaShowMarkEnum
                                    YLeaf mark_value; //type: uint16



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark


                            class Wred : public Entity
                            {
                                public:
                                    Wred();
                                    ~Wred();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf wred_match_type; //type: DnxQoseaShowWredEnum
                                    YLeaf hardware_min_threshold_bytes; //type: uint32
                                    YLeaf hardware_max_threshold_bytes; //type: uint32
                                    YLeaf first_segment; //type: uint16
                                    YLeaf segment_size; //type: uint32

                                class WredMatchValue : public Entity
                                {
                                    public:
                                        WredMatchValue();
                                        ~WredMatchValue();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class DnxQoseaShowRedMatchValue : public Entity
                                    {
                                        public:
                                            DnxQoseaShowRedMatchValue();
                                            ~DnxQoseaShowRedMatchValue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf range_start; //type: uint8
                                            YLeaf range_end; //type: uint8



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue::DnxQoseaShowRedMatchValue> > dnx_qosea_show_red_match_value;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue


                                class ConfigMinThreshold : public Entity
                                {
                                    public:
                                        ConfigMinThreshold();
                                        ~ConfigMinThreshold();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf policy_value; //type: uint32
                                        YLeaf policy_unit; //type: PolicyParamUnitEnum



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold


                                class ConfigMaxThreshold : public Entity
                                {
                                    public:
                                        ConfigMaxThreshold();
                                        ~ConfigMaxThreshold();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf policy_value; //type: uint32
                                        YLeaf policy_unit; //type: PolicyParamUnitEnum



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold


                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMaxThreshold> config_max_threshold;
                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::ConfigMinThreshold> config_min_threshold;
                                    std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred::WredMatchValue> wred_match_value;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::CommonMark> > common_mark;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMaxRate> config_max_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigMinRate> config_min_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerAverageRate> config_policer_average_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerConformBurst> config_policer_conform_burst;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerExcessBurst> config_policer_excess_burst;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigPolicerPeakRate> config_policer_peak_rate;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConfigQueueLimit> config_queue_limit;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ConformAction> conform_action;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ExceedAction> exceed_action;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::IpMark> > ip_mark;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::MplsMark> > mpls_mark;
                                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::ViolateAction> violate_action;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_::Wred> > wred;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class_> > class_;


                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Classes


                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Classes> classes;
                        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails> policy_details;


                }; // PlatformQos::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;


            }; // PlatformQos::Nodes::Node::Interfaces


            class RemoteInterfaces : public Entity
            {
                public:
                    RemoteInterfaces();
                    ~RemoteInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RemoteInterface : public Entity
                {
                    public:
                        RemoteInterface();
                        ~RemoteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf policy_name; //type: string
                        YLeaf virtual_output_queue_statistics_handle; //type: uint64
                        YLeaf interface_handle; //type: uint32
                        YLeaf number_of_virtual_output_queues; //type: uint32
                        YLeaf number_of_classes; //type: uint32

                    class RemoteClass : public Entity
                    {
                        public:
                            RemoteClass();
                            ~RemoteClass();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf class_name; //type: string
                            YLeaf class_id; //type: uint32
                            YLeaf cos_q; //type: uint32
                            YLeaf queue_limit; //type: uint32
                            YLeaf hardware_queue_limit; //type: uint32

                        class Wred : public Entity
                        {
                            public:
                                Wred();
                                ~Wred();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf min_threshold; //type: uint32
                                YLeaf max_threshold; //type: uint32
                                YLeaf drop_probability; //type: uint32



                        }; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred


                        class HwWred : public Entity
                        {
                            public:
                                HwWred();
                                ~HwWred();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf min_threshold; //type: uint32
                                YLeaf max_threshold; //type: uint32
                                YLeaf drop_probability; //type: uint32



                        }; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred> > hw_wred;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred> > wred;


                    }; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass> > remote_class;


                }; // PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface> > remote_interface;


            }; // PlatformQos::Nodes::Node::RemoteInterfaces


                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node::RemoteInterfaces> remote_interfaces;


        }; // PlatformQos::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes::Node> > node;


    }; // PlatformQos::Nodes


        std::unique_ptr<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos::Nodes> nodes;


}; // PlatformQos


class DnxQoseaShowActionEnum : public Enum
{
    public:
        static const Enum::YLeaf action_none;
        static const Enum::YLeaf action_transmit;
        static const Enum::YLeaf action_drop;
        static const Enum::YLeaf action_mark;

};

class PolicyParamUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf policy_param_unit_invalid;
        static const Enum::YLeaf policy_param_unit_bytes;
        static const Enum::YLeaf policy_param_unit_kbytes;
        static const Enum::YLeaf policy_param_unit_mbytes;
        static const Enum::YLeaf policy_param_unit_gbytes;
        static const Enum::YLeaf policy_param_unit_bitsps;
        static const Enum::YLeaf policy_param_unit_kbitsps;
        static const Enum::YLeaf policy_param_unit_mbitsps;
        static const Enum::YLeaf policy_param_unit_gbitsps;
        static const Enum::YLeaf policy_param_unit_cells_ps;
        static const Enum::YLeaf policy_param_unit_packets_ps;
        static const Enum::YLeaf policy_param_unit_us;
        static const Enum::YLeaf policy_param_unit_ms;
        static const Enum::YLeaf policy_param_unit_seconds;
        static const Enum::YLeaf policy_param_unit_packets;
        static const Enum::YLeaf policy_param_unit_cells;
        static const Enum::YLeaf policy_param_unit_percent;
        static const Enum::YLeaf policy_param_unit_per_thousand;
        static const Enum::YLeaf policy_param_unit_per_million;
        static const Enum::YLeaf policy_param_unit_hz;
        static const Enum::YLeaf policy_param_unit_khz;
        static const Enum::YLeaf policy_param_unit_mhz;
        static const Enum::YLeaf policy_param_unit_ratio;
        static const Enum::YLeaf policy_param_unit_max;

};

class DnxQoseaShowWredEnum : public Enum
{
    public:
        static const Enum::YLeaf wred_cos;
        static const Enum::YLeaf wred_dscp;
        static const Enum::YLeaf wred_precedence;
        static const Enum::YLeaf wred_discard_class;
        static const Enum::YLeaf wred_mpls_exp;
        static const Enum::YLeaf red_with_user_min_max;
        static const Enum::YLeaf red_with_default_min_max;
        static const Enum::YLeaf wred_invalid;

};

class DnxQoseaShowHpLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf high_priority_level1;
        static const Enum::YLeaf high_priority_level2;
        static const Enum::YLeaf high_priority_level3;
        static const Enum::YLeaf high_priority_level4;
        static const Enum::YLeaf high_priority_level5;
        static const Enum::YLeaf high_priority_level6;
        static const Enum::YLeaf high_priority_level7;
        static const Enum::YLeaf unknown;

};

class QosPolicyAccountEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf qos_serv_policy_no_ac_count_pref;
        static const Enum::YLeaf qos_serv_policy_ac_count_l2;
        static const Enum::YLeaf qos_serv_policy_no_ac_count_l2;
        static const Enum::YLeaf qos_serv_policy_ac_count_user_def;
        static const Enum::YLeaf qos_serv_policy_ac_count_l1;

};

class DnxQoseaShowMarkEnum : public Enum
{
    public:
        static const Enum::YLeaf mark_none;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf mpls_topmost;
        static const Enum::YLeaf mpls_imposition;
        static const Enum::YLeaf qos_group;
        static const Enum::YLeaf discard_class;
        static const Enum::YLeaf cos;
        static const Enum::YLeaf inner_cos;
        static const Enum::YLeaf un_supported9;
        static const Enum::YLeaf un_supported10;
        static const Enum::YLeaf dscp_tunnel;
        static const Enum::YLeaf precedence_tunnel;
        static const Enum::YLeaf dei;
        static const Enum::YLeaf dei_imposition;

};

class DnxQoseaShowPolicyStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf no_error;
        static const Enum::YLeaf policy_in_reset;

};

class DnxQoseaShowIntfStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf state_unknown;
        static const Enum::YLeaf state_down;

};

class DnxQoseaShowLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level3;
        static const Enum::YLeaf level4;
        static const Enum::YLeaf level5;

};

class DnxQoseaShowQueueEnum : public Enum
{
    public:
        static const Enum::YLeaf low_priority_default_queue;
        static const Enum::YLeaf low_priority_queue;
        static const Enum::YLeaf high_priority_queue;
        static const Enum::YLeaf unknown_queue_type;

};


}
}

#endif /* _CISCO_IOS_XR_NCS5500_QOS_OPER_ */

