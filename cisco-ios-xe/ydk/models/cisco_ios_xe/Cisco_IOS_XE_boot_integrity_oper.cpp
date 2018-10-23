
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_boot_integrity_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_boot_integrity_oper {

BootIntegrityOperData::BootIntegrityOperData()
    :
    boot_integrity(nullptr) // presence node
    , sudi_certificate(nullptr) // presence node
{

    yang_name = "boot-integrity-oper-data"; yang_parent_name = "Cisco-IOS-XE-boot-integrity-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

BootIntegrityOperData::~BootIntegrityOperData()
{
}

bool BootIntegrityOperData::has_data() const
{
    if (is_presence_container) return true;
    return (boot_integrity !=  nullptr && boot_integrity->has_data())
	|| (sudi_certificate !=  nullptr && sudi_certificate->has_data());
}

bool BootIntegrityOperData::has_operation() const
{
    return is_set(yfilter)
	|| (boot_integrity !=  nullptr && boot_integrity->has_operation())
	|| (sudi_certificate !=  nullptr && sudi_certificate->has_operation());
}

std::string BootIntegrityOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-boot-integrity-oper:boot-integrity-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootIntegrityOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-integrity")
    {
        if(boot_integrity == nullptr)
        {
            boot_integrity = std::make_shared<BootIntegrityOperData::BootIntegrity>();
        }
        return boot_integrity;
    }

    if(child_yang_name == "sudi-certificate")
    {
        if(sudi_certificate == nullptr)
        {
            sudi_certificate = std::make_shared<BootIntegrityOperData::SudiCertificate>();
        }
        return sudi_certificate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootIntegrityOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(boot_integrity != nullptr)
    {
        _children["boot-integrity"] = boot_integrity;
    }

    if(sudi_certificate != nullptr)
    {
        _children["sudi-certificate"] = sudi_certificate;
    }

    return _children;
}

void BootIntegrityOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BootIntegrityOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::clone_ptr() const
{
    return std::make_shared<BootIntegrityOperData>();
}

std::string BootIntegrityOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BootIntegrityOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BootIntegrityOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BootIntegrityOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BootIntegrityOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-integrity" || name == "sudi-certificate")
        return true;
    return false;
}

BootIntegrityOperData::BootIntegrity::BootIntegrity()
    :
    platform{YType::str, "platform"},
    boot_ver{YType::str, "boot-ver"},
    boot_loader_ver{YType::str, "boot-loader-ver"},
    os_version{YType::str, "os-version"},
    boot_hash{YType::str, "boot-hash"},
    boot_loader_hash{YType::str, "boot-loader-hash"},
    os_hash{YType::str, "os-hash"},
    package_count{YType::uint8, "package-count"},
    signature{YType::str, "signature"},
    sig_version{YType::uint32, "sig-version"}
        ,
    pcr_register(this, {"index_"})
    , package_signature(this, {"name"})
{

    yang_name = "boot-integrity"; yang_parent_name = "boot-integrity-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

BootIntegrityOperData::BootIntegrity::~BootIntegrity()
{
}

bool BootIntegrityOperData::BootIntegrity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pcr_register.len(); index++)
    {
        if(pcr_register[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<package_signature.len(); index++)
    {
        if(package_signature[index]->has_data())
            return true;
    }
    return platform.is_set
	|| boot_ver.is_set
	|| boot_loader_ver.is_set
	|| os_version.is_set
	|| boot_hash.is_set
	|| boot_loader_hash.is_set
	|| os_hash.is_set
	|| package_count.is_set
	|| signature.is_set
	|| sig_version.is_set;
}

bool BootIntegrityOperData::BootIntegrity::has_operation() const
{
    for (std::size_t index=0; index<pcr_register.len(); index++)
    {
        if(pcr_register[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<package_signature.len(); index++)
    {
        if(package_signature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(platform.yfilter)
	|| ydk::is_set(boot_ver.yfilter)
	|| ydk::is_set(boot_loader_ver.yfilter)
	|| ydk::is_set(os_version.yfilter)
	|| ydk::is_set(boot_hash.yfilter)
	|| ydk::is_set(boot_loader_hash.yfilter)
	|| ydk::is_set(os_hash.yfilter)
	|| ydk::is_set(package_count.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| ydk::is_set(sig_version.yfilter);
}

std::string BootIntegrityOperData::BootIntegrity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-boot-integrity-oper:boot-integrity-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BootIntegrityOperData::BootIntegrity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-integrity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootIntegrityOperData::BootIntegrity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform.is_set || is_set(platform.yfilter)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (boot_ver.is_set || is_set(boot_ver.yfilter)) leaf_name_data.push_back(boot_ver.get_name_leafdata());
    if (boot_loader_ver.is_set || is_set(boot_loader_ver.yfilter)) leaf_name_data.push_back(boot_loader_ver.get_name_leafdata());
    if (os_version.is_set || is_set(os_version.yfilter)) leaf_name_data.push_back(os_version.get_name_leafdata());
    if (boot_hash.is_set || is_set(boot_hash.yfilter)) leaf_name_data.push_back(boot_hash.get_name_leafdata());
    if (boot_loader_hash.is_set || is_set(boot_loader_hash.yfilter)) leaf_name_data.push_back(boot_loader_hash.get_name_leafdata());
    if (os_hash.is_set || is_set(os_hash.yfilter)) leaf_name_data.push_back(os_hash.get_name_leafdata());
    if (package_count.is_set || is_set(package_count.yfilter)) leaf_name_data.push_back(package_count.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (sig_version.is_set || is_set(sig_version.yfilter)) leaf_name_data.push_back(sig_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::BootIntegrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcr-register")
    {
        auto ent_ = std::make_shared<BootIntegrityOperData::BootIntegrity::PcrRegister>();
        ent_->parent = this;
        pcr_register.append(ent_);
        return ent_;
    }

    if(child_yang_name == "package-signature")
    {
        auto ent_ = std::make_shared<BootIntegrityOperData::BootIntegrity::PackageSignature>();
        ent_->parent = this;
        package_signature.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootIntegrityOperData::BootIntegrity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pcr_register.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : package_signature.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BootIntegrityOperData::BootIntegrity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "platform")
    {
        platform = value;
        platform.value_namespace = name_space;
        platform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-ver")
    {
        boot_ver = value;
        boot_ver.value_namespace = name_space;
        boot_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-loader-ver")
    {
        boot_loader_ver = value;
        boot_loader_ver.value_namespace = name_space;
        boot_loader_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "os-version")
    {
        os_version = value;
        os_version.value_namespace = name_space;
        os_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-hash")
    {
        boot_hash = value;
        boot_hash.value_namespace = name_space;
        boot_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-loader-hash")
    {
        boot_loader_hash = value;
        boot_loader_hash.value_namespace = name_space;
        boot_loader_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "os-hash")
    {
        os_hash = value;
        os_hash.value_namespace = name_space;
        os_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-count")
    {
        package_count = value;
        package_count.value_namespace = name_space;
        package_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-version")
    {
        sig_version = value;
        sig_version.value_namespace = name_space;
        sig_version.value_namespace_prefix = name_space_prefix;
    }
}

void BootIntegrityOperData::BootIntegrity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "platform")
    {
        platform.yfilter = yfilter;
    }
    if(value_path == "boot-ver")
    {
        boot_ver.yfilter = yfilter;
    }
    if(value_path == "boot-loader-ver")
    {
        boot_loader_ver.yfilter = yfilter;
    }
    if(value_path == "os-version")
    {
        os_version.yfilter = yfilter;
    }
    if(value_path == "boot-hash")
    {
        boot_hash.yfilter = yfilter;
    }
    if(value_path == "boot-loader-hash")
    {
        boot_loader_hash.yfilter = yfilter;
    }
    if(value_path == "os-hash")
    {
        os_hash.yfilter = yfilter;
    }
    if(value_path == "package-count")
    {
        package_count.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
    if(value_path == "sig-version")
    {
        sig_version.yfilter = yfilter;
    }
}

bool BootIntegrityOperData::BootIntegrity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcr-register" || name == "package-signature" || name == "platform" || name == "boot-ver" || name == "boot-loader-ver" || name == "os-version" || name == "boot-hash" || name == "boot-loader-hash" || name == "os-hash" || name == "package-count" || name == "signature" || name == "sig-version")
        return true;
    return false;
}

BootIntegrityOperData::BootIntegrity::PcrRegister::PcrRegister()
    :
    index_{YType::uint8, "index"},
    pcr_content{YType::str, "pcr-content"}
{

    yang_name = "pcr-register"; yang_parent_name = "boot-integrity"; is_top_level_class = false; has_list_ancestor = false; 
}

BootIntegrityOperData::BootIntegrity::PcrRegister::~PcrRegister()
{
}

bool BootIntegrityOperData::BootIntegrity::PcrRegister::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| pcr_content.is_set;
}

bool BootIntegrityOperData::BootIntegrity::PcrRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(pcr_content.yfilter);
}

std::string BootIntegrityOperData::BootIntegrity::PcrRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-boot-integrity-oper:boot-integrity-oper-data/boot-integrity/" << get_segment_path();
    return path_buffer.str();
}

std::string BootIntegrityOperData::BootIntegrity::PcrRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr-register";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootIntegrityOperData::BootIntegrity::PcrRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (pcr_content.is_set || is_set(pcr_content.yfilter)) leaf_name_data.push_back(pcr_content.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::BootIntegrity::PcrRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootIntegrityOperData::BootIntegrity::PcrRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BootIntegrityOperData::BootIntegrity::PcrRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcr-content")
    {
        pcr_content = value;
        pcr_content.value_namespace = name_space;
        pcr_content.value_namespace_prefix = name_space_prefix;
    }
}

void BootIntegrityOperData::BootIntegrity::PcrRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "pcr-content")
    {
        pcr_content.yfilter = yfilter;
    }
}

bool BootIntegrityOperData::BootIntegrity::PcrRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "pcr-content")
        return true;
    return false;
}

BootIntegrityOperData::BootIntegrity::PackageSignature::PackageSignature()
    :
    name{YType::str, "name"},
    hash{YType::str, "hash"}
{

    yang_name = "package-signature"; yang_parent_name = "boot-integrity"; is_top_level_class = false; has_list_ancestor = false; 
}

BootIntegrityOperData::BootIntegrity::PackageSignature::~PackageSignature()
{
}

bool BootIntegrityOperData::BootIntegrity::PackageSignature::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| hash.is_set;
}

bool BootIntegrityOperData::BootIntegrity::PackageSignature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hash.yfilter);
}

