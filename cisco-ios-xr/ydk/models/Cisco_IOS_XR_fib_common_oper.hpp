#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_oper {

class FibStatistics : public Entity
{
    public:
        FibStatistics();
        ~FibStatistics();

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


            class Drops : public Entity
            {
                public:
                    Drops();
                    ~Drops();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value no_route_packets; //type: uint64
                    Value punt_unreachable_packets; //type: uint64
                    Value df_unreachable_packets; //type: uint64
                    Value encapsulation_failure_packets; //type: uint64
                    Value incomplete_adjacency_packets; //type: uint64
                    Value unresolved_prefix_packets; //type: uint64
                    Value unsupported_feature_packets; //type: uint64
                    Value discard_packets; //type: uint64
                    Value checksum_error_packets; //type: uint64
                    Value fragmenation_consumed_packets; //type: uint64
                    Value fragmenation_failure_packets; //type: uint64
                    Value null_packets; //type: uint64
                    Value rpf_check_failure_packets; //type: uint64
                    Value acl_in_rpf_packets; //type: uint64
                    Value rp_destination_drop_packets; //type: uint64
                    Value total_number_of_drop_packets; //type: uint64
                    Value mpls_disabled_interface; //type: uint64
                    Value gre_lookup_failed_drop; //type: uint64
                    Value gre_error_drop; //type: uint64
                    Value lisp_punt_drops; //type: uint64
                    Value lisp_encap_error_drops; //type: uint64
                    Value lisp_decap_error_drops; //type: uint64
                    Value multi_label_drops; //type: uint64




            }; // FibStatistics::Nodes::Node::Drops


                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node::Drops> drops;


        }; // FibStatistics::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node> > node;


    }; // FibStatistics::Nodes


        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes> nodes;


}; // FibStatistics

class Fib : public Entity
{
    public:
        Fib();
        ~Fib();

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


