#ifndef _CISCO_IOS_XR_NCS1K_MXP_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_oper {

class HwModule : public Entity
{
    public:
        HwModule();
        ~HwModule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class SliceIds : public Entity
    {
        public:
            SliceIds();
            ~SliceIds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SliceId : public Entity
        {
            public:
                SliceId();
                ~SliceId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value slice_num; //type: int32


            class SliceInfo : public Entity
            {
                public:
                    SliceInfo();
                    ~SliceInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value slice_id; //type: uint32
                    Value client_rate; //type: uint32
                    Value trunk_rate; //type: uint32
                    Value hardware_status; //type: HwModuleSliceStatusEnum
                    Value dp_fpga_fw_type; //type: string
                    Value dp_fpga_fw_ver; //type: string
                    Value need_upg; //type: uint32
                    Value encryption_supported; //type: boolean
                    Value lldp_drop_status; //type: boolean


                class ClientPort : public Entity
                {
                    public:
                        ClientPort();
                        ~ClientPort();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value client_name; //type: string
                        Value if_index; //type: uint32


                    class TrunkPort : public Entity
                    {
                        public:
                            TrunkPort();
                            ~TrunkPort();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value trunk_name; //type: string
                            Value if_index; //type: uint32
                            Value percentage; //type: string




                    }; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort> > trunk_port;


                }; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort> > client_port;
                    class HwModuleSliceStatusEnum;


            }; // HwModule::SliceIds::SliceId::SliceInfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo> > slice_info;


        }; // HwModule::SliceIds::SliceId


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId> > slice_id;


    }; // HwModule::SliceIds


    class SliceAll : public Entity
    {
        public:
            SliceAll();
            ~SliceAll();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SliceInfo : public Entity
        {
            public:
                SliceInfo();
                ~SliceInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value slice_id; //type: uint32
                Value client_rate; //type: uint32
                Value trunk_rate; //type: uint32
                Value hardware_status; //type: HwModuleSliceStatusEnum
                Value dp_fpga_fw_type; //type: string
                Value dp_fpga_fw_ver; //type: string
                Value need_upg; //type: uint32
                Value encryption_supported; //type: boolean
                Value lldp_drop_status; //type: boolean


            class ClientPort : public Entity
            {
                public:
                    ClientPort();
                    ~ClientPort();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value client_name; //type: string
                    Value if_index; //type: uint32


                class TrunkPort : public Entity
                {
                    public:
                        TrunkPort();
                        ~TrunkPort();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trunk_name; //type: string
                        Value if_index; //type: uint32
                        Value percentage; //type: string




                }; // HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort> > trunk_port;


            }; // HwModule::SliceAll::SliceInfo::ClientPort


                std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort> > client_port;
                class HwModuleSliceStatusEnum;


        }; // HwModule::SliceAll::SliceInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo> > slice_info;


    }; // HwModule::SliceAll


        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll> slice_all;
        std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds> slice_ids;


}; // HwModule


class HwModuleSliceStatusEnum : public Enum
{
    public:
        static const Enum::Value not_provisioned;
        static const Enum::Value provisioning_in_progress;
        static const Enum::Value provisioned;
        static const Enum::Value provisioning_failed;
        static const Enum::Value provisioning_scheduled;
        static const Enum::Value reprovisioning_aborted;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_OPER_ */

