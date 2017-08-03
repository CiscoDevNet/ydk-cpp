#ifndef _CISCO_IOS_XR_NCS1K_MXP_OPER_
#define _CISCO_IOS_XR_NCS1K_MXP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_oper {

class HwModule : public ydk::Entity
{
    public:
        HwModule();
        ~HwModule();

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

        class SliceIds; //type: HwModule::SliceIds
        class SliceAll; //type: HwModule::SliceAll

        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll> slice_all;
        std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds> slice_ids;
        
}; // HwModule


class HwModule::SliceIds : public ydk::Entity
{
    public:
        SliceIds();
        ~SliceIds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceId; //type: HwModule::SliceIds::SliceId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId> > slice_id;
        
}; // HwModule::SliceIds


class HwModule::SliceIds::SliceId : public ydk::Entity
{
    public:
        SliceId();
        ~SliceId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_num; //type: int32
        class SliceInfo; //type: HwModule::SliceIds::SliceId::SliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo> > slice_info;
        
}; // HwModule::SliceIds::SliceId


class HwModule::SliceIds::SliceId::SliceInfo : public ydk::Entity
{
    public:
        SliceInfo();
        ~SliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_id; //type: uint32
        ydk::YLeaf client_rate; //type: uint32
        ydk::YLeaf trunk_rate; //type: uint32
        ydk::YLeaf hardware_status; //type: HwModuleSliceStatus
        ydk::YLeaf dp_fpga_fw_type; //type: string
        ydk::YLeaf dp_fpga_fw_ver; //type: string
        ydk::YLeaf need_upg; //type: uint32
        ydk::YLeaf encryption_supported; //type: boolean
        ydk::YLeaf lldp_drop_status; //type: boolean
        class ClientPort; //type: HwModule::SliceIds::SliceId::SliceInfo::ClientPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort> > client_port;
        
}; // HwModule::SliceIds::SliceId::SliceInfo


class HwModule::SliceIds::SliceId::SliceInfo::ClientPort : public ydk::Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf if_index; //type: uint32
        class TrunkPort; //type: HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort> > trunk_port;
        
}; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort


class HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort : public ydk::Entity
{
    public:
        TrunkPort();
        ~TrunkPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk_name; //type: string
        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf percentage; //type: string

}; // HwModule::SliceIds::SliceId::SliceInfo::ClientPort::TrunkPort


class HwModule::SliceAll : public ydk::Entity
{
    public:
        SliceAll();
        ~SliceAll();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceInfo; //type: HwModule::SliceAll::SliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo> > slice_info;
        
}; // HwModule::SliceAll


class HwModule::SliceAll::SliceInfo : public ydk::Entity
{
    public:
        SliceInfo();
        ~SliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_id; //type: uint32
        ydk::YLeaf client_rate; //type: uint32
        ydk::YLeaf trunk_rate; //type: uint32
        ydk::YLeaf hardware_status; //type: HwModuleSliceStatus
        ydk::YLeaf dp_fpga_fw_type; //type: string
        ydk::YLeaf dp_fpga_fw_ver; //type: string
        ydk::YLeaf need_upg; //type: uint32
        ydk::YLeaf encryption_supported; //type: boolean
        ydk::YLeaf lldp_drop_status; //type: boolean
        class ClientPort; //type: HwModule::SliceAll::SliceInfo::ClientPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort> > client_port;
        
}; // HwModule::SliceAll::SliceInfo


class HwModule::SliceAll::SliceInfo::ClientPort : public ydk::Entity
{
    public:
        ClientPort();
        ~ClientPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf if_index; //type: uint32
        class TrunkPort; //type: HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort> > trunk_port;
        
}; // HwModule::SliceAll::SliceInfo::ClientPort


class HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort : public ydk::Entity
{
    public:
        TrunkPort();
        ~TrunkPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk_name; //type: string
        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf percentage; //type: string

}; // HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort

class HwModuleSliceStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_provisioned;
        static const ydk::Enum::YLeaf provisioning_in_progress;
        static const ydk::Enum::YLeaf provisioned;
        static const ydk::Enum::YLeaf provisioning_failed;
        static const ydk::Enum::YLeaf provisioning_scheduled;
        static const ydk::Enum::YLeaf reprovisioning_aborted;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_OPER_ */

