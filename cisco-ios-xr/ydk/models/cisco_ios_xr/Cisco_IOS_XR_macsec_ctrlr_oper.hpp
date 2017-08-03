#ifndef _CISCO_IOS_XR_MACSEC_CTRLR_OPER_
#define _CISCO_IOS_XR_MACSEC_CTRLR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_macsec_ctrlr_oper {

class MacsecCtrlrOper : public ydk::Entity
{
    public:
        MacsecCtrlrOper();
        ~MacsecCtrlrOper();

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

        class MacsecCtrlrPorts; //type: MacsecCtrlrOper::MacsecCtrlrPorts

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts> macsec_ctrlr_ports;
        
}; // MacsecCtrlrOper


class MacsecCtrlrOper::MacsecCtrlrPorts : public ydk::Entity
{
    public:
        MacsecCtrlrPorts();
        ~MacsecCtrlrPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecCtrlrPort; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort> > macsec_ctrlr_port;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort : public ydk::Entity
{
    public:
        MacsecCtrlrPort();
        ~MacsecCtrlrPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class MacsecCtrlrInfo; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo> macsec_ctrlr_info;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo : public ydk::Entity
{
    public:
        MacsecCtrlrInfo();
        ~MacsecCtrlrInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: MacsecCtrlrState
        ydk::YLeaf replay_window_size; //type: uint32
        ydk::YLeaf must_secure; //type: boolean
        ydk::YLeaf secure_mode; //type: uint32
        class EncryptScStatus; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus
        class DecryptScStatus; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus> decrypt_sc_status;
        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus> encrypt_sc_status;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus : public ydk::Entity
{
    public:
        EncryptScStatus();
        ~EncryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enabled; //type: boolean
        ydk::YLeaf secure_channel_id; //type: string
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf cipher_suite; //type: MacsecCtrlrCiphersuit
        ydk::YLeaf max_packet_number; //type: uint64
        ydk::YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation> > active_association;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation : public ydk::Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_number; //type: uint8
        ydk::YLeaf short_secure_channel_id; //type: uint32

}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus : public ydk::Entity
{
    public:
        DecryptScStatus();
        ~DecryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enabled; //type: boolean
        ydk::YLeaf secure_channel_id; //type: string
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf cipher_suite; //type: MacsecCtrlrCiphersuit
        ydk::YLeaf max_packet_number; //type: uint64
        ydk::YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation> > active_association;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation : public ydk::Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_number; //type: uint8
        ydk::YLeaf short_secure_channel_id; //type: uint32

}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation

class MacsecCtrlrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf macsec_ctrlr_state_up;
        static const ydk::Enum::YLeaf macsec_ctrlr_state_down;
        static const ydk::Enum::YLeaf macsec_ctrlr_state_admin_down;

};

class MacsecCtrlrCiphersuit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gcm_aes_256;
        static const ydk::Enum::YLeaf gcm_aes_128;
        static const ydk::Enum::YLeaf gcm_aes_xpn_256;

};


}
}

#endif /* _CISCO_IOS_XR_MACSEC_CTRLR_OPER_ */

