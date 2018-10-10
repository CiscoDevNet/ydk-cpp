#ifndef _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_
#define _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_macsec_ea_oper {

class Ncs1kMacsecOper : public ydk::Entity
{
    public:
        Ncs1kMacsecOper();
        ~Ncs1kMacsecOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Ncs1kMacsecCtrlrNames; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames> ncs1k_macsec_ctrlr_names;
        
}; // Ncs1kMacsecOper


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames : public ydk::Entity
{
    public:
        Ncs1kMacsecCtrlrNames();
        ~Ncs1kMacsecCtrlrNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ncs1kMacsecCtrlrName; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName

        ydk::YList ncs1k_macsec_ctrlr_name;
        
}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName : public ydk::Entity
{
    public:
        Ncs1kMacsecCtrlrName();
        ~Ncs1kMacsecCtrlrName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Ncs1kStatusInfo; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo> ncs1k_status_info;
        
}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo : public ydk::Entity
{
    public:
        Ncs1kStatusInfo();
        ~Ncs1kStatusInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replay_window_size; //type: uint32
        ydk::YLeaf must_secure; //type: boolean
        ydk::YLeaf secure_mode; //type: uint32
        class EncryptScStatus; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus
        class DecryptScStatus; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus> encrypt_sc_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1k_macsec_ea_oper::Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus> decrypt_sc_status;
        
}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus : public ydk::Entity
{
    public:
        EncryptScStatus();
        ~EncryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enabled; //type: boolean
        ydk::YLeaf secure_channel_id; //type: uint64
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf cipher_suite; //type: Ncs1kCipherSuit
        ydk::YLeaf initial_packet_number; //type: uint64
        ydk::YLeaf secure_tag_length; //type: uint32
        ydk::YLeaf max_packet_number; //type: uint64
        ydk::YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation

        ydk::YList active_association;
        
}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation : public ydk::Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_number; //type: uint8
        ydk::YLeaf device_association_number; //type: uint8
        ydk::YLeaf short_secure_channel_id; //type: uint32
        ydk::YLeaf programmed_time; //type: string
        ydk::YLeaf key_crc; //type: string
        ydk::YLeafList xpn_salt; //type: list of  string

}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus : public ydk::Entity
{
    public:
        DecryptScStatus();
        ~DecryptScStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enabled; //type: boolean
        ydk::YLeaf secure_channel_id; //type: uint64
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf cipher_suite; //type: Ncs1kCipherSuit
        ydk::YLeaf initial_packet_number; //type: uint64
        ydk::YLeaf secure_tag_length; //type: uint32
        ydk::YLeaf max_packet_number; //type: uint64
        ydk::YLeaf recent_packet_number; //type: uint64
        class ActiveAssociation; //type: Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation

        ydk::YList active_association;
        
}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus


class Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation : public ydk::Entity
{
    public:
        ActiveAssociation();
        ~ActiveAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_number; //type: uint8
        ydk::YLeaf device_association_number; //type: uint8
        ydk::YLeaf short_secure_channel_id; //type: uint32
        ydk::YLeaf programmed_time; //type: string
        ydk::YLeaf key_crc; //type: string
        ydk::YLeafList xpn_salt; //type: list of  string

}; // Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation

class Ncs1kCipherSuit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gcm_aes_256;
        static const ydk::Enum::YLeaf gcm_aes_128;
        static const ydk::Enum::YLeaf gcm_aes_xpn_256;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MACSEC_EA_OPER_ */

