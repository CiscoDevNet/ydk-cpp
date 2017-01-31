#ifndef _CISCO_IOS_XR_MAN_EMS_OPER_
#define _CISCO_IOS_XR_MAN_EMS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_ems_oper {

class Grpc : public Entity
{
    public:
        Grpc();
        ~Grpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Statistics : public Entity
    {
        public:
            Statistics();
            ~Statistics();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf ct_show_cmd_txt_req_recv; //type: uint64
            YLeaf ct_show_cmd_txt_res_sent; //type: uint64
            YLeaf ct_get_config_req_recv; //type: uint64
            YLeaf ct_get_config_res_sent; //type: uint64
            YLeaf ct_cli_config_req_recv; //type: uint64
            YLeaf ct_cli_config_res_sent; //type: uint64
            YLeaf ct_merge_config_req_recv; //type: uint64
            YLeaf ct_merge_config_res_sent; //type: uint64
            YLeaf ct_commit_replace_req_recv; //type: uint64
            YLeaf ct_commit_replace_res_sent; //type: uint64
            YLeaf ct_delete_config_req_recv; //type: uint64
            YLeaf ct_delete_config_res_sent; //type: uint64
            YLeaf ct_replace_config_req_recv; //type: uint64
            YLeaf ct_replace_config_res_sent; //type: uint64
            YLeaf ct_get_oper_req_recv; //type: uint64
            YLeaf ct_get_oper_res_sent; //type: uint64
            YLeaf ct_get_current_session; //type: uint32
            YLeaf transport; //type: string
            YLeaf address_family; //type: string
            YLeaf tls; //type: string
            YLeaf trustpoint; //type: string
            YLeaf listening_port; //type: int32
            YLeaf max_req_per_user; //type: uint32
            YLeaf max_req_total; //type: uint32



    }; // Grpc::Statistics


    class Status : public Entity
    {
        public:
            Status();
            ~Status();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf ct_show_cmd_txt_req_recv; //type: uint64
            YLeaf ct_show_cmd_txt_res_sent; //type: uint64
            YLeaf ct_get_config_req_recv; //type: uint64
            YLeaf ct_get_config_res_sent; //type: uint64
            YLeaf ct_cli_config_req_recv; //type: uint64
            YLeaf ct_cli_config_res_sent; //type: uint64
            YLeaf ct_merge_config_req_recv; //type: uint64
            YLeaf ct_merge_config_res_sent; //type: uint64
            YLeaf ct_commit_replace_req_recv; //type: uint64
            YLeaf ct_commit_replace_res_sent; //type: uint64
            YLeaf ct_delete_config_req_recv; //type: uint64
            YLeaf ct_delete_config_res_sent; //type: uint64
            YLeaf ct_replace_config_req_recv; //type: uint64
            YLeaf ct_replace_config_res_sent; //type: uint64
            YLeaf ct_get_oper_req_recv; //type: uint64
            YLeaf ct_get_oper_res_sent; //type: uint64
            YLeaf ct_get_current_session; //type: uint32
            YLeaf transport; //type: string
            YLeaf address_family; //type: string
            YLeaf tls; //type: string
            YLeaf trustpoint; //type: string
            YLeaf listening_port; //type: int32
            YLeaf max_req_per_user; //type: uint32
            YLeaf max_req_total; //type: uint32



    }; // Grpc::Status


        std::unique_ptr<Cisco_IOS_XR_man_ems_oper::Grpc::Statistics> statistics;
        std::unique_ptr<Cisco_IOS_XR_man_ems_oper::Grpc::Status> status;


}; // Grpc



}
}

#endif /* _CISCO_IOS_XR_MAN_EMS_OPER_ */

