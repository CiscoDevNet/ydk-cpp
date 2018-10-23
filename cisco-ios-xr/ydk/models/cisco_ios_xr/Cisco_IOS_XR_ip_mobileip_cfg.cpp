
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_mobileip_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_mobileip_cfg {

MobileIp::MobileIp()
    :
    domains(std::make_shared<MobileIp::Domains>())
    , lmas(std::make_shared<MobileIp::Lmas>())
{
    domains->parent = this;
    lmas->parent = this;

    yang_name = "mobile-ip"; yang_parent_name = "Cisco-IOS-XR-ip-mobileip-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

MobileIp::~MobileIp()
{
}

bool MobileIp::has_data() const
{
    if (is_presence_container) return true;
    return (domains !=  nullptr && domains->has_data())
	|| (lmas !=  nullptr && lmas->has_data());
}

bool MobileIp::has_operation() const
{
    return is_set(yfilter)
	|| (domains !=  nullptr && domains->has_operation())
	|| (lmas !=  nullptr && lmas->has_operation());
}

std::string MobileIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<MobileIp::Domains>();
        }
        return domains;
    }

    if(child_yang_name == "lmas")
    {
        if(lmas == nullptr)
        {
            lmas = std::make_shared<MobileIp::Lmas>();
        }
        return lmas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domains != nullptr)
    {
        _children["domains"] = domains;
    }

    if(lmas != nullptr)
    {
        _children["lmas"] = lmas;
    }

    return _children;
}

void MobileIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MobileIp::clone_ptr() const
{
    return std::make_shared<MobileIp>();
}

std::string MobileIp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MobileIp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MobileIp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MobileIp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MobileIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domains" || name == "lmas")
        return true;
    return false;
}

MobileIp::Domains::Domains()
    :
    domain(this, {"domain_name"})
{

    yang_name = "domains"; yang_parent_name = "mobile-ip"; is_top_level_class = false; has_list_ancestor = false; 
}

MobileIp::Domains::~Domains()
{
}

bool MobileIp::Domains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Domains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string MobileIp::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<MobileIp::Domains::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Domains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Domains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Domains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

MobileIp::Domains::Domain::Domain()
    :
    domain_name{YType::str, "domain-name"},
    enable{YType::empty, "enable"}
        ,
    mags(std::make_shared<MobileIp::Domains::Domain::Mags>())
    , nais(std::make_shared<MobileIp::Domains::Domain::Nais>())
    , authenticate_option(std::make_shared<MobileIp::Domains::Domain::AuthenticateOption>())
    , lmas(std::make_shared<MobileIp::Domains::Domain::Lmas>())
{
    mags->parent = this;
    nais->parent = this;
    authenticate_option->parent = this;
    lmas->parent = this;

    yang_name = "domain"; yang_parent_name = "domains"; is_top_level_class = false; has_list_ancestor = false; 
}

MobileIp::Domains::Domain::~Domain()
{
}

bool MobileIp::Domains::Domain::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| enable.is_set
	|| (mags !=  nullptr && mags->has_data())
	|| (nais !=  nullptr && nais->has_data())
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (lmas !=  nullptr && lmas->has_data());
}

bool MobileIp::Domains::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (mags !=  nullptr && mags->has_operation())
	|| (nais !=  nullptr && nais->has_operation())
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (lmas !=  nullptr && lmas->has_operation());
}

std::string MobileIp::Domains::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/domains/" << get_segment_path();
    return path_buffer.str();
}

std::string MobileIp::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    ADD_KEY_TOKEN(domain_name, "domain-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mags")
    {
        if(mags == nullptr)
        {
            mags = std::make_shared<MobileIp::Domains::Domain::Mags>();
        }
        return mags;
    }

    if(child_yang_name == "nais")
    {
        if(nais == nullptr)
        {
            nais = std::make_shared<MobileIp::Domains::Domain::Nais>();
        }
        return nais;
    }

    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option == nullptr)
        {
            authenticate_option = std::make_shared<MobileIp::Domains::Domain::AuthenticateOption>();
        }
        return authenticate_option;
    }

    if(child_yang_name == "lmas")
    {
        if(lmas == nullptr)
        {
            lmas = std::make_shared<MobileIp::Domains::Domain::Lmas>();
        }
        return lmas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mags != nullptr)
    {
        _children["mags"] = mags;
    }

    if(nais != nullptr)
    {
        _children["nais"] = nais;
    }

    if(authenticate_option != nullptr)
    {
        _children["authenticate-option"] = authenticate_option;
    }

    if(lmas != nullptr)
    {
        _children["lmas"] = lmas;
    }

    return _children;
}

void MobileIp::Domains::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Domains::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MobileIp::Domains::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mags" || name == "nais" || name == "authenticate-option" || name == "lmas" || name == "domain-name" || name == "enable")
        return true;
    return false;
}

