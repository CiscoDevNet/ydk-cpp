
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_remote_attestation_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_remote_attestation_act {

GetCertificate::GetCertificate()
    :
    input(std::make_shared<GetCertificate::Input>())
    , output(std::make_shared<GetCertificate::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-certificate"; yang_parent_name = "Cisco-IOS-XR-remote-attestation-act"; is_top_level_class = true; has_list_ancestor = false; 
}

GetCertificate::~GetCertificate()
{
}

bool GetCertificate::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetCertificate::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetCertificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetCertificate::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetCertificate::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void GetCertificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetCertificate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> GetCertificate::clone_ptr() const
{
    return std::make_shared<GetCertificate>();
}

std::string GetCertificate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GetCertificate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GetCertificate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetCertificate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GetCertificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetCertificate::Input::Input()
    :
    nonce{YType::str, "nonce"},
    certificate_identifier{YType::str, "certificate-identifier"},
    location{YType::str, "location"}
{

    yang_name = "input"; yang_parent_name = "get-certificate"; is_top_level_class = false; has_list_ancestor = false; 
}

GetCertificate::Input::~Input()
{
}

bool GetCertificate::Input::has_data() const
{
    if (is_presence_container) return true;
    return nonce.is_set
	|| certificate_identifier.is_set
	|| location.is_set;
}

bool GetCertificate::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(certificate_identifier.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string GetCertificate::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string GetCertificate::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (certificate_identifier.is_set || is_set(certificate_identifier.yfilter)) leaf_name_data.push_back(certificate_identifier.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetCertificate::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate-identifier")
    {
        certificate_identifier = value;
        certificate_identifier.value_namespace = name_space;
        certificate_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void GetCertificate::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "certificate-identifier")
    {
        certificate_identifier.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool GetCertificate::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nonce" || name == "certificate-identifier" || name == "location")
        return true;
    return false;
}

GetCertificate::Output::Output()
    :
    get_certificate_response(std::make_shared<GetCertificate::Output::GetCertificateResponse>())
{
    get_certificate_response->parent = this;

    yang_name = "output"; yang_parent_name = "get-certificate"; is_top_level_class = false; has_list_ancestor = false; 
}

GetCertificate::Output::~Output()
{
}

bool GetCertificate::Output::has_data() const
{
    if (is_presence_container) return true;
    return (get_certificate_response !=  nullptr && get_certificate_response->has_data());
}

bool GetCertificate::Output::has_operation() const
{
    return is_set(yfilter)
	|| (get_certificate_response !=  nullptr && get_certificate_response->has_operation());
}

std::string GetCertificate::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string GetCertificate::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get-certificate-response")
    {
        if(get_certificate_response == nullptr)
        {
            get_certificate_response = std::make_shared<GetCertificate::Output::GetCertificateResponse>();
        }
        return get_certificate_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(get_certificate_response != nullptr)
    {
        _children["get-certificate-response"] = get_certificate_response;
    }

    return _children;
}

void GetCertificate::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetCertificate::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetCertificate::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "get-certificate-response")
        return true;
    return false;
}

GetCertificate::Output::GetCertificateResponse::GetCertificateResponse()
    :
    system_certificates(this, {"node_location"})
{

    yang_name = "get-certificate-response"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

GetCertificate::Output::GetCertificateResponse::~GetCertificateResponse()
{
}

bool GetCertificate::Output::GetCertificateResponse::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<system_certificates.len(); index++)
    {
        if(system_certificates[index]->has_data())
            return true;
    }
    return false;
}

