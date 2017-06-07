#ifndef _CISCO_IOS_XR_MACSEC_CTRLR_OPER_
#define _CISCO_IOS_XR_MACSEC_CTRLR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_macsec_ctrlr_oper {

class MacsecCtrlrOper : public Entity
{
    public:
        MacsecCtrlrOper();
        ~MacsecCtrlrOper();

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

        class MacsecCtrlrPorts; //type: MacsecCtrlrOper::MacsecCtrlrPorts

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts> macsec_ctrlr_ports;
        
}; // MacsecCtrlrOper


class MacsecCtrlrOper::MacsecCtrlrPorts : public Entity
{
    public:
        MacsecCtrlrPorts();
        ~MacsecCtrlrPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacsecCtrlrPort; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort> > macsec_ctrlr_port;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort : public Entity
{
    public:
        MacsecCtrlrPort();
        ~MacsecCtrlrPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class MacsecCtrlrInfo; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo> macsec_ctrlr_info;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo : public Entity
{
    public:
        MacsecCtrlrInfo();
        ~MacsecCtrlrInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: MacsecCtrlrStateEnum
        YLeaf replay_window_size; //type: uint32
        YLeaf must_secure; //type: boolean
        YLeaf secure_mode; //type: uint32
        class EncryptScStatus; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus
        class DecryptScStatus; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus

        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus> decrypt_sc_status;
        std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus> encrypt_sc_status;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus : public Entity
{
    public:
        EncryptScStatus();
        ~EncryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protection_enabled; //type: boolean
        YLeaf secure_channel_id; //type: string
        YLeaf confidentiality_offset; //type: uint32
        YLeaf cipher_suite; //type: MacsecCtrlrCiphersuitEnum
        YLeaf max_packet_number; //type: uint64
        YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation> > active_association;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation : public Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf association_number; //type: uint8
        YLeaf short_secure_channel_id; //type: uint32

}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus : public Entity
{
    public:
        DecryptScStatus();
        ~DecryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protection_enabled; //type: boolean
        YLeaf secure_channel_id; //type: string
        YLeaf confidentiality_offset; //type: uint32
        YLeaf cipher_suite; //type: MacsecCtrlrCiphersuitEnum
        YLeaf max_packet_number; //type: uint64
        YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation> > active_association;
        
}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus


class MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation : public Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf association_number; //type: uint8
        YLeaf short_secure_channel_id; //type: uint32

}; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation

class MacsecCtrlrCiphersuitEnum : public Enum
{
    public:
        static const Enum::YLeaf gcm_aes_256;
        static const Enum::YLeaf gcm_aes_128;
        static const Enum::YLeaf gcm_aes_xpn_256;

};

class MacsecCtrlrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf macsec_ctrlr_state_up;
        static const Enum::YLeaf macsec_ctrlr_state_down;
        static const Enum::YLeaf macsec_ctrlr_state_admin_down;

};


}
}

#endif /* _CISCO_IOS_XR_MACSEC_CTRLR_OPER_ */

