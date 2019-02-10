
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_macsec_ea_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_macsec_ea_oper {

Ncs1kMacsecOper::Ncs1kMacsecOper()
    :
    ncs1k_macsec_ctrlr_names(std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames>())
{
    ncs1k_macsec_ctrlr_names->parent = this;

    yang_name = "ncs1k-macsec-oper"; yang_parent_name = "Cisco-IOS-XR-ncs1k-macsec-ea-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ncs1kMacsecOper::~Ncs1kMacsecOper()
{
}

bool Ncs1kMacsecOper::has_data() const
{
    if (is_presence_container) return true;
    return (ncs1k_macsec_ctrlr_names !=  nullptr && ncs1k_macsec_ctrlr_names->has_data());
}

bool Ncs1kMacsecOper::has_operation() const
{
    return is_set(yfilter)
	|| (ncs1k_macsec_ctrlr_names !=  nullptr && ncs1k_macsec_ctrlr_names->has_operation());
}

std::string Ncs1kMacsecOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-macsec-ctrlr-names")
    {
        if(ncs1k_macsec_ctrlr_names == nullptr)
        {
            ncs1k_macsec_ctrlr_names = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames>();
        }
        return ncs1k_macsec_ctrlr_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ncs1k_macsec_ctrlr_names != nullptr)
    {
        _children["ncs1k-macsec-ctrlr-names"] = ncs1k_macsec_ctrlr_names;
    }

    return _children;
}

void Ncs1kMacsecOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ncs1kMacsecOper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::clone_ptr() const
{
    return std::make_shared<Ncs1kMacsecOper>();
}

std::string Ncs1kMacsecOper::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ncs1kMacsecOper::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ncs1kMacsecOper::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ncs1kMacsecOper::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ncs1kMacsecOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-macsec-ctrlr-names")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrNames()
    :
    ncs1k_macsec_ctrlr_name(this, {"name"})
{

    yang_name = "ncs1k-macsec-ctrlr-names"; yang_parent_name = "ncs1k-macsec-oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::~Ncs1kMacsecCtrlrNames()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ncs1k_macsec_ctrlr_name.len(); index++)
    {
        if(ncs1k_macsec_ctrlr_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::has_operation() const
{
    for (std::size_t index=0; index<ncs1k_macsec_ctrlr_name.len(); index++)
    {
        if(ncs1k_macsec_ctrlr_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-macsec-ctrlr-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-macsec-ctrlr-name")
    {
        auto ent_ = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName>();
        ent_->parent = this;
        ncs1k_macsec_ctrlr_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ncs1k_macsec_ctrlr_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-macsec-ctrlr-name")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kMacsecCtrlrName()
    :
    name{YType::str, "name"}
        ,
    ncs1k_status_info(std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo>())
{
    ncs1k_status_info->parent = this;

    yang_name = "ncs1k-macsec-ctrlr-name"; yang_parent_name = "ncs1k-macsec-ctrlr-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::~Ncs1kMacsecCtrlrName()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ncs1k_status_info !=  nullptr && ncs1k_status_info->has_data());
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ncs1k_status_info !=  nullptr && ncs1k_status_info->has_operation());
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper/ncs1k-macsec-ctrlr-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-macsec-ctrlr-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-status-info")
    {
        if(ncs1k_status_info == nullptr)
        {
            ncs1k_status_info = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo>();
        }
        return ncs1k_status_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ncs1k_status_info != nullptr)
    {
        _children["ncs1k-status-info"] = ncs1k_status_info;
    }

    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-status-info" || name == "name")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::Ncs1kStatusInfo()
    :
    replay_window_size{YType::uint32, "replay-window-size"},
    must_secure{YType::boolean, "must-secure"},
    secure_mode{YType::uint32, "secure-mode"}
        ,
    encrypt_sc_status(std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus>())
    , decrypt_sc_status(std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus>())
{
    encrypt_sc_status->parent = this;
    decrypt_sc_status->parent = this;

    yang_name = "ncs1k-status-info"; yang_parent_name = "ncs1k-macsec-ctrlr-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::~Ncs1kStatusInfo()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::has_data() const
{
    if (is_presence_container) return true;
    return replay_window_size.is_set
	|| must_secure.is_set
	|| secure_mode.is_set
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_data())
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_data());
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replay_window_size.yfilter)
	|| ydk::is_set(must_secure.yfilter)
	|| ydk::is_set(secure_mode.yfilter)
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_operation())
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_operation());
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-status-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replay_window_size.is_set || is_set(replay_window_size.yfilter)) leaf_name_data.push_back(replay_window_size.get_name_leafdata());
    if (must_secure.is_set || is_set(must_secure.yfilter)) leaf_name_data.push_back(must_secure.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.yfilter)) leaf_name_data.push_back(secure_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypt-sc-status")
    {
        if(encrypt_sc_status == nullptr)
        {
            encrypt_sc_status = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus>();
        }
        return encrypt_sc_status;
    }

    if(child_yang_name == "decrypt-sc-status")
    {
        if(decrypt_sc_status == nullptr)
        {
            decrypt_sc_status = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus>();
        }
        return decrypt_sc_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encrypt_sc_status != nullptr)
    {
        _children["encrypt-sc-status"] = encrypt_sc_status;
    }

    if(decrypt_sc_status != nullptr)
    {
        _children["decrypt-sc-status"] = decrypt_sc_status;
    }

    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replay-window-size")
    {
        replay_window_size = value;
        replay_window_size.value_namespace = name_space;
        replay_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "must-secure")
    {
        must_secure = value;
        must_secure.value_namespace = name_space;
        must_secure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
        secure_mode.value_namespace = name_space;
        secure_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replay-window-size")
    {
        replay_window_size.yfilter = yfilter;
    }
    if(value_path == "must-secure")
    {
        must_secure.yfilter = yfilter;
    }
    if(value_path == "secure-mode")
    {
        secure_mode.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt-sc-status" || name == "decrypt-sc-status" || name == "replay-window-size" || name == "must-secure" || name == "secure-mode")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::EncryptScStatus()
    :
    protection_enabled{YType::boolean, "protection-enabled"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    initial_packet_number{YType::uint64, "initial-packet-number"},
    secure_tag_length{YType::uint32, "secure-tag-length"},
    max_packet_number{YType::uint64, "max-packet-number"},
    recent_packet_number{YType::uint64, "recent-packet-number"}
        ,
    active_association(this, {})
{

    yang_name = "encrypt-sc-status"; yang_parent_name = "ncs1k-status-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::~EncryptScStatus()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return protection_enabled.is_set
	|| secure_channel_id.is_set
	|| confidentiality_offset.is_set
	|| cipher_suite.is_set
	|| initial_packet_number.is_set
	|| secure_tag_length.is_set
	|| max_packet_number.is_set
	|| recent_packet_number.is_set;
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(initial_packet_number.yfilter)
	|| ydk::is_set(secure_tag_length.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter);
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.yfilter)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (secure_tag_length.is_set || is_set(secure_tag_length.yfilter)) leaf_name_data.push_back(secure_tag_length.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        auto ent_ = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation>();
        ent_->parent = this;
        active_association.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : active_association.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
        initial_packet_number.value_namespace = name_space;
        initial_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length = value;
        secure_tag_length.value_namespace = name_space;
        secure_tag_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number.yfilter = yfilter;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "protection-enabled" || name == "secure-channel-id" || name == "confidentiality-offset" || name == "cipher-suite" || name == "initial-packet-number" || name == "secure-tag-length" || name == "max-packet-number" || name == "recent-packet-number")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    device_association_number{YType::uint8, "device-association-number"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"},
    programmed_time{YType::str, "programmed-time"},
    key_crc{YType::str, "key-crc"},
    xpn_salt{YType::str, "xpn-salt"}
{

    yang_name = "active-association"; yang_parent_name = "encrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return association_number.is_set
	|| device_association_number.is_set
	|| short_secure_channel_id.is_set
	|| programmed_time.is_set
	|| key_crc.is_set;
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::has_operation() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(device_association_number.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter)
	|| ydk::is_set(programmed_time.yfilter)
	|| ydk::is_set(key_crc.yfilter)
	|| ydk::is_set(xpn_salt.yfilter);
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (device_association_number.is_set || is_set(device_association_number.yfilter)) leaf_name_data.push_back(device_association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());
    if (programmed_time.is_set || is_set(programmed_time.yfilter)) leaf_name_data.push_back(programmed_time.get_name_leafdata());
    if (key_crc.is_set || is_set(key_crc.yfilter)) leaf_name_data.push_back(key_crc.get_name_leafdata());

    auto xpn_salt_name_datas = xpn_salt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xpn_salt_name_datas.begin(), xpn_salt_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-association-number")
    {
        device_association_number = value;
        device_association_number.value_namespace = name_space;
        device_association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-time")
    {
        programmed_time = value;
        programmed_time.value_namespace = name_space;
        programmed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-crc")
    {
        key_crc = value;
        key_crc.value_namespace = name_space;
        key_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.append(value);
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "device-association-number")
    {
        device_association_number.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "programmed-time")
    {
        programmed_time.yfilter = yfilter;
    }
    if(value_path == "key-crc")
    {
        key_crc.yfilter = yfilter;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::EncryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "device-association-number" || name == "short-secure-channel-id" || name == "programmed-time" || name == "key-crc" || name == "xpn-salt")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::DecryptScStatus()
    :
    protection_enabled{YType::boolean, "protection-enabled"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    initial_packet_number{YType::uint64, "initial-packet-number"},
    secure_tag_length{YType::uint32, "secure-tag-length"},
    max_packet_number{YType::uint64, "max-packet-number"},
    recent_packet_number{YType::uint64, "recent-packet-number"}
        ,
    active_association(this, {})
{

    yang_name = "decrypt-sc-status"; yang_parent_name = "ncs1k-status-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::~DecryptScStatus()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return protection_enabled.is_set
	|| secure_channel_id.is_set
	|| confidentiality_offset.is_set
	|| cipher_suite.is_set
	|| initial_packet_number.is_set
	|| secure_tag_length.is_set
	|| max_packet_number.is_set
	|| recent_packet_number.is_set;
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(initial_packet_number.yfilter)
	|| ydk::is_set(secure_tag_length.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter);
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.yfilter)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (secure_tag_length.is_set || is_set(secure_tag_length.yfilter)) leaf_name_data.push_back(secure_tag_length.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        auto ent_ = std::make_shared<Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation>();
        ent_->parent = this;
        active_association.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : active_association.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
        initial_packet_number.value_namespace = name_space;
        initial_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length = value;
        secure_tag_length.value_namespace = name_space;
        secure_tag_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number.yfilter = yfilter;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "protection-enabled" || name == "secure-channel-id" || name == "confidentiality-offset" || name == "cipher-suite" || name == "initial-packet-number" || name == "secure-tag-length" || name == "max-packet-number" || name == "recent-packet-number")
        return true;
    return false;
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    device_association_number{YType::uint8, "device-association-number"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"},
    programmed_time{YType::str, "programmed-time"},
    key_crc{YType::str, "key-crc"},
    xpn_salt{YType::str, "xpn-salt"}
{

    yang_name = "active-association"; yang_parent_name = "decrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return association_number.is_set
	|| device_association_number.is_set
	|| short_secure_channel_id.is_set
	|| programmed_time.is_set
	|| key_crc.is_set;
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::has_operation() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(device_association_number.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter)
	|| ydk::is_set(programmed_time.yfilter)
	|| ydk::is_set(key_crc.yfilter)
	|| ydk::is_set(xpn_salt.yfilter);
}

std::string Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (device_association_number.is_set || is_set(device_association_number.yfilter)) leaf_name_data.push_back(device_association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());
    if (programmed_time.is_set || is_set(programmed_time.yfilter)) leaf_name_data.push_back(programmed_time.get_name_leafdata());
    if (key_crc.is_set || is_set(key_crc.yfilter)) leaf_name_data.push_back(key_crc.get_name_leafdata());

    auto xpn_salt_name_datas = xpn_salt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xpn_salt_name_datas.begin(), xpn_salt_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-association-number")
    {
        device_association_number = value;
        device_association_number.value_namespace = name_space;
        device_association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-time")
    {
        programmed_time = value;
        programmed_time.value_namespace = name_space;
        programmed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-crc")
    {
        key_crc = value;
        key_crc.value_namespace = name_space;
        key_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.append(value);
    }
}

void Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "device-association-number")
    {
        device_association_number.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "programmed-time")
    {
        programmed_time.yfilter = yfilter;
    }
    if(value_path == "key-crc")
    {
        key_crc.yfilter = yfilter;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.yfilter = yfilter;
    }
}

bool Ncs1kMacsecOper::Ncs1kMacsecCtrlrNames::Ncs1kMacsecCtrlrName::Ncs1kStatusInfo::DecryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "device-association-number" || name == "short-secure-channel-id" || name == "programmed-time" || name == "key-crc" || name == "xpn-salt")
        return true;
    return false;
}

const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_256 {0, "gcm-aes-256"};
const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_xpn_256 {2, "gcm-aes-xpn-256"};


}
}