            class Protocols : public Entity
            {
                public:
                    Protocols();
                    ~Protocols();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Protocol : public Entity
                {
                    public:
                        Protocol();
                        ~Protocol();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protocol_name; //type: FibProtocolEnum


                    class IssuState : public Entity
                    {
                        public:
                            IssuState();
                            ~IssuState();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value imdr_support; //type: boolean
                            Value slc_support; //type: boolean
                            Value fis_issu_restart; //type: boolean
                            Value imdr_eoc_implicit; //type: boolean
                            Value slc_eoc_implicit; //type: boolean
                            Value eoc_received_imdr_time_stamp; //type: string
                            Value eoc_received_slc_time_stamp; //type: string
                            Value eod_received_im_time_stamp; //type: string
                            Value eod_sent_imdr_time_stamp; //type: string
                            Value eod_sent_slc_time_stamp; //type: string
                            Value fis_issu_error_ts; //type: uint64


                        class FisProtoState : public Entity
                        {
                            public:
                                FisProtoState();
                                ~FisProtoState();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: string
                                Value aib_eod_time_stamp; //type: string
                                Value rsi_eod_valid; //type: boolean
                                Value rsi_eod_time_stamp; //type: string
                                Value lsd_eod_valid; //type: boolean
                                Value lsd_eod_time_stamp; //type: string
                                Value lmrib_eod_valid; //type: boolean
                                Value lmrib_eod_time_stamp; //type: string
                                Value rib_info_valid; //type: boolean
                                Value bcdl_tables; //type: uint32
                                Value converged_tables; //type: uint32
                                Value rib_tables_converged_time_stamp; //type: string
                                Value protocol_eod_valid; //type: boolean
                                Value protocol_eod_time_stamp; //type: string




                        }; // Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState> > fis_proto_state;


                    }; // Fib::Nodes::Node::Protocols::Protocol::IssuState


                    class Summaries : public Entity
                    {
                        public:
                            Summaries();
                            ~Summaries();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Summary : public Entity
                        {
                            public:
                                Summary();
                                ~Summary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: FibProtocolEnum
                                Value vrf_name; //type: string
                                Value table_id; //type: int32
                                Value prefix; //type: string
                                Value ss_tbl_id; //type: uint32
                                Value ss_tbl_id_ptr; //type: uint32
                                Value ss_vrf_id; //type: uint32
                                Value ss_vr_id; //type: uint32
                                Value load_balancing; //type: SsLbaStateEnum
                                Value forwarding_elements; //type: uint32
                                Value routes; //type: uint32
                                Value prefix_in_place_modifications; //type: uint32
                                Value stale_prefix_deletes; //type: uint32
                                Value load_sharing_elements; //type: uint32
                                Value load_sharing_references; //type: uint64
                                Value total_load_share_element_bytes; //type: uint32
                                Value leaves_used_bytes; //type: uint32
                                Value reresolve_entries; //type: uint32
                                Value old_unresolve_entries; //type: uint32
                                Value new_unresolve_entries; //type: uint32
                                Value unresolve_entries; //type: uint32
                                Value cef_route_drops; //type: uint32
                                Value cef_version_mismatch_route_drops; //type: uint64
                                Value delete_cache_num_entries; //type: uint32
                                Value existing_leaves_revisions; //type: uint32
                                Value fib_default_prefix; //type: uint32
                                Value fib_default_prefix_mask_length; //type: uint32
                                Value next_hops; //type: uint32
                                Value incomplete_next_hops; //type: uint32
                                Value resolution_timer; //type: uint32
                                Value slow_process_timer; //type: uint32
                                Value max_resolution_timer; //type: uint32
                                Value imposition_prefixes; //type: uint32
                                Value extended_prefixes; //type: uint32
                                Value cefl_bl_recycled_routes; //type: uint32
                                Value ldi_backwalks; //type: uint32
                                Value ss_prot_route_count; //type: uint32
                                Value lisp_eid_prefixes; //type: uint32
                                Value lisp_eid_valid_prefixes; //type: uint32
                                Value lisp_rloc_objects; //type: uint32
                                Value ss_vxlan_ltep_ifh; //type: string
                                Value ss_drop_pl_count; //type: uint32


                            class ExclusiveLoadSharingElement : public Entity
                            {
                                public:
                                    ExclusiveLoadSharingElement();
                                    ~ExclusiveLoadSharingElement();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value total_load_sharing_element_bytes; //type: uint32
                                    Value total_load_sharing_element_references; //type: uint64
                                    Value total_path_list_elements; //type: uint32
                                    Value recursive_path_list_elements; //type: uint32
                                    Value platform_shared_path_list_elements; //type: uint32
                                    Value retry_path_list_elements; //type: uint32
                                    Value total_load_info_elements; //type: uint32
                                    Value recursive_load_info_elements; //type: uint32
                                    Value platform_shared_load_info_elements; //type: uint32




                            }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::ExclusiveLoadSharingElement


                            class SharedLoadSharingElement : public Entity
                            {
                                public:
                                    SharedLoadSharingElement();
                                    ~SharedLoadSharingElement();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value total_load_sharing_element_bytes; //type: uint32
                                    Value total_load_sharing_element_references; //type: uint64
                                    Value total_path_list_elements; //type: uint32
                                    Value recursive_path_list_elements; //type: uint32
                                    Value platform_shared_path_list_elements; //type: uint32
                                    Value retry_path_list_elements; //type: uint32
                                    Value total_load_info_elements; //type: uint32
                                    Value recursive_load_info_elements; //type: uint32
                                    Value platform_shared_load_info_elements; //type: uint32




                            }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::SharedLoadSharingElement


                            class CrossSharedLoadSharingElement : public Entity
                            {
                                public:
                                    CrossSharedLoadSharingElement();
                                    ~CrossSharedLoadSharingElement();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value total_load_sharing_element_bytes; //type: uint32
                                    Value total_load_sharing_element_references; //type: uint64
                                    Value total_path_list_elements; //type: uint32
                                    Value recursive_path_list_elements; //type: uint32
                                    Value platform_shared_path_list_elements; //type: uint32
                                    Value retry_path_list_elements; //type: uint32
                                    Value total_load_info_elements; //type: uint32
                                    Value recursive_load_info_elements; //type: uint32
                                    Value platform_shared_load_info_elements; //type: uint32




                            }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::CrossSharedLoadSharingElement


                            class LabelSharedLoadSharingElement : public Entity
                            {
                                public:
                                    LabelSharedLoadSharingElement();
                                    ~LabelSharedLoadSharingElement();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value total_load_sharing_element_bytes; //type: uint32
                                    Value total_load_sharing_element_references; //type: uint64
                                    Value total_path_list_elements; //type: uint32
                                    Value recursive_path_list_elements; //type: uint32
                                    Value platform_shared_path_list_elements; //type: uint32
                                    Value retry_path_list_elements; //type: uint32
                                    Value total_load_info_elements; //type: uint32
                                    Value recursive_load_info_elements; //type: uint32
                                    Value platform_shared_load_info_elements; //type: uint32




                            }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::LabelSharedLoadSharingElement


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::SharedLoadSharingElement> shared_load_sharing_element;
                                class SsLbaStateEnum;
                                class FibProtocolEnum;


                        }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary> > summary;


                    }; // Fib::Nodes::Node::Protocols::Protocol::Summaries


                    class ExternalSummaryAll : public Entity
                    {
                        public:
                            ExternalSummaryAll();
                            ~ExternalSummaryAll();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sesa_num_client; //type: uint32


                        class SesaPlSum : public Entity
                        {
                            public:
                                SesaPlSum();
                                ~SesaPlSum();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sep_num_ecd_pathlist; //type: uint32
                                Value sep_num_ecd_pl_unresolved; //type: uint32
                                ValueList sep_num_ecd_pl_per_interest; //type: list of  uint32




                        }; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum> sesa_pl_sum;


                    }; // Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll


                    class FrrLog : public Entity
                    {
                        public:
                            FrrLog();
                            ~FrrLog();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class FrrInterfaces : public Entity
                        {
                            public:
                                FrrInterfaces();
                                ~FrrInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FrrInterface : public Entity
                            {
                                public:
                                    FrrInterface();
                                    ~FrrInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value frr_interface_name; //type: string


                                class Logs : public Entity
                                {
                                    public:
                                        Logs();
                                        ~Logs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Log : public Entity
                                    {
                                        public:
                                            Log();
                                            ~Log();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value log_index; //type: int32
                                            Value frr_protocol_type; //type: FibFrrProtocolShowEnum
                                            Value frr_interface_name; //type: string
                                            Value frr_prefix; //type: string
                                            Value frr_switching_time; //type: uint32
                                            Value bundle_member_interface_name; //type: string


                                        class FrrTimestamp : public Entity
                                        {
                                            public:
                                                FrrTimestamp();
                                                ~FrrTimestamp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value seconds; //type: int32
                                                Value nano_seconds; //type: int32




                                        }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp> frr_timestamp;
                                            class FibFrrProtocolShowEnum;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log> > log;


                                }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs> logs;


                            }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface> > frr_interface;


                        }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces> frr_interfaces;


                    }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog


                    class Vrfs : public Entity
                    {
                        public:
                            Vrfs();
                            ~Vrfs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Vrf : public Entity
                        {
                            public:
                                Vrf();
                                ~Vrf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value vrf_name; //type: string


                            class IpPrefixDetails : public Entity
                            {
                                public:
                                    IpPrefixDetails();
                                    ~IpPrefixDetails();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class IpPrefixDetail : public Entity
                                {
                                    public:
                                        IpPrefixDetail();
                                        ~IpPrefixDetail();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix; //type: string
                                        Value prefix_length; //type: uint8
                                        Value protocol_type_fib_entry; //type: uint32
                                        Value platform_hardware; //type: string
                                        Value number_of_referances_to_path_list; //type: uint32
                                        Value path_list_flags; //type: uint32
                                        Value path_list_source; //type: uint32
                                        Value number_of_referances_to_ldi; //type: uint32
                                        Value ldi_flags; //type: uint32
                                        Value flags_external_ldi; //type: uint32
                                        Value exact_route_result; //type: boolean
                                        Value prefix_is_static_or_connected; //type: boolean
                                        Value packet_should_recieve; //type: boolean
                                        Value prefix_connected; //type: boolean
                                        Value prefix_for_adjancency; //type: boolean
                                        Value prefix_for_pic_next_hop; //type: boolean
                                        Value purgable_after_purge_interval; //type: boolean
                                        Value broadcast_recive_flag; //type: boolean
                                        Value broadcast_forward_flag; //type: boolean
                                        Value zero_by_zero_route_as_default; //type: boolean
                                        Value external_switch_triggered; //type: boolean
                                        Value route_attribute_flag; //type: boolean
                                        Value dummy_real_zero_route; //type: boolean
                                        Value ldi_lw_flag; //type: uint32
                                        Value ref_counter_of_ldi_lw_ldi; //type: uint32
                                        Value type_of_ldi_lw_ldi; //type: uint32
                                        Value lspa_flags; //type: uint32
                                        Value version_of_route; //type: uint64
                                        Value fib_route_download_priority; //type: uint32
                                        Value time_of_last_update_in_msec; //type: uint64
                                        Value l2_subscriber_route; //type: boolean
                                        Value l2_subscriber_xconnect_id; //type: uint32
                                        Value l2_subscriber_ip_protocol; //type: uint32
                                        Value l2tpv3_cookie_length_bits; //type: uint32
                                        Value route_for_external_reach_linecard_flag; //type: boolean


                                    class DetailFibEntryInformation : public Entity
                                    {
                                        public:
                                            DetailFibEntryInformation();
                                            ~DetailFibEntryInformation();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fib_entry_version; //type: uint32
                                            Value per_prefix_accounting; //type: uint8
                                            Value load_sharing_type; //type: FibLoadshareShowEnum
                                            Value fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
                                            Value fib_protocol_type; //type: uint32
                                            Value afi_fib_protocol_type; //type: uint32
                                            Value aib_l3_address; //type: string
                                            Value adjacency_address_length; //type: uint32
                                            Value adjacency_interface; //type: uint32
                                            Value fib_special_nh_information_type; //type: uint32
                                            Value fib_entry_adjacency_address; //type: string
                                            Value fib_entry_adjacency_interface; //type: uint32
                                            Value packets_through_fib_entry; //type: uint64
                                            Value bytes_through_fib_entry; //type: uint64
                                            Value detailed_prefix_length; //type: uint32
                                            Value prefix_protocol; //type: uint32
                                            Value precedence_forpackets; //type: uint8
                                            Value traffic_index_for_packets; //type: uint8
                                            Value switch_compontent_id; //type: uint32
                                            Value fast_adjacency_flag; //type: boolean
                                            Value illegal_fast_adjacency_flag; //type: boolean
                                            Value remote_adjacency_flag; //type: boolean
                                            Value bgp_attribute_id; //type: uint32
                                            Value bgp_local_attribute_id; //type: uint32
                                            Value bgp_attribute_origin_as; //type: uint32
                                            Value bgp_attribute_next_hop_as; //type: uint32
                                            Value path_string; //type: string
                                            Value extcom_string; //type: string
                                            Value com_string; //type: string
                                            Value extended_community; //type: uint32
                                            Value qos_group; //type: uint32
                                            Value mpls_fec; //type: uint32
                                            Value qppb_qos_group_and_ip_precedence; //type: uint32
                                            Value flow_tag; //type: uint8
                                            Value forward_class; //type: uint8
                                            Value pl_time_of_last_update_in_msec; //type: uint64
                                            Value ldi_time_of_last_update_in_msec; //type: uint64
                                            Value lwldi_time_of_last_update_in_msec; //type: uint64
                                            Value pl_time_stamp_type; //type: uint32


                                        class LoadshareInformation : public Entity
                                        {
                                            public:
                                                LoadshareInformation();
                                                ~LoadshareInformation();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value packets_through_load_information; //type: uint64
                                                Value bytes_through_load_information; //type: uint64
                                                Value total_packets_through_load_information; //type: uint64
                                                Value total_bytes_through_load_information; //type: uint64
                                                Value prefix_of_owner; //type: uint32
                                                Value mask_length_of_owner; //type: uint32
                                                Value load_information_reference_count; //type: uint16
                                                Value per_dest_load_sharing_flag; //type: boolean
                                                Value load_information_owner_deleted_flag; //type: boolean
                                                Value loadinfo_sanity_flag; //type: boolean
                                                Value is_owner; //type: boolean


                                            class LoadInformtionInternalData : public Entity
                                            {
                                                public:
                                                    LoadInformtionInternalData();
                                                    ~LoadInformtionInternalData();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value level_ofldis; //type: uint8
                                                    Value number_of_ldis; //type: uint8
                                                    Value maximum_index_arrays; //type: uint32
                                                    Value path_indices; //type: string
                                                    Value path_ldi_numbers; //type: string
                                                    Value maximum_slots; //type: uint32
                                                    Value normalized_weights; //type: string
                                                    Value tunnel_class_value; //type: string
                                                    Value is_pbts_info_valid; //type: boolean
                                                    Value pbts_class_offset; //type: string
                                                    Value pbts_class_num_paths; //type: string
                                                    Value pbts_fallback_mapped_class; //type: string
                                                    Value round_robin_disable; //type: boolean
                                                    Value ldi_next_hop_buckets; //type: uint8
                                                    Value platform_hardware_information; //type: string
                                                    ValueList sanity_flag; //type: list of  boolean
                                                    ValueList interface_handle; //type: list of  string
                                                    ValueList weights_of_path; //type: list of  uint32


                                                class AdjacencyAddress : public Entity
                                                {
                                                    public:
                                                        AdjacencyAddress();
                                                        ~AdjacencyAddress();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


                                                class PbtsClassIsFallbackMapped : public Entity
                                                {
                                                    public:
                                                        PbtsClassIsFallbackMapped();
                                                        ~PbtsClassIsFallbackMapped();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


                                                class PbtsFallbackToDrop : public Entity
                                                {
                                                    public:
                                                        PbtsFallbackToDrop();
                                                        ~PbtsFallbackToDrop();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


                                                class TunnelIsForwardClass : public Entity
                                                {
                                                    public:
                                                        TunnelIsForwardClass();
                                                        ~TunnelIsForwardClass();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
                                            class FibAdjacencyShowEnum;
                                            class FibLoadshareShowEnum;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation


                                    class FibEntryPath : public Entity
                                    {
                                        public:
                                            FibEntryPath();
                                            ~FibEntryPath();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FibShTblPath : public Entity
                                        {
                                            public:
                                                FibShTblPath();
                                                ~FibShTblPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value hardware_information; //type: string
                                                Value brief_interface_handle; //type: string
                                                Value brief_next_hop_prefix; //type: string
                                                Value via_label_to_recurse; //type: uint32
                                                Value brief_pnode_address; //type: string
                                                Value brief_qnode_address; //type: string
                                                Value resolved_path; //type: boolean
                                                Value recursive_path; //type: boolean
                                                Value packets_received_path; //type: boolean
                                                Value attached_path; //type: boolean
                                                Value backup_path; //type: boolean
                                                Value best_external_path; //type: boolean
                                                Value protect_ignore; //type: boolean
                                                Value path_dlb; //type: boolean
                                                Value path_flags; //type: uint16
                                                Value path_info_flags; //type: uint16
                                                Value path_index; //type: uint8
                                                Value backup_index; //type: uint8
                                                Value next_hop_index; //type: uint32
                                                Value parent_interface_handle; //type: string
                                                Value recursionvia_len; //type: uint8


                                            class MoreDetailAboutPath : public Entity
                                            {
                                                public:
                                                    MoreDetailAboutPath();
                                                    ~MoreDetailAboutPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value ip_address_to_recurse; //type: string
                                                    Value label_to_recurse; //type: uint32
                                                    Value detail_next_hop_prefix; //type: string
                                                    Value next_hop_mask_length; //type: uint8
                                                    Value interface_associated_path; //type: string
                                                    Value next_hop_interface; //type: string
                                                    Value next_hop_vrf; //type: string
                                                    Value tunnle_endpoint_id; //type: uint32
                                                    Value lisprlocid; //type: uint32
                                                    Value number_of_dependencies_this_path; //type: uint32
                                                    Value robin_reset_value; //type: uint8
                                                    Value recurse_prefix_object; //type: boolean
                                                    Value next_prefix_recursion; //type: string
                                                    Value next_prefix_length; //type: uint8
                                                    Value recurse_prefix_object2; //type: boolean
                                                    Value next_prefix_recursion2; //type: string
                                                    Value next_prefix_length2; //type: uint8
                                                    Value detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
                                                    Value current_path_flag; //type: boolean
                                                    Value recursive_path_information; //type: boolean
                                                    Value external_adjacency; //type: boolean
                                                    Value fib_path_nh_information_type; //type: FibNehEnum
                                                    Value fib_path_nh_information_type_special; //type: FibNehSpecialEnum
                                                    Value weight_of_path; //type: uint32
                                                    Value tunnel_class; //type: uint8
                                                    Value tunnel_is_forward_class; //type: boolean


                                                class SpdIpencap : public Entity
                                                {
                                                    public:
                                                        SpdIpencap();
                                                        ~SpdIpencap();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value ip_encap_hdr_count; //type: uint8
                                                        Value ip_encap_locks; //type: uint32
                                                        Value ip_encap_transport_tbl; //type: uint32
                                                        Value ipe_transport_vrf_name; //type: string
                                                        Value ip_encap_transport_af; //type: uint32
                                                        Value ip_encap_payload_af; //type: uint32
                                                        Value ip_encap_payload_mtu; //type: uint16
                                                        Value ip_encap_parent; //type: uint32
                                                        Value ip_encap_parent_type; //type: uint32


                                                    class IpEncapHdr : public Entity
                                                    {
                                                        public:
                                                            IpEncapHdr();
                                                            ~IpEncapHdr();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value ip_encap_hdr_type; //type: FibShIpencapHdrEnum
                                                            Value ip_encap_hdrp; //type: string
                                                            Value ip_encap_hdr_dyn; //type: uint32


                                                            class FibShIpencapHdrEnum;


                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
                                                    class FibAdjacencyShowEnum;
                                                    class FibNehEnum;
                                                    class FibNehSpecialEnum;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath


                                            class MplsInformationForPath : public Entity
                                            {
                                                public:
                                                    MplsInformationForPath();
                                                    ~MplsInformationForPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value local_lable; //type: uint32
                                                    Value recursive_fwd_chain; //type: boolean
                                                    Value recursive_out_label_valid; //type: boolean
                                                    Value recursive_out_lable; //type: uint32
                                                    Value number_of_igp_paths; //type: uint32
                                                    Value remote_backup; //type: boolean


                                                class IgpLabelStackArray : public Entity
                                                {
                                                    public:
                                                        IgpLabelStackArray();
                                                        ~IgpLabelStackArray();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value number_of_labels; //type: uint32
                                                        Value out_interface; //type: string
                                                        Value nh_address; //type: string
                                                        ValueList lstack; //type: list of  uint32




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation> detail_fib_entry_information;
                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath> fib_entry_path;


                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail> > ip_prefix_detail;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails


                            class Summary : public Entity
                            {
                                public:
                                    Summary();
                                    ~Summary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix; //type: string
                                    Value ss_tbl_id; //type: uint32
                                    Value ss_tbl_id_ptr; //type: uint32
                                    Value ss_vrf_id; //type: uint32
                                    Value ss_vr_id; //type: uint32
                                    Value load_balancing; //type: SsLbaStateEnum
                                    Value forwarding_elements; //type: uint32
                                    Value routes; //type: uint32
                                    Value prefix_in_place_modifications; //type: uint32
                                    Value stale_prefix_deletes; //type: uint32
                                    Value load_sharing_elements; //type: uint32
                                    Value load_sharing_references; //type: uint64
                                    Value total_load_share_element_bytes; //type: uint32
                                    Value leaves_used_bytes; //type: uint32
                                    Value reresolve_entries; //type: uint32
                                    Value old_unresolve_entries; //type: uint32
                                    Value new_unresolve_entries; //type: uint32
                                    Value unresolve_entries; //type: uint32
                                    Value cef_route_drops; //type: uint32
                                    Value cef_version_mismatch_route_drops; //type: uint64
                                    Value delete_cache_num_entries; //type: uint32
                                    Value existing_leaves_revisions; //type: uint32
                                    Value fib_default_prefix; //type: uint32
                                    Value fib_default_prefix_mask_length; //type: uint32
                                    Value next_hops; //type: uint32
                                    Value incomplete_next_hops; //type: uint32
                                    Value resolution_timer; //type: uint32
                                    Value slow_process_timer; //type: uint32
                                    Value max_resolution_timer; //type: uint32
                                    Value imposition_prefixes; //type: uint32
                                    Value extended_prefixes; //type: uint32
                                    Value cefl_bl_recycled_routes; //type: uint32
                                    Value ldi_backwalks; //type: uint32
                                    Value ss_prot_route_count; //type: uint32
                                    Value lisp_eid_prefixes; //type: uint32
                                    Value lisp_eid_valid_prefixes; //type: uint32
                                    Value lisp_rloc_objects; //type: uint32
                                    Value ss_vxlan_ltep_ifh; //type: string
                                    Value ss_drop_pl_count; //type: uint32


                                class ExclusiveLoadSharingElement : public Entity
                                {
                                    public:
                                        ExclusiveLoadSharingElement();
                                        ~ExclusiveLoadSharingElement();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_load_sharing_element_bytes; //type: uint32
                                        Value total_load_sharing_element_references; //type: uint64
                                        Value total_path_list_elements; //type: uint32
                                        Value recursive_path_list_elements; //type: uint32
                                        Value platform_shared_path_list_elements; //type: uint32
                                        Value retry_path_list_elements; //type: uint32
                                        Value total_load_info_elements; //type: uint32
                                        Value recursive_load_info_elements; //type: uint32
                                        Value platform_shared_load_info_elements; //type: uint32




                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement


                                class SharedLoadSharingElement : public Entity
                                {
                                    public:
                                        SharedLoadSharingElement();
                                        ~SharedLoadSharingElement();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_load_sharing_element_bytes; //type: uint32
                                        Value total_load_sharing_element_references; //type: uint64
                                        Value total_path_list_elements; //type: uint32
                                        Value recursive_path_list_elements; //type: uint32
                                        Value platform_shared_path_list_elements; //type: uint32
                                        Value retry_path_list_elements; //type: uint32
                                        Value total_load_info_elements; //type: uint32
                                        Value recursive_load_info_elements; //type: uint32
                                        Value platform_shared_load_info_elements; //type: uint32




                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement


                                class CrossSharedLoadSharingElement : public Entity
                                {
                                    public:
                                        CrossSharedLoadSharingElement();
                                        ~CrossSharedLoadSharingElement();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_load_sharing_element_bytes; //type: uint32
                                        Value total_load_sharing_element_references; //type: uint64
                                        Value total_path_list_elements; //type: uint32
                                        Value recursive_path_list_elements; //type: uint32
                                        Value platform_shared_path_list_elements; //type: uint32
                                        Value retry_path_list_elements; //type: uint32
                                        Value total_load_info_elements; //type: uint32
                                        Value recursive_load_info_elements; //type: uint32
                                        Value platform_shared_load_info_elements; //type: uint32




                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement


                                class LabelSharedLoadSharingElement : public Entity
                                {
                                    public:
                                        LabelSharedLoadSharingElement();
                                        ~LabelSharedLoadSharingElement();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value total_load_sharing_element_bytes; //type: uint32
                                        Value total_load_sharing_element_references; //type: uint64
                                        Value total_path_list_elements; //type: uint32
                                        Value recursive_path_list_elements; //type: uint32
                                        Value platform_shared_path_list_elements; //type: uint32
                                        Value retry_path_list_elements; //type: uint32
                                        Value total_load_info_elements; //type: uint32
                                        Value recursive_load_info_elements; //type: uint32
                                        Value platform_shared_load_info_elements; //type: uint32




                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement> shared_load_sharing_element;
                                    class SsLbaStateEnum;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary


                            class InterfaceInfos : public Entity
                            {
                                public:
                                    InterfaceInfos();
                                    ~InterfaceInfos();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


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
                                        Value link_type; //type: FibLinkEnum


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
                                                Value per_interface; //type: string
                                                Value fib_interface_type; //type: uint32
                                                Value fib_id_pointer; //type: uint32
                                                Value fib_id_flags; //type: uint32
                                                Value fib_id_extension_pointer; //type: uint32
                                                Value fib_id_extension_flags; //type: uint32
                                                Value number_of_dependent_next_hop_information; //type: uint32
                                                Value vrf_local_cef_information_pointer; //type: uint32
                                                Value reference_count; //type: uint16
                                                Value last_modified_time; //type: uint32
                                                Value last_operation; //type: FibidbOperEnum
                                                Value protocol_enabled; //type: boolean
                                                Value referance_count_for_protocol; //type: uint32
                                                Value number_of_input_packets; //type: uint64
                                                Value number_of_input_bytes; //type: uint64
                                                Value number_of_output_packets; //type: uint64
                                                Value number_of_output_bytes; //type: uint64
                                                Value interface_up_flag; //type: boolean
                                                Value per_packet_load_balancing_flag; //type: boolean
                                                Value p2p_interface_flag; //type: boolean
                                                Value loopback_interface_flag; //type: boolean
                                                Value null_interface_flag; //type: boolean
                                                Value tunnel_interface_flag; //type: boolean
                                                Value gre_tunnel_interface_flag; //type: boolean
                                                Value punt_packets_from_fib_switching_flag; //type: boolean
                                                Value drop_packets_while_fib_switching_flag; //type: boolean
                                                Value punt_packets_from_linecard_flag; //type: boolean
                                                Value primary_ipv4_address; //type: string
                                                Value primary_ipv6_address; //type: string


                                            class DetailFibIntInformation : public Entity
                                            {
                                                public:
                                                    DetailFibIntInformation();
                                                    ~DetailFibIntInformation();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_mtu; //type: uint16
                                                    Value forwarding_flag; //type: boolean
                                                    Value rpf_configured_flag; //type: boolean
                                                    Value rpf_mode; //type: FibRpfModeEnum
                                                    Value default_route_with_rpf; //type: boolean
                                                    Value self_ping_with_rpf; //type: boolean
                                                    Value bgp_pa_input_configured_flag; //type: boolean
                                                    Value source_bgp_pa_input_configured_flag; //type: boolean
                                                    Value destination_bgp_pa_input_configured_flag; //type: boolean
                                                    Value bgp_pa_output_configured_flag; //type: boolean
                                                    Value source_bgp_pa_output_configured_flag; //type: boolean
                                                    Value destination_bgp_pa_output_configured_flag; //type: boolean
                                                    Value icmp_flag; //type: uint32
                                                    Value multi_label_drop_flag; //type: boolean


                                                    class FibRpfModeEnum;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation


                                            class SiInternal : public Entity
                                            {
                                                public:
                                                    SiInternal();
                                                    ~SiInternal();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class FibIdbHist : public Entity
                                                {
                                                    public:
                                                        FibIdbHist();
                                                        ~FibIdbHist();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value evt_class_name; //type: string


                                                    class EvtEntry : public Entity
                                                    {
                                                        public:
                                                            EvtEntry();
                                                            ~EvtEntry();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value evt_timestamp; //type: string
                                                            Value evt_name; //type: string
                                                            Value evt_type; //type: uint8
                                                            Value evt_many; //type: boolean
                                                            Value evt_sticky; //type: boolean
                                                            ValueList evt_data; //type: list of  uint32




                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry> > evt_entry;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist


                                                class FibSrteHeadHist : public Entity
                                                {
                                                    public:
                                                        FibSrteHeadHist();
                                                        ~FibSrteHeadHist();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value evt_class_name; //type: string


                                                    class EvtEntry : public Entity
                                                    {
                                                        public:
                                                            EvtEntry();
                                                            ~EvtEntry();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value evt_timestamp; //type: string
                                                            Value evt_name; //type: string
                                                            Value evt_type; //type: uint8
                                                            Value evt_many; //type: boolean
                                                            Value evt_sticky; //type: boolean
                                                            ValueList evt_data; //type: list of  uint32




                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry> > evt_entry;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist


                                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist> fib_idb_hist;
                                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist> fib_srte_head_hist;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation> detail_fib_int_information;
                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal> si_internal;
                                                class FibidbOperEnum;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface> > interface;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces> interfaces;
                                        class FibLinkEnum;


                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo> > interface_info;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos


                            class IpPrefixBriefs : public Entity
                            {
                                public:
                                    IpPrefixBriefs();
                                    ~IpPrefixBriefs();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class IpPrefixBrief : public Entity
                                {
                                    public:
                                        IpPrefixBrief();
                                        ~IpPrefixBrief();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix; //type: string
                                        Value prefix_length; //type: uint8
                                        Value protocol_type_fib_entry; //type: uint32
                                        Value platform_hardware; //type: string
                                        Value number_of_referances_to_path_list; //type: uint32
                                        Value path_list_flags; //type: uint32
                                        Value path_list_source; //type: uint32
                                        Value number_of_referances_to_ldi; //type: uint32
                                        Value ldi_flags; //type: uint32
                                        Value flags_external_ldi; //type: uint32
                                        Value exact_route_result; //type: boolean
                                        Value prefix_is_static_or_connected; //type: boolean
                                        Value packet_should_recieve; //type: boolean
                                        Value prefix_connected; //type: boolean
                                        Value prefix_for_adjancency; //type: boolean
                                        Value prefix_for_pic_next_hop; //type: boolean
                                        Value purgable_after_purge_interval; //type: boolean
                                        Value broadcast_recive_flag; //type: boolean
                                        Value broadcast_forward_flag; //type: boolean
                                        Value zero_by_zero_route_as_default; //type: boolean
                                        Value external_switch_triggered; //type: boolean
                                        Value route_attribute_flag; //type: boolean
                                        Value dummy_real_zero_route; //type: boolean
                                        Value ldi_lw_flag; //type: uint32
                                        Value ref_counter_of_ldi_lw_ldi; //type: uint32
                                        Value type_of_ldi_lw_ldi; //type: uint32
                                        Value lspa_flags; //type: uint32
                                        Value version_of_route; //type: uint64
                                        Value fib_route_download_priority; //type: uint32
                                        Value time_of_last_update_in_msec; //type: uint64
                                        Value l2_subscriber_route; //type: boolean
                                        Value l2_subscriber_xconnect_id; //type: uint32
                                        Value l2_subscriber_ip_protocol; //type: uint32
                                        Value l2tpv3_cookie_length_bits; //type: uint32
                                        Value route_for_external_reach_linecard_flag; //type: boolean


                                    class DetailFibEntryInformation : public Entity
                                    {
                                        public:
                                            DetailFibEntryInformation();
                                            ~DetailFibEntryInformation();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fib_entry_version; //type: uint32
                                            Value per_prefix_accounting; //type: uint8
                                            Value load_sharing_type; //type: FibLoadshareShowEnum
                                            Value fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
                                            Value fib_protocol_type; //type: uint32
                                            Value afi_fib_protocol_type; //type: uint32
                                            Value aib_l3_address; //type: string
                                            Value adjacency_address_length; //type: uint32
                                            Value adjacency_interface; //type: uint32
                                            Value fib_special_nh_information_type; //type: uint32
                                            Value fib_entry_adjacency_address; //type: string
                                            Value fib_entry_adjacency_interface; //type: uint32
                                            Value packets_through_fib_entry; //type: uint64
                                            Value bytes_through_fib_entry; //type: uint64
                                            Value detailed_prefix_length; //type: uint32
                                            Value prefix_protocol; //type: uint32
                                            Value precedence_forpackets; //type: uint8
                                            Value traffic_index_for_packets; //type: uint8
                                            Value switch_compontent_id; //type: uint32
                                            Value fast_adjacency_flag; //type: boolean
                                            Value illegal_fast_adjacency_flag; //type: boolean
                                            Value remote_adjacency_flag; //type: boolean
                                            Value bgp_attribute_id; //type: uint32
                                            Value bgp_local_attribute_id; //type: uint32
                                            Value bgp_attribute_origin_as; //type: uint32
                                            Value bgp_attribute_next_hop_as; //type: uint32
                                            Value path_string; //type: string
                                            Value extcom_string; //type: string
                                            Value com_string; //type: string
                                            Value extended_community; //type: uint32
                                            Value qos_group; //type: uint32
                                            Value mpls_fec; //type: uint32
                                            Value qppb_qos_group_and_ip_precedence; //type: uint32
                                            Value flow_tag; //type: uint8
                                            Value forward_class; //type: uint8
                                            Value pl_time_of_last_update_in_msec; //type: uint64
                                            Value ldi_time_of_last_update_in_msec; //type: uint64
                                            Value lwldi_time_of_last_update_in_msec; //type: uint64
                                            Value pl_time_stamp_type; //type: uint32


                                        class LoadshareInformation : public Entity
                                        {
                                            public:
                                                LoadshareInformation();
                                                ~LoadshareInformation();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value packets_through_load_information; //type: uint64
                                                Value bytes_through_load_information; //type: uint64
                                                Value total_packets_through_load_information; //type: uint64
                                                Value total_bytes_through_load_information; //type: uint64
                                                Value prefix_of_owner; //type: uint32
                                                Value mask_length_of_owner; //type: uint32
                                                Value load_information_reference_count; //type: uint16
                                                Value per_dest_load_sharing_flag; //type: boolean
                                                Value load_information_owner_deleted_flag; //type: boolean
                                                Value loadinfo_sanity_flag; //type: boolean
                                                Value is_owner; //type: boolean


                                            class LoadInformtionInternalData : public Entity
                                            {
                                                public:
                                                    LoadInformtionInternalData();
                                                    ~LoadInformtionInternalData();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value level_ofldis; //type: uint8
                                                    Value number_of_ldis; //type: uint8
                                                    Value maximum_index_arrays; //type: uint32
                                                    Value path_indices; //type: string
                                                    Value path_ldi_numbers; //type: string
                                                    Value maximum_slots; //type: uint32
                                                    Value normalized_weights; //type: string
                                                    Value tunnel_class_value; //type: string
                                                    Value is_pbts_info_valid; //type: boolean
                                                    Value pbts_class_offset; //type: string
                                                    Value pbts_class_num_paths; //type: string
                                                    Value pbts_fallback_mapped_class; //type: string
                                                    Value round_robin_disable; //type: boolean
                                                    Value ldi_next_hop_buckets; //type: uint8
                                                    Value platform_hardware_information; //type: string
                                                    ValueList sanity_flag; //type: list of  boolean
                                                    ValueList interface_handle; //type: list of  string
                                                    ValueList weights_of_path; //type: list of  uint32


                                                class AdjacencyAddress : public Entity
                                                {
                                                    public:
                                                        AdjacencyAddress();
                                                        ~AdjacencyAddress();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


                                                class PbtsClassIsFallbackMapped : public Entity
                                                {
                                                    public:
                                                        PbtsClassIsFallbackMapped();
                                                        ~PbtsClassIsFallbackMapped();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


                                                class PbtsFallbackToDrop : public Entity
                                                {
                                                    public:
                                                        PbtsFallbackToDrop();
                                                        ~PbtsFallbackToDrop();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


                                                class TunnelIsForwardClass : public Entity
                                                {
                                                    public:
                                                        TunnelIsForwardClass();
                                                        ~TunnelIsForwardClass();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value entry; //type: boolean




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
                                            class FibAdjacencyShowEnum;
                                            class FibLoadshareShowEnum;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation


                                    class FibEntryPath : public Entity
                                    {
                                        public:
                                            FibEntryPath();
                                            ~FibEntryPath();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class FibShTblPath : public Entity
                                        {
                                            public:
                                                FibShTblPath();
                                                ~FibShTblPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value hardware_information; //type: string
                                                Value brief_interface_handle; //type: string
                                                Value brief_next_hop_prefix; //type: string
                                                Value via_label_to_recurse; //type: uint32
                                                Value brief_pnode_address; //type: string
                                                Value brief_qnode_address; //type: string
                                                Value resolved_path; //type: boolean
                                                Value recursive_path; //type: boolean
                                                Value packets_received_path; //type: boolean
                                                Value attached_path; //type: boolean
                                                Value backup_path; //type: boolean
                                                Value best_external_path; //type: boolean
                                                Value protect_ignore; //type: boolean
                                                Value path_dlb; //type: boolean
                                                Value path_flags; //type: uint16
                                                Value path_info_flags; //type: uint16
                                                Value path_index; //type: uint8
                                                Value backup_index; //type: uint8
                                                Value next_hop_index; //type: uint32
                                                Value parent_interface_handle; //type: string
                                                Value recursionvia_len; //type: uint8


                                            class MoreDetailAboutPath : public Entity
                                            {
                                                public:
                                                    MoreDetailAboutPath();
                                                    ~MoreDetailAboutPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value ip_address_to_recurse; //type: string
                                                    Value label_to_recurse; //type: uint32
                                                    Value detail_next_hop_prefix; //type: string
                                                    Value next_hop_mask_length; //type: uint8
                                                    Value interface_associated_path; //type: string
                                                    Value next_hop_interface; //type: string
                                                    Value next_hop_vrf; //type: string
                                                    Value tunnle_endpoint_id; //type: uint32
                                                    Value lisprlocid; //type: uint32
                                                    Value number_of_dependencies_this_path; //type: uint32
                                                    Value robin_reset_value; //type: uint8
                                                    Value recurse_prefix_object; //type: boolean
                                                    Value next_prefix_recursion; //type: string
                                                    Value next_prefix_length; //type: uint8
                                                    Value recurse_prefix_object2; //type: boolean
                                                    Value next_prefix_recursion2; //type: string
                                                    Value next_prefix_length2; //type: uint8
                                                    Value detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
                                                    Value current_path_flag; //type: boolean
                                                    Value recursive_path_information; //type: boolean
                                                    Value external_adjacency; //type: boolean
                                                    Value fib_path_nh_information_type; //type: FibNehEnum
                                                    Value fib_path_nh_information_type_special; //type: FibNehSpecialEnum
                                                    Value weight_of_path; //type: uint32
                                                    Value tunnel_class; //type: uint8
                                                    Value tunnel_is_forward_class; //type: boolean


                                                class SpdIpencap : public Entity
                                                {
                                                    public:
                                                        SpdIpencap();
                                                        ~SpdIpencap();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value ip_encap_hdr_count; //type: uint8
                                                        Value ip_encap_locks; //type: uint32
                                                        Value ip_encap_transport_tbl; //type: uint32
                                                        Value ipe_transport_vrf_name; //type: string
                                                        Value ip_encap_transport_af; //type: uint32
                                                        Value ip_encap_payload_af; //type: uint32
                                                        Value ip_encap_payload_mtu; //type: uint16
                                                        Value ip_encap_parent; //type: uint32
                                                        Value ip_encap_parent_type; //type: uint32


                                                    class IpEncapHdr : public Entity
                                                    {
                                                        public:
                                                            IpEncapHdr();
                                                            ~IpEncapHdr();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value ip_encap_hdr_type; //type: FibShIpencapHdrEnum
                                                            Value ip_encap_hdrp; //type: string
                                                            Value ip_encap_hdr_dyn; //type: uint32


                                                            class FibShIpencapHdrEnum;


                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
                                                    class FibAdjacencyShowEnum;
                                                    class FibNehEnum;
                                                    class FibNehSpecialEnum;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath


                                            class MplsInformationForPath : public Entity
                                            {
                                                public:
                                                    MplsInformationForPath();
                                                    ~MplsInformationForPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value local_lable; //type: uint32
                                                    Value recursive_fwd_chain; //type: boolean
                                                    Value recursive_out_label_valid; //type: boolean
                                                    Value recursive_out_lable; //type: uint32
                                                    Value number_of_igp_paths; //type: uint32
                                                    Value remote_backup; //type: boolean


                                                class IgpLabelStackArray : public Entity
                                                {
                                                    public:
                                                        IgpLabelStackArray();
                                                        ~IgpLabelStackArray();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value number_of_labels; //type: uint32
                                                        Value out_interface; //type: string
                                                        Value nh_address; //type: string
                                                        ValueList lstack; //type: list of  uint32




                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation> detail_fib_entry_information;
                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath> fib_entry_path;


                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief> > ip_prefix_brief;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos> interface_infos;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs> ip_prefix_briefs;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails> ip_prefix_details;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary> summary;


                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf> > vrf;


                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs


                    class ExternalClientSummaries : public Entity
                    {
                        public:
                            ExternalClientSummaries();
                            ~ExternalClientSummaries();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ExternalClientSummary : public Entity
                        {
                            public:
                                ExternalClientSummary();
                                ~ExternalClientSummary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ecd_ver; //type: int32
                                Value id; //type: int32
                                Value ses_client_name; //type: string
                                Value ses_feci_fib_proto; //type: uint32
                                Value ses_num_regs; //type: uint32
                                Value ses_num_pending; //type: uint32
                                Value ses_client_pulsed_time; //type: uint64
                                Value ses_comp_id; //type: uint32
                                Value ses_ecd_version; //type: uint32


                            class SesPlSum : public Entity
                            {
                                public:
                                    SesPlSum();
                                    ~SesPlSum();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sep_num_ecd_pathlist; //type: uint32
                                    Value sep_num_ecd_pl_unresolved; //type: uint32
                                    ValueList sep_num_ecd_pl_per_interest; //type: list of  uint32




                            }; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum> ses_pl_sum;


                        }; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary> > external_client_summary;


                    }; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries


                    class Misc : public Entity
                    {
                        public:
                            Misc();
                            ~Misc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mi_pfi_ifh_upd; //type: uint64
                            Value mi_pfi_ifh_del; //type: uint64
                            Value mi_pfi_ifh_stale; //type: uint64
                            Value mi_tot_plat_upd_time; //type: uint64
                            Value mi_tot_gtrie_time; //type: uint64
                            Value mi_tot_dnld_time; //type: uint64
                            Value mi_clock_time; //type: uint64
                            Value mi_cpu_time; //type: uint64
                            Value mi_shm_reset_ts; //type: uint64
                            Value mi_idb_recycle_count; //type: uint32
                            Value mi_idb_recycle_cleanup_count; //type: uint32
                            Value mi_num_mgmt_list; //type: uint32
                            Value mi_num_virtual_ll_addresses_added; //type: uint32
                            Value mi_num_virtual_ll_addresses_deleted; //type: uint32
                            Value mi_num_virtual_ll_addresses_dropped; //type: uint32
                            Value mi_num_virtual_ll_addresses_cached; //type: uint32
                            Value mi_cpuless_init; //type: boolean
                            Value mi_cpuless_count; //type: uint32
                            Value mi_prefer_aib_routes_over_rib_oper; //type: boolean
                            Value mi_prefer_aib_routes_over_rib_cfg; //type: boolean
                            ValueList mi_idb_ext_cleanup_failed_count; //type: list of  uint32
                            ValueList mi_lrpf_stats_fail; //type: list of  uint32
                            ValueList mi_lrpf_stats_act; //type: list of  uint32
                            ValueList mi_lrpf_num; //type: list of  uint32
                            ValueList mi_idb_lsec_enabled_num; //type: list of  uint32
                            ValueList mi_num_lisp_eid; //type: list of  uint32
                            ValueList mi_num_lisp_valid_eid; //type: list of  uint32
                            ValueList mi_cpuless_node; //type: list of  uint32


                        class MiIssuState : public Entity
                        {
                            public:
                                MiIssuState();
                                ~MiIssuState();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value imdr_support; //type: boolean
                                Value slc_support; //type: boolean
                                Value fis_issu_restart; //type: boolean
                                Value imdr_eoc_implicit; //type: boolean
                                Value slc_eoc_implicit; //type: boolean
                                Value eoc_received_imdr_time_stamp; //type: string
                                Value eoc_received_slc_time_stamp; //type: string
                                Value eod_received_im_time_stamp; //type: string
                                Value eod_sent_imdr_time_stamp; //type: string
                                Value eod_sent_slc_time_stamp; //type: string
                                Value fis_issu_error_ts; //type: uint64


                            class FisProtoState : public Entity
                            {
                                public:
                                    FisProtoState();
                                    ~FisProtoState();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value protocol_name; //type: string
                                    Value aib_eod_time_stamp; //type: string
                                    Value rsi_eod_valid; //type: boolean
                                    Value rsi_eod_time_stamp; //type: string
                                    Value lsd_eod_valid; //type: boolean
                                    Value lsd_eod_time_stamp; //type: string
                                    Value lmrib_eod_valid; //type: boolean
                                    Value lmrib_eod_time_stamp; //type: string
                                    Value rib_info_valid; //type: boolean
                                    Value bcdl_tables; //type: uint32
                                    Value converged_tables; //type: uint32
                                    Value rib_tables_converged_time_stamp; //type: string
                                    Value protocol_eod_valid; //type: boolean
                                    Value protocol_eod_time_stamp; //type: string




                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState> > fis_proto_state;


                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState


                        class MiPlatCapabilities : public Entity
                        {
                            public:
                                MiPlatCapabilities();
                                ~MiPlatCapabilities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fpc_num_l3_lbl_levels; //type: uint8
                                Value fpc_num_l3_lbl_paths; //type: uint8
                                Value fpc_num_l3_lbl_rec_paths; //type: uint8
                                Value fpc_num_l3_ucmp_paths; //type: uint8
                                Value fpc_num_fwding_stages; //type: uint8
                                Value fpc_local_label_split; //type: uint32
                                Value fpc_stats_support; //type: boolean
                                Value fpc_platf_ready_cb_wait; //type: boolean
                                Value fpc_num_paths_per_pbts_class; //type: uint8
                                Value fpc_platf_v4_upd_disable; //type: boolean
                                Value fpc_platf_v6_upd_disable; //type: boolean
                                Value fpc_lba_tuples_default; //type: uint32
                                Value fpc_mraps_support; //type: boolean
                                Value fpc_pbts_defclass_support; //type: boolean
                                Value fpc_loadinfo_filter_support; //type: boolean
                                Value fpc_nhid; //type: boolean
                                Value fpc_platf_temp_back_walk_reqd; //type: boolean
                                Value fpc_link_mpls_nhinfo_in_ipv6_thread_support; //type: boolean
                                Value fpc_exclude_deag_bkup; //type: boolean
                                Value fpc_dlb_support; //type: boolean
                                Value fpc_prefix_filter_support; //type: uint8
                                Value fpc_slowpath_ingress_inject_reqd; //type: boolean


                            class FpcLispDecapOverV4 : public Entity
                            {
                                public:
                                    FpcLispDecapOverV4();
                                    ~FpcLispDecapOverV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value entry; //type: boolean




                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4


                            class FpcLispDecapOverV6 : public Entity
                            {
                                public:
                                    FpcLispDecapOverV6();
                                    ~FpcLispDecapOverV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value entry; //type: boolean




                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6


                            class FpcLispUcmp : public Entity
                            {
                                public:
                                    FpcLispUcmp();
                                    ~FpcLispUcmp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value entry; //type: boolean




                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp


                            class FpcResolveViaTable : public Entity
                            {
                                public:
                                    FpcResolveViaTable();
                                    ~FpcResolveViaTable();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value entry; //type: boolean




                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4> > fpc_lisp_decap_over_v4;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6> > fpc_lisp_decap_over_v6;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp> > fpc_lisp_ucmp;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable> > fpc_resolve_via_table;


                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities


                        class MiProtoDbgStat : public Entity
                        {
                            public:
                                MiProtoDbgStat();
                                ~MiProtoDbgStat();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fpd_gbltbl_entries; //type: uint64
                                Value fpd_gbltbl_rej_entries; //type: uint64
                                Value fpd_vrftbl_entries; //type: uint64
                                Value fpd_vrftbl_rej_entries; //type: uint64
                                Value fpd_num_tbls; //type: uint32
                                Value fpd_bcdl_msgs; //type: uint64
                                Value fpd_route_upd; //type: uint64
                                Value fpd_route_del; //type: uint64
                                Value fpd_route_rcv; //type: uint64
                                Value fpd_route_drops; //type: uint64
                                Value fpd_lbl_recycled; //type: uint64
                                Value fpd_version_mismatch_drops; //type: uint64
                                Value fpd_adj_upd; //type: uint64
                                Value fpd_adj_del; //type: uint64
                                Value fpd_adj_upd_tx; //type: uint64
                                Value fpd_adj_upd_tx_nh_found; //type: uint64
                                Value fpd_adj_upd_tx_retry_created; //type: uint64
                                Value fpd_adj_tx_retry_nh_found; //type: uint64
                                Value fpd_adj_tx_retry_obj_reinit; //type: uint64
                                Value fpd_adj_drops; //type: uint64
                                Value fpd_adj_msg; //type: uint64
                                Value fpd_te_rcv; //type: uint64
                                Value fpd_te_version_mismatch_drops; //type: uint64
                                Value fpd_num_retry_touts; //type: uint64
                                Value fpd_ldi_num_fixedup; //type: uint64
                                Value fpd_ldi_num_correct_fixup; //type: uint64
                                Value fpd_pl_num_queued_fixedup; //type: uint64
                                Value fpd_pl_num_correct_fixup; //type: uint64
                                Value fpd_pl_retry_add_exist; //type: uint64
                                Value fpd_pl_inline_res_q; //type: uint64
                                Value fpd_pl_with_backup_create_count; //type: uint64
                                Value fpd_pl_with_backup_del_count; //type: uint64
                                Value fpd_pl_backup_enable_count; //type: uint64
                                Value fpd_pl_backup_disable_count; //type: uint64
                                Value fpd_pl_fast_nfn_count; //type: uint64
                                Value fpd_ldi_backup_activate_count; //type: uint64
                                Value fpd_ldi_last_backup_activate_time; //type: uint64
                                Value fpd_ldi_max_backup_activate_time; //type: uint64
                                Value fpd_ldi_min_backup_activate_time; //type: uint64
                                Value fpd_ldi_total_backup_activate_time; //type: uint64
                                Value fpd_ldi_avg_backup_activate_time; //type: uint64
                                Value fpd_recursion_constraint_count; //type: uint64
                                Value fpd_ldi_num_del_refcnt; //type: uint64
                                Value fpd_retryq_size; //type: uint32
                                Value fpd_num_allocs; //type: uint64
                                Value fpd_num_frees; //type: uint64
                                ValueList fpd_gbltbl_src_entry; //type: list of  uint64
                                ValueList fpd_vrftbl_src_entry; //type: list of  uint64
                                ValueList fpd_num_retry; //type: list of  uint64


                            class FpdPlatfUpdStats : public Entity
                            {
                                public:
                                    FpdPlatfUpdStats();
                                    ~FpdPlatfUpdStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fpus_num_success; //type: uint64
                                    Value fpus_num_failure; //type: uint64
                                    Value fpus_upd_total_time; //type: uint64


                                class FpusObjStat : public Entity
                                {
                                    public:
                                        FpusObjStat();
                                        ~FpusObjStat();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fos_tot_updates; //type: uint64
                                        Value fos_tot_upd_time; //type: uint64


                                    class FosObjActStat : public Entity
                                    {
                                        public:
                                            FosObjActStat();
                                            ~FosObjActStat();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value foas_tot_updates; //type: uint64
                                            Value foas_tot_upd_time; //type: uint64
                                            Value foas_tot_updates_zero; //type: uint64
                                            Value foas_num_success; //type: uint64
                                            Value foas_num_failure; //type: uint64
                                            Value foas_max_time; //type: uint64
                                            Value foas_max_tstamp; //type: uint64




                                    }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat> > fos_obj_act_stat;


                                }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat> > fpus_obj_stat;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats


                            class FpdGtrieTiming : public Entity
                            {
                                public:
                                    FpdGtrieTiming();
                                    ~FpdGtrieTiming();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fgt_num_success; //type: uint64
                                    Value fgt_num_failure; //type: uint64
                                    Value fgt_upd_total_time; //type: uint64


                                class FgtGtrieFnTiming : public Entity
                                {
                                    public:
                                        FgtGtrieFnTiming();
                                        ~FgtGtrieFnTiming();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fgft_fn; //type: string
                                        Value fgft_tot_updates; //type: uint64
                                        Value fgft_tot_updates_zero; //type: uint64
                                        Value fgft_tot_upd_time; //type: uint64
                                        Value fgft_max_time; //type: uint64
                                        Value fgft_max_tstamp; //type: uint64




                                }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming> > fgt_gtrie_fn_timing;


                            }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming> fpd_gtrie_timing;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats> fpd_platf_upd_stats;


                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat


                        class MiIdbPurgeCntr : public Entity
                        {
                            public:
                                MiIdbPurgeCntr();
                                ~MiIdbPurgeCntr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList fpp_cntr; //type: list of  uint32




                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr


                        class MiDel : public Entity
                        {
                            public:
                                MiDel();
                                ~MiDel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tableid; //type: uint32
                                Value prfx; //type: string
                                Value prfx_len; //type: uint16
                                Value prfx_proto; //type: uint16
                                Value msec_time; //type: uint64




                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel


                        class MiFrrStat : public Entity
                        {
                            public:
                                MiFrrStat();
                                ~MiFrrStat();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mi_num_intf_frr; //type: uint32
                                Value mi_num_parent_intf_frr; //type: uint32
                                Value mi_num_pfi_intf_down; //type: uint32
                                Value mi_num_bfd_down; //type: uint32
                                Value mi_num_prot_frr_objects; //type: uint32
                                Value mi_num_bkup_frr_objects; //type: uint32
                                Value mi_num_tunid_allocs; //type: uint32
                                Value mi_num_tunid_alloc_failures; //type: uint32
                                Value mi_num_tunid_frees; //type: uint32
                                Value mi_num_tunid_free_failures; //type: uint32
                                Value mi_num_frr_reset_queue_adds; //type: uint32
                                Value mi_num_frr_reset_queue_remove; //type: uint32
                                Value mi_num_frr_reset; //type: uint32
                                Value mi_num_frr_proto_events; //type: uint32
                                Value mi_num_frr_logs; //type: uint32




                        }; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel> > mi_del;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat> > mi_frr_stat;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr> > mi_idb_purge_cntr;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState> mi_issu_state;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities> mi_plat_capabilities;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat> > mi_proto_dbg_stat;


                    }; // Fib::Nodes::Node::Protocols::Protocol::Misc


                    class LocalLabel : public Entity
                    {
                        public:
                            LocalLabel();
                            ~LocalLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Conflicts : public Entity
                        {
                            public:
                                Conflicts();
                                ~Conflicts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Conflict : public Entity
                            {
                                public:
                                    Conflict();
                                    ~Conflict();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label; //type: uint32
                                    Value source; //type: FibRouteSourceEnum
                                    Value ll_ctype; //type: FibllcEntryEnum
                                    Value pfx_tbl_id; //type: int32
                                    Value prefix; //type: string
                                    Value prefix_len; //type: int32
                                    Value local_label; //type: uint32
                                    Value source_xr; //type: uint32
                                    Value update_ts; //type: uint64
                                    Value retry_ts; //type: uint64
                                    Value num_retries; //type: uint32


                                class Ext : public Entity
                                {
                                    public:
                                        Ext();
                                        ~Ext();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: FibMplsLlcEntryBagEnum


                                    class Pfx : public Entity
                                    {
                                        public:
                                            Pfx();
                                            ~Pfx();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value pfx; //type: string
                                            Value tbl_id; //type: uint32




                                    }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx


                                    class Lsm : public Entity
                                    {
                                        public:
                                            Lsm();
                                            ~Lsm();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value nh; //type: string
                                            Value mcast_id; //type: uint32




                                    }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;
                                        class FibMplsLlcEntryBagEnum;


                                }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;
                                    class FibllcEntryEnum;
                                    class FibRouteSourceEnum;


                            }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict> > conflict;


                        }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts> conflicts;


                    }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel


                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries> external_client_summaries;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll> external_summary_all;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog> frr_log;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::IssuState> issu_state;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel> local_label;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc> misc;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries> summaries;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs> vrfs;
                        class FibProtocolEnum;


                }; // Fib::Nodes::Node::Protocols::Protocol


                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol> > protocol;


            }; // Fib::Nodes::Node::Protocols


                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols> protocols;


        }; // Fib::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node> > node;


    }; // Fib::Nodes


        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes> nodes;


}; // Fib

class MplsForwarding : public Entity
{
    public:
        MplsForwarding();
        ~MplsForwarding();

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


            class ForwardingSummary : public Entity
            {
                public:
                    ForwardingSummary();
                    ~ForwardingSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ipv4_imposition_entries; //type: uint32
                    Value reserved_label_entries; //type: uint32
                    Value label_switched_entries; //type: uint32
                    Value deleted_stale_entries; //type: uint32
                    Value te_head_entries; //type: uint32
                    Value te_frr_head_entries; //type: uint32
                    Value te_frr_interface_entries; //type: uint32
                    Value te_frr_next_hop_entries; //type: uint32
                    Value te_mid_points_entries; //type: uint32
                    Value te_frr_mid_points_entries; //type: uint32
                    Value te_internal_entries; //type: uint32
                    Value te_frr_internal_entries; //type: uint32
                    Value total_forwarding_updates; //type: uint32
                    Value total_forwarding_update_messages; //type: uint32
                    Value total_p2mp_forwarding_updates; //type: uint32
                    Value total_p2mp_forwarding_added_or_modify_messages; //type: uint32
                    Value total_p2mp_forwarding_delete_messages; //type: uint32
                    Value total_p2mp_forwarding_drop_messages; //type: uint32
                    Value total_p2mp_iir_forwarding_drop_messages; //type: uint32
                    Value lowest_label; //type: uint32
                    Value highest_label; //type: uint32
                    Value ignore_protect; //type: uint32
                    Value mte_head_entries; //type: uint32
                    Value mte_ll_entries; //type: uint32
                    Value mte_midpoint_entries; //type: uint32
                    Value global_dropped_packets; //type: uint64
                    Value global_fragmented_packets; //type: uint64
                    Value global_failed_lookups; //type: uint64
                    Value lrpf_entries; //type: uint32




            }; // MplsForwarding::Nodes::Node::ForwardingSummary


            class LabelFib : public Entity
            {
                public:
                    LabelFib();
                    ~LabelFib();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ForwardingDetails : public Entity
                {
                    public:
                        ForwardingDetails();
                        ~ForwardingDetails();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ForwardingDetail : public Entity
                    {
                        public:
                            ForwardingDetail();
                            ~ForwardingDetail();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value label_value; //type: int32
                            Value eos; //type: MplseosEnum
                            Value leaf_local_label; //type: uint32
                            Value eos_bit; //type: uint32
                            Value hardware_information; //type: string
                            Value leaf_referance_count; //type: uint32
                            Value leaf_flags; //type: uint32
                            Value path_list_referance_count; //type: uint32
                            Value path_list_flags; //type: uint32
                            Value ldi_referance_count; //type: uint32
                            Value ldi_flags; //type: uint32
                            Value ldi_type; //type: uint32
                            Value ldi_pointer; //type: uint32
                            Value lw_ldi_type; //type: uint32
                            Value lw_ldi_pointer; //type: uint32
                            Value lw_ldi_refernace_count; //type: uint32
                            Value lw_shared_ldi_pointer; //type: uint32
                            Value lspa_flags; //type: uint32
                            Value afi_table_id; //type: uint32
                            Value multicast_label; //type: boolean
                            Value leaf_time_in_milli_seconds; //type: uint64


                        class LdiInformation : public Entity
                        {
                            public:
                                LdiInformation();
                                ~LdiInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ldi_hardware_information; //type: string




                        }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


                        class MulticastInformation : public Entity
                        {
                            public:
                                MulticastInformation();
                                ~MulticastInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value multicast_mol_base_flags; //type: uint32
                                Value multicast_mol_flags; //type: uint16
                                Value multicast_mol_referance_count; //type: uint16
                                Value multicast_tunnel_interface_handler; //type: string
                                Value multicast_tunnel_id; //type: uint32
                                Value multicast_tunnel_next_hop_information; //type: uint32
                                Value multicast_tunnel_lspvif; //type: uint32
                                Value multicast_mpls_output_paths; //type: uint16
                                Value multicast_mpls_protocol_output_paths; //type: uint16
                                Value multicast_mpls_local_output_paths; //type: uint16
                                Value multicast_rpf_id; //type: uint32
                                Value multicast_encap_id; //type: uint32
                                Value multicast_platform_data_length; //type: uint8
                                Value multicast_platform_data; //type: string




                        }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


                        class LabelInformation : public Entity
                        {
                            public:
                                LabelInformation();
                                ~LabelInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label_information_type; //type: uint32
                                Value local_label; //type: uint32
                                Value outgoing_label; //type: uint32
                                Value mpls_adjacency_flags; //type: uint32
                                Value tunnel_id_present; //type: boolean
                                Value outgoing_interface; //type: string
                                Value outgoing_physical_interface; //type: string
                                Value tunnel_interface; //type: string
                                Value label_information_path_index; //type: uint32
                                Value label_information_next_hop_type; //type: NextHopEnum
                                Value label_information_next_hop_protocol; //type: ProtoEnum
                                Value tx_bytes; //type: uint64
                                Value tx_packets; //type: uint64
                                Value outgoing_interface_string; //type: string
                                Value outgoing_label_string; //type: string
                                Value prefix_or_id; //type: string
                                Value label_information_next_hop_string; //type: string
                                Value label_information_route_version; //type: uint64
                                Value label_information_time_in_milli_seconds; //type: uint64


                            class LabelInformationDetail : public Entity
                            {
                                public:
                                    LabelInformationDetail();
                                    ~LabelInformationDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value l3_mtu; //type: uint32
                                    Value total_encapsulation_size; //type: uint32
                                    Value mac_size; //type: uint32
                                    Value transmit_number_of_packets_switched; //type: uint64
                                    Value transmit_number_of_bytes_switched; //type: uint64
                                    Value status; //type: int32
                                    Value next_hop_interface; //type: string
                                    Value next_hop_protocol; //type: ProtoEnum
                                    Value next_hop_string; //type: string
                                    ValueList label_stack; //type: list of  uint32


                                    class ProtoEnum;


                            }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
                                class ProtoEnum;
                                class NextHopEnum;


                        }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
                            class MplseosEnum;


                    }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail> > forwarding_detail;


                }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails


                class Informations : public Entity
                {
                    public:
                        Informations();
                        ~Informations();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Information : public Entity
                    {
                        public:
                            Information();
                            ~Information();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value label_value; //type: int32
                            Value eos; //type: MplseosEnum
                            Value leaf_local_label; //type: uint32
                            Value eos_bit; //type: uint32
                            Value hardware_information; //type: string
                            Value leaf_referance_count; //type: uint32
                            Value leaf_flags; //type: uint32
                            Value path_list_referance_count; //type: uint32
                            Value path_list_flags; //type: uint32
                            Value ldi_referance_count; //type: uint32
                            Value ldi_flags; //type: uint32
                            Value ldi_type; //type: uint32
                            Value ldi_pointer; //type: uint32
                            Value lw_ldi_type; //type: uint32
                            Value lw_ldi_pointer; //type: uint32
                            Value lw_ldi_refernace_count; //type: uint32
                            Value lw_shared_ldi_pointer; //type: uint32
                            Value lspa_flags; //type: uint32
                            Value afi_table_id; //type: uint32
                            Value multicast_label; //type: boolean
                            Value leaf_time_in_milli_seconds; //type: uint64


                        class LdiInformation : public Entity
                        {
                            public:
                                LdiInformation();
                                ~LdiInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ldi_hardware_information; //type: string




                        }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation


                        class MulticastInformation : public Entity
                        {
                            public:
                                MulticastInformation();
                                ~MulticastInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value multicast_mol_base_flags; //type: uint32
                                Value multicast_mol_flags; //type: uint16
                                Value multicast_mol_referance_count; //type: uint16
                                Value multicast_tunnel_interface_handler; //type: string
                                Value multicast_tunnel_id; //type: uint32
                                Value multicast_tunnel_next_hop_information; //type: uint32
                                Value multicast_tunnel_lspvif; //type: uint32
                                Value multicast_mpls_output_paths; //type: uint16
                                Value multicast_mpls_protocol_output_paths; //type: uint16
                                Value multicast_mpls_local_output_paths; //type: uint16
                                Value multicast_rpf_id; //type: uint32
                                Value multicast_encap_id; //type: uint32
                                Value multicast_platform_data_length; //type: uint8
                                Value multicast_platform_data; //type: string




                        }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation


                        class LabelInformation : public Entity
                        {
                            public:
                                LabelInformation();
                                ~LabelInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label_information_type; //type: uint32
                                Value local_label; //type: uint32
                                Value outgoing_label; //type: uint32
                                Value mpls_adjacency_flags; //type: uint32
                                Value tunnel_id_present; //type: boolean
                                Value outgoing_interface; //type: string
                                Value outgoing_physical_interface; //type: string
                                Value tunnel_interface; //type: string
                                Value label_information_path_index; //type: uint32
                                Value label_information_next_hop_type; //type: NextHopEnum
                                Value label_information_next_hop_protocol; //type: ProtoEnum
                                Value tx_bytes; //type: uint64
                                Value tx_packets; //type: uint64
                                Value outgoing_interface_string; //type: string
                                Value outgoing_label_string; //type: string
                                Value prefix_or_id; //type: string
                                Value label_information_next_hop_string; //type: string
                                Value label_information_route_version; //type: uint64
                                Value label_information_time_in_milli_seconds; //type: uint64


                            class LabelInformationDetail : public Entity
                            {
                                public:
                                    LabelInformationDetail();
                                    ~LabelInformationDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value l3_mtu; //type: uint32
                                    Value total_encapsulation_size; //type: uint32
                                    Value mac_size; //type: uint32
                                    Value transmit_number_of_packets_switched; //type: uint64
                                    Value transmit_number_of_bytes_switched; //type: uint64
                                    Value status; //type: int32
                                    Value next_hop_interface; //type: string
                                    Value next_hop_protocol; //type: ProtoEnum
                                    Value next_hop_string; //type: string
                                    ValueList label_stack; //type: list of  uint32


                                    class ProtoEnum;


                            }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
                                class ProtoEnum;
                                class NextHopEnum;


                        }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
                            class MplseosEnum;


                    }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information> > information;


                }; // MplsForwarding::Nodes::Node::LabelFib::Informations


                class LabelSecurity : public Entity
                {
                    public:
                        LabelSecurity();
                        ~LabelSecurity();

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
                                Value rpf_enabled; //type: boolean
                                Value rpf_supported; //type: boolean
                                Value mld_enabled; //type: boolean
                                Value mld_supported; //type: boolean
                                Value rpf_drops; //type: uint64
                                Value multi_label_drops; //type: uint64
                                Value rpfifh; //type: string




                        }; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface> > interface;


                    }; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces


                    class Summary : public Entity
                    {
                        public:
                            Summary();
                            ~Summary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rpf_drops; //type: uint64
                            Value multi_label_drops; //type: uint64




                    }; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary


                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces> interfaces;
                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary> summary;


                }; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity


                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations> informations;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity> label_security;


            }; // MplsForwarding::Nodes::Node::LabelFib


                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::ForwardingSummary> forwarding_summary;
                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib> label_fib;


        }; // MplsForwarding::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node> > node;


    }; // MplsForwarding::Nodes


        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes> nodes;


}; // MplsForwarding

class FibMpls : public Entity
{
    public:
        FibMpls();
        ~FibMpls();

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


            class LabelFib : public Entity
            {
                public:
                    LabelFib();
                    ~LabelFib();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Forwardings : public Entity
                {
                    public:
                        Forwardings();
                        ~Forwardings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Forwarding : public Entity
                    {
                        public:
                            Forwarding();
                            ~Forwarding();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_label; //type: int32
                            Value eos; //type: EosEnum
                            Value leaf_local_label; //type: uint32
                            Value eos_bit; //type: uint32
                            Value hardware_information; //type: string
                            Value leaf_reference_count; //type: uint32
                            Value leaf_ptr; //type: uint32
                            Value leaf_flags; //type: uint32
                            Value path_list_reference_count; //type: uint32
                            Value path_list_ldi_mask; //type: uint32
                            Value path_list_flags; //type: uint32
                            Value path_list_pointer; //type: uint32
                            Value ldi_reference_count; //type: uint32
                            Value ldi_flags; //type: uint32
                            Value ldi_type; //type: uint32
                            Value ldi_pointer; //type: uint32
                            Value lw_ldi_type; //type: uint32
                            Value lw_ldi_pointer; //type: uint32
                            Value lw_ldi_reference_count; //type: uint32
                            Value lw_shared_ldi_pointer; //type: uint32
                            Value lspa_flags; //type: uint32
                            Value afi_table_id; //type: uint32
                            Value multicast_label; //type: boolean
                            Value leaf_time_in_milli_seconds; //type: uint64
                            Value pwhe_interface_list_id; //type: uint16
                            Value pwhe_interface_list_ptr; //type: uint32
                            Value pl_time_of_last_update_in_msec; //type: uint64
                            Value ldi_time_of_last_update_in_msec; //type: uint64
                            Value lwldi_time_of_last_update_in_msec; //type: uint64
                            Value lspa_time_of_last_update_in_msec; //type: uint64
                            Value pl_time_stamp_type; //type: uint32


                        class LabelInformation : public Entity
                        {
                            public:
                                LabelInformation();
                                ~LabelInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FibMplsAdjInfo : public Entity
                            {
                                public:
                                    FibMplsAdjInfo();
                                    ~FibMplsAdjInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label_information_type; //type: uint32
                                    Value local_label; //type: uint32
                                    Value outgoing_label; //type: uint32
                                    Value frr_nh_ptr; //type: uint32
                                    Value mpls_adjacency_flags; //type: uint32
                                    Value path_flags; //type: uint32
                                    Value path_index; //type: uint8
                                    Value backup_path_index; //type: uint8
                                    Value nhid; //type: uint32
                                    Value weight; //type: uint32
                                    Value app_id; //type: uint16
                                    Value tunnel_id_present; //type: boolean
                                    Value outgoing_interface; //type: uint32
                                    Value outgoing_physical_interface; //type: uint32
                                    Value tunnel_interface_name; //type: string
                                    Value label_information_path_index; //type: uint32
                                    Value label_information_encap_id; //type: uint64
                                    Value label_information_next_hop_type; //type: uint32
                                    Value label_information_next_hop_table_id; //type: uint32
                                    Value label_information_next_hop_protocol; //type: uint32
                                    Value sli_from_ldi; //type: boolean
                                    Value label_information_next_hop_string; //type: string
                                    Value label_information_route_version; //type: uint64
                                    Value label_information_time_in_milli_seconds; //type: uint64
                                    Value label_bridge_domain_id; //type: uint32
                                    Value label_xid; //type: uint32
                                    Value label_pw_xid; //type: uint32
                                    Value label_shg_id; //type: uint32
                                    Value pwhev_ctype; //type: uint32
                                    Value pwhecw_enabled; //type: boolean
                                    Value pwhe_interface; //type: string
                                    Value pq_label; //type: uint32
                                    Value pq_flags; //type: uint32
                                    Value li_pointer; //type: uint32
                                    Value li_reference_count; //type: uint32
                                    Value is_srte; //type: boolean
                                    Value is_pure_backup; //type: boolean
                                    Value is_frr_active; //type: boolean


                                class LabelInformationDetail : public Entity
                                {
                                    public:
                                        LabelInformationDetail();
                                        ~LabelInformationDetail();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value l3_mtu; //type: uint32
                                        Value total_encapsulation_size; //type: uint32
                                        Value mac_size; //type: uint32
                                        Value transmit_number_of_packets_switched; //type: uint64
                                        Value transmit_number_of_bytes_switched; //type: uint64
                                        Value transmit_number_of_tm_packets_switched; //type: uint64
                                        Value transmit_number_of_tm_bytes_switched; //type: uint64
                                        Value status; //type: int32
                                        Value next_hop_interface_name; //type: string
                                        Value next_hop_protocol; //type: uint32
                                        Value next_hop_string; //type: string
                                        Value nh_id; //type: uint32
                                        Value version_priority_valid; //type: boolean
                                        Value route_download_version; //type: uint64
                                        Value route_download_priority; //type: uint32
                                        ValueList label_stack; //type: list of  uint32




                                }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo::LabelInformationDetail


                                class MpiInfo : public Entity
                                {
                                    public:
                                        MpiInfo();
                                        ~MpiInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value my_node_id; //type: uint32
                                        Value flags; //type: uint32
                                        Value via_label; //type: uint32
                                        Value mcast_id; //type: uint32
                                        Value pri_tos_mask; //type: uint32
                                        Value bk_tos_mask; //type: uint32
                                        Value pd_ts_ms; //type: uint64
                                        Value primary_is_local; //type: boolean
                                        Value backup_is_local; //type: boolean
                                        ValueList if_node_id; //type: list of  uint32
                                        ValueList bkup_if_node_id; //type: list of  uint32
                                        ValueList if_hdl; //type: list of  uint32
                                        ValueList bkup_if_hdl; //type: list of  uint32




                                }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo::MpiInfo


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo::LabelInformationDetail> label_information_detail;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo::MpiInfo> mpi_info;


                            }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation::FibMplsAdjInfo> > fib_mpls_adj_info;


                        }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation


                        class LdiInformation : public Entity
                        {
                            public:
                                LdiInformation();
                                ~LdiInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ldi_hardware_information; //type: string




                        }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LdiInformation


                        class MulticastInformation : public Entity
                        {
                            public:
                                MulticastInformation();
                                ~MulticastInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value multicast_mol_base_flags; //type: uint32
                                Value multicast_mol_flags; //type: uint16
                                Value multicast_mol_reference_count; //type: uint16
                                Value multicast_tunnel_interface_name; //type: string
                                Value multicast_tunnel_id; //type: uint32
                                Value multicast_tunnel_next_hop_information; //type: uint32
                                Value multicast_tunnel_lspvif; //type: uint32
                                Value multicast_mpls_output_paths; //type: uint16
                                Value multicast_mpls_protocol_output_paths; //type: uint16
                                Value multicast_mpls_local_output_paths; //type: uint16
                                Value multicast_rpf_id; //type: uint32
                                Value multicast_encap_id; //type: uint32
                                Value dependent_tunnel_local_label; //type: uint32
                                Value dependent_tunnel_ifh; //type: uint32
                                Value multicast_v4_table_id; //type: uint32
                                Value multicast_v6_table_id; //type: uint32
                                Value label_bridge_domain_id; //type: uint32
                                Value label_xid; //type: uint32
                                Value label_shg_id; //type: uint32
                                Value multicast_platform_data_length; //type: uint8
                                Value multicast_platform_data; //type: string




                        }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::MulticastInformation


                        class Rpf : public Entity
                        {
                            public:
                                Rpf();
                                ~Rpf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rpf_flags; //type: uint32
                                Value rpf_pl_flags; //type: uint32
                                Value rpf_create_ts; //type: uint64
                                Value rpf_mod_ts; //type: uint64
                                Value rpf_pd_ts; //type: uint64
                                Value rpf_hardware; //type: string
                                ValueList rpf_if; //type: list of  string


                            class RpfV4Nbr : public Entity
                            {
                                public:
                                    RpfV4Nbr();
                                    ~RpfV4Nbr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_tbl_id; //type: uint32
                                    Value rpf_v4_addr; //type: string




                            }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV4Nbr


                            class RpfV6Nbr : public Entity
                            {
                                public:
                                    RpfV6Nbr();
                                    ~RpfV6Nbr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_tbl_id; //type: uint32
                                    Value rpf_v6_addr; //type: string




                            }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV6Nbr


                            class RpfIfMap : public Entity
                            {
                                public:
                                    RpfIfMap();
                                    ~RpfIfMap();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_path_index; //type: uint32
                                    Value rpf_ifh; //type: uint32




                            }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfIfMap


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfIfMap> > rpf_if_map;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV4Nbr> > rpf_v4_nbr;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV6Nbr> > rpf_v6_nbr;


                        }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation> label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::MulticastInformation> multicast_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf> rpf;
                            class EosEnum;


                    }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding> > forwarding;


                }; // FibMpls::Nodes::Node::LabelFib::Forwardings


                class ForwardingDetails : public Entity
                {
                    public:
                        ForwardingDetails();
                        ~ForwardingDetails();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ForwardingDetail : public Entity
                    {
                        public:
                            ForwardingDetail();
                            ~ForwardingDetail();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_label; //type: int32
                            Value eos; //type: EosEnum
                            Value leaf_local_label; //type: uint32
                            Value eos_bit; //type: uint32
                            Value hardware_information; //type: string
                            Value leaf_reference_count; //type: uint32
                            Value leaf_ptr; //type: uint32
                            Value leaf_flags; //type: uint32
                            Value path_list_reference_count; //type: uint32
                            Value path_list_ldi_mask; //type: uint32
                            Value path_list_flags; //type: uint32
                            Value path_list_pointer; //type: uint32
                            Value ldi_reference_count; //type: uint32
                            Value ldi_flags; //type: uint32
                            Value ldi_type; //type: uint32
                            Value ldi_pointer; //type: uint32
                            Value lw_ldi_type; //type: uint32
                            Value lw_ldi_pointer; //type: uint32
                            Value lw_ldi_reference_count; //type: uint32
                            Value lw_shared_ldi_pointer; //type: uint32
                            Value lspa_flags; //type: uint32
                            Value afi_table_id; //type: uint32
                            Value multicast_label; //type: boolean
                            Value leaf_time_in_milli_seconds; //type: uint64
                            Value pwhe_interface_list_id; //type: uint16
                            Value pwhe_interface_list_ptr; //type: uint32
                            Value pl_time_of_last_update_in_msec; //type: uint64
                            Value ldi_time_of_last_update_in_msec; //type: uint64
                            Value lwldi_time_of_last_update_in_msec; //type: uint64
                            Value lspa_time_of_last_update_in_msec; //type: uint64
                            Value pl_time_stamp_type; //type: uint32


                        class LabelInformation : public Entity
                        {
                            public:
                                LabelInformation();
                                ~LabelInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class FibMplsAdjInfo : public Entity
                            {
                                public:
                                    FibMplsAdjInfo();
                                    ~FibMplsAdjInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label_information_type; //type: uint32
                                    Value local_label; //type: uint32
                                    Value outgoing_label; //type: uint32
                                    Value frr_nh_ptr; //type: uint32
                                    Value mpls_adjacency_flags; //type: uint32
                                    Value path_flags; //type: uint32
                                    Value path_index; //type: uint8
                                    Value backup_path_index; //type: uint8
                                    Value nhid; //type: uint32
                                    Value weight; //type: uint32
                                    Value app_id; //type: uint16
                                    Value tunnel_id_present; //type: boolean
                                    Value outgoing_interface; //type: uint32
                                    Value outgoing_physical_interface; //type: uint32
                                    Value tunnel_interface_name; //type: string
                                    Value label_information_path_index; //type: uint32
                                    Value label_information_encap_id; //type: uint64
                                    Value label_information_next_hop_type; //type: uint32
                                    Value label_information_next_hop_table_id; //type: uint32
                                    Value label_information_next_hop_protocol; //type: uint32
                                    Value sli_from_ldi; //type: boolean
                                    Value label_information_next_hop_string; //type: string
                                    Value label_information_route_version; //type: uint64
                                    Value label_information_time_in_milli_seconds; //type: uint64
                                    Value label_bridge_domain_id; //type: uint32
                                    Value label_xid; //type: uint32
                                    Value label_pw_xid; //type: uint32
                                    Value label_shg_id; //type: uint32
                                    Value pwhev_ctype; //type: uint32
                                    Value pwhecw_enabled; //type: boolean
                                    Value pwhe_interface; //type: string
                                    Value pq_label; //type: uint32
                                    Value pq_flags; //type: uint32
                                    Value li_pointer; //type: uint32
                                    Value li_reference_count; //type: uint32
                                    Value is_srte; //type: boolean
                                    Value is_pure_backup; //type: boolean
                                    Value is_frr_active; //type: boolean


                                class LabelInformationDetail : public Entity
                                {
                                    public:
                                        LabelInformationDetail();
                                        ~LabelInformationDetail();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value l3_mtu; //type: uint32
                                        Value total_encapsulation_size; //type: uint32
                                        Value mac_size; //type: uint32
                                        Value transmit_number_of_packets_switched; //type: uint64
                                        Value transmit_number_of_bytes_switched; //type: uint64
                                        Value transmit_number_of_tm_packets_switched; //type: uint64
                                        Value transmit_number_of_tm_bytes_switched; //type: uint64
                                        Value status; //type: int32
                                        Value next_hop_interface_name; //type: string
                                        Value next_hop_protocol; //type: uint32
                                        Value next_hop_string; //type: string
                                        Value nh_id; //type: uint32
                                        Value version_priority_valid; //type: boolean
                                        Value route_download_version; //type: uint64
                                        Value route_download_priority; //type: uint32
                                        ValueList label_stack; //type: list of  uint32




                                }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo::LabelInformationDetail


                                class MpiInfo : public Entity
                                {
                                    public:
                                        MpiInfo();
                                        ~MpiInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value my_node_id; //type: uint32
                                        Value flags; //type: uint32
                                        Value via_label; //type: uint32
                                        Value mcast_id; //type: uint32
                                        Value pri_tos_mask; //type: uint32
                                        Value bk_tos_mask; //type: uint32
                                        Value pd_ts_ms; //type: uint64
                                        Value primary_is_local; //type: boolean
                                        Value backup_is_local; //type: boolean
                                        ValueList if_node_id; //type: list of  uint32
                                        ValueList bkup_if_node_id; //type: list of  uint32
                                        ValueList if_hdl; //type: list of  uint32
                                        ValueList bkup_if_hdl; //type: list of  uint32




                                }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo::MpiInfo


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo::LabelInformationDetail> label_information_detail;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo::MpiInfo> mpi_info;


                            }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::FibMplsAdjInfo> > fib_mpls_adj_info;


                        }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


                        class LdiInformation : public Entity
                        {
                            public:
                                LdiInformation();
                                ~LdiInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ldi_hardware_information; //type: string




                        }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


                        class MulticastInformation : public Entity
                        {
                            public:
                                MulticastInformation();
                                ~MulticastInformation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value multicast_mol_base_flags; //type: uint32
                                Value multicast_mol_flags; //type: uint16
                                Value multicast_mol_reference_count; //type: uint16
                                Value multicast_tunnel_interface_name; //type: string
                                Value multicast_tunnel_id; //type: uint32
                                Value multicast_tunnel_next_hop_information; //type: uint32
                                Value multicast_tunnel_lspvif; //type: uint32
                                Value multicast_mpls_output_paths; //type: uint16
                                Value multicast_mpls_protocol_output_paths; //type: uint16
                                Value multicast_mpls_local_output_paths; //type: uint16
                                Value multicast_rpf_id; //type: uint32
                                Value multicast_encap_id; //type: uint32
                                Value dependent_tunnel_local_label; //type: uint32
                                Value dependent_tunnel_ifh; //type: uint32
                                Value multicast_v4_table_id; //type: uint32
                                Value multicast_v6_table_id; //type: uint32
                                Value label_bridge_domain_id; //type: uint32
                                Value label_xid; //type: uint32
                                Value label_shg_id; //type: uint32
                                Value multicast_platform_data_length; //type: uint8
                                Value multicast_platform_data; //type: string




                        }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


                        class Rpf : public Entity
                        {
                            public:
                                Rpf();
                                ~Rpf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rpf_flags; //type: uint32
                                Value rpf_pl_flags; //type: uint32
                                Value rpf_create_ts; //type: uint64
                                Value rpf_mod_ts; //type: uint64
                                Value rpf_pd_ts; //type: uint64
                                Value rpf_hardware; //type: string
                                ValueList rpf_if; //type: list of  string


                            class RpfV4Nbr : public Entity
                            {
                                public:
                                    RpfV4Nbr();
                                    ~RpfV4Nbr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_tbl_id; //type: uint32
                                    Value rpf_v4_addr; //type: string




                            }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV4Nbr


                            class RpfV6Nbr : public Entity
                            {
                                public:
                                    RpfV6Nbr();
                                    ~RpfV6Nbr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_tbl_id; //type: uint32
                                    Value rpf_v6_addr; //type: string




                            }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV6Nbr


                            class RpfIfMap : public Entity
                            {
                                public:
                                    RpfIfMap();
                                    ~RpfIfMap();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_path_index; //type: uint32
                                    Value rpf_ifh; //type: uint32




                            }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfIfMap


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfIfMap> > rpf_if_map;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV4Nbr> > rpf_v4_nbr;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV6Nbr> > rpf_v6_nbr;


                        }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf> rpf;
                            class EosEnum;


                    }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail> > forwarding_detail;


                }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails


                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings> forwardings;


            }; // FibMpls::Nodes::Node::LabelFib


            class Tunnel : public Entity
            {
                public:
                    Tunnel();
                    ~Tunnel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ForwardingTunnels : public Entity
                {
                    public:
                        ForwardingTunnels();
                        ~ForwardingTunnels();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ForwardingTunnel : public Entity
                    {
                        public:
                            ForwardingTunnel();
                            ~ForwardingTunnel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string


                        class TunnelInfo : public Entity
                        {
                            public:
                                TunnelInfo();
                                ~TunnelInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tunnel_interface_name; //type: string
                                Value tunnel_local_label; //type: uint32
                                Value tunnel_fwd_class; //type: uint8
                                Value tunnel_load_metric; //type: uint8
                                Value tunnel_is_srte; //type: boolean
                                Value tunnel_resolution_incomplete; //type: boolean
                                Value tunnel_resolution_inconsistent; //type: boolean
                                Value tunnel_is_programmed_to_drop; //type: boolean
                                Value tli_type; //type: uint32
                                Value tli_pointer; //type: uint32
                                Value tli_reference_count; //type: uint32
                                Value tli_flags; //type: uint32
                                Value tli_flags_extended; //type: uint32




                        }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo


                        class Fwdg : public Entity
                        {
                            public:
                                Fwdg();
                                ~Fwdg();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value leaf_local_label; //type: uint32
                                Value eos_bit; //type: uint32
                                Value hardware_information; //type: string
                                Value leaf_reference_count; //type: uint32
                                Value leaf_ptr; //type: uint32
                                Value leaf_flags; //type: uint32
                                Value path_list_reference_count; //type: uint32
                                Value path_list_ldi_mask; //type: uint32
                                Value path_list_flags; //type: uint32
                                Value path_list_pointer; //type: uint32
                                Value ldi_reference_count; //type: uint32
                                Value ldi_flags; //type: uint32
                                Value ldi_type; //type: uint32
                                Value ldi_pointer; //type: uint32
                                Value lw_ldi_type; //type: uint32
                                Value lw_ldi_pointer; //type: uint32
                                Value lw_ldi_reference_count; //type: uint32
                                Value lw_shared_ldi_pointer; //type: uint32
                                Value lspa_flags; //type: uint32
                                Value afi_table_id; //type: uint32
                                Value multicast_label; //type: boolean
                                Value leaf_time_in_milli_seconds; //type: uint64
                                Value pwhe_interface_list_id; //type: uint16
                                Value pwhe_interface_list_ptr; //type: uint32
                                Value pl_time_of_last_update_in_msec; //type: uint64
                                Value ldi_time_of_last_update_in_msec; //type: uint64
                                Value lwldi_time_of_last_update_in_msec; //type: uint64
                                Value lspa_time_of_last_update_in_msec; //type: uint64
                                Value pl_time_stamp_type; //type: uint32


                            class LabelInformation : public Entity
                            {
                                public:
                                    LabelInformation();
                                    ~LabelInformation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class FibMplsAdjInfo : public Entity
                                {
                                    public:
                                        FibMplsAdjInfo();
                                        ~FibMplsAdjInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value label_information_type; //type: uint32
                                        Value local_label; //type: uint32
                                        Value outgoing_label; //type: uint32
                                        Value frr_nh_ptr; //type: uint32
                                        Value mpls_adjacency_flags; //type: uint32
                                        Value path_flags; //type: uint32
                                        Value path_index; //type: uint8
                                        Value backup_path_index; //type: uint8
                                        Value nhid; //type: uint32
                                        Value weight; //type: uint32
                                        Value app_id; //type: uint16
                                        Value tunnel_id_present; //type: boolean
                                        Value outgoing_interface; //type: uint32
                                        Value outgoing_physical_interface; //type: uint32
                                        Value tunnel_interface_name; //type: string
                                        Value label_information_path_index; //type: uint32
                                        Value label_information_encap_id; //type: uint64
                                        Value label_information_next_hop_type; //type: uint32
                                        Value label_information_next_hop_table_id; //type: uint32
                                        Value label_information_next_hop_protocol; //type: uint32
                                        Value sli_from_ldi; //type: boolean
                                        Value label_information_next_hop_string; //type: string
                                        Value label_information_route_version; //type: uint64
                                        Value label_information_time_in_milli_seconds; //type: uint64
                                        Value label_bridge_domain_id; //type: uint32
                                        Value label_xid; //type: uint32
                                        Value label_pw_xid; //type: uint32
                                        Value label_shg_id; //type: uint32
                                        Value pwhev_ctype; //type: uint32
                                        Value pwhecw_enabled; //type: boolean
                                        Value pwhe_interface; //type: string
                                        Value pq_label; //type: uint32
                                        Value pq_flags; //type: uint32
                                        Value li_pointer; //type: uint32
                                        Value li_reference_count; //type: uint32
                                        Value is_srte; //type: boolean
                                        Value is_pure_backup; //type: boolean
                                        Value is_frr_active; //type: boolean


                                    class LabelInformationDetail : public Entity
                                    {
                                        public:
                                            LabelInformationDetail();
                                            ~LabelInformationDetail();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value l3_mtu; //type: uint32
                                            Value total_encapsulation_size; //type: uint32
                                            Value mac_size; //type: uint32
                                            Value transmit_number_of_packets_switched; //type: uint64
                                            Value transmit_number_of_bytes_switched; //type: uint64
                                            Value transmit_number_of_tm_packets_switched; //type: uint64
                                            Value transmit_number_of_tm_bytes_switched; //type: uint64
                                            Value status; //type: int32
                                            Value next_hop_interface_name; //type: string
                                            Value next_hop_protocol; //type: uint32
                                            Value next_hop_string; //type: string
                                            Value nh_id; //type: uint32
                                            Value version_priority_valid; //type: boolean
                                            Value route_download_version; //type: uint64
                                            Value route_download_priority; //type: uint32
                                            ValueList label_stack; //type: list of  uint32




                                    }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo::LabelInformationDetail


                                    class MpiInfo : public Entity
                                    {
                                        public:
                                            MpiInfo();
                                            ~MpiInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value my_node_id; //type: uint32
                                            Value flags; //type: uint32
                                            Value via_label; //type: uint32
                                            Value mcast_id; //type: uint32
                                            Value pri_tos_mask; //type: uint32
                                            Value bk_tos_mask; //type: uint32
                                            Value pd_ts_ms; //type: uint64
                                            Value primary_is_local; //type: boolean
                                            Value backup_is_local; //type: boolean
                                            ValueList if_node_id; //type: list of  uint32
                                            ValueList bkup_if_node_id; //type: list of  uint32
                                            ValueList if_hdl; //type: list of  uint32
                                            ValueList bkup_if_hdl; //type: list of  uint32




                                    }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo::MpiInfo


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo::LabelInformationDetail> label_information_detail;
                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo::MpiInfo> mpi_info;


                                }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::FibMplsAdjInfo> > fib_mpls_adj_info;


                            }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


                            class LdiInformation : public Entity
                            {
                                public:
                                    LdiInformation();
                                    ~LdiInformation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ldi_hardware_information; //type: string




                            }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation


                            class MulticastInformation : public Entity
                            {
                                public:
                                    MulticastInformation();
                                    ~MulticastInformation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value multicast_mol_base_flags; //type: uint32
                                    Value multicast_mol_flags; //type: uint16
                                    Value multicast_mol_reference_count; //type: uint16
                                    Value multicast_tunnel_interface_name; //type: string
                                    Value multicast_tunnel_id; //type: uint32
                                    Value multicast_tunnel_next_hop_information; //type: uint32
                                    Value multicast_tunnel_lspvif; //type: uint32
                                    Value multicast_mpls_output_paths; //type: uint16
                                    Value multicast_mpls_protocol_output_paths; //type: uint16
                                    Value multicast_mpls_local_output_paths; //type: uint16
                                    Value multicast_rpf_id; //type: uint32
                                    Value multicast_encap_id; //type: uint32
                                    Value dependent_tunnel_local_label; //type: uint32
                                    Value dependent_tunnel_ifh; //type: uint32
                                    Value multicast_v4_table_id; //type: uint32
                                    Value multicast_v6_table_id; //type: uint32
                                    Value label_bridge_domain_id; //type: uint32
                                    Value label_xid; //type: uint32
                                    Value label_shg_id; //type: uint32
                                    Value multicast_platform_data_length; //type: uint8
                                    Value multicast_platform_data; //type: string




                            }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation


                            class Rpf : public Entity
                            {
                                public:
                                    Rpf();
                                    ~Rpf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rpf_flags; //type: uint32
                                    Value rpf_pl_flags; //type: uint32
                                    Value rpf_create_ts; //type: uint64
                                    Value rpf_mod_ts; //type: uint64
                                    Value rpf_pd_ts; //type: uint64
                                    Value rpf_hardware; //type: string
                                    ValueList rpf_if; //type: list of  string


                                class RpfV4Nbr : public Entity
                                {
                                    public:
                                        RpfV4Nbr();
                                        ~RpfV4Nbr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value rpf_tbl_id; //type: uint32
                                        Value rpf_v4_addr; //type: string




                                }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfV4Nbr


                                class RpfV6Nbr : public Entity
                                {
                                    public:
                                        RpfV6Nbr();
                                        ~RpfV6Nbr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value rpf_tbl_id; //type: uint32
                                        Value rpf_v6_addr; //type: string




                                }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfV6Nbr


                                class RpfIfMap : public Entity
                                {
                                    public:
                                        RpfIfMap();
                                        ~RpfIfMap();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value rpf_path_index; //type: uint32
                                        Value rpf_ifh; //type: uint32




                                }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfIfMap


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfIfMap> > rpf_if_map;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfV4Nbr> > rpf_v4_nbr;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf::RpfV6Nbr> > rpf_v6_nbr;


                            }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation> label_information;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::Rpf> rpf;


                        }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;


                    }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel> > forwarding_tunnel;


                }; // FibMpls::Nodes::Node::Tunnel::ForwardingTunnels


                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel::ForwardingTunnels> forwarding_tunnels;


            }; // FibMpls::Nodes::Node::Tunnel


            class FrrDatabase : public Entity
            {
                public:
                    FrrDatabase();
                    ~FrrDatabase();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class FrrdbTunnelHeadSummary : public Entity
                {
                    public:
                        FrrdbTunnelHeadSummary();
                        ~FrrdbTunnelHeadSummary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value active; //type: uint32
                        Value ready; //type: uint32
                        Value partial; //type: uint32
                        Value other; //type: uint32




                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary


                class FrrdbBackupInterfaceSummaries : public Entity
                {
                    public:
                        FrrdbBackupInterfaceSummaries();
                        ~FrrdbBackupInterfaceSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FrrdbBackupInterfaceSummary : public Entity
                    {
                        public:
                            FrrdbBackupInterfaceSummary();
                            ~FrrdbBackupInterfaceSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value active; //type: uint32
                            Value ready; //type: uint32
                            Value partial; //type: uint32
                            Value other; //type: uint32




                    }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary> > frrdb_backup_interface_summary;


                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries


                class FrrdbSummary : public Entity
                {
                    public:
                        FrrdbSummary();
                        ~FrrdbSummary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value active; //type: uint32
                        Value ready; //type: uint32
                        Value partial; //type: uint32
                        Value other; //type: uint32




                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbSummary


                class FrrdbProtectedInterfaceTableSummaries : public Entity
                {
                    public:
                        FrrdbProtectedInterfaceTableSummaries();
                        ~FrrdbProtectedInterfaceTableSummaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FrrdbProtectedInterfaceTableSummary : public Entity
                    {
                        public:
                            FrrdbProtectedInterfaceTableSummary();
                            ~FrrdbProtectedInterfaceTableSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value active; //type: uint32
                            Value ready; //type: uint32
                            Value partial; //type: uint32
                            Value other; //type: uint32




                    }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary> > frrdb_protected_interface_table_summary;


                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries


                class FrrdbTunnelMidpointSummary : public Entity
                {
                    public:
                        FrrdbTunnelMidpointSummary();
                        ~FrrdbTunnelMidpointSummary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value active; //type: uint32
                        Value ready; //type: uint32
                        Value partial; //type: uint32
                        Value other; //type: uint32




                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary


                class FrrdbTunnelMidpoints : public Entity
                {
                    public:
                        FrrdbTunnelMidpoints();
                        ~FrrdbTunnelMidpoints();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FrrdbTunnelMidpoint : public Entity
                    {
                        public:
                            FrrdbTunnelMidpoint();
                            ~FrrdbTunnelMidpoint();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_label; //type: int32
                            Value tunnel_interface_name; //type: string
                            Value input_label; //type: uint32
                            Value outgoing_interface; //type: string
                            Value outgoing_label; //type: uint32
                            Value frr_interface_name; //type: string
                            Value frr_label; //type: uint32
                            Value entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                            Value frr_next_hop_ipv4_address; //type: string
                            Value is_mldp_lsp; //type: boolean
                            Value is_multicast_tunnel; //type: boolean
                            Value multicast_tunnel_legs; //type: uint32


                        class FrrEntryId : public Entity
                        {
                            public:
                                FrrEntryId();
                                ~FrrEntryId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value role; //type: MgmtFibMplsLspRoleEnum


                            class Head : public Entity
                            {
                                public:
                                    Head();
                                    ~Head();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value destination_prefix; //type: string
                                    Value destination_prefix_length; //type: uint32




                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Head


                            class Midpoint : public Entity
                            {
                                public:
                                    Midpoint();
                                    ~Midpoint();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value lspid; //type: uint32
                                    Value tunnel_id; //type: uint32




                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Midpoint


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Head> head;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Midpoint> midpoint;
                                class MgmtFibMplsLspRoleEnum;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId


                        class MulticastLeg : public Entity
                        {
                            public:
                                MulticastLeg();
                                ~MulticastLeg();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tunnel_interface_name; //type: string
                                Value input_label; //type: uint32
                                Value outgoing_interface; //type: string
                                Value outgoing_label; //type: uint32
                                Value frr_interface_name; //type: string
                                Value frr_label; //type: uint32
                                Value entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                                Value frr_next_hop_ipv4_address; //type: string
                                Value is_mldp_lsp; //type: boolean


                            class FrrEntryId : public Entity
                            {
                                public:
                                    FrrEntryId();
                                    ~FrrEntryId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value role; //type: MgmtFibMplsLspRoleEnum


                                class Head : public Entity
                                {
                                    public:
                                        Head();
                                        ~Head();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value destination_prefix; //type: string
                                        Value destination_prefix_length; //type: uint32




                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Head


                                class Midpoint : public Entity
                                {
                                    public:
                                        Midpoint();
                                        ~Midpoint();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value lspid; //type: uint32
                                        Value tunnel_id; //type: uint32




                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Midpoint


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Head> head;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Midpoint> midpoint;
                                    class MgmtFibMplsLspRoleEnum;


                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId> frr_entry_id;
                                class MgmtFibMplsFrrStateEnum;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId> frr_entry_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg> > multicast_leg;
                            class MgmtFibMplsFrrStateEnum;


                    }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint> > frrdb_tunnel_midpoint;


                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints


                class FrrdbTunnelHeads : public Entity
                {
                    public:
                        FrrdbTunnelHeads();
                        ~FrrdbTunnelHeads();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FrrdbTunnelHead : public Entity
                    {
                        public:
                            FrrdbTunnelHead();
                            ~FrrdbTunnelHead();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value tunnel_interface_name; //type: string
                            Value input_label; //type: uint32
                            Value outgoing_interface; //type: string
                            Value outgoing_label; //type: uint32
                            Value frr_interface_name; //type: string
                            Value frr_label; //type: uint32
                            Value entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                            Value frr_next_hop_ipv4_address; //type: string
                            Value is_mldp_lsp; //type: boolean
                            Value is_multicast_tunnel; //type: boolean
                            Value multicast_tunnel_legs; //type: uint32


                        class FrrEntryId : public Entity
                        {
                            public:
                                FrrEntryId();
                                ~FrrEntryId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value role; //type: MgmtFibMplsLspRoleEnum


                            class Head : public Entity
                            {
                                public:
                                    Head();
                                    ~Head();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value destination_prefix; //type: string
                                    Value destination_prefix_length; //type: uint32




                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Head


                            class Midpoint : public Entity
                            {
                                public:
                                    Midpoint();
                                    ~Midpoint();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value lspid; //type: uint32
                                    Value tunnel_id; //type: uint32




                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Midpoint


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Head> head;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Midpoint> midpoint;
                                class MgmtFibMplsLspRoleEnum;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId


                        class MulticastLeg : public Entity
                        {
                            public:
                                MulticastLeg();
                                ~MulticastLeg();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tunnel_interface_name; //type: string
                                Value input_label; //type: uint32
                                Value outgoing_interface; //type: string
                                Value outgoing_label; //type: uint32
                                Value frr_interface_name; //type: string
                                Value frr_label; //type: uint32
                                Value entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                                Value frr_next_hop_ipv4_address; //type: string
                                Value is_mldp_lsp; //type: boolean


                            class FrrEntryId : public Entity
                            {
                                public:
                                    FrrEntryId();
                                    ~FrrEntryId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value role; //type: MgmtFibMplsLspRoleEnum


                                class Head : public Entity
                                {
                                    public:
                                        Head();
                                        ~Head();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value destination_prefix; //type: string
                                        Value destination_prefix_length; //type: uint32




                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Head


                                class Midpoint : public Entity
                                {
                                    public:
                                        Midpoint();
                                        ~Midpoint();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value lspid; //type: uint32
                                        Value tunnel_id; //type: uint32




                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Midpoint


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Head> head;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Midpoint> midpoint;
                                    class MgmtFibMplsLspRoleEnum;


                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId> frr_entry_id;
                                class MgmtFibMplsFrrStateEnum;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId> frr_entry_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg> > multicast_leg;
                            class MgmtFibMplsFrrStateEnum;


                    }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead> > frrdb_tunnel_head;


                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads


                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries> frrdb_backup_interface_summaries;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries> frrdb_protected_interface_table_summaries;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbSummary> frrdb_summary;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary> frrdb_tunnel_head_summary;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads> frrdb_tunnel_heads;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary> frrdb_tunnel_midpoint_summary;
                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints> frrdb_tunnel_midpoints;


            }; // FibMpls::Nodes::Node::FrrDatabase


            class ForwardingSummary : public Entity
            {
                public:
                    ForwardingSummary();
                    ~ForwardingSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ipv4_imposition_entries; //type: uint32
                    Value reserved_label_entries; //type: uint32
                    Value label_switched_entries; //type: uint32
                    Value protected_label_switched_entries; //type: uint32
                    Value deleted_stale_entries; //type: uint32
                    Value te_head_entries; //type: uint32
                    Value te_frr_head_entries; //type: uint32
                    Value te_frr_interface_entries; //type: uint32
                    Value te_frr_next_hop_entries; //type: uint32
                    Value te_mid_points_entries; //type: uint32
                    Value te_frr_mid_points_entries; //type: uint32
                    Value te_internal_entries; //type: uint32
                    Value te_frr_internal_entries; //type: uint32
                    Value total_forwarding_updates; //type: uint32
                    Value total_forwarding_update_messages; //type: uint32
                    Value total_p2mp_forwarding_updates; //type: uint32
                    Value total_p2mp_forwarding_added_or_modify_messages; //type: uint32
                    Value total_p2mp_forwarding_delete_messages; //type: uint32
                    Value total_p2mp_forwarding_drop_messages; //type: uint32
                    Value total_p2mp_iir_forwarding_drop_messages; //type: uint32
                    Value lowest_label; //type: uint32
                    Value highest_label; //type: uint32
                    Value ignore_protect; //type: uint32
                    Value mte_head_entries; //type: uint32
                    Value mte_ll_entries; //type: uint32
                    Value mte_midpoint_entries; //type: uint32
                    Value num_lsp; //type: uint32
                    Value lrpf_entries; //type: uint32




            }; // FibMpls::Nodes::Node::ForwardingSummary


            class FrrLogs : public Entity
            {
                public:
                    FrrLogs();
                    ~FrrLogs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class FrrLog : public Entity
                {
                    public:
                        FrrLog();
                        ~FrrLog();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value event_id; //type: int32
                        Value protected_frr_interface_name; //type: string
                        Value next_hop; //type: uint32
                        Value number_of_rewrites_affected; //type: uint32
                        Value switching_time_nsecs; //type: uint32
                        Value main_processing; //type: uint32
                        Value fast_bundle_member_down_interface; //type: uint32
                        Value frr_event_node_id; //type: string


                    class StartTime : public Entity
                    {
                        public:
                            StartTime();
                            ~StartTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: int32
                            Value nanoseconds; //type: int32




                    }; // FibMpls::Nodes::Node::FrrLogs::FrrLog::StartTime


                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrLogs::FrrLog::StartTime> start_time;


                }; // FibMpls::Nodes::Node::FrrLogs::FrrLog


                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrLogs::FrrLog> > frr_log;


            }; // FibMpls::Nodes::Node::FrrLogs


                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::ForwardingSummary> forwarding_summary;
                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase> frr_database;
                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrLogs> frr_logs;
                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib> label_fib;
                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::Tunnel> tunnel;


        }; // FibMpls::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node> > node;


    }; // FibMpls::Nodes


        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes> nodes;


}; // FibMpls


class FibMplsLlcEntryBagEnum : public Enum
{
    public:
        static const Enum::Value fib_mpls_llc_bag_type_xc;
        static const Enum::Value fib_mpls_llc_bag_type_pfx;
        static const Enum::Value fib_mpls_llc_bag_type_lsm;
        static const Enum::Value fib_mpls_llc_bag_type_max;

};

class MgmtFibMplsFrrStateEnum : public Enum
{
    public:
        static const Enum::Value partial;
        static const Enum::Value active;
        static const Enum::Value ready;
        static const Enum::Value complete;
        static const Enum::Value any;

};

class FibShIpencapHdrEnum : public Enum
{
    public:
        static const Enum::Value fib_sh_ip_encap_none;
        static const Enum::Value fib_sh_ip_encap_ip4;
        static const Enum::Value fib_sh_ip_encap_ip6;
        static const Enum::Value fib_sh_ip_encap_udp;
        static const Enum::Value fib_sh_ip_encap_lisp;

};

class FibProtocolEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;
        static const Enum::Value mpls;

};

class FibNehEnum : public Enum
{
    public:
        static const Enum::Value nh_local;
        static const Enum::Value nh_remote;
        static const Enum::Value nh_special;

};

class FibFrrProtocolShowEnum : public Enum
{
    public:
        static const Enum::Value frr_protocol_ipv4;
        static const Enum::Value frr_protocol_ipv6;
        static const Enum::Value frr_protocol_mpls;

};

class ProtoEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;
        static const Enum::Value mpls;

};

class FibLinkEnum : public Enum
{
    public:
        static const Enum::Value link_ipv4;
        static const Enum::Value link_ipv6;
        static const Enum::Value link_mpls;

};

class FibAdjacencyShowEnum : public Enum
{
    public:
        static const Enum::Value fib_adjacency_normal;
        static const Enum::Value fib_adjacency_null;
        static const Enum::Value fib_adjacency_punt;
        static const Enum::Value fib_adjacency_drop;
        static const Enum::Value fib_adjacency_glean;
        static const Enum::Value fib_adjacency_discard;
        static const Enum::Value fib_adjacency_broadcast;
        static const Enum::Value fib_adjacency_external;
        static const Enum::Value fib_adjacency_lisp;
        static const Enum::Value fib_adjacency_unknown;

};

class FibLoadshareShowEnum : public Enum
{
    public:
        static const Enum::Value fib_load_share_none;
        static const Enum::Value fib_load_share_per_packet;
        static const Enum::Value fib_load_share_dest_sharing;

};

class EosEnum : public Enum
{
    public:
        static const Enum::Value eos0;
        static const Enum::Value eos1;

};

class FibllcEntryEnum : public Enum
{
    public:
        static const Enum::Value xc;
        static const Enum::Value pfx;

};

class FibRpfModeEnum : public Enum
{
    public:
        static const Enum::Value fib_rpf_mode_strict;
        static const Enum::Value fib_rpf_mode_loose;
        static const Enum::Value fib_rpf_mode_unknown;

};

class FibidbOperEnum : public Enum
{
    public:
        static const Enum::Value fibidb_none;
        static const Enum::Value fibidb_create;
        static const Enum::Value fibidb_delete;
        static const Enum::Value fibidb_modify;
        static const Enum::Value fibidb_max;

};

class SsLbaStateEnum : public Enum
{
    public:
        static const Enum::Value l3;
        static const Enum::Value l4;

};

class NextHopEnum : public Enum
{
    public:
        static const Enum::Value tx;
        static const Enum::Value rx;
        static const Enum::Value special;

};

class FibRouteSourceEnum : public Enum
{
    public:
        static const Enum::Value lsd;
        static const Enum::Value rib;
        static const Enum::Value mrib;

};

class MplseosEnum : public Enum
{
    public:
        static const Enum::Value eos0;
        static const Enum::Value eos1;

};

class MgmtFibMplsLspRoleEnum : public Enum
{
    public:
        static const Enum::Value head;
        static const Enum::Value midpoint;

};

class FibNehSpecialEnum : public Enum
{
    public:
        static const Enum::Value nh_not_found;
        static const Enum::Value nh_null0;
        static const Enum::Value nh_punt;
        static const Enum::Value nh_drop;
        static const Enum::Value nh_glean;
        static const Enum::Value nh_receive;
        static const Enum::Value nh_broadcast;
        static const Enum::Value nh_external;
        static const Enum::Value nh_lisp;
        static const Enum::Value nh_lookup;
        static const Enum::Value nh_max_type;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_ */