std::string BootIntegrityOperData::BootIntegrity::PackageSignature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-boot-integrity-oper:boot-integrity-oper-data/boot-integrity/" << get_segment_path();
    return path_buffer.str();
}

std::string BootIntegrityOperData::BootIntegrity::PackageSignature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-signature";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootIntegrityOperData::BootIntegrity::PackageSignature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hash.is_set || is_set(hash.yfilter)) leaf_name_data.push_back(hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::BootIntegrity::PackageSignature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootIntegrityOperData::BootIntegrity::PackageSignature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BootIntegrityOperData::BootIntegrity::PackageSignature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash")
    {
        hash = value;
        hash.value_namespace = name_space;
        hash.value_namespace_prefix = name_space_prefix;
    }
}

void BootIntegrityOperData::BootIntegrity::PackageSignature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hash")
    {
        hash.yfilter = yfilter;
    }
}

bool BootIntegrityOperData::BootIntegrity::PackageSignature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "hash")
        return true;
    return false;
}

BootIntegrityOperData::SudiCertificate::SudiCertificate()
    :
    crca_pem{YType::str, "crca-pem"},
    cmca_pem{YType::str, "cmca-pem"},
    sudi_pem{YType::str, "sudi-pem"},
    sudi_signature{YType::str, "sudi-signature"}
{

    yang_name = "sudi-certificate"; yang_parent_name = "boot-integrity-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

BootIntegrityOperData::SudiCertificate::~SudiCertificate()
{
}

bool BootIntegrityOperData::SudiCertificate::has_data() const
{
    if (is_presence_container) return true;
    return crca_pem.is_set
	|| cmca_pem.is_set
	|| sudi_pem.is_set
	|| sudi_signature.is_set;
}

bool BootIntegrityOperData::SudiCertificate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crca_pem.yfilter)
	|| ydk::is_set(cmca_pem.yfilter)
	|| ydk::is_set(sudi_pem.yfilter)
	|| ydk::is_set(sudi_signature.yfilter);
}

