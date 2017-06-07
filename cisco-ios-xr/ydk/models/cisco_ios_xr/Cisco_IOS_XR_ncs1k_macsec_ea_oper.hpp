#ifndef _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_
#define _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_macsec_ea_oper {

class Ncs1KMacsecOper : public Entity
{
    public:
        Ncs1KMacsecOper();
        ~Ncs1KMacsecOper();

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

        class Ncs1KMacsecCtrlrNames; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames

        std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames> ncs1k_macsec_ctrlr_names;
        
}; // Ncs1KMacsecOper


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames : public Entity
{
    public:
        Ncs1KMacsecCtrlrNames();
        ~Ncs1KMacsecCtrlrNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ncs1KMacsecCtrlrName; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName> > ncs1k_macsec_ctrlr_name;
        
}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName : public Entity
{
    public:
        Ncs1KMacsecCtrlrName();
        ~Ncs1KMacsecCtrlrName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Ncs1KStatusInfo; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo

        std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo> ncs1k_status_info;
        
}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo : public Entity
{
    public:
        Ncs1KStatusInfo();
        ~Ncs1KStatusInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf replay_window_size; //type: uint32
        YLeaf must_secure; //type: boolean
        YLeaf secure_mode; //type: uint32
        class EncryptScStatus; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus
        class DecryptScStatus; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus

        std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus> decrypt_sc_status;
        std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus> encrypt_sc_status;
        
}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus : public Entity
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
        YLeaf cipher_suite; //type: Ncs1KCipherSuitEnum
        YLeaf initial_packet_number; //type: uint64
        YLeaf secure_tag_length; //type: uint32
        YLeaf max_packet_number; //type: uint64
        YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation> > active_association;
        
}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation : public Entity
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
        YLeaf device_association_number; //type: uint8
        YLeaf short_secure_channel_id; //type: uint32
        YLeaf programmed_time; //type: string
        YLeaf key_crc; //type: string
        YLeafList xpn_salt; //type: list of  string

}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus : public Entity
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
        YLeaf cipher_suite; //type: Ncs1KCipherSuitEnum
        YLeaf initial_packet_number; //type: uint64
        YLeaf secure_tag_length; //type: uint32
        YLeaf max_packet_number; //type: uint64
        YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation> > active_association;
        
}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus


class Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation : public Entity
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
        YLeaf device_association_number; //type: uint8
        YLeaf short_secure_channel_id; //type: uint32
        YLeaf programmed_time; //type: string
        YLeaf key_crc; //type: string
        YLeafList xpn_salt; //type: list of  string

}; // Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation

class Ncs1KCipherSuitEnum : public Enum
{
    public:
        static const Enum::YLeaf gcm_aes_256;
        static const Enum::YLeaf gcm_aes_128;
        static const Enum::YLeaf gcm_aes_xpn_256;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_ */