MobileIp::Domains::Domain::Mags::Mags()
    :
    mag(this, {"mag_name"})
{

    yang_name = "mags"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Mags::~Mags()
{
}

bool MobileIp::Domains::Domain::Mags::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mag.len(); index++)
    {
        if(mag[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Mags::has_operation() const
{
    for (std::size_t index=0; index<mag.len(); index++)
    {
        if(mag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Domains::Domain::Mags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Mags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Mags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mag")
    {
        auto ent_ = std::make_shared<MobileIp::Domains::Domain::Mags::Mag>();
        ent_->parent = this;
        mag.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Mags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Domains::Domain::Mags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Domains::Domain::Mags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Domains::Domain::Mags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mag")
        return true;
    return false;
}

MobileIp::Domains::Domain::Mags::Mag::Mag()
    :
    mag_name{YType::str, "mag-name"}
{

    yang_name = "mag"; yang_parent_name = "mags"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Mags::Mag::~Mag()
{
}

bool MobileIp::Domains::Domain::Mags::Mag::has_data() const
{
    if (is_presence_container) return true;
    return mag_name.is_set;
}

bool MobileIp::Domains::Domain::Mags::Mag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mag_name.yfilter);
}

std::string MobileIp::Domains::Domain::Mags::Mag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag";
    ADD_KEY_TOKEN(mag_name, "mag-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Mags::Mag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mag_name.is_set || is_set(mag_name.yfilter)) leaf_name_data.push_back(mag_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Mags::Mag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Mags::Mag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Domains::Domain::Mags::Mag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mag-name")
    {
        mag_name = value;
        mag_name.value_namespace = name_space;
        mag_name.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Domains::Domain::Mags::Mag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mag-name")
    {
        mag_name.yfilter = yfilter;
    }
}

bool MobileIp::Domains::Domain::Mags::Mag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mag-name")
        return true;
    return false;
}

MobileIp::Domains::Domain::Nais::Nais()
    :
    nai(this, {"nai_name"})
{

    yang_name = "nais"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Nais::~Nais()
{
}

bool MobileIp::Domains::Domain::Nais::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nai.len(); index++)
    {
        if(nai[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Nais::has_operation() const
{
    for (std::size_t index=0; index<nai.len(); index++)
    {
        if(nai[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Domains::Domain::Nais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Nais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Nais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nai")
    {
        auto ent_ = std::make_shared<MobileIp::Domains::Domain::Nais::Nai>();
        ent_->parent = this;
        nai.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Nais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nai.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Domains::Domain::Nais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Domains::Domain::Nais::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Domains::Domain::Nais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nai")
        return true;
    return false;
}

MobileIp::Domains::Domain::Nais::Nai::Nai()
    :
    nai_name{YType::str, "nai-name"},
    lma{YType::str, "lma"},
    apn{YType::str, "apn"},
    customer{YType::str, "customer"},
    service{YType::enumeration, "service"},
    network{YType::str, "network"}
{

    yang_name = "nai"; yang_parent_name = "nais"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Nais::Nai::~Nai()
{
}

bool MobileIp::Domains::Domain::Nais::Nai::has_data() const
{
    if (is_presence_container) return true;
    return nai_name.is_set
	|| lma.is_set
	|| apn.is_set
	|| customer.is_set
	|| service.is_set
	|| network.is_set;
}

bool MobileIp::Domains::Domain::Nais::Nai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nai_name.yfilter)
	|| ydk::is_set(lma.yfilter)
	|| ydk::is_set(apn.yfilter)
	|| ydk::is_set(customer.yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string MobileIp::Domains::Domain::Nais::Nai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nai";
    ADD_KEY_TOKEN(nai_name, "nai-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Nais::Nai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nai_name.is_set || is_set(nai_name.yfilter)) leaf_name_data.push_back(nai_name.get_name_leafdata());
    if (lma.is_set || is_set(lma.yfilter)) leaf_name_data.push_back(lma.get_name_leafdata());
    if (apn.is_set || is_set(apn.yfilter)) leaf_name_data.push_back(apn.get_name_leafdata());
    if (customer.is_set || is_set(customer.yfilter)) leaf_name_data.push_back(customer.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Nais::Nai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Nais::Nai::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Domains::Domain::Nais::Nai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nai-name")
    {
        nai_name = value;
        nai_name.value_namespace = name_space;
        nai_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lma")
    {
        lma = value;
        lma.value_namespace = name_space;
        lma.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apn")
    {
        apn = value;
        apn.value_namespace = name_space;
        apn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer")
    {
        customer = value;
        customer.value_namespace = name_space;
        customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Domains::Domain::Nais::Nai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nai-name")
    {
        nai_name.yfilter = yfilter;
    }
    if(value_path == "lma")
    {
        lma.yfilter = yfilter;
    }
    if(value_path == "apn")
    {
        apn.yfilter = yfilter;
    }
    if(value_path == "customer")
    {
        customer.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool MobileIp::Domains::Domain::Nais::Nai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nai-name" || name == "lma" || name == "apn" || name == "customer" || name == "service" || name == "network")
        return true;
    return false;
}

MobileIp::Domains::Domain::AuthenticateOption::AuthenticateOption()
    :
    spi{YType::str, "spi"},
    key{YType::str, "key"}
{

    yang_name = "authenticate-option"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Domains::Domain::AuthenticateOption::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| key.is_set;
}

bool MobileIp::Domains::Domain::AuthenticateOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string MobileIp::Domains::Domain::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::AuthenticateOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::AuthenticateOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Domains::Domain::AuthenticateOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Domains::Domain::AuthenticateOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool MobileIp::Domains::Domain::AuthenticateOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi" || name == "key")
        return true;
    return false;
}

MobileIp::Domains::Domain::Lmas::Lmas()
    :
    lma(this, {"lma_name"})
{

    yang_name = "lmas"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Lmas::~Lmas()
{
}

bool MobileIp::Domains::Domain::Lmas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lma.len(); index++)
    {
        if(lma[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Lmas::has_operation() const
{
    for (std::size_t index=0; index<lma.len(); index++)
    {
        if(lma[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Domains::Domain::Lmas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Lmas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Lmas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lma")
    {
        auto ent_ = std::make_shared<MobileIp::Domains::Domain::Lmas::Lma>();
        ent_->parent = this;
        lma.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Lmas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lma.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Domains::Domain::Lmas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Domains::Domain::Lmas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Domains::Domain::Lmas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma")
        return true;
    return false;
}

MobileIp::Domains::Domain::Lmas::Lma::Lma()
    :
    lma_name{YType::str, "lma-name"}
{

    yang_name = "lma"; yang_parent_name = "lmas"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Domains::Domain::Lmas::Lma::~Lma()
{
}

bool MobileIp::Domains::Domain::Lmas::Lma::has_data() const
{
    if (is_presence_container) return true;
    return lma_name.is_set;
}

bool MobileIp::Domains::Domain::Lmas::Lma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_name.yfilter);
}

std::string MobileIp::Domains::Domain::Lmas::Lma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lma";
    ADD_KEY_TOKEN(lma_name, "lma-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Domains::Domain::Lmas::Lma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_name.is_set || is_set(lma_name.yfilter)) leaf_name_data.push_back(lma_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Domains::Domain::Lmas::Lma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Domains::Domain::Lmas::Lma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Domains::Domain::Lmas::Lma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-name")
    {
        lma_name = value;
        lma_name.value_namespace = name_space;
        lma_name.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Domains::Domain::Lmas::Lma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-name")
    {
        lma_name.yfilter = yfilter;
    }
}

bool MobileIp::Domains::Domain::Lmas::Lma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma-name")
        return true;
    return false;
}

MobileIp::Lmas::Lmas()
    :
    lma(this, {"lma_name", "domain_name"})
{

    yang_name = "lmas"; yang_parent_name = "mobile-ip"; is_top_level_class = false; has_list_ancestor = false; 
}

MobileIp::Lmas::~Lmas()
{
}

bool MobileIp::Lmas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lma.len(); index++)
    {
        if(lma[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::has_operation() const
{
    for (std::size_t index=0; index<lma.len(); index++)
    {
        if(lma[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string MobileIp::Lmas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lma")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma>();
        ent_->parent = this;
        lma.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lma.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Lma()
    :
    lma_name{YType::str, "lma-name"},
    domain_name{YType::str, "domain-name"},
    generate{YType::empty, "generate"},
    mobile_route_ad{YType::uint32, "mobile-route-ad"},
    ani{YType::empty, "ani"},
    multipath{YType::empty, "multipath"},
    dynamic{YType::empty, "dynamic"},
    enforce{YType::empty, "enforce"},
    default_profile{YType::str, "default-profile"},
    interface{YType::str, "interface"},
    mobile_map{YType::str, "mobile-map"},
    pgw_subs_cont{YType::empty, "pgw-subs-cont"}
        ,
    binding_revocation_attributes(std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes>())
    , rat_attributes(std::make_shared<MobileIp::Lmas::Lma::RatAttributes>())
    , heart_beat_attributes(std::make_shared<MobileIp::Lmas::Lma::HeartBeatAttributes>())
    , lmaipv6_addresses(std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses>())
    , hnp(std::make_shared<MobileIp::Lmas::Lma::Hnp>())
    , redistribute(std::make_shared<MobileIp::Lmas::Lma::Redistribute>())
    , aaa(std::make_shared<MobileIp::Lmas::Lma::Aaa>())
    , dscp(std::make_shared<MobileIp::Lmas::Lma::Dscp>())
    , lmaipv4_addresses(std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses>())
    , roles(std::make_shared<MobileIp::Lmas::Lma::Roles>())
    , binding_attributes(std::make_shared<MobileIp::Lmas::Lma::BindingAttributes>())
    , mags(std::make_shared<MobileIp::Lmas::Lma::Mags>())
    , tunnel_attributes(std::make_shared<MobileIp::Lmas::Lma::TunnelAttributes>())
    , services(std::make_shared<MobileIp::Lmas::Lma::Services>())
    , networks(std::make_shared<MobileIp::Lmas::Lma::Networks>())
    , replay_protection(std::make_shared<MobileIp::Lmas::Lma::ReplayProtection>())
{
    binding_revocation_attributes->parent = this;
    rat_attributes->parent = this;
    heart_beat_attributes->parent = this;
    lmaipv6_addresses->parent = this;
    hnp->parent = this;
    redistribute->parent = this;
    aaa->parent = this;
    dscp->parent = this;
    lmaipv4_addresses->parent = this;
    roles->parent = this;
    binding_attributes->parent = this;
    mags->parent = this;
    tunnel_attributes->parent = this;
    services->parent = this;
    networks->parent = this;
    replay_protection->parent = this;

    yang_name = "lma"; yang_parent_name = "lmas"; is_top_level_class = false; has_list_ancestor = false; 
}

MobileIp::Lmas::Lma::~Lma()
{
}

bool MobileIp::Lmas::Lma::has_data() const
{
    if (is_presence_container) return true;
    return lma_name.is_set
	|| domain_name.is_set
	|| generate.is_set
	|| mobile_route_ad.is_set
	|| ani.is_set
	|| multipath.is_set
	|| dynamic.is_set
	|| enforce.is_set
	|| default_profile.is_set
	|| interface.is_set
	|| mobile_map.is_set
	|| pgw_subs_cont.is_set
	|| (binding_revocation_attributes !=  nullptr && binding_revocation_attributes->has_data())
	|| (rat_attributes !=  nullptr && rat_attributes->has_data())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_data())
	|| (lmaipv6_addresses !=  nullptr && lmaipv6_addresses->has_data())
	|| (hnp !=  nullptr && hnp->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (aaa !=  nullptr && aaa->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (lmaipv4_addresses !=  nullptr && lmaipv4_addresses->has_data())
	|| (roles !=  nullptr && roles->has_data())
	|| (binding_attributes !=  nullptr && binding_attributes->has_data())
	|| (mags !=  nullptr && mags->has_data())
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool MobileIp::Lmas::Lma::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_name.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(generate.yfilter)
	|| ydk::is_set(mobile_route_ad.yfilter)
	|| ydk::is_set(ani.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(enforce.yfilter)
	|| ydk::is_set(default_profile.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(mobile_map.yfilter)
	|| ydk::is_set(pgw_subs_cont.yfilter)
	|| (binding_revocation_attributes !=  nullptr && binding_revocation_attributes->has_operation())
	|| (rat_attributes !=  nullptr && rat_attributes->has_operation())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_operation())
	|| (lmaipv6_addresses !=  nullptr && lmaipv6_addresses->has_operation())
	|| (hnp !=  nullptr && hnp->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (lmaipv4_addresses !=  nullptr && lmaipv4_addresses->has_operation())
	|| (roles !=  nullptr && roles->has_operation())
	|| (binding_attributes !=  nullptr && binding_attributes->has_operation())
	|| (mags !=  nullptr && mags->has_operation())
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string MobileIp::Lmas::Lma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/lmas/" << get_segment_path();
    return path_buffer.str();
}

std::string MobileIp::Lmas::Lma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lma";
    ADD_KEY_TOKEN(lma_name, "lma-name");
    ADD_KEY_TOKEN(domain_name, "domain-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_name.is_set || is_set(lma_name.yfilter)) leaf_name_data.push_back(lma_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (generate.is_set || is_set(generate.yfilter)) leaf_name_data.push_back(generate.get_name_leafdata());
    if (mobile_route_ad.is_set || is_set(mobile_route_ad.yfilter)) leaf_name_data.push_back(mobile_route_ad.get_name_leafdata());
    if (ani.is_set || is_set(ani.yfilter)) leaf_name_data.push_back(ani.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (enforce.is_set || is_set(enforce.yfilter)) leaf_name_data.push_back(enforce.get_name_leafdata());
    if (default_profile.is_set || is_set(default_profile.yfilter)) leaf_name_data.push_back(default_profile.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mobile_map.is_set || is_set(mobile_map.yfilter)) leaf_name_data.push_back(mobile_map.get_name_leafdata());
    if (pgw_subs_cont.is_set || is_set(pgw_subs_cont.yfilter)) leaf_name_data.push_back(pgw_subs_cont.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-revocation-attributes")
    {
        if(binding_revocation_attributes == nullptr)
        {
            binding_revocation_attributes = std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes>();
        }
        return binding_revocation_attributes;
    }

    if(child_yang_name == "rat-attributes")
    {
        if(rat_attributes == nullptr)
        {
            rat_attributes = std::make_shared<MobileIp::Lmas::Lma::RatAttributes>();
        }
        return rat_attributes;
    }

    if(child_yang_name == "heart-beat-attributes")
    {
        if(heart_beat_attributes == nullptr)
        {
            heart_beat_attributes = std::make_shared<MobileIp::Lmas::Lma::HeartBeatAttributes>();
        }
        return heart_beat_attributes;
    }

    if(child_yang_name == "lmaipv6-addresses")
    {
        if(lmaipv6_addresses == nullptr)
        {
            lmaipv6_addresses = std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses>();
        }
        return lmaipv6_addresses;
    }

    if(child_yang_name == "hnp")
    {
        if(hnp == nullptr)
        {
            hnp = std::make_shared<MobileIp::Lmas::Lma::Hnp>();
        }
        return hnp;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<MobileIp::Lmas::Lma::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<MobileIp::Lmas::Lma::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<MobileIp::Lmas::Lma::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "lmaipv4-addresses")
    {
        if(lmaipv4_addresses == nullptr)
        {
            lmaipv4_addresses = std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses>();
        }
        return lmaipv4_addresses;
    }

    if(child_yang_name == "roles")
    {
        if(roles == nullptr)
        {
            roles = std::make_shared<MobileIp::Lmas::Lma::Roles>();
        }
        return roles;
    }

    if(child_yang_name == "binding-attributes")
    {
        if(binding_attributes == nullptr)
        {
            binding_attributes = std::make_shared<MobileIp::Lmas::Lma::BindingAttributes>();
        }
        return binding_attributes;
    }

    if(child_yang_name == "mags")
    {
        if(mags == nullptr)
        {
            mags = std::make_shared<MobileIp::Lmas::Lma::Mags>();
        }
        return mags;
    }

    if(child_yang_name == "tunnel-attributes")
    {
        if(tunnel_attributes == nullptr)
        {
            tunnel_attributes = std::make_shared<MobileIp::Lmas::Lma::TunnelAttributes>();
        }
        return tunnel_attributes;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<MobileIp::Lmas::Lma::Services>();
        }
        return services;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<MobileIp::Lmas::Lma::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<MobileIp::Lmas::Lma::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_revocation_attributes != nullptr)
    {
        _children["binding-revocation-attributes"] = binding_revocation_attributes;
    }

    if(rat_attributes != nullptr)
    {
        _children["rat-attributes"] = rat_attributes;
    }

    if(heart_beat_attributes != nullptr)
    {
        _children["heart-beat-attributes"] = heart_beat_attributes;
    }

    if(lmaipv6_addresses != nullptr)
    {
        _children["lmaipv6-addresses"] = lmaipv6_addresses;
    }

    if(hnp != nullptr)
    {
        _children["hnp"] = hnp;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(lmaipv4_addresses != nullptr)
    {
        _children["lmaipv4-addresses"] = lmaipv4_addresses;
    }

    if(roles != nullptr)
    {
        _children["roles"] = roles;
    }

    if(binding_attributes != nullptr)
    {
        _children["binding-attributes"] = binding_attributes;
    }

    if(mags != nullptr)
    {
        _children["mags"] = mags;
    }

    if(tunnel_attributes != nullptr)
    {
        _children["tunnel-attributes"] = tunnel_attributes;
    }

    if(services != nullptr)
    {
        _children["services"] = services;
    }

    if(networks != nullptr)
    {
        _children["networks"] = networks;
    }

    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void MobileIp::Lmas::Lma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-name")
    {
        lma_name = value;
        lma_name.value_namespace = name_space;
        lma_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate")
    {
        generate = value;
        generate.value_namespace = name_space;
        generate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad = value;
        mobile_route_ad.value_namespace = name_space;
        mobile_route_ad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ani")
    {
        ani = value;
        ani.value_namespace = name_space;
        ani.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce")
    {
        enforce = value;
        enforce.value_namespace = name_space;
        enforce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-profile")
    {
        default_profile = value;
        default_profile.value_namespace = name_space;
        default_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-map")
    {
        mobile_map = value;
        mobile_map.value_namespace = name_space;
        mobile_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgw-subs-cont")
    {
        pgw_subs_cont = value;
        pgw_subs_cont.value_namespace = name_space;
        pgw_subs_cont.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-name")
    {
        lma_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "generate")
    {
        generate.yfilter = yfilter;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad.yfilter = yfilter;
    }
    if(value_path == "ani")
    {
        ani.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "enforce")
    {
        enforce.yfilter = yfilter;
    }
    if(value_path == "default-profile")
    {
        default_profile.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "mobile-map")
    {
        mobile_map.yfilter = yfilter;
    }
    if(value_path == "pgw-subs-cont")
    {
        pgw_subs_cont.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-revocation-attributes" || name == "rat-attributes" || name == "heart-beat-attributes" || name == "lmaipv6-addresses" || name == "hnp" || name == "redistribute" || name == "aaa" || name == "dscp" || name == "lmaipv4-addresses" || name == "roles" || name == "binding-attributes" || name == "mags" || name == "tunnel-attributes" || name == "services" || name == "networks" || name == "replay-protection" || name == "lma-name" || name == "domain-name" || name == "generate" || name == "mobile-route-ad" || name == "ani" || name == "multipath" || name == "dynamic" || name == "enforce" || name == "default-profile" || name == "interface" || name == "mobile-map" || name == "pgw-subs-cont")
        return true;
    return false;
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::BindingRevocationAttributes()
    :
    retry{YType::uint32, "retry"}
        ,
    delay(std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay>())
{
    delay->parent = this;

    yang_name = "binding-revocation-attributes"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::~BindingRevocationAttributes()
{
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::has_data() const
{
    if (is_presence_container) return true;
    return retry.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MobileIp::Lmas::Lma::BindingRevocationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-revocation-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::BindingRevocationAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::BindingRevocationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::BindingRevocationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "retry")
        return true;
    return false;
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::Delay()
    :
    br_min{YType::uint32, "br-min"},
    br_max{YType::uint32, "br-max"}
{

    yang_name = "delay"; yang_parent_name = "binding-revocation-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::~Delay()
{
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::has_data() const
{
    if (is_presence_container) return true;
    return br_min.is_set
	|| br_max.is_set;
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(br_min.yfilter)
	|| ydk::is_set(br_max.yfilter);
}

std::string MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br_min.is_set || is_set(br_min.yfilter)) leaf_name_data.push_back(br_min.get_name_leafdata());
    if (br_max.is_set || is_set(br_max.yfilter)) leaf_name_data.push_back(br_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "br-min")
    {
        br_min = value;
        br_min.value_namespace = name_space;
        br_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "br-max")
    {
        br_max = value;
        br_max.value_namespace = name_space;
        br_max.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "br-min")
    {
        br_min.yfilter = yfilter;
    }
    if(value_path == "br-max")
    {
        br_max.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "br-min" || name == "br-max")
        return true;
    return false;
}

MobileIp::Lmas::Lma::RatAttributes::RatAttributes()
    :
    lma_rat{YType::enumeration, "lma-rat"},
    priority_value{YType::uint32, "priority-value"}
{

    yang_name = "rat-attributes"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::RatAttributes::~RatAttributes()
{
}

bool MobileIp::Lmas::Lma::RatAttributes::has_data() const
{
    if (is_presence_container) return true;
    return lma_rat.is_set
	|| priority_value.is_set;
}

bool MobileIp::Lmas::Lma::RatAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_rat.yfilter)
	|| ydk::is_set(priority_value.yfilter);
}

std::string MobileIp::Lmas::Lma::RatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rat-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::RatAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_rat.is_set || is_set(lma_rat.yfilter)) leaf_name_data.push_back(lma_rat.get_name_leafdata());
    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::RatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::RatAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::RatAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-rat")
    {
        lma_rat = value;
        lma_rat.value_namespace = name_space;
        lma_rat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::RatAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-rat")
    {
        lma_rat.yfilter = yfilter;
    }
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::RatAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma-rat" || name == "priority-value")
        return true;
    return false;
}

MobileIp::Lmas::Lma::HeartBeatAttributes::HeartBeatAttributes()
    :
    interval{YType::uint32, "interval"},
    retries{YType::uint32, "retries"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "heart-beat-attributes"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::HeartBeatAttributes::~HeartBeatAttributes()
{
}

bool MobileIp::Lmas::Lma::HeartBeatAttributes::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| retries.is_set
	|| timeout.is_set;
}

bool MobileIp::Lmas::Lma::HeartBeatAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string MobileIp::Lmas::Lma::HeartBeatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heart-beat-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::HeartBeatAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::HeartBeatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::HeartBeatAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::HeartBeatAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::HeartBeatAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::HeartBeatAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "retries" || name == "timeout")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Addresses()
    :
    lmaipv6_address(this, {"address"})
{

    yang_name = "lmaipv6-addresses"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::~Lmaipv6Addresses()
{
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lmaipv6_address.len(); index++)
    {
        if(lmaipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<lmaipv6_address.len(); index++)
    {
        if(lmaipv6_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Lmaipv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv6-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Lmaipv6Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Lmaipv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmaipv6-address")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address>();
        ent_->parent = this;
        lmaipv6_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Lmaipv6Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lmaipv6_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmaipv6-address")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::Lmaipv6Address()
    :
    address{YType::str, "address"}
{

    yang_name = "lmaipv6-address"; yang_parent_name = "lmaipv6-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::~Lmaipv6Address()
{
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv6-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Hnp::Hnp()
    :
    maximum{YType::uint32, "maximum"}
{

    yang_name = "hnp"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Hnp::~Hnp()
{
}

bool MobileIp::Lmas::Lma::Hnp::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set;
}

bool MobileIp::Lmas::Lma::Hnp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string MobileIp::Lmas::Lma::Hnp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hnp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Hnp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Hnp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Hnp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Hnp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Hnp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Hnp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Redistribute::Redistribute()
    :
    redist_type{YType::enumeration, "redist-type"},
    redist_sub_type{YType::enumeration, "redist-sub-type"}
{

    yang_name = "redistribute"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Redistribute::~Redistribute()
{
}

bool MobileIp::Lmas::Lma::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return redist_type.is_set
	|| redist_sub_type.is_set;
}

bool MobileIp::Lmas::Lma::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redist_type.yfilter)
	|| ydk::is_set(redist_sub_type.yfilter);
}

std::string MobileIp::Lmas::Lma::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());
    if (redist_sub_type.is_set || is_set(redist_sub_type.yfilter)) leaf_name_data.push_back(redist_sub_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-sub-type")
    {
        redist_sub_type = value;
        redist_sub_type.value_namespace = name_space;
        redist_sub_type.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
    if(value_path == "redist-sub-type")
    {
        redist_sub_type.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-type" || name == "redist-sub-type")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Aaa::Aaa()
    :
    accounting(std::make_shared<MobileIp::Lmas::Lma::Aaa::Accounting>())
{
    accounting->parent = this;

    yang_name = "aaa"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Aaa::~Aaa()
{
}

bool MobileIp::Lmas::Lma::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data());
}

bool MobileIp::Lmas::Lma::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string MobileIp::Lmas::Lma::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<MobileIp::Lmas::Lma::Aaa::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Aaa::Accounting::Accounting()
    :
    enable{YType::empty, "enable"},
    interim_interval{YType::uint32, "interim-interval"}
{

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Aaa::Accounting::~Accounting()
{
}

bool MobileIp::Lmas::Lma::Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| interim_interval.is_set;
}

bool MobileIp::Lmas::Lma::Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interim_interval.yfilter);
}

std::string MobileIp::Lmas::Lma::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.yfilter)) leaf_name_data.push_back(interim_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
        interim_interval.value_namespace = name_space;
        interim_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interim-interval")
    {
        interim_interval.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "interim-interval")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Dscp::Dscp()
    :
    value_{YType::uint32, "value"},
    force{YType::empty, "force"}
{

    yang_name = "dscp"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Dscp::~Dscp()
{
}

bool MobileIp::Lmas::Lma::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| force.is_set;
}

bool MobileIp::Lmas::Lma::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string MobileIp::Lmas::Lma::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "force")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Addresses()
    :
    lmaipv4_address(this, {"address"})
{

    yang_name = "lmaipv4-addresses"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::~Lmaipv4Addresses()
{
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lmaipv4_address.len(); index++)
    {
        if(lmaipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<lmaipv4_address.len(); index++)
    {
        if(lmaipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Lmaipv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv4-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Lmaipv4Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Lmaipv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmaipv4-address")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address>();
        ent_->parent = this;
        lmaipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Lmaipv4Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lmaipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmaipv4-address")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::Lmaipv4Address()
    :
    address{YType::str, "address"}
{

    yang_name = "lmaipv4-address"; yang_parent_name = "lmaipv4-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::~Lmaipv4Address()
{
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv4-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Roles::Roles()
    :
    role(this, {"lma_role"})
{

    yang_name = "roles"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Roles::~Roles()
{
}

bool MobileIp::Lmas::Lma::Roles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<role.len(); index++)
    {
        if(role[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Roles::has_operation() const
{
    for (std::size_t index=0; index<role.len(); index++)
    {
        if(role[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Roles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "roles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Roles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Roles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Roles::Role>();
        ent_->parent = this;
        role.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Roles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : role.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Roles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Roles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Roles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Roles::Role::Role()
    :
    lma_role{YType::enumeration, "lma-role"}
{

    yang_name = "role"; yang_parent_name = "roles"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Roles::Role::~Role()
{
}

bool MobileIp::Lmas::Lma::Roles::Role::has_data() const
{
    if (is_presence_container) return true;
    return lma_role.is_set;
}

bool MobileIp::Lmas::Lma::Roles::Role::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_role.yfilter);
}

std::string MobileIp::Lmas::Lma::Roles::Role::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role";
    ADD_KEY_TOKEN(lma_role, "lma-role");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Roles::Role::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_role.is_set || is_set(lma_role.yfilter)) leaf_name_data.push_back(lma_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Roles::Role::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Roles::Role::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Roles::Role::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-role")
    {
        lma_role = value;
        lma_role.value_namespace = name_space;
        lma_role.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Roles::Role::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-role")
    {
        lma_role.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Roles::Role::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lma-role")
        return true;
    return false;
}

MobileIp::Lmas::Lma::BindingAttributes::BindingAttributes()
    :
    refresh_time{YType::uint32, "refresh-time"},
    delete_wait_interval{YType::uint32, "delete-wait-interval"},
    create_wait_interval{YType::uint32, "create-wait-interval"},
    max_life_time{YType::uint32, "max-life-time"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "binding-attributes"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::BindingAttributes::~BindingAttributes()
{
}

bool MobileIp::Lmas::Lma::BindingAttributes::has_data() const
{
    if (is_presence_container) return true;
    return refresh_time.is_set
	|| delete_wait_interval.is_set
	|| create_wait_interval.is_set
	|| max_life_time.is_set
	|| maximum.is_set;
}

bool MobileIp::Lmas::Lma::BindingAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(delete_wait_interval.yfilter)
	|| ydk::is_set(create_wait_interval.yfilter)
	|| ydk::is_set(max_life_time.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string MobileIp::Lmas::Lma::BindingAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::BindingAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (delete_wait_interval.is_set || is_set(delete_wait_interval.yfilter)) leaf_name_data.push_back(delete_wait_interval.get_name_leafdata());
    if (create_wait_interval.is_set || is_set(create_wait_interval.yfilter)) leaf_name_data.push_back(create_wait_interval.get_name_leafdata());
    if (max_life_time.is_set || is_set(max_life_time.yfilter)) leaf_name_data.push_back(max_life_time.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::BindingAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::BindingAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::BindingAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-wait-interval")
    {
        delete_wait_interval = value;
        delete_wait_interval.value_namespace = name_space;
        delete_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-wait-interval")
    {
        create_wait_interval = value;
        create_wait_interval.value_namespace = name_space;
        create_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-life-time")
    {
        max_life_time = value;
        max_life_time.value_namespace = name_space;
        max_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::BindingAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "delete-wait-interval")
    {
        delete_wait_interval.yfilter = yfilter;
    }
    if(value_path == "create-wait-interval")
    {
        create_wait_interval.yfilter = yfilter;
    }
    if(value_path == "max-life-time")
    {
        max_life_time.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::BindingAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-time" || name == "delete-wait-interval" || name == "create-wait-interval" || name == "max-life-time" || name == "maximum")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Mags::Mags()
    :
    mag(this, {"mag_name", "domain_name"})
{

    yang_name = "mags"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Mags::~Mags()
{
}

bool MobileIp::Lmas::Lma::Mags::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mag.len(); index++)
    {
        if(mag[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Mags::has_operation() const
{
    for (std::size_t index=0; index<mag.len(); index++)
    {
        if(mag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Mags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Mags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Mags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mag")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag>();
        ent_->parent = this;
        mag.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Mags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Mags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Mags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Mags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mag")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Mags::Mag::Mag()
    :
    mag_name{YType::str, "mag-name"},
    domain_name{YType::str, "domain-name"},
    encap_option{YType::enumeration, "encap-option"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    tunnel{YType::str, "tunnel"}
        ,
    authenticate_option(std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption>())
    , dscp(std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::Dscp>())
{
    authenticate_option->parent = this;
    dscp->parent = this;

    yang_name = "mag"; yang_parent_name = "mags"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Mags::Mag::~Mag()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::has_data() const
{
    if (is_presence_container) return true;
    return mag_name.is_set
	|| domain_name.is_set
	|| encap_option.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| tunnel.is_set
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (dscp !=  nullptr && dscp->has_data());
}

bool MobileIp::Lmas::Lma::Mags::Mag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mag_name.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(encap_option.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string MobileIp::Lmas::Lma::Mags::Mag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag";
    ADD_KEY_TOKEN(mag_name, "mag-name");
    ADD_KEY_TOKEN(domain_name, "domain-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Mags::Mag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mag_name.is_set || is_set(mag_name.yfilter)) leaf_name_data.push_back(mag_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (encap_option.is_set || is_set(encap_option.yfilter)) leaf_name_data.push_back(encap_option.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Mags::Mag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option == nullptr)
        {
            authenticate_option = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption>();
        }
        return authenticate_option;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::Dscp>();
        }
        return dscp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Mags::Mag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticate_option != nullptr)
    {
        _children["authenticate-option"] = authenticate_option;
    }

    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Mags::Mag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mag-name")
    {
        mag_name = value;
        mag_name.value_namespace = name_space;
        mag_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-option")
    {
        encap_option = value;
        encap_option.value_namespace = name_space;
        encap_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Mags::Mag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mag-name")
    {
        mag_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "encap-option")
    {
        encap_option.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Mags::Mag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticate-option" || name == "dscp" || name == "mag-name" || name == "domain-name" || name == "encap-option" || name == "ipv4-address" || name == "ipv6-address" || name == "tunnel")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::AuthenticateOption()
    :
    spi{YType::str, "spi"},
    key{YType::str, "key"}
{

    yang_name = "authenticate-option"; yang_parent_name = "mag"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| key.is_set;
}

bool MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi" || name == "key")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Mags::Mag::Dscp::Dscp()
    :
    value_{YType::uint32, "value"},
    force{YType::empty, "force"}
{

    yang_name = "dscp"; yang_parent_name = "mag"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Mags::Mag::Dscp::~Dscp()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| force.is_set;
}

bool MobileIp::Lmas::Lma::Mags::Mag::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Mags::Mag::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Mags::Mag::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Mags::Mag::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "force")
        return true;
    return false;
}

MobileIp::Lmas::Lma::TunnelAttributes::TunnelAttributes()
    :
    mtu{YType::uint32, "mtu"},
    acl{YType::str, "acl"}
{

    yang_name = "tunnel-attributes"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::TunnelAttributes::~TunnelAttributes()
{
}

bool MobileIp::Lmas::Lma::TunnelAttributes::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set
	|| acl.is_set;
}

bool MobileIp::Lmas::Lma::TunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string MobileIp::Lmas::Lma::TunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::TunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::TunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::TunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::TunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::TunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::TunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu" || name == "acl")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Services()
    :
    service(this, {"lma_service"})
{

    yang_name = "services"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::~Services()
{
}

bool MobileIp::Lmas::Lma::Services::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Service()
    :
    lma_service{YType::enumeration, "lma-service"},
    mnp_customer{YType::uint32, "mnp-customer"},
    mnp_ipv4_lmn{YType::uint32, "mnp-ipv4-lmn"},
    mnp_ipv6_lmn{YType::uint32, "mnp-ipv6-lmn"},
    mnp_lmn{YType::uint32, "mnp-lmn"},
    ignore_home_address{YType::empty, "ignore-home-address"},
    mnp_ipv4_customer{YType::uint32, "mnp-ipv4-customer"},
    mnp_ipv6_customer{YType::uint32, "mnp-ipv6-customer"}
        ,
    customers(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers>())
{
    customers->parent = this;

    yang_name = "service"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::~Service()
{
}

bool MobileIp::Lmas::Lma::Services::Service::has_data() const
{
    if (is_presence_container) return true;
    return lma_service.is_set
	|| mnp_customer.is_set
	|| mnp_ipv4_lmn.is_set
	|| mnp_ipv6_lmn.is_set
	|| mnp_lmn.is_set
	|| ignore_home_address.is_set
	|| mnp_ipv4_customer.is_set
	|| mnp_ipv6_customer.is_set
	|| (customers !=  nullptr && customers->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_service.yfilter)
	|| ydk::is_set(mnp_customer.yfilter)
	|| ydk::is_set(mnp_ipv4_lmn.yfilter)
	|| ydk::is_set(mnp_ipv6_lmn.yfilter)
	|| ydk::is_set(mnp_lmn.yfilter)
	|| ydk::is_set(ignore_home_address.yfilter)
	|| ydk::is_set(mnp_ipv4_customer.yfilter)
	|| ydk::is_set(mnp_ipv6_customer.yfilter)
	|| (customers !=  nullptr && customers->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(lma_service, "lma-service");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_service.is_set || is_set(lma_service.yfilter)) leaf_name_data.push_back(lma_service.get_name_leafdata());
    if (mnp_customer.is_set || is_set(mnp_customer.yfilter)) leaf_name_data.push_back(mnp_customer.get_name_leafdata());
    if (mnp_ipv4_lmn.is_set || is_set(mnp_ipv4_lmn.yfilter)) leaf_name_data.push_back(mnp_ipv4_lmn.get_name_leafdata());
    if (mnp_ipv6_lmn.is_set || is_set(mnp_ipv6_lmn.yfilter)) leaf_name_data.push_back(mnp_ipv6_lmn.get_name_leafdata());
    if (mnp_lmn.is_set || is_set(mnp_lmn.yfilter)) leaf_name_data.push_back(mnp_lmn.get_name_leafdata());
    if (ignore_home_address.is_set || is_set(ignore_home_address.yfilter)) leaf_name_data.push_back(ignore_home_address.get_name_leafdata());
    if (mnp_ipv4_customer.is_set || is_set(mnp_ipv4_customer.yfilter)) leaf_name_data.push_back(mnp_ipv4_customer.get_name_leafdata());
    if (mnp_ipv6_customer.is_set || is_set(mnp_ipv6_customer.yfilter)) leaf_name_data.push_back(mnp_ipv6_customer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customers")
    {
        if(customers == nullptr)
        {
            customers = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers>();
        }
        return customers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(customers != nullptr)
    {
        _children["customers"] = customers;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-service")
    {
        lma_service = value;
        lma_service.value_namespace = name_space;
        lma_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer = value;
        mnp_customer.value_namespace = name_space;
        mnp_customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn = value;
        mnp_ipv4_lmn.value_namespace = name_space;
        mnp_ipv4_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn = value;
        mnp_ipv6_lmn.value_namespace = name_space;
        mnp_ipv6_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn = value;
        mnp_lmn.value_namespace = name_space;
        mnp_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-home-address")
    {
        ignore_home_address = value;
        ignore_home_address.value_namespace = name_space;
        ignore_home_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer = value;
        mnp_ipv4_customer.value_namespace = name_space;
        mnp_ipv4_customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer = value;
        mnp_ipv6_customer.value_namespace = name_space;
        mnp_ipv6_customer.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-service")
    {
        lma_service.yfilter = yfilter;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn.yfilter = yfilter;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn.yfilter = yfilter;
    }
    if(value_path == "ignore-home-address")
    {
        ignore_home_address.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customers" || name == "lma-service" || name == "mnp-customer" || name == "mnp-ipv4-lmn" || name == "mnp-ipv6-lmn" || name == "mnp-lmn" || name == "ignore-home-address" || name == "mnp-ipv4-customer" || name == "mnp-ipv6-customer")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customers()
    :
    customer(this, {"customer_name", "vrf_name"})
{

    yang_name = "customers"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::~Customers()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<customer.len(); index++)
    {
        if(customer[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::has_operation() const
{
    for (std::size_t index=0; index<customer.len(); index++)
    {
        if(customer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "customer")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer>();
        ent_->parent = this;
        customer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : customer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "customer")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Customer()
    :
    customer_name{YType::str, "customer-name"},
    vrf_name{YType::str, "vrf-name"},
    mnp_customer{YType::uint32, "mnp-customer"},
    mnp_ipv4_lmn{YType::uint32, "mnp-ipv4-lmn"},
    mnp_ipv6_lmn{YType::uint32, "mnp-ipv6-lmn"},
    mnp_lmn{YType::uint32, "mnp-lmn"},
    mnp_ipv4_customer{YType::uint32, "mnp-ipv4-customer"},
    mnp_ipv6_customer{YType::uint32, "mnp-ipv6-customer"},
    mobile_route_ad{YType::uint32, "mobile-route-ad"},
    bandwidth_aggregate{YType::uint32, "bandwidth-aggregate"}
        ,
    authenticate_option(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption>())
    , heart_beat_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes>())
    , transports(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports>())
    , network_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes>())
    , gre_key(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey>())
    , binding_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes>())
{
    authenticate_option->parent = this;
    heart_beat_attributes->parent = this;
    transports->parent = this;
    network_attributes->parent = this;
    gre_key->parent = this;
    binding_attributes->parent = this;

    yang_name = "customer"; yang_parent_name = "customers"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::~Customer()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::has_data() const
{
    if (is_presence_container) return true;
    return customer_name.is_set
	|| vrf_name.is_set
	|| mnp_customer.is_set
	|| mnp_ipv4_lmn.is_set
	|| mnp_ipv6_lmn.is_set
	|| mnp_lmn.is_set
	|| mnp_ipv4_customer.is_set
	|| mnp_ipv6_customer.is_set
	|| mobile_route_ad.is_set
	|| bandwidth_aggregate.is_set
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_data())
	|| (transports !=  nullptr && transports->has_data())
	|| (network_attributes !=  nullptr && network_attributes->has_data())
	|| (gre_key !=  nullptr && gre_key->has_data())
	|| (binding_attributes !=  nullptr && binding_attributes->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(customer_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(mnp_customer.yfilter)
	|| ydk::is_set(mnp_ipv4_lmn.yfilter)
	|| ydk::is_set(mnp_ipv6_lmn.yfilter)
	|| ydk::is_set(mnp_lmn.yfilter)
	|| ydk::is_set(mnp_ipv4_customer.yfilter)
	|| ydk::is_set(mnp_ipv6_customer.yfilter)
	|| ydk::is_set(mobile_route_ad.yfilter)
	|| ydk::is_set(bandwidth_aggregate.yfilter)
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_operation())
	|| (transports !=  nullptr && transports->has_operation())
	|| (network_attributes !=  nullptr && network_attributes->has_operation())
	|| (gre_key !=  nullptr && gre_key->has_operation())
	|| (binding_attributes !=  nullptr && binding_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer";
    ADD_KEY_TOKEN(customer_name, "customer-name");
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_name.is_set || is_set(customer_name.yfilter)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (mnp_customer.is_set || is_set(mnp_customer.yfilter)) leaf_name_data.push_back(mnp_customer.get_name_leafdata());
    if (mnp_ipv4_lmn.is_set || is_set(mnp_ipv4_lmn.yfilter)) leaf_name_data.push_back(mnp_ipv4_lmn.get_name_leafdata());
    if (mnp_ipv6_lmn.is_set || is_set(mnp_ipv6_lmn.yfilter)) leaf_name_data.push_back(mnp_ipv6_lmn.get_name_leafdata());
    if (mnp_lmn.is_set || is_set(mnp_lmn.yfilter)) leaf_name_data.push_back(mnp_lmn.get_name_leafdata());
    if (mnp_ipv4_customer.is_set || is_set(mnp_ipv4_customer.yfilter)) leaf_name_data.push_back(mnp_ipv4_customer.get_name_leafdata());
    if (mnp_ipv6_customer.is_set || is_set(mnp_ipv6_customer.yfilter)) leaf_name_data.push_back(mnp_ipv6_customer.get_name_leafdata());
    if (mobile_route_ad.is_set || is_set(mobile_route_ad.yfilter)) leaf_name_data.push_back(mobile_route_ad.get_name_leafdata());
    if (bandwidth_aggregate.is_set || is_set(bandwidth_aggregate.yfilter)) leaf_name_data.push_back(bandwidth_aggregate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option == nullptr)
        {
            authenticate_option = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption>();
        }
        return authenticate_option;
    }

    if(child_yang_name == "heart-beat-attributes")
    {
        if(heart_beat_attributes == nullptr)
        {
            heart_beat_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes>();
        }
        return heart_beat_attributes;
    }

    if(child_yang_name == "transports")
    {
        if(transports == nullptr)
        {
            transports = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports>();
        }
        return transports;
    }

    if(child_yang_name == "network-attributes")
    {
        if(network_attributes == nullptr)
        {
            network_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes>();
        }
        return network_attributes;
    }

    if(child_yang_name == "gre-key")
    {
        if(gre_key == nullptr)
        {
            gre_key = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey>();
        }
        return gre_key;
    }

    if(child_yang_name == "binding-attributes")
    {
        if(binding_attributes == nullptr)
        {
            binding_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes>();
        }
        return binding_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticate_option != nullptr)
    {
        _children["authenticate-option"] = authenticate_option;
    }

    if(heart_beat_attributes != nullptr)
    {
        _children["heart-beat-attributes"] = heart_beat_attributes;
    }

    if(transports != nullptr)
    {
        _children["transports"] = transports;
    }

    if(network_attributes != nullptr)
    {
        _children["network-attributes"] = network_attributes;
    }

    if(gre_key != nullptr)
    {
        _children["gre-key"] = gre_key;
    }

    if(binding_attributes != nullptr)
    {
        _children["binding-attributes"] = binding_attributes;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "customer-name")
    {
        customer_name = value;
        customer_name.value_namespace = name_space;
        customer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer = value;
        mnp_customer.value_namespace = name_space;
        mnp_customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn = value;
        mnp_ipv4_lmn.value_namespace = name_space;
        mnp_ipv4_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn = value;
        mnp_ipv6_lmn.value_namespace = name_space;
        mnp_ipv6_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn = value;
        mnp_lmn.value_namespace = name_space;
        mnp_lmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer = value;
        mnp_ipv4_customer.value_namespace = name_space;
        mnp_ipv4_customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer = value;
        mnp_ipv6_customer.value_namespace = name_space;
        mnp_ipv6_customer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad = value;
        mobile_route_ad.value_namespace = name_space;
        mobile_route_ad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-aggregate")
    {
        bandwidth_aggregate = value;
        bandwidth_aggregate.value_namespace = name_space;
        bandwidth_aggregate.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "customer-name")
    {
        customer_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn.yfilter = yfilter;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer.yfilter = yfilter;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer.yfilter = yfilter;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad.yfilter = yfilter;
    }
    if(value_path == "bandwidth-aggregate")
    {
        bandwidth_aggregate.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticate-option" || name == "heart-beat-attributes" || name == "transports" || name == "network-attributes" || name == "gre-key" || name == "binding-attributes" || name == "customer-name" || name == "vrf-name" || name == "mnp-customer" || name == "mnp-ipv4-lmn" || name == "mnp-ipv6-lmn" || name == "mnp-lmn" || name == "mnp-ipv4-customer" || name == "mnp-ipv6-customer" || name == "mobile-route-ad" || name == "bandwidth-aggregate")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::AuthenticateOption()
    :
    spi{YType::str, "spi"},
    key{YType::str, "key"}
{

    yang_name = "authenticate-option"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| key.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi" || name == "key")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::HeartBeatAttributes()
    :
    interval{YType::uint32, "interval"},
    retries{YType::uint32, "retries"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "heart-beat-attributes"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::~HeartBeatAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| retries.is_set
	|| timeout.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heart-beat-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "retries" || name == "timeout")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transports()
    :
    transport(this, {"vrf_name"})
{

    yang_name = "transports"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::~Transports()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport>();
        ent_->parent = this;
        transport.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : transport.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::Transport()
    :
    vrf_name{YType::str, "vrf-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "transport"; yang_parent_name = "transports"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::~Transport()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::NetworkAttributes()
    :
    unauthorize{YType::empty, "unauthorize"}
        ,
    authorizes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes>())
{
    authorizes->parent = this;

    yang_name = "network-attributes"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::~NetworkAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::has_data() const
{
    if (is_presence_container) return true;
    return unauthorize.is_set
	|| (authorizes !=  nullptr && authorizes->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unauthorize.yfilter)
	|| (authorizes !=  nullptr && authorizes->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unauthorize.is_set || is_set(unauthorize.yfilter)) leaf_name_data.push_back(unauthorize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorizes")
    {
        if(authorizes == nullptr)
        {
            authorizes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes>();
        }
        return authorizes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorizes != nullptr)
    {
        _children["authorizes"] = authorizes;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unauthorize")
    {
        unauthorize = value;
        unauthorize.value_namespace = name_space;
        unauthorize.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unauthorize")
    {
        unauthorize.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorizes" || name == "unauthorize")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorizes()
    :
    authorize(this, {"name"})
{

    yang_name = "authorizes"; yang_parent_name = "network-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::~Authorizes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authorize.len(); index++)
    {
        if(authorize[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::has_operation() const
{
    for (std::size_t index=0; index<authorize.len(); index++)
    {
        if(authorize[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize>();
        ent_->parent = this;
        authorize.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authorize.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::Authorize()
    :
    name{YType::str, "name"}
        ,
    pool_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes>())
{
    pool_attributes->parent = this;

    yang_name = "authorize"; yang_parent_name = "authorizes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::~Authorize()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (pool_attributes !=  nullptr && pool_attributes->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pool_attributes !=  nullptr && pool_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool-attributes")
    {
        if(pool_attributes == nullptr)
        {
            pool_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes>();
        }
        return pool_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pool_attributes != nullptr)
    {
        _children["pool-attributes"] = pool_attributes;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-attributes" || name == "name")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::PoolAttributes()
    :
    mobile_node(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode>())
    , mobile_network(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork>())
{
    mobile_node->parent = this;
    mobile_network->parent = this;

    yang_name = "pool-attributes"; yang_parent_name = "authorize"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::~PoolAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (mobile_node !=  nullptr && mobile_node->has_data())
	|| (mobile_network !=  nullptr && mobile_network->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (mobile_node !=  nullptr && mobile_node->has_operation())
	|| (mobile_network !=  nullptr && mobile_network->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobile-node")
    {
        if(mobile_node == nullptr)
        {
            mobile_node = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode>();
        }
        return mobile_node;
    }

    if(child_yang_name == "mobile-network")
    {
        if(mobile_network == nullptr)
        {
            mobile_network = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork>();
        }
        return mobile_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobile_node != nullptr)
    {
        _children["mobile-node"] = mobile_node;
    }

    if(mobile_network != nullptr)
    {
        _children["mobile-network"] = mobile_network;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobile-node" || name == "mobile-network")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::MobileNode()
    :
    ipv4_pool(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool>())
    , ipv6_pool(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool>())
{
    ipv4_pool->parent = this;
    ipv6_pool->parent = this;

    yang_name = "mobile-node"; yang_parent_name = "pool-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::~MobileNode()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_pool !=  nullptr && ipv4_pool->has_data())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_pool !=  nullptr && ipv4_pool->has_operation())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-pool")
    {
        if(ipv4_pool == nullptr)
        {
            ipv4_pool = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool>();
        }
        return ipv4_pool;
    }

    if(child_yang_name == "ipv6-pool")
    {
        if(ipv6_pool == nullptr)
        {
            ipv6_pool = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool>();
        }
        return ipv6_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_pool != nullptr)
    {
        _children["ipv4-pool"] = ipv4_pool;
    }

    if(ipv6_pool != nullptr)
    {
        _children["ipv6-pool"] = ipv6_pool;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-pool" || name == "ipv6-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::Ipv4Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"}
{

    yang_name = "ipv4-pool"; yang_parent_name = "mobile-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::~Ipv4Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::Ipv6Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"}
{

    yang_name = "ipv6-pool"; yang_parent_name = "mobile-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::~Ipv6Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::MobileNetwork()
    :
    mripv6_pools(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools>())
    , mripv4_pools(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools>())
{
    mripv6_pools->parent = this;
    mripv4_pools->parent = this;

    yang_name = "mobile-network"; yang_parent_name = "pool-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::~MobileNetwork()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (mripv6_pools !=  nullptr && mripv6_pools->has_data())
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_operation())
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv6-pools")
    {
        if(mripv6_pools == nullptr)
        {
            mripv6_pools = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools>();
        }
        return mripv6_pools;
    }

    if(child_yang_name == "mripv4-pools")
    {
        if(mripv4_pools == nullptr)
        {
            mripv4_pools = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools>();
        }
        return mripv4_pools;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mripv6_pools != nullptr)
    {
        _children["mripv6-pools"] = mripv6_pools;
    }

    if(mripv4_pools != nullptr)
    {
        _children["mripv4-pools"] = mripv4_pools;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv6-pools" || name == "mripv4-pools")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pools()
    :
    mripv6_pool(this, {"start_address"})
{

    yang_name = "mripv6-pools"; yang_parent_name = "mobile-network"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::~Mripv6Pools()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mripv6_pool.len(); index++)
    {
        if(mripv6_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv6_pool.len(); index++)
    {
        if(mripv6_pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv6-pool")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool>();
        ent_->parent = this;
        mripv6_pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mripv6_pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv6-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::Mripv6Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"},
    network_prefix{YType::uint32, "network-prefix"}
{

    yang_name = "mripv6-pool"; yang_parent_name = "mripv6-pools"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::~Mripv6Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set
	|| network_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter)
	|| ydk::is_set(network_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pool";
    ADD_KEY_TOKEN(start_address, "start-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix" || name == "network-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pools()
    :
    mripv4_pool(this, {"start_address"})
{

    yang_name = "mripv4-pools"; yang_parent_name = "mobile-network"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::~Mripv4Pools()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mripv4_pool.len(); index++)
    {
        if(mripv4_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv4_pool.len(); index++)
    {
        if(mripv4_pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv4-pool")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool>();
        ent_->parent = this;
        mripv4_pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mripv4_pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv4-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::Mripv4Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"},
    network_prefix{YType::uint32, "network-prefix"}
{

    yang_name = "mripv4-pool"; yang_parent_name = "mripv4-pools"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::~Mripv4Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set
	|| network_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter)
	|| ydk::is_set(network_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pool";
    ADD_KEY_TOKEN(start_address, "start-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix" || name == "network-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::GreKey()
    :
    gre_key_type{YType::enumeration, "gre-key-type"},
    gre_key_value{YType::uint32, "gre-key-value"}
{

    yang_name = "gre-key"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::~GreKey()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::has_data() const
{
    if (is_presence_container) return true;
    return gre_key_type.is_set
	|| gre_key_value.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_key_type.yfilter)
	|| ydk::is_set(gre_key_value.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_key_type.is_set || is_set(gre_key_type.yfilter)) leaf_name_data.push_back(gre_key_type.get_name_leafdata());
    if (gre_key_value.is_set || is_set(gre_key_value.yfilter)) leaf_name_data.push_back(gre_key_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-key-type")
    {
        gre_key_type = value;
        gre_key_type.value_namespace = name_space;
        gre_key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-key-value")
    {
        gre_key_value = value;
        gre_key_value.value_namespace = name_space;
        gre_key_value.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-key-type")
    {
        gre_key_type.yfilter = yfilter;
    }
    if(value_path == "gre-key-value")
    {
        gre_key_value.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-key-type" || name == "gre-key-value")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::BindingAttributes()
    :
    max_life_time{YType::uint32, "max-life-time"}
{

    yang_name = "binding-attributes"; yang_parent_name = "customer"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::~BindingAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::has_data() const
{
    if (is_presence_container) return true;
    return max_life_time.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_life_time.yfilter);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_life_time.is_set || is_set(max_life_time.yfilter)) leaf_name_data.push_back(max_life_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-life-time")
    {
        max_life_time = value;
        max_life_time.value_namespace = name_space;
        max_life_time.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-life-time")
    {
        max_life_time.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-life-time")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Networks()
    :
    network(this, {"lma_network"})
{

    yang_name = "networks"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::~Networks()
{
}

bool MobileIp::Lmas::Lma::Networks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Networks::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::Network()
    :
    lma_network{YType::str, "lma-network"}
        ,
    pool_attributes(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes>())
{
    pool_attributes->parent = this;

    yang_name = "network"; yang_parent_name = "networks"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::~Network()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::has_data() const
{
    if (is_presence_container) return true;
    return lma_network.is_set
	|| (pool_attributes !=  nullptr && pool_attributes->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lma_network.yfilter)
	|| (pool_attributes !=  nullptr && pool_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(lma_network, "lma-network");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_network.is_set || is_set(lma_network.yfilter)) leaf_name_data.push_back(lma_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool-attributes")
    {
        if(pool_attributes == nullptr)
        {
            pool_attributes = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes>();
        }
        return pool_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pool_attributes != nullptr)
    {
        _children["pool-attributes"] = pool_attributes;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lma-network")
    {
        lma_network = value;
        lma_network.value_namespace = name_space;
        lma_network.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Networks::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lma-network")
    {
        lma_network.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Networks::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-attributes" || name == "lma-network")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::PoolAttributes()
    :
    mobile_node(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode>())
    , mobile_network(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork>())
{
    mobile_node->parent = this;
    mobile_network->parent = this;

    yang_name = "pool-attributes"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::~PoolAttributes()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (mobile_node !=  nullptr && mobile_node->has_data())
	|| (mobile_network !=  nullptr && mobile_network->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (mobile_node !=  nullptr && mobile_node->has_operation())
	|| (mobile_network !=  nullptr && mobile_network->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobile-node")
    {
        if(mobile_node == nullptr)
        {
            mobile_node = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode>();
        }
        return mobile_node;
    }

    if(child_yang_name == "mobile-network")
    {
        if(mobile_network == nullptr)
        {
            mobile_network = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork>();
        }
        return mobile_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobile_node != nullptr)
    {
        _children["mobile-node"] = mobile_node;
    }

    if(mobile_network != nullptr)
    {
        _children["mobile-network"] = mobile_network;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobile-node" || name == "mobile-network")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::MobileNode()
    :
    ipv4_pool(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool>())
    , ipv6_pool(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool>())
{
    ipv4_pool->parent = this;
    ipv6_pool->parent = this;

    yang_name = "mobile-node"; yang_parent_name = "pool-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::~MobileNode()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_pool !=  nullptr && ipv4_pool->has_data())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_pool !=  nullptr && ipv4_pool->has_operation())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-pool")
    {
        if(ipv4_pool == nullptr)
        {
            ipv4_pool = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool>();
        }
        return ipv4_pool;
    }

    if(child_yang_name == "ipv6-pool")
    {
        if(ipv6_pool == nullptr)
        {
            ipv6_pool = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool>();
        }
        return ipv6_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_pool != nullptr)
    {
        _children["ipv4-pool"] = ipv4_pool;
    }

    if(ipv6_pool != nullptr)
    {
        _children["ipv6-pool"] = ipv6_pool;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-pool" || name == "ipv6-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::Ipv4Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"}
{

    yang_name = "ipv4-pool"; yang_parent_name = "mobile-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::~Ipv4Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::Ipv6Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"}
{

    yang_name = "ipv6-pool"; yang_parent_name = "mobile-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::~Ipv6Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::MobileNetwork()
    :
    mripv6_pools(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools>())
    , mripv4_pools(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools>())
{
    mripv6_pools->parent = this;
    mripv4_pools->parent = this;

    yang_name = "mobile-network"; yang_parent_name = "pool-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::~MobileNetwork()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::has_data() const
{
    if (is_presence_container) return true;
    return (mripv6_pools !=  nullptr && mripv6_pools->has_data())
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_operation())
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv6-pools")
    {
        if(mripv6_pools == nullptr)
        {
            mripv6_pools = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools>();
        }
        return mripv6_pools;
    }

    if(child_yang_name == "mripv4-pools")
    {
        if(mripv4_pools == nullptr)
        {
            mripv4_pools = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools>();
        }
        return mripv4_pools;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mripv6_pools != nullptr)
    {
        _children["mripv6-pools"] = mripv6_pools;
    }

    if(mripv4_pools != nullptr)
    {
        _children["mripv4-pools"] = mripv4_pools;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv6-pools" || name == "mripv4-pools")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pools()
    :
    mripv6_pool(this, {"start_address"})
{

    yang_name = "mripv6-pools"; yang_parent_name = "mobile-network"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::~Mripv6Pools()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mripv6_pool.len(); index++)
    {
        if(mripv6_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv6_pool.len(); index++)
    {
        if(mripv6_pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv6-pool")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool>();
        ent_->parent = this;
        mripv6_pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mripv6_pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv6-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::Mripv6Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"},
    network_prefix{YType::uint32, "network-prefix"}
{

    yang_name = "mripv6-pool"; yang_parent_name = "mripv6-pools"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::~Mripv6Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set
	|| network_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter)
	|| ydk::is_set(network_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pool";
    ADD_KEY_TOKEN(start_address, "start-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix" || name == "network-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pools()
    :
    mripv4_pool(this, {"start_address"})
{

    yang_name = "mripv4-pools"; yang_parent_name = "mobile-network"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::~Mripv4Pools()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mripv4_pool.len(); index++)
    {
        if(mripv4_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv4_pool.len(); index++)
    {
        if(mripv4_pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mripv4-pool")
    {
        auto ent_ = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool>();
        ent_->parent = this;
        mripv4_pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mripv4_pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mripv4-pool")
        return true;
    return false;
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::Mripv4Pool()
    :
    start_address{YType::str, "start-address"},
    pool_prefix{YType::uint32, "pool-prefix"},
    network_prefix{YType::uint32, "network-prefix"}
{

    yang_name = "mripv4-pool"; yang_parent_name = "mripv4-pools"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::~Mripv4Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_prefix.is_set
	|| network_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_prefix.yfilter)
	|| ydk::is_set(network_prefix.yfilter);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pool";
    ADD_KEY_TOKEN(start_address, "start-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.yfilter)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
        pool_prefix.value_namespace = name_space;
        pool_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "pool-prefix" || name == "network-prefix")
        return true;
    return false;
}

MobileIp::Lmas::Lma::ReplayProtection::ReplayProtection()
    :
    timestamp_window{YType::uint32, "timestamp-window"}
{

    yang_name = "replay-protection"; yang_parent_name = "lma"; is_top_level_class = false; has_list_ancestor = true; 
}

MobileIp::Lmas::Lma::ReplayProtection::~ReplayProtection()
{
}

bool MobileIp::Lmas::Lma::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return timestamp_window.is_set;
}

bool MobileIp::Lmas::Lma::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_window.yfilter);
}

std::string MobileIp::Lmas::Lma::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MobileIp::Lmas::Lma::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_window.is_set || is_set(timestamp_window.yfilter)) leaf_name_data.push_back(timestamp_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MobileIp::Lmas::Lma::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MobileIp::Lmas::Lma::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MobileIp::Lmas::Lma::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-window")
    {
        timestamp_window = value;
        timestamp_window.value_namespace = name_space;
        timestamp_window.value_namespace_prefix = name_space_prefix;
    }
}

void MobileIp::Lmas::Lma::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-window")
    {
        timestamp_window.yfilter = yfilter;
    }
}

bool MobileIp::Lmas::Lma::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-window")
        return true;
    return false;
}

const Enum::YLeaf ServiceType::ipv4 {1, "ipv4"};
const Enum::YLeaf ServiceType::ipv6 {2, "ipv6"};
const Enum::YLeaf ServiceType::dual {3, "dual"};

const Enum::YLeaf LmaService::service_mll {1, "service-mll"};

const Enum::YLeaf EncapOpt::greipv4 {4, "greipv4"};
const Enum::YLeaf EncapOpt::greipv6 {5, "greipv6"};
const Enum::YLeaf EncapOpt::mgreipv4 {7, "mgreipv4"};
const Enum::YLeaf EncapOpt::mgreipv6 {8, "mgreipv6"};

const Enum::YLeaf RedistSubType::host_prefix {1, "host-prefix"};
const Enum::YLeaf RedistSubType::disable {2, "disable"};

const Enum::YLeaf LmaRole::Y_3gma {0, "3gma"};

const Enum::YLeaf RedistType::home_address {1, "home-address"};

const Enum::YLeaf GreKeyType::symmetric {1, "symmetric"};

const Enum::YLeaf LmaRat::virtual_ {0, "virtual"};
const Enum::YLeaf LmaRat::ppp {1, "ppp"};
const Enum::YLeaf LmaRat::ethernet {2, "ethernet"};
const Enum::YLeaf LmaRat::wlan {3, "wlan"};
const Enum::YLeaf LmaRat::wi_max {4, "wi-max"};
const Enum::YLeaf LmaRat::Y_3gppgeran {5, "3gppgeran"};
const Enum::YLeaf LmaRat::Y_3gpputran {6, "3gpputran"};
const Enum::YLeaf LmaRat::Y_3gppeutran {7, "3gppeutran"};
const Enum::YLeaf LmaRat::Y_3gpp2ehrpd {8, "3gpp2ehrpd"};
const Enum::YLeaf LmaRat::Y_3gpp2hrpd {9, "3gpp2hrpd"};
const Enum::YLeaf LmaRat::Y_3gpp21rtt {10, "3gpp21rtt"};
const Enum::YLeaf LmaRat::Y_3gpp2umb {11, "3gpp2umb"};


}
}