std::string BootIntegrityOperData::SudiCertificate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-boot-integrity-oper:boot-integrity-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BootIntegrityOperData::SudiCertificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sudi-certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootIntegrityOperData::SudiCertificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crca_pem.is_set || is_set(crca_pem.yfilter)) leaf_name_data.push_back(crca_pem.get_name_leafdata());
    if (cmca_pem.is_set || is_set(cmca_pem.yfilter)) leaf_name_data.push_back(cmca_pem.get_name_leafdata());
    if (sudi_pem.is_set || is_set(sudi_pem.yfilter)) leaf_name_data.push_back(sudi_pem.get_name_leafdata());
    if (sudi_signature.is_set || is_set(sudi_signature.yfilter)) leaf_name_data.push_back(sudi_signature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BootIntegrityOperData::SudiCertificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BootIntegrityOperData::SudiCertificate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BootIntegrityOperData::SudiCertificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crca-pem")
    {
        crca_pem = value;
        crca_pem.value_namespace = name_space;
        crca_pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmca-pem")
    {
        cmca_pem = value;
        cmca_pem.value_namespace = name_space;
        cmca_pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sudi-pem")
    {
        sudi_pem = value;
        sudi_pem.value_namespace = name_space;
        sudi_pem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sudi-signature")
    {
        sudi_signature = value;
        sudi_signature.value_namespace = name_space;
        sudi_signature.value_namespace_prefix = name_space_prefix;
    }
}

void BootIntegrityOperData::SudiCertificate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crca-pem")
    {
        crca_pem.yfilter = yfilter;
    }
    if(value_path == "cmca-pem")
    {
        cmca_pem.yfilter = yfilter;
    }
    if(value_path == "sudi-pem")
    {
        sudi_pem.yfilter = yfilter;
    }
    if(value_path == "sudi-signature")
    {
        sudi_signature.yfilter = yfilter;
    }
}

bool BootIntegrityOperData::SudiCertificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crca-pem" || name == "cmca-pem" || name == "sudi-pem" || name == "sudi-signature")
        return true;
    return false;
}


}
}

