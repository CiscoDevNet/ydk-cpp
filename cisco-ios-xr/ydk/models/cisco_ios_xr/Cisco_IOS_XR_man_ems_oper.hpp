#ifndef _CISCO_IOS_XR_MAN_EMS_OPER_
#define _CISCO_IOS_XR_MAN_EMS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ems_oper {

class Grpc : public ydk::Entity
{
    public:
        Grpc();
        ~Grpc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Statistics; //type: Grpc::Statistics
        class Status; //type: Grpc::Status

        std::shared_ptr<Cisco_IOS_XR_man_ems_oper::Grpc::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_man_ems_oper::Grpc::Status> status;
        
}; // Grpc


class Grpc::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ct_show_cmd_txt_req_recv; //type: uint64
        ydk::YLeaf ct_show_cmd_txt_res_sent; //type: uint64
        ydk::YLeaf ct_get_config_req_recv; //type: uint64
        ydk::YLeaf ct_get_config_res_sent; //type: uint64
        ydk::YLeaf ct_cli_config_req_recv; //type: uint64
        ydk::YLeaf ct_cli_config_res_sent; //type: uint64
        ydk::YLeaf ct_merge_config_req_recv; //type: uint64
        ydk::YLeaf ct_merge_config_res_sent; //type: uint64
        ydk::YLeaf ct_commit_replace_req_recv; //type: uint64
        ydk::YLeaf ct_commit_replace_res_sent; //type: uint64
        ydk::YLeaf ct_delete_config_req_recv; //type: uint64
        ydk::YLeaf ct_delete_config_res_sent; //type: uint64
        ydk::YLeaf ct_replace_config_req_recv; //type: uint64
        ydk::YLeaf ct_replace_config_res_sent; //type: uint64
        ydk::YLeaf ct_get_oper_req_recv; //type: uint64
        ydk::YLeaf ct_get_oper_res_sent; //type: uint64
        ydk::YLeaf ct_get_current_session; //type: uint32
        ydk::YLeaf transport; //type: string
        ydk::YLeaf address_family; //type: string
        ydk::YLeaf tls; //type: string
        ydk::YLeaf trustpoint; //type: string
        ydk::YLeaf listening_port; //type: int32
        ydk::YLeaf max_req_per_user; //type: uint32
        ydk::YLeaf max_req_total; //type: uint32

}; // Grpc::Statistics


class Grpc::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ct_show_cmd_txt_req_recv; //type: uint64
        ydk::YLeaf ct_show_cmd_txt_res_sent; //type: uint64
        ydk::YLeaf ct_get_config_req_recv; //type: uint64
        ydk::YLeaf ct_get_config_res_sent; //type: uint64
        ydk::YLeaf ct_cli_config_req_recv; //type: uint64
        ydk::YLeaf ct_cli_config_res_sent; //type: uint64
        ydk::YLeaf ct_merge_config_req_recv; //type: uint64
        ydk::YLeaf ct_merge_config_res_sent; //type: uint64
        ydk::YLeaf ct_commit_replace_req_recv; //type: uint64
        ydk::YLeaf ct_commit_replace_res_sent; //type: uint64
        ydk::YLeaf ct_delete_config_req_recv; //type: uint64
        ydk::YLeaf ct_delete_config_res_sent; //type: uint64
        ydk::YLeaf ct_replace_config_req_recv; //type: uint64
        ydk::YLeaf ct_replace_config_res_sent; //type: uint64
        ydk::YLeaf ct_get_oper_req_recv; //type: uint64
        ydk::YLeaf ct_get_oper_res_sent; //type: uint64
        ydk::YLeaf ct_get_current_session; //type: uint32
        ydk::YLeaf transport; //type: string
        ydk::YLeaf address_family; //type: string
        ydk::YLeaf tls; //type: string
        ydk::YLeaf trustpoint; //type: string
        ydk::YLeaf listening_port; //type: int32
        ydk::YLeaf max_req_per_user; //type: uint32
        ydk::YLeaf max_req_total; //type: uint32

}; // Grpc::Status


}
}

#endif /* _CISCO_IOS_XR_MAN_EMS_OPER_ */