bool GetCertificate::Output::GetCertificateResponse::has_operation() const
{
    for (std::size_t index=0; index<system_certificates.len(); index++)
    {
        if(system_certificates[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GetCertificate::Output::GetCertificateResponse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-certificate/output/" << get_segment_path();
    return path_buffer.str();
}

std::string GetCertificate::Output::GetCertificateResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get-certificate-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Output::GetCertificateResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Output::GetCertificateResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-certificates")
    {
        auto ent_ = std::make_shared<GetCertificate::Output::GetCertificateResponse::SystemCertificates>();
        ent_->parent = this;
        system_certificates.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Output::GetCertificateResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : system_certificates.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetCertificate::Output::GetCertificateResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetCertificate::Output::GetCertificateResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetCertificate::Output::GetCertificateResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-certificates")
        return true;
    return false;
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::SystemCertificates()
    :
    node_location{YType::str, "node-location"},
    nonce{YType::str, "nonce"},
    signature_version{YType::uint32, "signature_version"},
    signature{YType::str, "signature"}
        ,
    certificates(std::make_shared<GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates>())
{
    certificates->parent = this;

    yang_name = "system-certificates"; yang_parent_name = "get-certificate-response"; is_top_level_class = false; has_list_ancestor = false; 
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::~SystemCertificates()
{
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::has_data() const
{
    if (is_presence_container) return true;
    return node_location.is_set
	|| nonce.is_set
	|| signature_version.is_set
	|| signature.is_set
	|| (certificates !=  nullptr && certificates->has_data());
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(signature_version.yfilter)
	|| ydk::is_set(signature.yfilter)
	|| (certificates !=  nullptr && certificates->has_operation());
}

std::string GetCertificate::Output::GetCertificateResponse::SystemCertificates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-certificate/output/get-certificate-response/" << get_segment_path();
    return path_buffer.str();
}

std::string GetCertificate::Output::GetCertificateResponse::SystemCertificates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-certificates";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Output::GetCertificateResponse::SystemCertificates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (signature_version.is_set || is_set(signature_version.yfilter)) leaf_name_data.push_back(signature_version.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Output::GetCertificateResponse::SystemCertificates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificates")
    {
        if(certificates == nullptr)
        {
            certificates = std::make_shared<GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates>();
        }
        return certificates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Output::GetCertificateResponse::SystemCertificates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(certificates != nullptr)
    {
        _children["certificates"] = certificates;
    }

    return _children;
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature_version")
    {
        signature_version = value;
        signature_version.value_namespace = name_space;
        signature_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "signature_version")
    {
        signature_version.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificates" || name == "node-location" || name == "nonce" || name == "signature_version" || name == "signature")
        return true;
    return false;
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificates()
    :
    certificate(this, {"name"})
{

    yang_name = "certificates"; yang_parent_name = "system-certificates"; is_top_level_class = false; has_list_ancestor = true; 
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::~Certificates()
{
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<certificate.len(); index++)
    {
        if(certificate[index]->has_data())
            return true;
    }
    return false;
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::has_operation() const
{
    for (std::size_t index=0; index<certificate.len(); index++)
    {
        if(certificate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        auto ent_ = std::make_shared<GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate>();
        ent_->parent = this;
        certificate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : certificate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate")
        return true;
    return false;
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::Certificate()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{

    yang_name = "certificate"; yang_parent_name = "certificates"; is_top_level_class = false; has_list_ancestor = true; 
}

GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::~Certificate()
{
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| value_.is_set;
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value")
        return true;
    return false;
}

AttestPlatformConfigRegisters::AttestPlatformConfigRegisters()
    :
    input(std::make_shared<AttestPlatformConfigRegisters::Input>())
    , output(std::make_shared<AttestPlatformConfigRegisters::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "attest-platform-config-registers"; yang_parent_name = "Cisco-IOS-XR-remote-attestation-act"; is_top_level_class = true; has_list_ancestor = false; 
}

AttestPlatformConfigRegisters::~AttestPlatformConfigRegisters()
{
}

bool AttestPlatformConfigRegisters::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool AttestPlatformConfigRegisters::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string AttestPlatformConfigRegisters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:attest-platform-config-registers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<AttestPlatformConfigRegisters::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<AttestPlatformConfigRegisters::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void AttestPlatformConfigRegisters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AttestPlatformConfigRegisters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::clone_ptr() const
{
    return std::make_shared<AttestPlatformConfigRegisters>();
}

std::string AttestPlatformConfigRegisters::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AttestPlatformConfigRegisters::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AttestPlatformConfigRegisters::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AttestPlatformConfigRegisters::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AttestPlatformConfigRegisters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

AttestPlatformConfigRegisters::Input::Input()
    :
    pcr_index{YType::uint16, "pcr-index"},
    nonce{YType::str, "nonce"},
    attestation_certificate_identifier{YType::str, "attestation-certificate-identifier"},
    location{YType::str, "location"}
{

    yang_name = "input"; yang_parent_name = "attest-platform-config-registers"; is_top_level_class = false; has_list_ancestor = false; 
}

AttestPlatformConfigRegisters::Input::~Input()
{
}

bool AttestPlatformConfigRegisters::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : pcr_index.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return nonce.is_set
	|| attestation_certificate_identifier.is_set
	|| location.is_set;
}

bool AttestPlatformConfigRegisters::Input::has_operation() const
{
    for (auto const & leaf : pcr_index.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pcr_index.yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(attestation_certificate_identifier.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string AttestPlatformConfigRegisters::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:attest-platform-config-registers/" << get_segment_path();
    return path_buffer.str();
}

std::string AttestPlatformConfigRegisters::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (attestation_certificate_identifier.is_set || is_set(attestation_certificate_identifier.yfilter)) leaf_name_data.push_back(attestation_certificate_identifier.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    auto pcr_index_name_datas = pcr_index.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pcr_index_name_datas.begin(), pcr_index_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AttestPlatformConfigRegisters::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcr-index")
    {
        pcr_index.append(value);
    }
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attestation-certificate-identifier")
    {
        attestation_certificate_identifier = value;
        attestation_certificate_identifier.value_namespace = name_space;
        attestation_certificate_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void AttestPlatformConfigRegisters::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcr-index")
    {
        pcr_index.yfilter = yfilter;
    }
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "attestation-certificate-identifier")
    {
        attestation_certificate_identifier.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool AttestPlatformConfigRegisters::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcr-index" || name == "nonce" || name == "attestation-certificate-identifier" || name == "location")
        return true;
    return false;
}

AttestPlatformConfigRegisters::Output::Output()
    :
    platform_config_registers(std::make_shared<AttestPlatformConfigRegisters::Output::PlatformConfigRegisters>())
{
    platform_config_registers->parent = this;

    yang_name = "output"; yang_parent_name = "attest-platform-config-registers"; is_top_level_class = false; has_list_ancestor = false; 
}

AttestPlatformConfigRegisters::Output::~Output()
{
}

bool AttestPlatformConfigRegisters::Output::has_data() const
{
    if (is_presence_container) return true;
    return (platform_config_registers !=  nullptr && platform_config_registers->has_data());
}

bool AttestPlatformConfigRegisters::Output::has_operation() const
{
    return is_set(yfilter)
	|| (platform_config_registers !=  nullptr && platform_config_registers->has_operation());
}

std::string AttestPlatformConfigRegisters::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:attest-platform-config-registers/" << get_segment_path();
    return path_buffer.str();
}

std::string AttestPlatformConfigRegisters::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "platform-config-registers")
    {
        if(platform_config_registers == nullptr)
        {
            platform_config_registers = std::make_shared<AttestPlatformConfigRegisters::Output::PlatformConfigRegisters>();
        }
        return platform_config_registers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(platform_config_registers != nullptr)
    {
        _children["platform-config-registers"] = platform_config_registers;
    }

    return _children;
}

void AttestPlatformConfigRegisters::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AttestPlatformConfigRegisters::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AttestPlatformConfigRegisters::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "platform-config-registers")
        return true;
    return false;
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::PlatformConfigRegisters()
    :
    nonce{YType::str, "nonce"}
        ,
    node_data(this, {"node_location"})
{

    yang_name = "platform-config-registers"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::~PlatformConfigRegisters()
{
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return nonce.is_set;
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nonce.yfilter);
}

std::string AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:attest-platform-config-registers/output/" << get_segment_path();
    return path_buffer.str();
}

std::string AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform-config-registers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto ent_ = std::make_shared<AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData>();
        ent_->parent = this;
        node_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "nonce")
        return true;
    return false;
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::NodeData()
    :
    node_location{YType::str, "node-location"},
    up_time{YType::uint32, "up-time"},
    pcr_quote{YType::str, "pcr-quote"},
    pcr_quote_signature{YType::str, "pcr-quote-signature"}
        ,
    pcr(this, {"index_"})
{

    yang_name = "node-data"; yang_parent_name = "platform-config-registers"; is_top_level_class = false; has_list_ancestor = false; 
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::~NodeData()
{
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pcr.len(); index++)
    {
        if(pcr[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| up_time.is_set
	|| pcr_quote.is_set
	|| pcr_quote_signature.is_set;
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::has_operation() const
{
    for (std::size_t index=0; index<pcr.len(); index++)
    {
        if(pcr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(pcr_quote.yfilter)
	|| ydk::is_set(pcr_quote_signature.yfilter);
}

std::string AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:attest-platform-config-registers/output/platform-config-registers/" << get_segment_path();
    return path_buffer.str();
}

std::string AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (pcr_quote.is_set || is_set(pcr_quote.yfilter)) leaf_name_data.push_back(pcr_quote.get_name_leafdata());
    if (pcr_quote_signature.is_set || is_set(pcr_quote_signature.yfilter)) leaf_name_data.push_back(pcr_quote_signature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PCR")
    {
        auto ent_ = std::make_shared<AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR>();
        ent_->parent = this;
        pcr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pcr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcr-quote")
    {
        pcr_quote = value;
        pcr_quote.value_namespace = name_space;
        pcr_quote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcr-quote-signature")
    {
        pcr_quote_signature = value;
        pcr_quote_signature.value_namespace = name_space;
        pcr_quote_signature.value_namespace_prefix = name_space_prefix;
    }
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "pcr-quote")
    {
        pcr_quote.yfilter = yfilter;
    }
    if(value_path == "pcr-quote-signature")
    {
        pcr_quote_signature.yfilter = yfilter;
    }
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PCR" || name == "node-location" || name == "up-time" || name == "pcr-quote" || name == "pcr-quote-signature")
        return true;
    return false;
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::PCR()
    :
    index_{YType::uint16, "index"},
    value_{YType::uint8, "value"}
{

    yang_name = "PCR"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::~PCR()
{
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PCR";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "value")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::GetPlatformBootIntegrityEventLogs()
    :
    input(std::make_shared<GetPlatformBootIntegrityEventLogs::Input>())
    , output(std::make_shared<GetPlatformBootIntegrityEventLogs::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-platform-boot-integrity-event-logs"; yang_parent_name = "Cisco-IOS-XR-remote-attestation-act"; is_top_level_class = true; has_list_ancestor = false; 
}

GetPlatformBootIntegrityEventLogs::~GetPlatformBootIntegrityEventLogs()
{
}

bool GetPlatformBootIntegrityEventLogs::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetPlatformBootIntegrityEventLogs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetPlatformBootIntegrityEventLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-boot-integrity-event-logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetPlatformBootIntegrityEventLogs::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetPlatformBootIntegrityEventLogs::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void GetPlatformBootIntegrityEventLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformBootIntegrityEventLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::clone_ptr() const
{
    return std::make_shared<GetPlatformBootIntegrityEventLogs>();
}

std::string GetPlatformBootIntegrityEventLogs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GetPlatformBootIntegrityEventLogs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GetPlatformBootIntegrityEventLogs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetPlatformBootIntegrityEventLogs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GetPlatformBootIntegrityEventLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Input::Input()
    :
    location{YType::str, "location"},
    start_event_number{YType::uint64, "start-event-number"},
    end_event_number{YType::uint64, "end-event-number"}
{

    yang_name = "input"; yang_parent_name = "get-platform-boot-integrity-event-logs"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformBootIntegrityEventLogs::Input::~Input()
{
}

bool GetPlatformBootIntegrityEventLogs::Input::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| start_event_number.is_set
	|| end_event_number.is_set;
}

bool GetPlatformBootIntegrityEventLogs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(start_event_number.yfilter)
	|| ydk::is_set(end_event_number.yfilter);
}

std::string GetPlatformBootIntegrityEventLogs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-boot-integrity-event-logs/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformBootIntegrityEventLogs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (start_event_number.is_set || is_set(start_event_number.yfilter)) leaf_name_data.push_back(start_event_number.get_name_leafdata());
    if (end_event_number.is_set || is_set(end_event_number.yfilter)) leaf_name_data.push_back(end_event_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetPlatformBootIntegrityEventLogs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-event-number")
    {
        start_event_number = value;
        start_event_number.value_namespace = name_space;
        start_event_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-event-number")
    {
        end_event_number = value;
        end_event_number.value_namespace = name_space;
        end_event_number.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformBootIntegrityEventLogs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "start-event-number")
    {
        start_event_number.yfilter = yfilter;
    }
    if(value_path == "end-event-number")
    {
        end_event_number.yfilter = yfilter;
    }
}

bool GetPlatformBootIntegrityEventLogs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "start-event-number" || name == "end-event-number")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Output::Output()
    :
    system_boot_integrity(std::make_shared<GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity>())
{
    system_boot_integrity->parent = this;

    yang_name = "output"; yang_parent_name = "get-platform-boot-integrity-event-logs"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformBootIntegrityEventLogs::Output::~Output()
{
}

bool GetPlatformBootIntegrityEventLogs::Output::has_data() const
{
    if (is_presence_container) return true;
    return (system_boot_integrity !=  nullptr && system_boot_integrity->has_data());
}

bool GetPlatformBootIntegrityEventLogs::Output::has_operation() const
{
    return is_set(yfilter)
	|| (system_boot_integrity !=  nullptr && system_boot_integrity->has_operation());
}

std::string GetPlatformBootIntegrityEventLogs::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-boot-integrity-event-logs/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformBootIntegrityEventLogs::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-boot-integrity")
    {
        if(system_boot_integrity == nullptr)
        {
            system_boot_integrity = std::make_shared<GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity>();
        }
        return system_boot_integrity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_boot_integrity != nullptr)
    {
        _children["system-boot-integrity"] = system_boot_integrity;
    }

    return _children;
}

void GetPlatformBootIntegrityEventLogs::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformBootIntegrityEventLogs::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetPlatformBootIntegrityEventLogs::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-boot-integrity")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::SystemBootIntegrity()
    :
    node_data(this, {"node_location"})
{

    yang_name = "system-boot-integrity"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::~SystemBootIntegrity()
{
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return false;
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-boot-integrity-event-logs/output/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-boot-integrity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto ent_ = std::make_shared<GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData>();
        ent_->parent = this;
        node_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::NodeData()
    :
    node_location{YType::str, "node-location"},
    up_time{YType::uint32, "up-time"}
        ,
    event_log(this, {"event_number"})
{

    yang_name = "node-data"; yang_parent_name = "system-boot-integrity"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::~NodeData()
{
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_log.len(); index++)
    {
        if(event_log[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| up_time.is_set;
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::has_operation() const
{
    for (std::size_t index=0; index<event_log.len(); index++)
    {
        if(event_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(up_time.yfilter);
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-boot-integrity-event-logs/output/system-boot-integrity/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event_log")
    {
        auto ent_ = std::make_shared<GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog>();
        ent_->parent = this;
        event_log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event_log" || name == "node-location" || name == "up-time")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::EventLog()
    :
    event_number{YType::uint32, "event-number"},
    event_type{YType::uint32, "event-type"},
    pcr_index{YType::uint16, "pcr-index"},
    event_size{YType::uint32, "event-size"},
    event_data{YType::str, "event-data"}
        ,
    digest_list(this, {"digest_hash_algorithm"})
{

    yang_name = "event_log"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::~EventLog()
{
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<digest_list.len(); index++)
    {
        if(digest_list[index]->has_data())
            return true;
    }
    return event_number.is_set
	|| event_type.is_set
	|| pcr_index.is_set
	|| event_size.is_set
	|| event_data.is_set;
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::has_operation() const
{
    for (std::size_t index=0; index<digest_list.len(); index++)
    {
        if(digest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_number.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(pcr_index.yfilter)
	|| ydk::is_set(event_size.yfilter)
	|| ydk::is_set(event_data.yfilter);
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event_log";
    ADD_KEY_TOKEN(event_number, "event-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_number.is_set || is_set(event_number.yfilter)) leaf_name_data.push_back(event_number.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (pcr_index.is_set || is_set(pcr_index.yfilter)) leaf_name_data.push_back(pcr_index.get_name_leafdata());
    if (event_size.is_set || is_set(event_size.yfilter)) leaf_name_data.push_back(event_size.get_name_leafdata());
    if (event_data.is_set || is_set(event_data.yfilter)) leaf_name_data.push_back(event_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "digest-list")
    {
        auto ent_ = std::make_shared<GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList>();
        ent_->parent = this;
        digest_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : digest_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-number")
    {
        event_number = value;
        event_number.value_namespace = name_space;
        event_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcr-index")
    {
        pcr_index = value;
        pcr_index.value_namespace = name_space;
        pcr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-size")
    {
        event_size = value;
        event_size.value_namespace = name_space;
        event_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-data")
    {
        event_data = value;
        event_data.value_namespace = name_space;
        event_data.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-number")
    {
        event_number.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "pcr-index")
    {
        pcr_index.yfilter = yfilter;
    }
    if(value_path == "event-size")
    {
        event_size.yfilter = yfilter;
    }
    if(value_path == "event-data")
    {
        event_data.yfilter = yfilter;
    }
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "digest-list" || name == "event-number" || name == "event-type" || name == "pcr-index" || name == "event-size" || name == "event-data")
        return true;
    return false;
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestList()
    :
    digest_hash_algorithm{YType::enumeration, "digest-hash-algorithm"},
    digest{YType::str, "digest"}
{

    yang_name = "digest-list"; yang_parent_name = "event_log"; is_top_level_class = false; has_list_ancestor = true; 
}

GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::~DigestList()
{
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::has_data() const
{
    if (is_presence_container) return true;
    return digest_hash_algorithm.is_set
	|| digest.is_set;
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(digest_hash_algorithm.yfilter)
	|| ydk::is_set(digest.yfilter);
}

std::string GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "digest-list";
    ADD_KEY_TOKEN(digest_hash_algorithm, "digest-hash-algorithm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (digest_hash_algorithm.is_set || is_set(digest_hash_algorithm.yfilter)) leaf_name_data.push_back(digest_hash_algorithm.get_name_leafdata());
    if (digest.is_set || is_set(digest.yfilter)) leaf_name_data.push_back(digest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "digest-hash-algorithm")
    {
        digest_hash_algorithm = value;
        digest_hash_algorithm.value_namespace = name_space;
        digest_hash_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "digest")
    {
        digest = value;
        digest.value_namespace = name_space;
        digest.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "digest-hash-algorithm")
    {
        digest_hash_algorithm.yfilter = yfilter;
    }
    if(value_path == "digest")
    {
        digest.yfilter = yfilter;
    }
}

bool GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "digest-hash-algorithm" || name == "digest")
        return true;
    return false;
}

GetPlatformImaEventLogs::GetPlatformImaEventLogs()
    :
    input(std::make_shared<GetPlatformImaEventLogs::Input>())
    , output(std::make_shared<GetPlatformImaEventLogs::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "get-platform-ima-event-logs"; yang_parent_name = "Cisco-IOS-XR-remote-attestation-act"; is_top_level_class = true; has_list_ancestor = false; 
}

GetPlatformImaEventLogs::~GetPlatformImaEventLogs()
{
}

bool GetPlatformImaEventLogs::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetPlatformImaEventLogs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetPlatformImaEventLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-ima-event-logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetPlatformImaEventLogs::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetPlatformImaEventLogs::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void GetPlatformImaEventLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformImaEventLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::clone_ptr() const
{
    return std::make_shared<GetPlatformImaEventLogs>();
}

std::string GetPlatformImaEventLogs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GetPlatformImaEventLogs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GetPlatformImaEventLogs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GetPlatformImaEventLogs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GetPlatformImaEventLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

GetPlatformImaEventLogs::Input::Input()
    :
    location{YType::str, "location"},
    start_event_number{YType::uint64, "start-event-number"},
    end_event_number{YType::uint64, "end-event-number"}
{

    yang_name = "input"; yang_parent_name = "get-platform-ima-event-logs"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformImaEventLogs::Input::~Input()
{
}

bool GetPlatformImaEventLogs::Input::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| start_event_number.is_set
	|| end_event_number.is_set;
}

bool GetPlatformImaEventLogs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(start_event_number.yfilter)
	|| ydk::is_set(end_event_number.yfilter);
}

std::string GetPlatformImaEventLogs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-ima-event-logs/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformImaEventLogs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (start_event_number.is_set || is_set(start_event_number.yfilter)) leaf_name_data.push_back(start_event_number.get_name_leafdata());
    if (end_event_number.is_set || is_set(end_event_number.yfilter)) leaf_name_data.push_back(end_event_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetPlatformImaEventLogs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-event-number")
    {
        start_event_number = value;
        start_event_number.value_namespace = name_space;
        start_event_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-event-number")
    {
        end_event_number = value;
        end_event_number.value_namespace = name_space;
        end_event_number.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformImaEventLogs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "start-event-number")
    {
        start_event_number.yfilter = yfilter;
    }
    if(value_path == "end-event-number")
    {
        end_event_number.yfilter = yfilter;
    }
}

bool GetPlatformImaEventLogs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "start-event-number" || name == "end-event-number")
        return true;
    return false;
}

GetPlatformImaEventLogs::Output::Output()
    :
    system_ima(std::make_shared<GetPlatformImaEventLogs::Output::SystemIma>())
{
    system_ima->parent = this;

    yang_name = "output"; yang_parent_name = "get-platform-ima-event-logs"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformImaEventLogs::Output::~Output()
{
}

bool GetPlatformImaEventLogs::Output::has_data() const
{
    if (is_presence_container) return true;
    return (system_ima !=  nullptr && system_ima->has_data());
}

bool GetPlatformImaEventLogs::Output::has_operation() const
{
    return is_set(yfilter)
	|| (system_ima !=  nullptr && system_ima->has_operation());
}

std::string GetPlatformImaEventLogs::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-ima-event-logs/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformImaEventLogs::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-ima")
    {
        if(system_ima == nullptr)
        {
            system_ima = std::make_shared<GetPlatformImaEventLogs::Output::SystemIma>();
        }
        return system_ima;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system_ima != nullptr)
    {
        _children["system-ima"] = system_ima;
    }

    return _children;
}

void GetPlatformImaEventLogs::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformImaEventLogs::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetPlatformImaEventLogs::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-ima")
        return true;
    return false;
}

GetPlatformImaEventLogs::Output::SystemIma::SystemIma()
    :
    node_data(this, {"node_location"})
{

    yang_name = "system-ima"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformImaEventLogs::Output::SystemIma::~SystemIma()
{
}

bool GetPlatformImaEventLogs::Output::SystemIma::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return false;
}

bool GetPlatformImaEventLogs::Output::SystemIma::has_operation() const
{
    for (std::size_t index=0; index<node_data.len(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GetPlatformImaEventLogs::Output::SystemIma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-ima-event-logs/output/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformImaEventLogs::Output::SystemIma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-ima";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::Output::SystemIma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::Output::SystemIma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        auto ent_ = std::make_shared<GetPlatformImaEventLogs::Output::SystemIma::NodeData>();
        ent_->parent = this;
        node_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::Output::SystemIma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetPlatformImaEventLogs::Output::SystemIma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GetPlatformImaEventLogs::Output::SystemIma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GetPlatformImaEventLogs::Output::SystemIma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data")
        return true;
    return false;
}

GetPlatformImaEventLogs::Output::SystemIma::NodeData::NodeData()
    :
    node_location{YType::str, "node-location"},
    up_time{YType::uint32, "up-time"}
        ,
    ima_event_log(this, {"event_number"})
{

    yang_name = "node-data"; yang_parent_name = "system-ima"; is_top_level_class = false; has_list_ancestor = false; 
}

GetPlatformImaEventLogs::Output::SystemIma::NodeData::~NodeData()
{
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ima_event_log.len(); index++)
    {
        if(ima_event_log[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| up_time.is_set;
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::has_operation() const
{
    for (std::size_t index=0; index<ima_event_log.len(); index++)
    {
        if(ima_event_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(up_time.yfilter);
}

std::string GetPlatformImaEventLogs::Output::SystemIma::NodeData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-remote-attestation-act:get-platform-ima-event-logs/output/system-ima/" << get_segment_path();
    return path_buffer.str();
}

std::string GetPlatformImaEventLogs::Output::SystemIma::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::Output::SystemIma::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::Output::SystemIma::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ima-event-log")
    {
        auto ent_ = std::make_shared<GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog>();
        ent_->parent = this;
        ima_event_log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::Output::SystemIma::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ima_event_log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void GetPlatformImaEventLogs::Output::SystemIma::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformImaEventLogs::Output::SystemIma::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ima-event-log" || name == "node-location" || name == "up-time")
        return true;
    return false;
}

GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::ImaEventLog()
    :
    event_number{YType::uint64, "event-number"},
    ima_template{YType::str, "ima-template"},
    filename_hint{YType::str, "filename-hint"},
    filedata_hash{YType::str, "filedata-hash"},
    template_hash_algorithm{YType::str, "template-hash-algorithm"},
    template_hash{YType::str, "template-hash"},
    pcr_index{YType::uint16, "pcr-index"},
    signature{YType::str, "signature"}
{

    yang_name = "ima-event-log"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true; 
}

GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::~ImaEventLog()
{
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::has_data() const
{
    if (is_presence_container) return true;
    return event_number.is_set
	|| ima_template.is_set
	|| filename_hint.is_set
	|| filedata_hash.is_set
	|| template_hash_algorithm.is_set
	|| template_hash.is_set
	|| pcr_index.is_set
	|| signature.is_set;
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_number.yfilter)
	|| ydk::is_set(ima_template.yfilter)
	|| ydk::is_set(filename_hint.yfilter)
	|| ydk::is_set(filedata_hash.yfilter)
	|| ydk::is_set(template_hash_algorithm.yfilter)
	|| ydk::is_set(template_hash.yfilter)
	|| ydk::is_set(pcr_index.yfilter)
	|| ydk::is_set(signature.yfilter);
}

std::string GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-event-log";
    ADD_KEY_TOKEN(event_number, "event-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_number.is_set || is_set(event_number.yfilter)) leaf_name_data.push_back(event_number.get_name_leafdata());
    if (ima_template.is_set || is_set(ima_template.yfilter)) leaf_name_data.push_back(ima_template.get_name_leafdata());
    if (filename_hint.is_set || is_set(filename_hint.yfilter)) leaf_name_data.push_back(filename_hint.get_name_leafdata());
    if (filedata_hash.is_set || is_set(filedata_hash.yfilter)) leaf_name_data.push_back(filedata_hash.get_name_leafdata());
    if (template_hash_algorithm.is_set || is_set(template_hash_algorithm.yfilter)) leaf_name_data.push_back(template_hash_algorithm.get_name_leafdata());
    if (template_hash.is_set || is_set(template_hash.yfilter)) leaf_name_data.push_back(template_hash.get_name_leafdata());
    if (pcr_index.is_set || is_set(pcr_index.yfilter)) leaf_name_data.push_back(pcr_index.get_name_leafdata());
    if (signature.is_set || is_set(signature.yfilter)) leaf_name_data.push_back(signature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-number")
    {
        event_number = value;
        event_number.value_namespace = name_space;
        event_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-template")
    {
        ima_template = value;
        ima_template.value_namespace = name_space;
        ima_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename-hint")
    {
        filename_hint = value;
        filename_hint.value_namespace = name_space;
        filename_hint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filedata-hash")
    {
        filedata_hash = value;
        filedata_hash.value_namespace = name_space;
        filedata_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-hash-algorithm")
    {
        template_hash_algorithm = value;
        template_hash_algorithm.value_namespace = name_space;
        template_hash_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-hash")
    {
        template_hash = value;
        template_hash.value_namespace = name_space;
        template_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcr-index")
    {
        pcr_index = value;
        pcr_index.value_namespace = name_space;
        pcr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signature")
    {
        signature = value;
        signature.value_namespace = name_space;
        signature.value_namespace_prefix = name_space_prefix;
    }
}

void GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-number")
    {
        event_number.yfilter = yfilter;
    }
    if(value_path == "ima-template")
    {
        ima_template.yfilter = yfilter;
    }
    if(value_path == "filename-hint")
    {
        filename_hint.yfilter = yfilter;
    }
    if(value_path == "filedata-hash")
    {
        filedata_hash.yfilter = yfilter;
    }
    if(value_path == "template-hash-algorithm")
    {
        template_hash_algorithm.yfilter = yfilter;
    }
    if(value_path == "template-hash")
    {
        template_hash.yfilter = yfilter;
    }
    if(value_path == "pcr-index")
    {
        pcr_index.yfilter = yfilter;
    }
    if(value_path == "signature")
    {
        signature.yfilter = yfilter;
    }
}

bool GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-number" || name == "ima-template" || name == "filename-hint" || name == "filedata-hash" || name == "template-hash-algorithm" || name == "template-hash" || name == "pcr-index" || name == "signature")
        return true;
    return false;
}

const Enum::YLeaf GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestHashAlgorithm::SHA1 {0, "SHA1"};
const Enum::YLeaf GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestHashAlgorithm::SHA256 {1, "SHA256"};
const Enum::YLeaf GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestHashAlgorithm::SHA384 {2, "SHA384"};
const Enum::YLeaf GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestHashAlgorithm::SHA512 {3, "SHA512"};


}
}

