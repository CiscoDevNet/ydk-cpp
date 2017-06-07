#ifndef _CISCO_IOS_XR_NCS1K_MXP_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_oper {

class HwModule : public Entity
{
    public:
        HwModule();
        ~HwModule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class SliceIds; //type: HwModule::SliceIds
        class SliceAll; //type: HwModule::SliceAll

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll> slice_all;
        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds> slice_ids;
        
}; // HwModule


class HwModule::SliceIds : public Entity
{
    public:
        SliceIds();
        ~SliceIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SliceId; //type: HwModule::SliceIds::SliceId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId> > slice_id;
        
}; // HwModule::SliceIds


class HwModule::SliceIds::SliceId : public Entity
{
    public:
        SliceId();
        ~SliceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slice_num; //type: int32
        class SliceInfo; //type: HwModule::SliceIds::SliceId::SliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo> > slice_info;
        
}; // HwModule::SliceIds::SliceId


class HwModule::SliceIds::SliceId::SliceInfo : public Entity
{
    public:
        SliceInfo();
        ~SliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slice_id; //type: uint32
        YLeaf client_rate; //type: uint32
        YLeaf trunk_rate; //type: uint32
        YLeaf hardware_status; //type: HwModuleSliceStatusEnum
        YLeaf dp_fpga_fw_type; //type: string
        YLeaf dp_fpga_fw_ver; //type: string
        YLeaf need_upg; //type: uint32
        YLeaf encryption_supported; //type: boolean
        YLeaf lldp_drop_status; //type: boolean
        class ClientPort; //type: HwModule::SliceIds::SliceId::SliceInfo::ClientPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort> > client_port;
        
}; // HwModule::SliceIds::SliceId::SliceInfo


class HwModule::SliceIds::SliceId::SliceInfo::ClientPort : public Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        YLeaf if_index; //type: uint32
        class TrunkPort; //type: HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort> > trunk_port;
        
}; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort


class HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort : public Entity
{
    public:
        TrunkPort();
        ~TrunkPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk_name; //type: string
        YLeaf if_index; //type: uint32
        YLeaf percentage; //type: string

}; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort


class HwModule::SliceAll : public Entity
{
    public:
        SliceAll();
        ~SliceAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SliceInfo; //type: HwModule::SliceAll::SliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo> > slice_info;
        
}; // HwModule::SliceAll


class HwModule::SliceAll::SliceInfo : public Entity
{
    public:
        SliceInfo();
        ~SliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf slice_id; //type: uint32
        YLeaf client_rate; //type: uint32
        YLeaf trunk_rate; //type: uint32
        YLeaf hardware_status; //type: HwModuleSliceStatusEnum
        YLeaf dp_fpga_fw_type; //type: string
        YLeaf dp_fpga_fw_ver; //type: string
        YLeaf need_upg; //type: uint32
        YLeaf encryption_supported; //type: boolean
        YLeaf lldp_drop_status; //type: boolean
        class ClientPort; //type: HwModule::SliceAll::SliceInfo::ClientPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort> > client_port;
        
}; // HwModule::SliceAll::SliceInfo


class HwModule::SliceAll::SliceInfo::ClientPort : public Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        YLeaf if_index; //type: uint32
        class TrunkPort; //type: HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort> > trunk_port;
        
}; // HwModule::SliceAll::SliceInfo::ClientPort


class HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort : public Entity
{
    public:
        TrunkPort();
        ~TrunkPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trunk_name; //type: string
        YLeaf if_index; //type: uint32
        YLeaf percentage; //type: string

}; // HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort

class HwModuleSliceStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_provisioned;
        static const Enum::YLeaf provisioning_in_progress;
        static const Enum::YLeaf provisioned;
        static const Enum::YLeaf provisioning_failed;
        static const Enum::YLeaf provisioning_scheduled;
        static const Enum::YLeaf reprovisioning_aborted;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_OPER_ */

