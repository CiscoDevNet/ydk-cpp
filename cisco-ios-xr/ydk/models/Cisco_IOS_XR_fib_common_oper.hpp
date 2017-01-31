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


                YLeaf node_name; //type: string

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


                    YLeaf no_route_packets; //type: uint64
                    YLeaf punt_unreachable_packets; //type: uint64
                    YLeaf df_unreachable_packets; //type: uint64
                    YLeaf encapsulation_failure_packets; //type: uint64
                    YLeaf incomplete_adjacency_packets; //type: uint64
                    YLeaf unresolved_prefix_packets; //type: uint64
                    YLeaf unsupported_feature_packets; //type: uint64
                    YLeaf discard_packets; //type: uint64
                    YLeaf checksum_error_packets; //type: uint64
                    YLeaf fragmenation_consumed_packets; //type: uint64
                    YLeaf fragmenation_failure_packets; //type: uint64
                    YLeaf null_packets; //type: uint64
                    YLeaf rpf_check_failure_packets; //type: uint64
                    YLeaf acl_in_rpf_packets; //type: uint64
                    YLeaf rp_destination_drop_packets; //type: uint64
                    YLeaf total_number_of_drop_packets; //type: uint64
                    YLeaf mpls_disabled_interface; //type: uint64
                    YLeaf gre_lookup_failed_drop; //type: uint64
                    YLeaf gre_error_drop; //type: uint64
                    YLeaf lisp_punt_drops; //type: uint64
                    YLeaf lisp_encap_error_drops; //type: uint64
                    YLeaf lisp_decap_error_drops; //type: uint64
                    YLeaf multi_label_drops; //type: uint64



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


                YLeaf node_name; //type: string

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


                        YLeaf protocol_name; //type: FibProtocolEnum

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


                            YLeaf imdr_support; //type: boolean
                            YLeaf slc_support; //type: boolean
                            YLeaf fis_issu_restart; //type: boolean
                            YLeaf imdr_eoc_implicit; //type: boolean
                            YLeaf slc_eoc_implicit; //type: boolean
                            YLeaf eoc_received_imdr_time_stamp; //type: string
                            YLeaf eoc_received_slc_time_stamp; //type: string
                            YLeaf eod_received_im_time_stamp; //type: string
                            YLeaf eod_sent_imdr_time_stamp; //type: string
                            YLeaf eod_sent_slc_time_stamp; //type: string
                            YLeaf fis_issu_error_ts; //type: uint64

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


                                YLeaf protocol_name; //type: string
                                YLeaf aib_eod_time_stamp; //type: string
                                YLeaf rsi_eod_valid; //type: boolean
                                YLeaf rsi_eod_time_stamp; //type: string
                                YLeaf lsd_eod_valid; //type: boolean
                                YLeaf lsd_eod_time_stamp; //type: string
                                YLeaf lmrib_eod_valid; //type: boolean
                                YLeaf lmrib_eod_time_stamp; //type: string
                                YLeaf rib_info_valid; //type: boolean
                                YLeaf bcdl_tables; //type: uint32
                                YLeaf converged_tables; //type: uint32
                                YLeaf rib_tables_converged_time_stamp; //type: string
                                YLeaf protocol_eod_valid; //type: boolean
                                YLeaf protocol_eod_time_stamp; //type: string



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


                                YLeaf protocol_name; //type: FibProtocolEnum
                                YLeaf vrf_name; //type: string
                                YLeaf table_id; //type: int32
                                YLeaf prefix; //type: string
                                YLeaf ss_tbl_id; //type: uint32
                                YLeaf ss_tbl_id_ptr; //type: uint32
                                YLeaf ss_vrf_id; //type: uint32
                                YLeaf ss_vr_id; //type: uint32
                                YLeaf load_balancing; //type: SsLbaStateEnum
                                YLeaf forwarding_elements; //type: uint32
                                YLeaf routes; //type: uint32
                                YLeaf prefix_in_place_modifications; //type: uint32
                                YLeaf stale_prefix_deletes; //type: uint32
                                YLeaf load_sharing_elements; //type: uint32
                                YLeaf load_sharing_references; //type: uint64
                                YLeaf total_load_share_element_bytes; //type: uint32
                                YLeaf leaves_used_bytes; //type: uint32
                                YLeaf reresolve_entries; //type: uint32
                                YLeaf old_unresolve_entries; //type: uint32
                                YLeaf new_unresolve_entries; //type: uint32
                                YLeaf unresolve_entries; //type: uint32
                                YLeaf cef_route_drops; //type: uint32
                                YLeaf cef_version_mismatch_route_drops; //type: uint64
                                YLeaf delete_cache_num_entries; //type: uint32
                                YLeaf existing_leaves_revisions; //type: uint32
                                YLeaf fib_default_prefix; //type: uint32
                                YLeaf fib_default_prefix_mask_length; //type: uint32
                                YLeaf next_hops; //type: uint32
                                YLeaf incomplete_next_hops; //type: uint32
                                YLeaf resolution_timer; //type: uint32
                                YLeaf slow_process_timer; //type: uint32
                                YLeaf max_resolution_timer; //type: uint32
                                YLeaf imposition_prefixes; //type: uint32
                                YLeaf extended_prefixes; //type: uint32
                                YLeaf cefl_bl_recycled_routes; //type: uint32
                                YLeaf ldi_backwalks; //type: uint32
                                YLeaf ss_prot_route_count; //type: uint32
                                YLeaf lisp_eid_prefixes; //type: uint32
                                YLeaf lisp_eid_valid_prefixes; //type: uint32
                                YLeaf lisp_rloc_objects; //type: uint32
                                YLeaf ss_vxlan_ltep_ifh; //type: string
                                YLeaf ss_drop_pl_count; //type: uint32

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


                                    YLeaf total_load_sharing_element_bytes; //type: uint32
                                    YLeaf total_load_sharing_element_references; //type: uint64
                                    YLeaf total_path_list_elements; //type: uint32
                                    YLeaf recursive_path_list_elements; //type: uint32
                                    YLeaf platform_shared_path_list_elements; //type: uint32
                                    YLeaf retry_path_list_elements; //type: uint32
                                    YLeaf total_load_info_elements; //type: uint32
                                    YLeaf recursive_load_info_elements; //type: uint32
                                    YLeaf platform_shared_load_info_elements; //type: uint32



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


                                    YLeaf total_load_sharing_element_bytes; //type: uint32
                                    YLeaf total_load_sharing_element_references; //type: uint64
                                    YLeaf total_path_list_elements; //type: uint32
                                    YLeaf recursive_path_list_elements; //type: uint32
                                    YLeaf platform_shared_path_list_elements; //type: uint32
                                    YLeaf retry_path_list_elements; //type: uint32
                                    YLeaf total_load_info_elements; //type: uint32
                                    YLeaf recursive_load_info_elements; //type: uint32
                                    YLeaf platform_shared_load_info_elements; //type: uint32



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


                                    YLeaf total_load_sharing_element_bytes; //type: uint32
                                    YLeaf total_load_sharing_element_references; //type: uint64
                                    YLeaf total_path_list_elements; //type: uint32
                                    YLeaf recursive_path_list_elements; //type: uint32
                                    YLeaf platform_shared_path_list_elements; //type: uint32
                                    YLeaf retry_path_list_elements; //type: uint32
                                    YLeaf total_load_info_elements; //type: uint32
                                    YLeaf recursive_load_info_elements; //type: uint32
                                    YLeaf platform_shared_load_info_elements; //type: uint32



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


                                    YLeaf total_load_sharing_element_bytes; //type: uint32
                                    YLeaf total_load_sharing_element_references; //type: uint64
                                    YLeaf total_path_list_elements; //type: uint32
                                    YLeaf recursive_path_list_elements; //type: uint32
                                    YLeaf platform_shared_path_list_elements; //type: uint32
                                    YLeaf retry_path_list_elements; //type: uint32
                                    YLeaf total_load_info_elements; //type: uint32
                                    YLeaf recursive_load_info_elements; //type: uint32
                                    YLeaf platform_shared_load_info_elements; //type: uint32



                            }; // Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::LabelSharedLoadSharingElement


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Summaries::Summary::SharedLoadSharingElement> shared_load_sharing_element;


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


                            YLeaf sesa_num_client; //type: uint32

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


                                YLeaf sep_num_ecd_pathlist; //type: uint32
                                YLeaf sep_num_ecd_pl_unresolved; //type: uint32
                                YLeafList sep_num_ecd_pl_per_interest; //type: list of  uint32



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


                                    YLeaf frr_interface_name; //type: string

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


                                            YLeaf log_index; //type: int32
                                            YLeaf frr_protocol_type; //type: FibFrrProtocolShowEnum
                                            YLeaf frr_interface_name; //type: string
                                            YLeaf frr_prefix; //type: string
                                            YLeaf frr_switching_time; //type: uint32
                                            YLeaf bundle_member_interface_name; //type: string

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


                                                YLeaf seconds; //type: int32
                                                YLeaf nano_seconds; //type: int32



                                        }; // Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp> frr_timestamp;


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


                                YLeaf vrf_name; //type: string

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


                                        YLeaf prefix; //type: string
                                        YLeaf prefix_length; //type: uint8
                                        YLeaf protocol_type_fib_entry; //type: uint32
                                        YLeaf platform_hardware; //type: string
                                        YLeaf number_of_referances_to_path_list; //type: uint32
                                        YLeaf path_list_flags; //type: uint32
                                        YLeaf path_list_source; //type: uint32
                                        YLeaf number_of_referances_to_ldi; //type: uint32
                                        YLeaf ldi_flags; //type: uint32
                                        YLeaf flags_external_ldi; //type: uint32
                                        YLeaf exact_route_result; //type: boolean
                                        YLeaf prefix_is_static_or_connected; //type: boolean
                                        YLeaf packet_should_recieve; //type: boolean
                                        YLeaf prefix_connected; //type: boolean
                                        YLeaf prefix_for_adjancency; //type: boolean
                                        YLeaf prefix_for_pic_next_hop; //type: boolean
                                        YLeaf purgable_after_purge_interval; //type: boolean
                                        YLeaf broadcast_recive_flag; //type: boolean
                                        YLeaf broadcast_forward_flag; //type: boolean
                                        YLeaf zero_by_zero_route_as_default; //type: boolean
                                        YLeaf external_switch_triggered; //type: boolean
                                        YLeaf route_attribute_flag; //type: boolean
                                        YLeaf dummy_real_zero_route; //type: boolean
                                        YLeaf ldi_lw_flag; //type: uint32
                                        YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
                                        YLeaf type_of_ldi_lw_ldi; //type: uint32
                                        YLeaf lspa_flags; //type: uint32
                                        YLeaf version_of_route; //type: uint64
                                        YLeaf fib_route_download_priority; //type: uint32
                                        YLeaf time_of_last_update_in_msec; //type: uint64
                                        YLeaf l2_subscriber_route; //type: boolean
                                        YLeaf l2_subscriber_xconnect_id; //type: uint32
                                        YLeaf l2_subscriber_ip_protocol; //type: uint32
                                        YLeaf l2tpv3_cookie_length_bits; //type: uint32
                                        YLeaf route_for_external_reach_linecard_flag; //type: boolean

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


                                            YLeaf fib_entry_version; //type: uint32
                                            YLeaf per_prefix_accounting; //type: uint8
                                            YLeaf load_sharing_type; //type: FibLoadshareShowEnum
                                            YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
                                            YLeaf fib_protocol_type; //type: uint32
                                            YLeaf afi_fib_protocol_type; //type: uint32
                                            YLeaf aib_l3_address; //type: string
                                            YLeaf adjacency_address_length; //type: uint32
                                            YLeaf adjacency_interface; //type: uint32
                                            YLeaf fib_special_nh_information_type; //type: uint32
                                            YLeaf fib_entry_adjacency_address; //type: string
                                            YLeaf fib_entry_adjacency_interface; //type: uint32
                                            YLeaf packets_through_fib_entry; //type: uint64
                                            YLeaf bytes_through_fib_entry; //type: uint64
                                            YLeaf detailed_prefix_length; //type: uint32
                                            YLeaf prefix_protocol; //type: uint32
                                            YLeaf precedence_forpackets; //type: uint8
                                            YLeaf traffic_index_for_packets; //type: uint8
                                            YLeaf switch_compontent_id; //type: uint32
                                            YLeaf fast_adjacency_flag; //type: boolean
                                            YLeaf illegal_fast_adjacency_flag; //type: boolean
                                            YLeaf remote_adjacency_flag; //type: boolean
                                            YLeaf bgp_attribute_id; //type: uint32
                                            YLeaf bgp_local_attribute_id; //type: uint32
                                            YLeaf bgp_attribute_origin_as; //type: uint32
                                            YLeaf bgp_attribute_next_hop_as; //type: uint32
                                            YLeaf path_string; //type: string
                                            YLeaf extcom_string; //type: string
                                            YLeaf com_string; //type: string
                                            YLeaf extended_community; //type: uint32
                                            YLeaf qos_group; //type: uint32
                                            YLeaf mpls_fec; //type: uint32
                                            YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
                                            YLeaf flow_tag; //type: uint8
                                            YLeaf forward_class; //type: uint8
                                            YLeaf pl_time_of_last_update_in_msec; //type: uint64
                                            YLeaf ldi_time_of_last_update_in_msec; //type: uint64
                                            YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
                                            YLeaf pl_time_stamp_type; //type: uint32

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


                                                YLeaf packets_through_load_information; //type: uint64
                                                YLeaf bytes_through_load_information; //type: uint64
                                                YLeaf total_packets_through_load_information; //type: uint64
                                                YLeaf total_bytes_through_load_information; //type: uint64
                                                YLeaf prefix_of_owner; //type: uint32
                                                YLeaf mask_length_of_owner; //type: uint32
                                                YLeaf load_information_reference_count; //type: uint16
                                                YLeaf per_dest_load_sharing_flag; //type: boolean
                                                YLeaf load_information_owner_deleted_flag; //type: boolean
                                                YLeaf loadinfo_sanity_flag; //type: boolean
                                                YLeaf is_owner; //type: boolean

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


                                                    YLeaf level_ofldis; //type: uint8
                                                    YLeaf number_of_ldis; //type: uint8
                                                    YLeaf maximum_index_arrays; //type: uint32
                                                    YLeaf path_indices; //type: string
                                                    YLeaf path_ldi_numbers; //type: string
                                                    YLeaf maximum_slots; //type: uint32
                                                    YLeaf normalized_weights; //type: string
                                                    YLeaf tunnel_class_value; //type: string
                                                    YLeaf is_pbts_info_valid; //type: boolean
                                                    YLeaf pbts_class_offset; //type: string
                                                    YLeaf pbts_class_num_paths; //type: string
                                                    YLeaf pbts_fallback_mapped_class; //type: string
                                                    YLeaf round_robin_disable; //type: boolean
                                                    YLeaf ldi_next_hop_buckets; //type: uint8
                                                    YLeaf platform_hardware_information; //type: string
                                                    YLeafList sanity_flag; //type: list of  boolean
                                                    YLeafList interface_handle; //type: list of  string
                                                    YLeafList weights_of_path; //type: list of  uint32

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


                                                        YLeaf address; //type: string



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


                                                        YLeaf entry; //type: boolean



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


                                                        YLeaf entry; //type: boolean



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


                                                        YLeaf entry; //type: boolean



                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;


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


                                                YLeaf hardware_information; //type: string
                                                YLeaf brief_interface_handle; //type: string
                                                YLeaf brief_next_hop_prefix; //type: string
                                                YLeaf via_label_to_recurse; //type: uint32
                                                YLeaf brief_pnode_address; //type: string
                                                YLeaf brief_qnode_address; //type: string
                                                YLeaf resolved_path; //type: boolean
                                                YLeaf recursive_path; //type: boolean
                                                YLeaf packets_received_path; //type: boolean
                                                YLeaf attached_path; //type: boolean
                                                YLeaf backup_path; //type: boolean
                                                YLeaf best_external_path; //type: boolean
                                                YLeaf protect_ignore; //type: boolean
                                                YLeaf path_dlb; //type: boolean
                                                YLeaf path_flags; //type: uint16
                                                YLeaf path_info_flags; //type: uint16
                                                YLeaf path_index; //type: uint8
                                                YLeaf backup_index; //type: uint8
                                                YLeaf next_hop_index; //type: uint32
                                                YLeaf parent_interface_handle; //type: string
                                                YLeaf recursionvia_len; //type: uint8

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


                                                    YLeaf ip_address_to_recurse; //type: string
                                                    YLeaf label_to_recurse; //type: uint32
                                                    YLeaf detail_next_hop_prefix; //type: string
                                                    YLeaf next_hop_mask_length; //type: uint8
                                                    YLeaf interface_associated_path; //type: string
                                                    YLeaf next_hop_interface; //type: string
                                                    YLeaf next_hop_vrf; //type: string
                                                    YLeaf tunnle_endpoint_id; //type: uint32
                                                    YLeaf lisprlocid; //type: uint32
                                                    YLeaf number_of_dependencies_this_path; //type: uint32
                                                    YLeaf robin_reset_value; //type: uint8
                                                    YLeaf recurse_prefix_object; //type: boolean
                                                    YLeaf next_prefix_recursion; //type: string
                                                    YLeaf next_prefix_length; //type: uint8
                                                    YLeaf recurse_prefix_object2; //type: boolean
                                                    YLeaf next_prefix_recursion2; //type: string
                                                    YLeaf next_prefix_length2; //type: uint8
                                                    YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
                                                    YLeaf current_path_flag; //type: boolean
                                                    YLeaf recursive_path_information; //type: boolean
                                                    YLeaf external_adjacency; //type: boolean
                                                    YLeaf fib_path_nh_information_type; //type: FibNehEnum
                                                    YLeaf fib_path_nh_information_type_special; //type: FibNehSpecialEnum
                                                    YLeaf weight_of_path; //type: uint32
                                                    YLeaf tunnel_class; //type: uint8
                                                    YLeaf tunnel_is_forward_class; //type: boolean

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


                                                        YLeaf ip_encap_hdr_count; //type: uint8
                                                        YLeaf ip_encap_locks; //type: uint32
                                                        YLeaf ip_encap_transport_tbl; //type: uint32
                                                        YLeaf ipe_transport_vrf_name; //type: string
                                                        YLeaf ip_encap_transport_af; //type: uint32
                                                        YLeaf ip_encap_payload_af; //type: uint32
                                                        YLeaf ip_encap_payload_mtu; //type: uint16
                                                        YLeaf ip_encap_parent; //type: uint32
                                                        YLeaf ip_encap_parent_type; //type: uint32

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


                                                            YLeaf ip_encap_hdr_type; //type: FibShIpencapHdrEnum
                                                            YLeaf ip_encap_hdrp; //type: string
                                                            YLeaf ip_encap_hdr_dyn; //type: uint32



                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;


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


                                                    YLeaf local_lable; //type: uint32
                                                    YLeaf recursive_fwd_chain; //type: boolean
                                                    YLeaf recursive_out_label_valid; //type: boolean
                                                    YLeaf recursive_out_lable; //type: uint32
                                                    YLeaf number_of_igp_paths; //type: uint32
                                                    YLeaf remote_backup; //type: boolean

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


                                                        YLeaf number_of_labels; //type: uint32
                                                        YLeaf out_interface; //type: string
                                                        YLeaf nh_address; //type: string
                                                        YLeafList lstack; //type: list of  uint32



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


                                    YLeaf prefix; //type: string
                                    YLeaf ss_tbl_id; //type: uint32
                                    YLeaf ss_tbl_id_ptr; //type: uint32
                                    YLeaf ss_vrf_id; //type: uint32
                                    YLeaf ss_vr_id; //type: uint32
                                    YLeaf load_balancing; //type: SsLbaStateEnum
                                    YLeaf forwarding_elements; //type: uint32
                                    YLeaf routes; //type: uint32
                                    YLeaf prefix_in_place_modifications; //type: uint32
                                    YLeaf stale_prefix_deletes; //type: uint32
                                    YLeaf load_sharing_elements; //type: uint32
                                    YLeaf load_sharing_references; //type: uint64
                                    YLeaf total_load_share_element_bytes; //type: uint32
                                    YLeaf leaves_used_bytes; //type: uint32
                                    YLeaf reresolve_entries; //type: uint32
                                    YLeaf old_unresolve_entries; //type: uint32
                                    YLeaf new_unresolve_entries; //type: uint32
                                    YLeaf unresolve_entries; //type: uint32
                                    YLeaf cef_route_drops; //type: uint32
                                    YLeaf cef_version_mismatch_route_drops; //type: uint64
                                    YLeaf delete_cache_num_entries; //type: uint32
                                    YLeaf existing_leaves_revisions; //type: uint32
                                    YLeaf fib_default_prefix; //type: uint32
                                    YLeaf fib_default_prefix_mask_length; //type: uint32
                                    YLeaf next_hops; //type: uint32
                                    YLeaf incomplete_next_hops; //type: uint32
                                    YLeaf resolution_timer; //type: uint32
                                    YLeaf slow_process_timer; //type: uint32
                                    YLeaf max_resolution_timer; //type: uint32
                                    YLeaf imposition_prefixes; //type: uint32
                                    YLeaf extended_prefixes; //type: uint32
                                    YLeaf cefl_bl_recycled_routes; //type: uint32
                                    YLeaf ldi_backwalks; //type: uint32
                                    YLeaf ss_prot_route_count; //type: uint32
                                    YLeaf lisp_eid_prefixes; //type: uint32
                                    YLeaf lisp_eid_valid_prefixes; //type: uint32
                                    YLeaf lisp_rloc_objects; //type: uint32
                                    YLeaf ss_vxlan_ltep_ifh; //type: string
                                    YLeaf ss_drop_pl_count; //type: uint32

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


                                        YLeaf total_load_sharing_element_bytes; //type: uint32
                                        YLeaf total_load_sharing_element_references; //type: uint64
                                        YLeaf total_path_list_elements; //type: uint32
                                        YLeaf recursive_path_list_elements; //type: uint32
                                        YLeaf platform_shared_path_list_elements; //type: uint32
                                        YLeaf retry_path_list_elements; //type: uint32
                                        YLeaf total_load_info_elements; //type: uint32
                                        YLeaf recursive_load_info_elements; //type: uint32
                                        YLeaf platform_shared_load_info_elements; //type: uint32



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


                                        YLeaf total_load_sharing_element_bytes; //type: uint32
                                        YLeaf total_load_sharing_element_references; //type: uint64
                                        YLeaf total_path_list_elements; //type: uint32
                                        YLeaf recursive_path_list_elements; //type: uint32
                                        YLeaf platform_shared_path_list_elements; //type: uint32
                                        YLeaf retry_path_list_elements; //type: uint32
                                        YLeaf total_load_info_elements; //type: uint32
                                        YLeaf recursive_load_info_elements; //type: uint32
                                        YLeaf platform_shared_load_info_elements; //type: uint32



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


                                        YLeaf total_load_sharing_element_bytes; //type: uint32
                                        YLeaf total_load_sharing_element_references; //type: uint64
                                        YLeaf total_path_list_elements; //type: uint32
                                        YLeaf recursive_path_list_elements; //type: uint32
                                        YLeaf platform_shared_path_list_elements; //type: uint32
                                        YLeaf retry_path_list_elements; //type: uint32
                                        YLeaf total_load_info_elements; //type: uint32
                                        YLeaf recursive_load_info_elements; //type: uint32
                                        YLeaf platform_shared_load_info_elements; //type: uint32



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


                                        YLeaf total_load_sharing_element_bytes; //type: uint32
                                        YLeaf total_load_sharing_element_references; //type: uint64
                                        YLeaf total_path_list_elements; //type: uint32
                                        YLeaf recursive_path_list_elements; //type: uint32
                                        YLeaf platform_shared_path_list_elements; //type: uint32
                                        YLeaf retry_path_list_elements; //type: uint32
                                        YLeaf total_load_info_elements; //type: uint32
                                        YLeaf recursive_load_info_elements; //type: uint32
                                        YLeaf platform_shared_load_info_elements; //type: uint32



                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement> shared_load_sharing_element;


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


                                        YLeaf link_type; //type: FibLinkEnum

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
                                                YLeaf per_interface; //type: string
                                                YLeaf fib_interface_type; //type: uint32
                                                YLeaf fib_id_pointer; //type: uint32
                                                YLeaf fib_id_flags; //type: uint32
                                                YLeaf fib_id_extension_pointer; //type: uint32
                                                YLeaf fib_id_extension_flags; //type: uint32
                                                YLeaf number_of_dependent_next_hop_information; //type: uint32
                                                YLeaf vrf_local_cef_information_pointer; //type: uint32
                                                YLeaf reference_count; //type: uint16
                                                YLeaf last_modified_time; //type: uint32
                                                YLeaf last_operation; //type: FibidbOperEnum
                                                YLeaf protocol_enabled; //type: boolean
                                                YLeaf referance_count_for_protocol; //type: uint32
                                                YLeaf number_of_input_packets; //type: uint64
                                                YLeaf number_of_input_bytes; //type: uint64
                                                YLeaf number_of_output_packets; //type: uint64
                                                YLeaf number_of_output_bytes; //type: uint64
                                                YLeaf interface_up_flag; //type: boolean
                                                YLeaf per_packet_load_balancing_flag; //type: boolean
                                                YLeaf p2p_interface_flag; //type: boolean
                                                YLeaf loopback_interface_flag; //type: boolean
                                                YLeaf null_interface_flag; //type: boolean
                                                YLeaf tunnel_interface_flag; //type: boolean
                                                YLeaf gre_tunnel_interface_flag; //type: boolean
                                                YLeaf punt_packets_from_fib_switching_flag; //type: boolean
                                                YLeaf drop_packets_while_fib_switching_flag; //type: boolean
                                                YLeaf punt_packets_from_linecard_flag; //type: boolean
                                                YLeaf primary_ipv4_address; //type: string
                                                YLeaf primary_ipv6_address; //type: string

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


                                                    YLeaf interface_mtu; //type: uint16
                                                    YLeaf forwarding_flag; //type: boolean
                                                    YLeaf rpf_configured_flag; //type: boolean
                                                    YLeaf rpf_mode; //type: FibRpfModeEnum
                                                    YLeaf default_route_with_rpf; //type: boolean
                                                    YLeaf self_ping_with_rpf; //type: boolean
                                                    YLeaf bgp_pa_input_configured_flag; //type: boolean
                                                    YLeaf source_bgp_pa_input_configured_flag; //type: boolean
                                                    YLeaf destination_bgp_pa_input_configured_flag; //type: boolean
                                                    YLeaf bgp_pa_output_configured_flag; //type: boolean
                                                    YLeaf source_bgp_pa_output_configured_flag; //type: boolean
                                                    YLeaf destination_bgp_pa_output_configured_flag; //type: boolean
                                                    YLeaf icmp_flag; //type: uint32
                                                    YLeaf multi_label_drop_flag; //type: boolean



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


                                                        YLeaf evt_class_name; //type: string

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


                                                            YLeaf evt_timestamp; //type: string
                                                            YLeaf evt_name; //type: string
                                                            YLeaf evt_type; //type: uint8
                                                            YLeaf evt_many; //type: boolean
                                                            YLeaf evt_sticky; //type: boolean
                                                            YLeafList evt_data; //type: list of  uint32



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


                                                        YLeaf evt_class_name; //type: string

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


                                                            YLeaf evt_timestamp; //type: string
                                                            YLeaf evt_name; //type: string
                                                            YLeaf evt_type; //type: uint8
                                                            YLeaf evt_many; //type: boolean
                                                            YLeaf evt_sticky; //type: boolean
                                                            YLeafList evt_data; //type: list of  uint32



                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry> > evt_entry;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist


                                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist> fib_idb_hist;
                                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist> fib_srte_head_hist;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation> detail_fib_int_information;
                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal> si_internal;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface> > interface;


                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces> interfaces;


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


                                        YLeaf prefix; //type: string
                                        YLeaf prefix_length; //type: uint8
                                        YLeaf protocol_type_fib_entry; //type: uint32
                                        YLeaf platform_hardware; //type: string
                                        YLeaf number_of_referances_to_path_list; //type: uint32
                                        YLeaf path_list_flags; //type: uint32
                                        YLeaf path_list_source; //type: uint32
                                        YLeaf number_of_referances_to_ldi; //type: uint32
                                        YLeaf ldi_flags; //type: uint32
                                        YLeaf flags_external_ldi; //type: uint32
                                        YLeaf exact_route_result; //type: boolean
                                        YLeaf prefix_is_static_or_connected; //type: boolean
                                        YLeaf packet_should_recieve; //type: boolean
                                        YLeaf prefix_connected; //type: boolean
                                        YLeaf prefix_for_adjancency; //type: boolean
                                        YLeaf prefix_for_pic_next_hop; //type: boolean
                                        YLeaf purgable_after_purge_interval; //type: boolean
                                        YLeaf broadcast_recive_flag; //type: boolean
                                        YLeaf broadcast_forward_flag; //type: boolean
                                        YLeaf zero_by_zero_route_as_default; //type: boolean
                                        YLeaf external_switch_triggered; //type: boolean
                                        YLeaf route_attribute_flag; //type: boolean
                                        YLeaf dummy_real_zero_route; //type: boolean
                                        YLeaf ldi_lw_flag; //type: uint32
                                        YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
                                        YLeaf type_of_ldi_lw_ldi; //type: uint32
                                        YLeaf lspa_flags; //type: uint32
                                        YLeaf version_of_route; //type: uint64
                                        YLeaf fib_route_download_priority; //type: uint32
                                        YLeaf time_of_last_update_in_msec; //type: uint64
                                        YLeaf l2_subscriber_route; //type: boolean
                                        YLeaf l2_subscriber_xconnect_id; //type: uint32
                                        YLeaf l2_subscriber_ip_protocol; //type: uint32
                                        YLeaf l2tpv3_cookie_length_bits; //type: uint32
                                        YLeaf route_for_external_reach_linecard_flag; //type: boolean

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


                                            YLeaf fib_entry_version; //type: uint32
                                            YLeaf per_prefix_accounting; //type: uint8
                                            YLeaf load_sharing_type; //type: FibLoadshareShowEnum
                                            YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShowEnum
                                            YLeaf fib_protocol_type; //type: uint32
                                            YLeaf afi_fib_protocol_type; //type: uint32
                                            YLeaf aib_l3_address; //type: string
                                            YLeaf adjacency_address_length; //type: uint32
                                            YLeaf adjacency_interface; //type: uint32
                                            YLeaf fib_special_nh_information_type; //type: uint32
                                            YLeaf fib_entry_adjacency_address; //type: string
                                            YLeaf fib_entry_adjacency_interface; //type: uint32
                                            YLeaf packets_through_fib_entry; //type: uint64
                                            YLeaf bytes_through_fib_entry; //type: uint64
                                            YLeaf detailed_prefix_length; //type: uint32
                                            YLeaf prefix_protocol; //type: uint32
                                            YLeaf precedence_forpackets; //type: uint8
                                            YLeaf traffic_index_for_packets; //type: uint8
                                            YLeaf switch_compontent_id; //type: uint32
                                            YLeaf fast_adjacency_flag; //type: boolean
                                            YLeaf illegal_fast_adjacency_flag; //type: boolean
                                            YLeaf remote_adjacency_flag; //type: boolean
                                            YLeaf bgp_attribute_id; //type: uint32
                                            YLeaf bgp_local_attribute_id; //type: uint32
                                            YLeaf bgp_attribute_origin_as; //type: uint32
                                            YLeaf bgp_attribute_next_hop_as; //type: uint32
                                            YLeaf path_string; //type: string
                                            YLeaf extcom_string; //type: string
                                            YLeaf com_string; //type: string
                                            YLeaf extended_community; //type: uint32
                                            YLeaf qos_group; //type: uint32
                                            YLeaf mpls_fec; //type: uint32
                                            YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
                                            YLeaf flow_tag; //type: uint8
                                            YLeaf forward_class; //type: uint8
                                            YLeaf pl_time_of_last_update_in_msec; //type: uint64
                                            YLeaf ldi_time_of_last_update_in_msec; //type: uint64
                                            YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
                                            YLeaf pl_time_stamp_type; //type: uint32

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


                                                YLeaf packets_through_load_information; //type: uint64
                                                YLeaf bytes_through_load_information; //type: uint64
                                                YLeaf total_packets_through_load_information; //type: uint64
                                                YLeaf total_bytes_through_load_information; //type: uint64
                                                YLeaf prefix_of_owner; //type: uint32
                                                YLeaf mask_length_of_owner; //type: uint32
                                                YLeaf load_information_reference_count; //type: uint16
                                                YLeaf per_dest_load_sharing_flag; //type: boolean
                                                YLeaf load_information_owner_deleted_flag; //type: boolean
                                                YLeaf loadinfo_sanity_flag; //type: boolean
                                                YLeaf is_owner; //type: boolean

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


                                                    YLeaf level_ofldis; //type: uint8
                                                    YLeaf number_of_ldis; //type: uint8
                                                    YLeaf maximum_index_arrays; //type: uint32
                                                    YLeaf path_indices; //type: string
                                                    YLeaf path_ldi_numbers; //type: string
                                                    YLeaf maximum_slots; //type: uint32
                                                    YLeaf normalized_weights; //type: string
                                                    YLeaf tunnel_class_value; //type: string
                                                    YLeaf is_pbts_info_valid; //type: boolean
                                                    YLeaf pbts_class_offset; //type: string
                                                    YLeaf pbts_class_num_paths; //type: string
                                                    YLeaf pbts_fallback_mapped_class; //type: string
                                                    YLeaf round_robin_disable; //type: boolean
                                                    YLeaf ldi_next_hop_buckets; //type: uint8
                                                    YLeaf platform_hardware_information; //type: string
                                                    YLeafList sanity_flag; //type: list of  boolean
                                                    YLeafList interface_handle; //type: list of  string
                                                    YLeafList weights_of_path; //type: list of  uint32

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


                                                        YLeaf address; //type: string



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


                                                        YLeaf entry; //type: boolean



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


                                                        YLeaf entry; //type: boolean



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


                                                        YLeaf entry; //type: boolean



                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;


                                            }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


                                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;


                                        }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation


                                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation> loadshare_information;


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


                                                YLeaf hardware_information; //type: string
                                                YLeaf brief_interface_handle; //type: string
                                                YLeaf brief_next_hop_prefix; //type: string
                                                YLeaf via_label_to_recurse; //type: uint32
                                                YLeaf brief_pnode_address; //type: string
                                                YLeaf brief_qnode_address; //type: string
                                                YLeaf resolved_path; //type: boolean
                                                YLeaf recursive_path; //type: boolean
                                                YLeaf packets_received_path; //type: boolean
                                                YLeaf attached_path; //type: boolean
                                                YLeaf backup_path; //type: boolean
                                                YLeaf best_external_path; //type: boolean
                                                YLeaf protect_ignore; //type: boolean
                                                YLeaf path_dlb; //type: boolean
                                                YLeaf path_flags; //type: uint16
                                                YLeaf path_info_flags; //type: uint16
                                                YLeaf path_index; //type: uint8
                                                YLeaf backup_index; //type: uint8
                                                YLeaf next_hop_index; //type: uint32
                                                YLeaf parent_interface_handle; //type: string
                                                YLeaf recursionvia_len; //type: uint8

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


                                                    YLeaf ip_address_to_recurse; //type: string
                                                    YLeaf label_to_recurse; //type: uint32
                                                    YLeaf detail_next_hop_prefix; //type: string
                                                    YLeaf next_hop_mask_length; //type: uint8
                                                    YLeaf interface_associated_path; //type: string
                                                    YLeaf next_hop_interface; //type: string
                                                    YLeaf next_hop_vrf; //type: string
                                                    YLeaf tunnle_endpoint_id; //type: uint32
                                                    YLeaf lisprlocid; //type: uint32
                                                    YLeaf number_of_dependencies_this_path; //type: uint32
                                                    YLeaf robin_reset_value; //type: uint8
                                                    YLeaf recurse_prefix_object; //type: boolean
                                                    YLeaf next_prefix_recursion; //type: string
                                                    YLeaf next_prefix_length; //type: uint8
                                                    YLeaf recurse_prefix_object2; //type: boolean
                                                    YLeaf next_prefix_recursion2; //type: string
                                                    YLeaf next_prefix_length2; //type: uint8
                                                    YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShowEnum
                                                    YLeaf current_path_flag; //type: boolean
                                                    YLeaf recursive_path_information; //type: boolean
                                                    YLeaf external_adjacency; //type: boolean
                                                    YLeaf fib_path_nh_information_type; //type: FibNehEnum
                                                    YLeaf fib_path_nh_information_type_special; //type: FibNehSpecialEnum
                                                    YLeaf weight_of_path; //type: uint32
                                                    YLeaf tunnel_class; //type: uint8
                                                    YLeaf tunnel_is_forward_class; //type: boolean

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


                                                        YLeaf ip_encap_hdr_count; //type: uint8
                                                        YLeaf ip_encap_locks; //type: uint32
                                                        YLeaf ip_encap_transport_tbl; //type: uint32
                                                        YLeaf ipe_transport_vrf_name; //type: string
                                                        YLeaf ip_encap_transport_af; //type: uint32
                                                        YLeaf ip_encap_payload_af; //type: uint32
                                                        YLeaf ip_encap_payload_mtu; //type: uint16
                                                        YLeaf ip_encap_parent; //type: uint32
                                                        YLeaf ip_encap_parent_type; //type: uint32

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


                                                            YLeaf ip_encap_hdr_type; //type: FibShIpencapHdrEnum
                                                            YLeaf ip_encap_hdrp; //type: string
                                                            YLeaf ip_encap_hdr_dyn; //type: uint32



                                                    }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;


                                                }; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;


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


                                                    YLeaf local_lable; //type: uint32
                                                    YLeaf recursive_fwd_chain; //type: boolean
                                                    YLeaf recursive_out_label_valid; //type: boolean
                                                    YLeaf recursive_out_lable; //type: uint32
                                                    YLeaf number_of_igp_paths; //type: uint32
                                                    YLeaf remote_backup; //type: boolean

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


                                                        YLeaf number_of_labels; //type: uint32
                                                        YLeaf out_interface; //type: string
                                                        YLeaf nh_address; //type: string
                                                        YLeafList lstack; //type: list of  uint32



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


                                YLeaf ecd_ver; //type: int32
                                YLeaf id; //type: int32
                                YLeaf ses_client_name; //type: string
                                YLeaf ses_feci_fib_proto; //type: uint32
                                YLeaf ses_num_regs; //type: uint32
                                YLeaf ses_num_pending; //type: uint32
                                YLeaf ses_client_pulsed_time; //type: uint64
                                YLeaf ses_comp_id; //type: uint32
                                YLeaf ses_ecd_version; //type: uint32

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


                                    YLeaf sep_num_ecd_pathlist; //type: uint32
                                    YLeaf sep_num_ecd_pl_unresolved; //type: uint32
                                    YLeafList sep_num_ecd_pl_per_interest; //type: list of  uint32



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


                            YLeaf mi_pfi_ifh_upd; //type: uint64
                            YLeaf mi_pfi_ifh_del; //type: uint64
                            YLeaf mi_pfi_ifh_stale; //type: uint64
                            YLeaf mi_tot_plat_upd_time; //type: uint64
                            YLeaf mi_tot_gtrie_time; //type: uint64
                            YLeaf mi_tot_dnld_time; //type: uint64
                            YLeaf mi_clock_time; //type: uint64
                            YLeaf mi_cpu_time; //type: uint64
                            YLeaf mi_shm_reset_ts; //type: uint64
                            YLeaf mi_idb_recycle_count; //type: uint32
                            YLeaf mi_idb_recycle_cleanup_count; //type: uint32
                            YLeaf mi_num_mgmt_list; //type: uint32
                            YLeaf mi_num_virtual_ll_addresses_added; //type: uint32
                            YLeaf mi_num_virtual_ll_addresses_deleted; //type: uint32
                            YLeaf mi_num_virtual_ll_addresses_dropped; //type: uint32
                            YLeaf mi_num_virtual_ll_addresses_cached; //type: uint32
                            YLeaf mi_cpuless_init; //type: boolean
                            YLeaf mi_cpuless_count; //type: uint32
                            YLeaf mi_prefer_aib_routes_over_rib_oper; //type: boolean
                            YLeaf mi_prefer_aib_routes_over_rib_cfg; //type: boolean
                            YLeafList mi_idb_ext_cleanup_failed_count; //type: list of  uint32
                            YLeafList mi_lrpf_stats_fail; //type: list of  uint32
                            YLeafList mi_lrpf_stats_act; //type: list of  uint32
                            YLeafList mi_lrpf_num; //type: list of  uint32
                            YLeafList mi_idb_lsec_enabled_num; //type: list of  uint32
                            YLeafList mi_num_lisp_eid; //type: list of  uint32
                            YLeafList mi_num_lisp_valid_eid; //type: list of  uint32
                            YLeafList mi_cpuless_node; //type: list of  uint32

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


                                YLeaf imdr_support; //type: boolean
                                YLeaf slc_support; //type: boolean
                                YLeaf fis_issu_restart; //type: boolean
                                YLeaf imdr_eoc_implicit; //type: boolean
                                YLeaf slc_eoc_implicit; //type: boolean
                                YLeaf eoc_received_imdr_time_stamp; //type: string
                                YLeaf eoc_received_slc_time_stamp; //type: string
                                YLeaf eod_received_im_time_stamp; //type: string
                                YLeaf eod_sent_imdr_time_stamp; //type: string
                                YLeaf eod_sent_slc_time_stamp; //type: string
                                YLeaf fis_issu_error_ts; //type: uint64

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


                                    YLeaf protocol_name; //type: string
                                    YLeaf aib_eod_time_stamp; //type: string
                                    YLeaf rsi_eod_valid; //type: boolean
                                    YLeaf rsi_eod_time_stamp; //type: string
                                    YLeaf lsd_eod_valid; //type: boolean
                                    YLeaf lsd_eod_time_stamp; //type: string
                                    YLeaf lmrib_eod_valid; //type: boolean
                                    YLeaf lmrib_eod_time_stamp; //type: string
                                    YLeaf rib_info_valid; //type: boolean
                                    YLeaf bcdl_tables; //type: uint32
                                    YLeaf converged_tables; //type: uint32
                                    YLeaf rib_tables_converged_time_stamp; //type: string
                                    YLeaf protocol_eod_valid; //type: boolean
                                    YLeaf protocol_eod_time_stamp; //type: string



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


                                YLeaf fpc_num_l3_lbl_levels; //type: uint8
                                YLeaf fpc_num_l3_lbl_paths; //type: uint8
                                YLeaf fpc_num_l3_lbl_rec_paths; //type: uint8
                                YLeaf fpc_num_l3_ucmp_paths; //type: uint8
                                YLeaf fpc_num_fwding_stages; //type: uint8
                                YLeaf fpc_local_label_split; //type: uint32
                                YLeaf fpc_stats_support; //type: boolean
                                YLeaf fpc_platf_ready_cb_wait; //type: boolean
                                YLeaf fpc_num_paths_per_pbts_class; //type: uint8
                                YLeaf fpc_platf_v4_upd_disable; //type: boolean
                                YLeaf fpc_platf_v6_upd_disable; //type: boolean
                                YLeaf fpc_lba_tuples_default; //type: uint32
                                YLeaf fpc_mraps_support; //type: boolean
                                YLeaf fpc_pbts_defclass_support; //type: boolean
                                YLeaf fpc_loadinfo_filter_support; //type: boolean
                                YLeaf fpc_nhid; //type: boolean
                                YLeaf fpc_platf_temp_back_walk_reqd; //type: boolean
                                YLeaf fpc_link_mpls_nhinfo_in_ipv6_thread_support; //type: boolean
                                YLeaf fpc_exclude_deag_bkup; //type: boolean
                                YLeaf fpc_dlb_support; //type: boolean
                                YLeaf fpc_prefix_filter_support; //type: uint8
                                YLeaf fpc_slowpath_ingress_inject_reqd; //type: boolean

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


                                    YLeaf entry; //type: boolean



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


                                    YLeaf entry; //type: boolean



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


                                    YLeaf entry; //type: boolean



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


                                    YLeaf entry; //type: boolean



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


                                YLeaf fpd_gbltbl_entries; //type: uint64
                                YLeaf fpd_gbltbl_rej_entries; //type: uint64
                                YLeaf fpd_vrftbl_entries; //type: uint64
                                YLeaf fpd_vrftbl_rej_entries; //type: uint64
                                YLeaf fpd_num_tbls; //type: uint32
                                YLeaf fpd_bcdl_msgs; //type: uint64
                                YLeaf fpd_route_upd; //type: uint64
                                YLeaf fpd_route_del; //type: uint64
                                YLeaf fpd_route_rcv; //type: uint64
                                YLeaf fpd_route_drops; //type: uint64
                                YLeaf fpd_lbl_recycled; //type: uint64
                                YLeaf fpd_version_mismatch_drops; //type: uint64
                                YLeaf fpd_adj_upd; //type: uint64
                                YLeaf fpd_adj_del; //type: uint64
                                YLeaf fpd_adj_upd_tx; //type: uint64
                                YLeaf fpd_adj_upd_tx_nh_found; //type: uint64
                                YLeaf fpd_adj_upd_tx_retry_created; //type: uint64
                                YLeaf fpd_adj_tx_retry_nh_found; //type: uint64
                                YLeaf fpd_adj_tx_retry_obj_reinit; //type: uint64
                                YLeaf fpd_adj_drops; //type: uint64
                                YLeaf fpd_adj_msg; //type: uint64
                                YLeaf fpd_te_rcv; //type: uint64
                                YLeaf fpd_te_version_mismatch_drops; //type: uint64
                                YLeaf fpd_num_retry_touts; //type: uint64
                                YLeaf fpd_ldi_num_fixedup; //type: uint64
                                YLeaf fpd_ldi_num_correct_fixup; //type: uint64
                                YLeaf fpd_pl_num_queued_fixedup; //type: uint64
                                YLeaf fpd_pl_num_correct_fixup; //type: uint64
                                YLeaf fpd_pl_retry_add_exist; //type: uint64
                                YLeaf fpd_pl_inline_res_q; //type: uint64
                                YLeaf fpd_pl_with_backup_create_count; //type: uint64
                                YLeaf fpd_pl_with_backup_del_count; //type: uint64
                                YLeaf fpd_pl_backup_enable_count; //type: uint64
                                YLeaf fpd_pl_backup_disable_count; //type: uint64
                                YLeaf fpd_pl_fast_nfn_count; //type: uint64
                                YLeaf fpd_ldi_backup_activate_count; //type: uint64
                                YLeaf fpd_ldi_last_backup_activate_time; //type: uint64
                                YLeaf fpd_ldi_max_backup_activate_time; //type: uint64
                                YLeaf fpd_ldi_min_backup_activate_time; //type: uint64
                                YLeaf fpd_ldi_total_backup_activate_time; //type: uint64
                                YLeaf fpd_ldi_avg_backup_activate_time; //type: uint64
                                YLeaf fpd_recursion_constraint_count; //type: uint64
                                YLeaf fpd_ldi_num_del_refcnt; //type: uint64
                                YLeaf fpd_retryq_size; //type: uint32
                                YLeaf fpd_num_allocs; //type: uint64
                                YLeaf fpd_num_frees; //type: uint64
                                YLeafList fpd_gbltbl_src_entry; //type: list of  uint64
                                YLeafList fpd_vrftbl_src_entry; //type: list of  uint64
                                YLeafList fpd_num_retry; //type: list of  uint64

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


                                    YLeaf fpus_num_success; //type: uint64
                                    YLeaf fpus_num_failure; //type: uint64
                                    YLeaf fpus_upd_total_time; //type: uint64

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


                                        YLeaf fos_tot_updates; //type: uint64
                                        YLeaf fos_tot_upd_time; //type: uint64

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


                                            YLeaf foas_tot_updates; //type: uint64
                                            YLeaf foas_tot_upd_time; //type: uint64
                                            YLeaf foas_tot_updates_zero; //type: uint64
                                            YLeaf foas_num_success; //type: uint64
                                            YLeaf foas_num_failure; //type: uint64
                                            YLeaf foas_max_time; //type: uint64
                                            YLeaf foas_max_tstamp; //type: uint64



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


                                    YLeaf fgt_num_success; //type: uint64
                                    YLeaf fgt_num_failure; //type: uint64
                                    YLeaf fgt_upd_total_time; //type: uint64

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


                                        YLeaf fgft_fn; //type: string
                                        YLeaf fgft_tot_updates; //type: uint64
                                        YLeaf fgft_tot_updates_zero; //type: uint64
                                        YLeaf fgft_tot_upd_time; //type: uint64
                                        YLeaf fgft_max_time; //type: uint64
                                        YLeaf fgft_max_tstamp; //type: uint64



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


                                YLeafList fpp_cntr; //type: list of  uint32



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


                                YLeaf tableid; //type: uint32
                                YLeaf prfx; //type: string
                                YLeaf prfx_len; //type: uint16
                                YLeaf prfx_proto; //type: uint16
                                YLeaf msec_time; //type: uint64



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


                                YLeaf mi_num_intf_frr; //type: uint32
                                YLeaf mi_num_parent_intf_frr; //type: uint32
                                YLeaf mi_num_pfi_intf_down; //type: uint32
                                YLeaf mi_num_bfd_down; //type: uint32
                                YLeaf mi_num_prot_frr_objects; //type: uint32
                                YLeaf mi_num_bkup_frr_objects; //type: uint32
                                YLeaf mi_num_tunid_allocs; //type: uint32
                                YLeaf mi_num_tunid_alloc_failures; //type: uint32
                                YLeaf mi_num_tunid_frees; //type: uint32
                                YLeaf mi_num_tunid_free_failures; //type: uint32
                                YLeaf mi_num_frr_reset_queue_adds; //type: uint32
                                YLeaf mi_num_frr_reset_queue_remove; //type: uint32
                                YLeaf mi_num_frr_reset; //type: uint32
                                YLeaf mi_num_frr_proto_events; //type: uint32
                                YLeaf mi_num_frr_logs; //type: uint32



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


                                    YLeaf label; //type: uint32
                                    YLeaf source; //type: FibRouteSourceEnum
                                    YLeaf ll_ctype; //type: FibllcEntryEnum
                                    YLeaf pfx_tbl_id; //type: int32
                                    YLeaf prefix; //type: string
                                    YLeaf prefix_len; //type: int32
                                    YLeaf local_label; //type: uint32
                                    YLeaf source_xr; //type: uint32
                                    YLeaf update_ts; //type: uint64
                                    YLeaf retry_ts; //type: uint64
                                    YLeaf num_retries; //type: uint32

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


                                        YLeaf type; //type: FibMplsLlcEntryBagEnum

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


                                            YLeaf pfx; //type: string
                                            YLeaf tbl_id; //type: uint32



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


                                            YLeaf nh; //type: string
                                            YLeaf mcast_id; //type: uint32



                                    }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm


                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
                                        std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;


                                }; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;


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


                YLeaf node_name; //type: string

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


                    YLeaf ipv4_imposition_entries; //type: uint32
                    YLeaf reserved_label_entries; //type: uint32
                    YLeaf label_switched_entries; //type: uint32
                    YLeaf deleted_stale_entries; //type: uint32
                    YLeaf te_head_entries; //type: uint32
                    YLeaf te_frr_head_entries; //type: uint32
                    YLeaf te_frr_interface_entries; //type: uint32
                    YLeaf te_frr_next_hop_entries; //type: uint32
                    YLeaf te_mid_points_entries; //type: uint32
                    YLeaf te_frr_mid_points_entries; //type: uint32
                    YLeaf te_internal_entries; //type: uint32
                    YLeaf te_frr_internal_entries; //type: uint32
                    YLeaf total_forwarding_updates; //type: uint32
                    YLeaf total_forwarding_update_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_updates; //type: uint32
                    YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
                    YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
                    YLeaf lowest_label; //type: uint32
                    YLeaf highest_label; //type: uint32
                    YLeaf ignore_protect; //type: uint32
                    YLeaf mte_head_entries; //type: uint32
                    YLeaf mte_ll_entries; //type: uint32
                    YLeaf mte_midpoint_entries; //type: uint32
                    YLeaf global_dropped_packets; //type: uint64
                    YLeaf global_fragmented_packets; //type: uint64
                    YLeaf global_failed_lookups; //type: uint64
                    YLeaf lrpf_entries; //type: uint32



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


                            YLeaf label_value; //type: int32
                            YLeaf eos; //type: MplseosEnum
                            YLeaf leaf_local_label; //type: uint32
                            YLeaf eos_bit; //type: uint32
                            YLeaf hardware_information; //type: string
                            YLeaf leaf_referance_count; //type: uint32
                            YLeaf leaf_flags; //type: uint32
                            YLeaf path_list_referance_count; //type: uint32
                            YLeaf path_list_flags; //type: uint32
                            YLeaf ldi_referance_count; //type: uint32
                            YLeaf ldi_flags; //type: uint32
                            YLeaf ldi_type; //type: uint32
                            YLeaf ldi_pointer; //type: uint32
                            YLeaf lw_ldi_type; //type: uint32
                            YLeaf lw_ldi_pointer; //type: uint32
                            YLeaf lw_ldi_refernace_count; //type: uint32
                            YLeaf lw_shared_ldi_pointer; //type: uint32
                            YLeaf lspa_flags; //type: uint32
                            YLeaf afi_table_id; //type: uint32
                            YLeaf multicast_label; //type: boolean
                            YLeaf leaf_time_in_milli_seconds; //type: uint64

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


                                YLeaf ldi_hardware_information; //type: string



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


                                YLeaf multicast_mol_base_flags; //type: uint32
                                YLeaf multicast_mol_flags; //type: uint16
                                YLeaf multicast_mol_referance_count; //type: uint16
                                YLeaf multicast_tunnel_interface_handler; //type: string
                                YLeaf multicast_tunnel_id; //type: uint32
                                YLeaf multicast_tunnel_next_hop_information; //type: uint32
                                YLeaf multicast_tunnel_lspvif; //type: uint32
                                YLeaf multicast_mpls_output_paths; //type: uint16
                                YLeaf multicast_mpls_protocol_output_paths; //type: uint16
                                YLeaf multicast_mpls_local_output_paths; //type: uint16
                                YLeaf multicast_rpf_id; //type: uint32
                                YLeaf multicast_encap_id; //type: uint32
                                YLeaf multicast_platform_data_length; //type: uint8
                                YLeaf multicast_platform_data; //type: string



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


                                YLeaf label_information_type; //type: uint32
                                YLeaf local_label; //type: uint32
                                YLeaf outgoing_label; //type: uint32
                                YLeaf mpls_adjacency_flags; //type: uint32
                                YLeaf tunnel_id_present; //type: boolean
                                YLeaf outgoing_interface; //type: string
                                YLeaf outgoing_physical_interface; //type: string
                                YLeaf tunnel_interface; //type: string
                                YLeaf label_information_path_index; //type: uint32
                                YLeaf label_information_next_hop_type; //type: NextHopEnum
                                YLeaf label_information_next_hop_protocol; //type: ProtoEnum
                                YLeaf tx_bytes; //type: uint64
                                YLeaf tx_packets; //type: uint64
                                YLeaf outgoing_interface_string; //type: string
                                YLeaf outgoing_label_string; //type: string
                                YLeaf prefix_or_id; //type: string
                                YLeaf label_information_next_hop_string; //type: string
                                YLeaf label_information_route_version; //type: uint64
                                YLeaf label_information_time_in_milli_seconds; //type: uint64

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


                                    YLeaf l3_mtu; //type: uint32
                                    YLeaf total_encapsulation_size; //type: uint32
                                    YLeaf mac_size; //type: uint32
                                    YLeaf transmit_number_of_packets_switched; //type: uint64
                                    YLeaf transmit_number_of_bytes_switched; //type: uint64
                                    YLeaf status; //type: int32
                                    YLeaf next_hop_interface; //type: string
                                    YLeaf next_hop_protocol; //type: ProtoEnum
                                    YLeaf next_hop_string; //type: string
                                    YLeafList label_stack; //type: list of  uint32



                            }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;


                        }; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;


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


                            YLeaf label_value; //type: int32
                            YLeaf eos; //type: MplseosEnum
                            YLeaf leaf_local_label; //type: uint32
                            YLeaf eos_bit; //type: uint32
                            YLeaf hardware_information; //type: string
                            YLeaf leaf_referance_count; //type: uint32
                            YLeaf leaf_flags; //type: uint32
                            YLeaf path_list_referance_count; //type: uint32
                            YLeaf path_list_flags; //type: uint32
                            YLeaf ldi_referance_count; //type: uint32
                            YLeaf ldi_flags; //type: uint32
                            YLeaf ldi_type; //type: uint32
                            YLeaf ldi_pointer; //type: uint32
                            YLeaf lw_ldi_type; //type: uint32
                            YLeaf lw_ldi_pointer; //type: uint32
                            YLeaf lw_ldi_refernace_count; //type: uint32
                            YLeaf lw_shared_ldi_pointer; //type: uint32
                            YLeaf lspa_flags; //type: uint32
                            YLeaf afi_table_id; //type: uint32
                            YLeaf multicast_label; //type: boolean
                            YLeaf leaf_time_in_milli_seconds; //type: uint64

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


                                YLeaf ldi_hardware_information; //type: string



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


                                YLeaf multicast_mol_base_flags; //type: uint32
                                YLeaf multicast_mol_flags; //type: uint16
                                YLeaf multicast_mol_referance_count; //type: uint16
                                YLeaf multicast_tunnel_interface_handler; //type: string
                                YLeaf multicast_tunnel_id; //type: uint32
                                YLeaf multicast_tunnel_next_hop_information; //type: uint32
                                YLeaf multicast_tunnel_lspvif; //type: uint32
                                YLeaf multicast_mpls_output_paths; //type: uint16
                                YLeaf multicast_mpls_protocol_output_paths; //type: uint16
                                YLeaf multicast_mpls_local_output_paths; //type: uint16
                                YLeaf multicast_rpf_id; //type: uint32
                                YLeaf multicast_encap_id; //type: uint32
                                YLeaf multicast_platform_data_length; //type: uint8
                                YLeaf multicast_platform_data; //type: string



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


                                YLeaf label_information_type; //type: uint32
                                YLeaf local_label; //type: uint32
                                YLeaf outgoing_label; //type: uint32
                                YLeaf mpls_adjacency_flags; //type: uint32
                                YLeaf tunnel_id_present; //type: boolean
                                YLeaf outgoing_interface; //type: string
                                YLeaf outgoing_physical_interface; //type: string
                                YLeaf tunnel_interface; //type: string
                                YLeaf label_information_path_index; //type: uint32
                                YLeaf label_information_next_hop_type; //type: NextHopEnum
                                YLeaf label_information_next_hop_protocol; //type: ProtoEnum
                                YLeaf tx_bytes; //type: uint64
                                YLeaf tx_packets; //type: uint64
                                YLeaf outgoing_interface_string; //type: string
                                YLeaf outgoing_label_string; //type: string
                                YLeaf prefix_or_id; //type: string
                                YLeaf label_information_next_hop_string; //type: string
                                YLeaf label_information_route_version; //type: uint64
                                YLeaf label_information_time_in_milli_seconds; //type: uint64

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


                                    YLeaf l3_mtu; //type: uint32
                                    YLeaf total_encapsulation_size; //type: uint32
                                    YLeaf mac_size; //type: uint32
                                    YLeaf transmit_number_of_packets_switched; //type: uint64
                                    YLeaf transmit_number_of_bytes_switched; //type: uint64
                                    YLeaf status; //type: int32
                                    YLeaf next_hop_interface; //type: string
                                    YLeaf next_hop_protocol; //type: ProtoEnum
                                    YLeaf next_hop_string; //type: string
                                    YLeafList label_stack; //type: list of  uint32



                            }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;


                        }; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;


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


                                YLeaf interface_name; //type: string
                                YLeaf rpf_enabled; //type: boolean
                                YLeaf rpf_supported; //type: boolean
                                YLeaf mld_enabled; //type: boolean
                                YLeaf mld_supported; //type: boolean
                                YLeaf rpf_drops; //type: uint64
                                YLeaf multi_label_drops; //type: uint64
                                YLeaf rpfifh; //type: string



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


                            YLeaf rpf_drops; //type: uint64
                            YLeaf multi_label_drops; //type: uint64



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


                YLeaf node_name; //type: string

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


                            YLeaf local_label; //type: int32
                            YLeaf eos; //type: EosEnum
                            YLeaf leaf_local_label; //type: uint32
                            YLeaf eos_bit; //type: uint32
                            YLeaf hardware_information; //type: string
                            YLeaf leaf_reference_count; //type: uint32
                            YLeaf leaf_ptr; //type: uint32
                            YLeaf leaf_flags; //type: uint32
                            YLeaf path_list_reference_count; //type: uint32
                            YLeaf path_list_ldi_mask; //type: uint32
                            YLeaf path_list_flags; //type: uint32
                            YLeaf path_list_pointer; //type: uint32
                            YLeaf ldi_reference_count; //type: uint32
                            YLeaf ldi_flags; //type: uint32
                            YLeaf ldi_type; //type: uint32
                            YLeaf ldi_pointer; //type: uint32
                            YLeaf lw_ldi_type; //type: uint32
                            YLeaf lw_ldi_pointer; //type: uint32
                            YLeaf lw_ldi_reference_count; //type: uint32
                            YLeaf lw_shared_ldi_pointer; //type: uint32
                            YLeaf lspa_flags; //type: uint32
                            YLeaf afi_table_id; //type: uint32
                            YLeaf multicast_label; //type: boolean
                            YLeaf leaf_time_in_milli_seconds; //type: uint64
                            YLeaf pwhe_interface_list_id; //type: uint16
                            YLeaf pwhe_interface_list_ptr; //type: uint32
                            YLeaf pl_time_of_last_update_in_msec; //type: uint64
                            YLeaf ldi_time_of_last_update_in_msec; //type: uint64
                            YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
                            YLeaf lspa_time_of_last_update_in_msec; //type: uint64
                            YLeaf pl_time_stamp_type; //type: uint32

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


                                    YLeaf label_information_type; //type: uint32
                                    YLeaf local_label; //type: uint32
                                    YLeaf outgoing_label; //type: uint32
                                    YLeaf frr_nh_ptr; //type: uint32
                                    YLeaf mpls_adjacency_flags; //type: uint32
                                    YLeaf path_flags; //type: uint32
                                    YLeaf path_index; //type: uint8
                                    YLeaf backup_path_index; //type: uint8
                                    YLeaf nhid; //type: uint32
                                    YLeaf weight; //type: uint32
                                    YLeaf app_id; //type: uint16
                                    YLeaf tunnel_id_present; //type: boolean
                                    YLeaf outgoing_interface; //type: uint32
                                    YLeaf outgoing_physical_interface; //type: uint32
                                    YLeaf tunnel_interface_name; //type: string
                                    YLeaf label_information_path_index; //type: uint32
                                    YLeaf label_information_encap_id; //type: uint64
                                    YLeaf label_information_next_hop_type; //type: uint32
                                    YLeaf label_information_next_hop_table_id; //type: uint32
                                    YLeaf label_information_next_hop_protocol; //type: uint32
                                    YLeaf sli_from_ldi; //type: boolean
                                    YLeaf label_information_next_hop_string; //type: string
                                    YLeaf label_information_route_version; //type: uint64
                                    YLeaf label_information_time_in_milli_seconds; //type: uint64
                                    YLeaf label_bridge_domain_id; //type: uint32
                                    YLeaf label_xid; //type: uint32
                                    YLeaf label_pw_xid; //type: uint32
                                    YLeaf label_shg_id; //type: uint32
                                    YLeaf pwhev_ctype; //type: uint32
                                    YLeaf pwhecw_enabled; //type: boolean
                                    YLeaf pwhe_interface; //type: string
                                    YLeaf pq_label; //type: uint32
                                    YLeaf pq_flags; //type: uint32
                                    YLeaf li_pointer; //type: uint32
                                    YLeaf li_reference_count; //type: uint32
                                    YLeaf is_srte; //type: boolean
                                    YLeaf is_pure_backup; //type: boolean
                                    YLeaf is_frr_active; //type: boolean

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


                                        YLeaf l3_mtu; //type: uint32
                                        YLeaf total_encapsulation_size; //type: uint32
                                        YLeaf mac_size; //type: uint32
                                        YLeaf transmit_number_of_packets_switched; //type: uint64
                                        YLeaf transmit_number_of_bytes_switched; //type: uint64
                                        YLeaf transmit_number_of_tm_packets_switched; //type: uint64
                                        YLeaf transmit_number_of_tm_bytes_switched; //type: uint64
                                        YLeaf status; //type: int32
                                        YLeaf next_hop_interface_name; //type: string
                                        YLeaf next_hop_protocol; //type: uint32
                                        YLeaf next_hop_string; //type: string
                                        YLeaf nh_id; //type: uint32
                                        YLeaf version_priority_valid; //type: boolean
                                        YLeaf route_download_version; //type: uint64
                                        YLeaf route_download_priority; //type: uint32
                                        YLeafList label_stack; //type: list of  uint32



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


                                        YLeaf my_node_id; //type: uint32
                                        YLeaf flags; //type: uint32
                                        YLeaf via_label; //type: uint32
                                        YLeaf mcast_id; //type: uint32
                                        YLeaf pri_tos_mask; //type: uint32
                                        YLeaf bk_tos_mask; //type: uint32
                                        YLeaf pd_ts_ms; //type: uint64
                                        YLeaf primary_is_local; //type: boolean
                                        YLeaf backup_is_local; //type: boolean
                                        YLeafList if_node_id; //type: list of  uint32
                                        YLeafList bkup_if_node_id; //type: list of  uint32
                                        YLeafList if_hdl; //type: list of  uint32
                                        YLeafList bkup_if_hdl; //type: list of  uint32



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


                                YLeaf ldi_hardware_information; //type: string



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


                                YLeaf multicast_mol_base_flags; //type: uint32
                                YLeaf multicast_mol_flags; //type: uint16
                                YLeaf multicast_mol_reference_count; //type: uint16
                                YLeaf multicast_tunnel_interface_name; //type: string
                                YLeaf multicast_tunnel_id; //type: uint32
                                YLeaf multicast_tunnel_next_hop_information; //type: uint32
                                YLeaf multicast_tunnel_lspvif; //type: uint32
                                YLeaf multicast_mpls_output_paths; //type: uint16
                                YLeaf multicast_mpls_protocol_output_paths; //type: uint16
                                YLeaf multicast_mpls_local_output_paths; //type: uint16
                                YLeaf multicast_rpf_id; //type: uint32
                                YLeaf multicast_encap_id; //type: uint32
                                YLeaf dependent_tunnel_local_label; //type: uint32
                                YLeaf dependent_tunnel_ifh; //type: uint32
                                YLeaf multicast_v4_table_id; //type: uint32
                                YLeaf multicast_v6_table_id; //type: uint32
                                YLeaf label_bridge_domain_id; //type: uint32
                                YLeaf label_xid; //type: uint32
                                YLeaf label_shg_id; //type: uint32
                                YLeaf multicast_platform_data_length; //type: uint8
                                YLeaf multicast_platform_data; //type: string



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


                                YLeaf rpf_flags; //type: uint32
                                YLeaf rpf_pl_flags; //type: uint32
                                YLeaf rpf_create_ts; //type: uint64
                                YLeaf rpf_mod_ts; //type: uint64
                                YLeaf rpf_pd_ts; //type: uint64
                                YLeaf rpf_hardware; //type: string
                                YLeafList rpf_if; //type: list of  string

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


                                    YLeaf rpf_tbl_id; //type: uint32
                                    YLeaf rpf_v4_addr; //type: string



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


                                    YLeaf rpf_tbl_id; //type: uint32
                                    YLeaf rpf_v6_addr; //type: string



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


                                    YLeaf rpf_path_index; //type: uint32
                                    YLeaf rpf_ifh; //type: uint32



                            }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfIfMap


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfIfMap> > rpf_if_map;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV4Nbr> > rpf_v4_nbr;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf::RpfV6Nbr> > rpf_v6_nbr;


                        }; // FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LabelInformation> label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::MulticastInformation> multicast_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::Forwardings::Forwarding::Rpf> rpf;


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


                            YLeaf local_label; //type: int32
                            YLeaf eos; //type: EosEnum
                            YLeaf leaf_local_label; //type: uint32
                            YLeaf eos_bit; //type: uint32
                            YLeaf hardware_information; //type: string
                            YLeaf leaf_reference_count; //type: uint32
                            YLeaf leaf_ptr; //type: uint32
                            YLeaf leaf_flags; //type: uint32
                            YLeaf path_list_reference_count; //type: uint32
                            YLeaf path_list_ldi_mask; //type: uint32
                            YLeaf path_list_flags; //type: uint32
                            YLeaf path_list_pointer; //type: uint32
                            YLeaf ldi_reference_count; //type: uint32
                            YLeaf ldi_flags; //type: uint32
                            YLeaf ldi_type; //type: uint32
                            YLeaf ldi_pointer; //type: uint32
                            YLeaf lw_ldi_type; //type: uint32
                            YLeaf lw_ldi_pointer; //type: uint32
                            YLeaf lw_ldi_reference_count; //type: uint32
                            YLeaf lw_shared_ldi_pointer; //type: uint32
                            YLeaf lspa_flags; //type: uint32
                            YLeaf afi_table_id; //type: uint32
                            YLeaf multicast_label; //type: boolean
                            YLeaf leaf_time_in_milli_seconds; //type: uint64
                            YLeaf pwhe_interface_list_id; //type: uint16
                            YLeaf pwhe_interface_list_ptr; //type: uint32
                            YLeaf pl_time_of_last_update_in_msec; //type: uint64
                            YLeaf ldi_time_of_last_update_in_msec; //type: uint64
                            YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
                            YLeaf lspa_time_of_last_update_in_msec; //type: uint64
                            YLeaf pl_time_stamp_type; //type: uint32

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


                                    YLeaf label_information_type; //type: uint32
                                    YLeaf local_label; //type: uint32
                                    YLeaf outgoing_label; //type: uint32
                                    YLeaf frr_nh_ptr; //type: uint32
                                    YLeaf mpls_adjacency_flags; //type: uint32
                                    YLeaf path_flags; //type: uint32
                                    YLeaf path_index; //type: uint8
                                    YLeaf backup_path_index; //type: uint8
                                    YLeaf nhid; //type: uint32
                                    YLeaf weight; //type: uint32
                                    YLeaf app_id; //type: uint16
                                    YLeaf tunnel_id_present; //type: boolean
                                    YLeaf outgoing_interface; //type: uint32
                                    YLeaf outgoing_physical_interface; //type: uint32
                                    YLeaf tunnel_interface_name; //type: string
                                    YLeaf label_information_path_index; //type: uint32
                                    YLeaf label_information_encap_id; //type: uint64
                                    YLeaf label_information_next_hop_type; //type: uint32
                                    YLeaf label_information_next_hop_table_id; //type: uint32
                                    YLeaf label_information_next_hop_protocol; //type: uint32
                                    YLeaf sli_from_ldi; //type: boolean
                                    YLeaf label_information_next_hop_string; //type: string
                                    YLeaf label_information_route_version; //type: uint64
                                    YLeaf label_information_time_in_milli_seconds; //type: uint64
                                    YLeaf label_bridge_domain_id; //type: uint32
                                    YLeaf label_xid; //type: uint32
                                    YLeaf label_pw_xid; //type: uint32
                                    YLeaf label_shg_id; //type: uint32
                                    YLeaf pwhev_ctype; //type: uint32
                                    YLeaf pwhecw_enabled; //type: boolean
                                    YLeaf pwhe_interface; //type: string
                                    YLeaf pq_label; //type: uint32
                                    YLeaf pq_flags; //type: uint32
                                    YLeaf li_pointer; //type: uint32
                                    YLeaf li_reference_count; //type: uint32
                                    YLeaf is_srte; //type: boolean
                                    YLeaf is_pure_backup; //type: boolean
                                    YLeaf is_frr_active; //type: boolean

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


                                        YLeaf l3_mtu; //type: uint32
                                        YLeaf total_encapsulation_size; //type: uint32
                                        YLeaf mac_size; //type: uint32
                                        YLeaf transmit_number_of_packets_switched; //type: uint64
                                        YLeaf transmit_number_of_bytes_switched; //type: uint64
                                        YLeaf transmit_number_of_tm_packets_switched; //type: uint64
                                        YLeaf transmit_number_of_tm_bytes_switched; //type: uint64
                                        YLeaf status; //type: int32
                                        YLeaf next_hop_interface_name; //type: string
                                        YLeaf next_hop_protocol; //type: uint32
                                        YLeaf next_hop_string; //type: string
                                        YLeaf nh_id; //type: uint32
                                        YLeaf version_priority_valid; //type: boolean
                                        YLeaf route_download_version; //type: uint64
                                        YLeaf route_download_priority; //type: uint32
                                        YLeafList label_stack; //type: list of  uint32



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


                                        YLeaf my_node_id; //type: uint32
                                        YLeaf flags; //type: uint32
                                        YLeaf via_label; //type: uint32
                                        YLeaf mcast_id; //type: uint32
                                        YLeaf pri_tos_mask; //type: uint32
                                        YLeaf bk_tos_mask; //type: uint32
                                        YLeaf pd_ts_ms; //type: uint64
                                        YLeaf primary_is_local; //type: boolean
                                        YLeaf backup_is_local; //type: boolean
                                        YLeafList if_node_id; //type: list of  uint32
                                        YLeafList bkup_if_node_id; //type: list of  uint32
                                        YLeafList if_hdl; //type: list of  uint32
                                        YLeafList bkup_if_hdl; //type: list of  uint32



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


                                YLeaf ldi_hardware_information; //type: string



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


                                YLeaf multicast_mol_base_flags; //type: uint32
                                YLeaf multicast_mol_flags; //type: uint16
                                YLeaf multicast_mol_reference_count; //type: uint16
                                YLeaf multicast_tunnel_interface_name; //type: string
                                YLeaf multicast_tunnel_id; //type: uint32
                                YLeaf multicast_tunnel_next_hop_information; //type: uint32
                                YLeaf multicast_tunnel_lspvif; //type: uint32
                                YLeaf multicast_mpls_output_paths; //type: uint16
                                YLeaf multicast_mpls_protocol_output_paths; //type: uint16
                                YLeaf multicast_mpls_local_output_paths; //type: uint16
                                YLeaf multicast_rpf_id; //type: uint32
                                YLeaf multicast_encap_id; //type: uint32
                                YLeaf dependent_tunnel_local_label; //type: uint32
                                YLeaf dependent_tunnel_ifh; //type: uint32
                                YLeaf multicast_v4_table_id; //type: uint32
                                YLeaf multicast_v6_table_id; //type: uint32
                                YLeaf label_bridge_domain_id; //type: uint32
                                YLeaf label_xid; //type: uint32
                                YLeaf label_shg_id; //type: uint32
                                YLeaf multicast_platform_data_length; //type: uint8
                                YLeaf multicast_platform_data; //type: string



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


                                YLeaf rpf_flags; //type: uint32
                                YLeaf rpf_pl_flags; //type: uint32
                                YLeaf rpf_create_ts; //type: uint64
                                YLeaf rpf_mod_ts; //type: uint64
                                YLeaf rpf_pd_ts; //type: uint64
                                YLeaf rpf_hardware; //type: string
                                YLeafList rpf_if; //type: list of  string

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


                                    YLeaf rpf_tbl_id; //type: uint32
                                    YLeaf rpf_v4_addr; //type: string



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


                                    YLeaf rpf_tbl_id; //type: uint32
                                    YLeaf rpf_v6_addr; //type: string



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


                                    YLeaf rpf_path_index; //type: uint32
                                    YLeaf rpf_ifh; //type: uint32



                            }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfIfMap


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfIfMap> > rpf_if_map;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV4Nbr> > rpf_v4_nbr;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf::RpfV6Nbr> > rpf_v6_nbr;


                        }; // FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> label_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::Rpf> rpf;


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


                            YLeaf interface_name; //type: string

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


                                YLeaf tunnel_interface_name; //type: string
                                YLeaf tunnel_local_label; //type: uint32
                                YLeaf tunnel_fwd_class; //type: uint8
                                YLeaf tunnel_load_metric; //type: uint8
                                YLeaf tunnel_is_srte; //type: boolean
                                YLeaf tunnel_resolution_incomplete; //type: boolean
                                YLeaf tunnel_resolution_inconsistent; //type: boolean
                                YLeaf tunnel_is_programmed_to_drop; //type: boolean
                                YLeaf tli_type; //type: uint32
                                YLeaf tli_pointer; //type: uint32
                                YLeaf tli_reference_count; //type: uint32
                                YLeaf tli_flags; //type: uint32
                                YLeaf tli_flags_extended; //type: uint32



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


                                YLeaf leaf_local_label; //type: uint32
                                YLeaf eos_bit; //type: uint32
                                YLeaf hardware_information; //type: string
                                YLeaf leaf_reference_count; //type: uint32
                                YLeaf leaf_ptr; //type: uint32
                                YLeaf leaf_flags; //type: uint32
                                YLeaf path_list_reference_count; //type: uint32
                                YLeaf path_list_ldi_mask; //type: uint32
                                YLeaf path_list_flags; //type: uint32
                                YLeaf path_list_pointer; //type: uint32
                                YLeaf ldi_reference_count; //type: uint32
                                YLeaf ldi_flags; //type: uint32
                                YLeaf ldi_type; //type: uint32
                                YLeaf ldi_pointer; //type: uint32
                                YLeaf lw_ldi_type; //type: uint32
                                YLeaf lw_ldi_pointer; //type: uint32
                                YLeaf lw_ldi_reference_count; //type: uint32
                                YLeaf lw_shared_ldi_pointer; //type: uint32
                                YLeaf lspa_flags; //type: uint32
                                YLeaf afi_table_id; //type: uint32
                                YLeaf multicast_label; //type: boolean
                                YLeaf leaf_time_in_milli_seconds; //type: uint64
                                YLeaf pwhe_interface_list_id; //type: uint16
                                YLeaf pwhe_interface_list_ptr; //type: uint32
                                YLeaf pl_time_of_last_update_in_msec; //type: uint64
                                YLeaf ldi_time_of_last_update_in_msec; //type: uint64
                                YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
                                YLeaf lspa_time_of_last_update_in_msec; //type: uint64
                                YLeaf pl_time_stamp_type; //type: uint32

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


                                        YLeaf label_information_type; //type: uint32
                                        YLeaf local_label; //type: uint32
                                        YLeaf outgoing_label; //type: uint32
                                        YLeaf frr_nh_ptr; //type: uint32
                                        YLeaf mpls_adjacency_flags; //type: uint32
                                        YLeaf path_flags; //type: uint32
                                        YLeaf path_index; //type: uint8
                                        YLeaf backup_path_index; //type: uint8
                                        YLeaf nhid; //type: uint32
                                        YLeaf weight; //type: uint32
                                        YLeaf app_id; //type: uint16
                                        YLeaf tunnel_id_present; //type: boolean
                                        YLeaf outgoing_interface; //type: uint32
                                        YLeaf outgoing_physical_interface; //type: uint32
                                        YLeaf tunnel_interface_name; //type: string
                                        YLeaf label_information_path_index; //type: uint32
                                        YLeaf label_information_encap_id; //type: uint64
                                        YLeaf label_information_next_hop_type; //type: uint32
                                        YLeaf label_information_next_hop_table_id; //type: uint32
                                        YLeaf label_information_next_hop_protocol; //type: uint32
                                        YLeaf sli_from_ldi; //type: boolean
                                        YLeaf label_information_next_hop_string; //type: string
                                        YLeaf label_information_route_version; //type: uint64
                                        YLeaf label_information_time_in_milli_seconds; //type: uint64
                                        YLeaf label_bridge_domain_id; //type: uint32
                                        YLeaf label_xid; //type: uint32
                                        YLeaf label_pw_xid; //type: uint32
                                        YLeaf label_shg_id; //type: uint32
                                        YLeaf pwhev_ctype; //type: uint32
                                        YLeaf pwhecw_enabled; //type: boolean
                                        YLeaf pwhe_interface; //type: string
                                        YLeaf pq_label; //type: uint32
                                        YLeaf pq_flags; //type: uint32
                                        YLeaf li_pointer; //type: uint32
                                        YLeaf li_reference_count; //type: uint32
                                        YLeaf is_srte; //type: boolean
                                        YLeaf is_pure_backup; //type: boolean
                                        YLeaf is_frr_active; //type: boolean

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


                                            YLeaf l3_mtu; //type: uint32
                                            YLeaf total_encapsulation_size; //type: uint32
                                            YLeaf mac_size; //type: uint32
                                            YLeaf transmit_number_of_packets_switched; //type: uint64
                                            YLeaf transmit_number_of_bytes_switched; //type: uint64
                                            YLeaf transmit_number_of_tm_packets_switched; //type: uint64
                                            YLeaf transmit_number_of_tm_bytes_switched; //type: uint64
                                            YLeaf status; //type: int32
                                            YLeaf next_hop_interface_name; //type: string
                                            YLeaf next_hop_protocol; //type: uint32
                                            YLeaf next_hop_string; //type: string
                                            YLeaf nh_id; //type: uint32
                                            YLeaf version_priority_valid; //type: boolean
                                            YLeaf route_download_version; //type: uint64
                                            YLeaf route_download_priority; //type: uint32
                                            YLeafList label_stack; //type: list of  uint32



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


                                            YLeaf my_node_id; //type: uint32
                                            YLeaf flags; //type: uint32
                                            YLeaf via_label; //type: uint32
                                            YLeaf mcast_id; //type: uint32
                                            YLeaf pri_tos_mask; //type: uint32
                                            YLeaf bk_tos_mask; //type: uint32
                                            YLeaf pd_ts_ms; //type: uint64
                                            YLeaf primary_is_local; //type: boolean
                                            YLeaf backup_is_local; //type: boolean
                                            YLeafList if_node_id; //type: list of  uint32
                                            YLeafList bkup_if_node_id; //type: list of  uint32
                                            YLeafList if_hdl; //type: list of  uint32
                                            YLeafList bkup_if_hdl; //type: list of  uint32



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


                                    YLeaf ldi_hardware_information; //type: string



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


                                    YLeaf multicast_mol_base_flags; //type: uint32
                                    YLeaf multicast_mol_flags; //type: uint16
                                    YLeaf multicast_mol_reference_count; //type: uint16
                                    YLeaf multicast_tunnel_interface_name; //type: string
                                    YLeaf multicast_tunnel_id; //type: uint32
                                    YLeaf multicast_tunnel_next_hop_information; //type: uint32
                                    YLeaf multicast_tunnel_lspvif; //type: uint32
                                    YLeaf multicast_mpls_output_paths; //type: uint16
                                    YLeaf multicast_mpls_protocol_output_paths; //type: uint16
                                    YLeaf multicast_mpls_local_output_paths; //type: uint16
                                    YLeaf multicast_rpf_id; //type: uint32
                                    YLeaf multicast_encap_id; //type: uint32
                                    YLeaf dependent_tunnel_local_label; //type: uint32
                                    YLeaf dependent_tunnel_ifh; //type: uint32
                                    YLeaf multicast_v4_table_id; //type: uint32
                                    YLeaf multicast_v6_table_id; //type: uint32
                                    YLeaf label_bridge_domain_id; //type: uint32
                                    YLeaf label_xid; //type: uint32
                                    YLeaf label_shg_id; //type: uint32
                                    YLeaf multicast_platform_data_length; //type: uint8
                                    YLeaf multicast_platform_data; //type: string



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


                                    YLeaf rpf_flags; //type: uint32
                                    YLeaf rpf_pl_flags; //type: uint32
                                    YLeaf rpf_create_ts; //type: uint64
                                    YLeaf rpf_mod_ts; //type: uint64
                                    YLeaf rpf_pd_ts; //type: uint64
                                    YLeaf rpf_hardware; //type: string
                                    YLeafList rpf_if; //type: list of  string

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


                                        YLeaf rpf_tbl_id; //type: uint32
                                        YLeaf rpf_v4_addr; //type: string



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


                                        YLeaf rpf_tbl_id; //type: uint32
                                        YLeaf rpf_v6_addr; //type: string



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


                                        YLeaf rpf_path_index; //type: uint32
                                        YLeaf rpf_ifh; //type: uint32



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


                        YLeaf active; //type: uint32
                        YLeaf ready; //type: uint32
                        YLeaf partial; //type: uint32
                        YLeaf other; //type: uint32



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


                            YLeaf interface_name; //type: string
                            YLeaf active; //type: uint32
                            YLeaf ready; //type: uint32
                            YLeaf partial; //type: uint32
                            YLeaf other; //type: uint32



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


                        YLeaf active; //type: uint32
                        YLeaf ready; //type: uint32
                        YLeaf partial; //type: uint32
                        YLeaf other; //type: uint32



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


                            YLeaf interface_name; //type: string
                            YLeaf active; //type: uint32
                            YLeaf ready; //type: uint32
                            YLeaf partial; //type: uint32
                            YLeaf other; //type: uint32



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


                        YLeaf active; //type: uint32
                        YLeaf ready; //type: uint32
                        YLeaf partial; //type: uint32
                        YLeaf other; //type: uint32



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


                            YLeaf local_label; //type: int32
                            YLeaf tunnel_interface_name; //type: string
                            YLeaf input_label; //type: uint32
                            YLeaf outgoing_interface; //type: string
                            YLeaf outgoing_label; //type: uint32
                            YLeaf frr_interface_name; //type: string
                            YLeaf frr_label; //type: uint32
                            YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                            YLeaf frr_next_hop_ipv4_address; //type: string
                            YLeaf is_mldp_lsp; //type: boolean
                            YLeaf is_multicast_tunnel; //type: boolean
                            YLeaf multicast_tunnel_legs; //type: uint32

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


                                YLeaf role; //type: MgmtFibMplsLspRoleEnum

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


                                    YLeaf destination_prefix; //type: string
                                    YLeaf destination_prefix_length; //type: uint32



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


                                    YLeaf source_address; //type: string
                                    YLeaf lspid; //type: uint32
                                    YLeaf tunnel_id; //type: uint32



                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Midpoint


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Head> head;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId::Midpoint> midpoint;


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


                                YLeaf tunnel_interface_name; //type: string
                                YLeaf input_label; //type: uint32
                                YLeaf outgoing_interface; //type: string
                                YLeaf outgoing_label; //type: uint32
                                YLeaf frr_interface_name; //type: string
                                YLeaf frr_label; //type: uint32
                                YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                                YLeaf frr_next_hop_ipv4_address; //type: string
                                YLeaf is_mldp_lsp; //type: boolean

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


                                    YLeaf role; //type: MgmtFibMplsLspRoleEnum

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


                                        YLeaf destination_prefix; //type: string
                                        YLeaf destination_prefix_length; //type: uint32



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


                                        YLeaf source_address; //type: string
                                        YLeaf lspid; //type: uint32
                                        YLeaf tunnel_id; //type: uint32



                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Midpoint


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Head> head;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId::Midpoint> midpoint;


                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg::FrrEntryId> frr_entry_id;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrEntryId> frr_entry_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::MulticastLeg> > multicast_leg;


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


                            YLeaf interface_name; //type: string
                            YLeaf tunnel_interface_name; //type: string
                            YLeaf input_label; //type: uint32
                            YLeaf outgoing_interface; //type: string
                            YLeaf outgoing_label; //type: uint32
                            YLeaf frr_interface_name; //type: string
                            YLeaf frr_label; //type: uint32
                            YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                            YLeaf frr_next_hop_ipv4_address; //type: string
                            YLeaf is_mldp_lsp; //type: boolean
                            YLeaf is_multicast_tunnel; //type: boolean
                            YLeaf multicast_tunnel_legs; //type: uint32

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


                                YLeaf role; //type: MgmtFibMplsLspRoleEnum

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


                                    YLeaf destination_prefix; //type: string
                                    YLeaf destination_prefix_length; //type: uint32



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


                                    YLeaf source_address; //type: string
                                    YLeaf lspid; //type: uint32
                                    YLeaf tunnel_id; //type: uint32



                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Midpoint


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Head> head;
                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId::Midpoint> midpoint;


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


                                YLeaf tunnel_interface_name; //type: string
                                YLeaf input_label; //type: uint32
                                YLeaf outgoing_interface; //type: string
                                YLeaf outgoing_label; //type: uint32
                                YLeaf frr_interface_name; //type: string
                                YLeaf frr_label; //type: uint32
                                YLeaf entry_frr_state; //type: MgmtFibMplsFrrStateEnum
                                YLeaf frr_next_hop_ipv4_address; //type: string
                                YLeaf is_mldp_lsp; //type: boolean

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


                                    YLeaf role; //type: MgmtFibMplsLspRoleEnum

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


                                        YLeaf destination_prefix; //type: string
                                        YLeaf destination_prefix_length; //type: uint32



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


                                        YLeaf source_address; //type: string
                                        YLeaf lspid; //type: uint32
                                        YLeaf tunnel_id; //type: uint32



                                }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Midpoint


                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Head> head;
                                    std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId::Midpoint> midpoint;


                            }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId


                                std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg::FrrEntryId> frr_entry_id;


                        }; // FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg


                            std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrEntryId> frr_entry_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_fib_common_oper::FibMpls::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::MulticastLeg> > multicast_leg;


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


                    YLeaf ipv4_imposition_entries; //type: uint32
                    YLeaf reserved_label_entries; //type: uint32
                    YLeaf label_switched_entries; //type: uint32
                    YLeaf protected_label_switched_entries; //type: uint32
                    YLeaf deleted_stale_entries; //type: uint32
                    YLeaf te_head_entries; //type: uint32
                    YLeaf te_frr_head_entries; //type: uint32
                    YLeaf te_frr_interface_entries; //type: uint32
                    YLeaf te_frr_next_hop_entries; //type: uint32
                    YLeaf te_mid_points_entries; //type: uint32
                    YLeaf te_frr_mid_points_entries; //type: uint32
                    YLeaf te_internal_entries; //type: uint32
                    YLeaf te_frr_internal_entries; //type: uint32
                    YLeaf total_forwarding_updates; //type: uint32
                    YLeaf total_forwarding_update_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_updates; //type: uint32
                    YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
                    YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
                    YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
                    YLeaf lowest_label; //type: uint32
                    YLeaf highest_label; //type: uint32
                    YLeaf ignore_protect; //type: uint32
                    YLeaf mte_head_entries; //type: uint32
                    YLeaf mte_ll_entries; //type: uint32
                    YLeaf mte_midpoint_entries; //type: uint32
                    YLeaf num_lsp; //type: uint32
                    YLeaf lrpf_entries; //type: uint32



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


                        YLeaf event_id; //type: int32
                        YLeaf protected_frr_interface_name; //type: string
                        YLeaf next_hop; //type: uint32
                        YLeaf number_of_rewrites_affected; //type: uint32
                        YLeaf switching_time_nsecs; //type: uint32
                        YLeaf main_processing; //type: uint32
                        YLeaf fast_bundle_member_down_interface; //type: uint32
                        YLeaf frr_event_node_id; //type: string

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


                            YLeaf seconds; //type: int32
                            YLeaf nanoseconds; //type: int32



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
        static const Enum::YLeaf fib_mpls_llc_bag_type_xc;
        static const Enum::YLeaf fib_mpls_llc_bag_type_pfx;
        static const Enum::YLeaf fib_mpls_llc_bag_type_lsm;
        static const Enum::YLeaf fib_mpls_llc_bag_type_max;

};

class MgmtFibMplsFrrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf partial;
        static const Enum::YLeaf active;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf complete;
        static const Enum::YLeaf any;

};

class FibShIpencapHdrEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_sh_ip_encap_none;
        static const Enum::YLeaf fib_sh_ip_encap_ip4;
        static const Enum::YLeaf fib_sh_ip_encap_ip6;
        static const Enum::YLeaf fib_sh_ip_encap_udp;
        static const Enum::YLeaf fib_sh_ip_encap_lisp;

};

class FibProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf mpls;

};

class FibNehEnum : public Enum
{
    public:
        static const Enum::YLeaf nh_local;
        static const Enum::YLeaf nh_remote;
        static const Enum::YLeaf nh_special;

};

class FibFrrProtocolShowEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_protocol_ipv4;
        static const Enum::YLeaf frr_protocol_ipv6;
        static const Enum::YLeaf frr_protocol_mpls;

};

class ProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf mpls;

};

class FibLinkEnum : public Enum
{
    public:
        static const Enum::YLeaf link_ipv4;
        static const Enum::YLeaf link_ipv6;
        static const Enum::YLeaf link_mpls;

};

class FibAdjacencyShowEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_adjacency_normal;
        static const Enum::YLeaf fib_adjacency_null;
        static const Enum::YLeaf fib_adjacency_punt;
        static const Enum::YLeaf fib_adjacency_drop;
        static const Enum::YLeaf fib_adjacency_glean;
        static const Enum::YLeaf fib_adjacency_discard;
        static const Enum::YLeaf fib_adjacency_broadcast;
        static const Enum::YLeaf fib_adjacency_external;
        static const Enum::YLeaf fib_adjacency_lisp;
        static const Enum::YLeaf fib_adjacency_unknown;

};

class FibLoadshareShowEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_load_share_none;
        static const Enum::YLeaf fib_load_share_per_packet;
        static const Enum::YLeaf fib_load_share_dest_sharing;

};

class EosEnum : public Enum
{
    public:
        static const Enum::YLeaf eos0;
        static const Enum::YLeaf eos1;

};

class FibllcEntryEnum : public Enum
{
    public:
        static const Enum::YLeaf xc;
        static const Enum::YLeaf pfx;

};

class FibRpfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf fib_rpf_mode_strict;
        static const Enum::YLeaf fib_rpf_mode_loose;
        static const Enum::YLeaf fib_rpf_mode_unknown;

};

class FibidbOperEnum : public Enum
{
    public:
        static const Enum::YLeaf fibidb_none;
        static const Enum::YLeaf fibidb_create;
        static const Enum::YLeaf fibidb_delete;
        static const Enum::YLeaf fibidb_modify;
        static const Enum::YLeaf fibidb_max;

};

class SsLbaStateEnum : public Enum
{
    public:
        static const Enum::YLeaf l3;
        static const Enum::YLeaf l4;

};

class NextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf tx;
        static const Enum::YLeaf rx;
        static const Enum::YLeaf special;

};

class FibRouteSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf lsd;
        static const Enum::YLeaf rib;
        static const Enum::YLeaf mrib;

};

class MplseosEnum : public Enum
{
    public:
        static const Enum::YLeaf eos0;
        static const Enum::YLeaf eos1;

};

class MgmtFibMplsLspRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf head;
        static const Enum::YLeaf midpoint;

};

class FibNehSpecialEnum : public Enum
{
    public:
        static const Enum::YLeaf nh_not_found;
        static const Enum::YLeaf nh_null0;
        static const Enum::YLeaf nh_punt;
        static const Enum::YLeaf nh_drop;
        static const Enum::YLeaf nh_glean;
        static const Enum::YLeaf nh_receive;
        static const Enum::YLeaf nh_broadcast;
        static const Enum::YLeaf nh_external;
        static const Enum::YLeaf nh_lisp;
        static const Enum::YLeaf nh_lookup;
        static const Enum::YLeaf nh_max_type;

};


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_ */

