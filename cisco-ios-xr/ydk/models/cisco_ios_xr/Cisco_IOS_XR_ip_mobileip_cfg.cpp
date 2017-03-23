
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_mobileip_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_mobileip_cfg {

MobileIp::MobileIp()
    :
    domains(std::make_shared<MobileIp::Domains>())
	,lmas(std::make_shared<MobileIp::Lmas>())
{
    domains->parent = this;
    children["domains"] = domains;

    lmas->parent = this;
    children["lmas"] = lmas;

    yang_name = "mobile-ip"; yang_parent_name = "Cisco-IOS-XR-ip-mobileip-cfg";
}

MobileIp::~MobileIp()
{
}

bool MobileIp::has_data() const
{
    return (domains !=  nullptr && domains->has_data())
	|| (lmas !=  nullptr && lmas->has_data());
}

bool MobileIp::has_operation() const
{
    return is_set(operation)
	|| (domains !=  nullptr && domains->has_operation())
	|| (lmas !=  nullptr && lmas->has_operation());
}

std::string MobileIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip";

    return path_buffer.str();

}

EntityPath MobileIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domains")
    {
        if(domains != nullptr)
        {
            children["domains"] = domains;
        }
        else
        {
            domains = std::make_shared<MobileIp::Domains>();
            domains->parent = this;
            children["domains"] = domains;
        }
        return children.at("domains");
    }

    if(child_yang_name == "lmas")
    {
        if(lmas != nullptr)
        {
            children["lmas"] = lmas;
        }
        else
        {
            lmas = std::make_shared<MobileIp::Lmas>();
            lmas->parent = this;
            children["lmas"] = lmas;
        }
        return children.at("lmas");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::get_children()
{
    if(children.find("domains") == children.end())
    {
        if(domains != nullptr)
        {
            children["domains"] = domains;
        }
    }

    if(children.find("lmas") == children.end())
    {
        if(lmas != nullptr)
        {
            children["lmas"] = lmas;
        }
    }

    return children;
}

void MobileIp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MobileIp::clone_ptr() const
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

MobileIp::Domains::Domains()
{
    yang_name = "domains"; yang_parent_name = "mobile-ip";
}

MobileIp::Domains::~Domains()
{
}

bool MobileIp::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Domains::Domain>();
        c->parent = this;
        domain.push_back(std::move(c));
        children[segment_path] = domain.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::get_children()
{
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Domains::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Domains::Domain::Domain()
    :
    domain_name{YType::str, "domain-name"},
    enable{YType::empty, "enable"}
    	,
    authenticate_option(std::make_shared<MobileIp::Domains::Domain::AuthenticateOption>())
	,lmas(std::make_shared<MobileIp::Domains::Domain::Lmas>())
	,mags(std::make_shared<MobileIp::Domains::Domain::Mags>())
	,nais(std::make_shared<MobileIp::Domains::Domain::Nais>())
{
    authenticate_option->parent = this;
    children["authenticate-option"] = authenticate_option;

    lmas->parent = this;
    children["lmas"] = lmas;

    mags->parent = this;
    children["mags"] = mags;

    nais->parent = this;
    children["nais"] = nais;

    yang_name = "domain"; yang_parent_name = "domains";
}

MobileIp::Domains::Domain::~Domain()
{
}

bool MobileIp::Domains::Domain::has_data() const
{
    return domain_name.is_set
	|| enable.is_set
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (lmas !=  nullptr && lmas->has_data())
	|| (mags !=  nullptr && mags->has_data())
	|| (nais !=  nullptr && nais->has_data());
}

bool MobileIp::Domains::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(enable.operation)
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (lmas !=  nullptr && lmas->has_operation())
	|| (mags !=  nullptr && mags->has_operation())
	|| (nais !=  nullptr && nais->has_operation());
}

std::string MobileIp::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain-name='" <<domain_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
        else
        {
            authenticate_option = std::make_shared<MobileIp::Domains::Domain::AuthenticateOption>();
            authenticate_option->parent = this;
            children["authenticate-option"] = authenticate_option;
        }
        return children.at("authenticate-option");
    }

    if(child_yang_name == "lmas")
    {
        if(lmas != nullptr)
        {
            children["lmas"] = lmas;
        }
        else
        {
            lmas = std::make_shared<MobileIp::Domains::Domain::Lmas>();
            lmas->parent = this;
            children["lmas"] = lmas;
        }
        return children.at("lmas");
    }

    if(child_yang_name == "mags")
    {
        if(mags != nullptr)
        {
            children["mags"] = mags;
        }
        else
        {
            mags = std::make_shared<MobileIp::Domains::Domain::Mags>();
            mags->parent = this;
            children["mags"] = mags;
        }
        return children.at("mags");
    }

    if(child_yang_name == "nais")
    {
        if(nais != nullptr)
        {
            children["nais"] = nais;
        }
        else
        {
            nais = std::make_shared<MobileIp::Domains::Domain::Nais>();
            nais->parent = this;
            children["nais"] = nais;
        }
        return children.at("nais");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::get_children()
{
    if(children.find("authenticate-option") == children.end())
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
    }

    if(children.find("lmas") == children.end())
    {
        if(lmas != nullptr)
        {
            children["lmas"] = lmas;
        }
    }

    if(children.find("mags") == children.end())
    {
        if(mags != nullptr)
        {
            children["mags"] = mags;
        }
    }

    if(children.find("nais") == children.end())
    {
        if(nais != nullptr)
        {
            children["nais"] = nais;
        }
    }

    return children;
}

void MobileIp::Domains::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MobileIp::Domains::Domain::Mags::Mags()
{
    yang_name = "mags"; yang_parent_name = "domain";
}

MobileIp::Domains::Domain::Mags::~Mags()
{
}

bool MobileIp::Domains::Domain::Mags::has_data() const
{
    for (std::size_t index=0; index<mag.size(); index++)
    {
        if(mag[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Mags::has_operation() const
{
    for (std::size_t index=0; index<mag.size(); index++)
    {
        if(mag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Domains::Domain::Mags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mags";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Mags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mags' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Mags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mag")
    {
        for(auto const & c : mag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Domains::Domain::Mags::Mag>();
        c->parent = this;
        mag.push_back(std::move(c));
        children[segment_path] = mag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Mags::get_children()
{
    for (auto const & c : mag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Domains::Domain::Mags::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Domains::Domain::Mags::Mag::Mag()
    :
    mag_name{YType::str, "mag-name"}
{
    yang_name = "mag"; yang_parent_name = "mags";
}

MobileIp::Domains::Domain::Mags::Mag::~Mag()
{
}

bool MobileIp::Domains::Domain::Mags::Mag::has_data() const
{
    return mag_name.is_set;
}

bool MobileIp::Domains::Domain::Mags::Mag::has_operation() const
{
    return is_set(operation)
	|| is_set(mag_name.operation);
}

std::string MobileIp::Domains::Domain::Mags::Mag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag" <<"[mag-name='" <<mag_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Mags::Mag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mag' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mag_name.is_set || is_set(mag_name.operation)) leaf_name_data.push_back(mag_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Mags::Mag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Mags::Mag::get_children()
{
    return children;
}

void MobileIp::Domains::Domain::Mags::Mag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mag-name")
    {
        mag_name = value;
    }
}

MobileIp::Domains::Domain::Nais::Nais()
{
    yang_name = "nais"; yang_parent_name = "domain";
}

MobileIp::Domains::Domain::Nais::~Nais()
{
}

bool MobileIp::Domains::Domain::Nais::has_data() const
{
    for (std::size_t index=0; index<nai.size(); index++)
    {
        if(nai[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Nais::has_operation() const
{
    for (std::size_t index=0; index<nai.size(); index++)
    {
        if(nai[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Domains::Domain::Nais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nais";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Nais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nais' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Nais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nai")
    {
        for(auto const & c : nai)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Domains::Domain::Nais::Nai>();
        c->parent = this;
        nai.push_back(std::move(c));
        children[segment_path] = nai.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Nais::get_children()
{
    for (auto const & c : nai)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Domains::Domain::Nais::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Domains::Domain::Nais::Nai::Nai()
    :
    nai_name{YType::str, "nai-name"},
    apn{YType::str, "apn"},
    customer{YType::str, "customer"},
    lma{YType::str, "lma"},
    network{YType::str, "network"},
    service{YType::enumeration, "service"}
{
    yang_name = "nai"; yang_parent_name = "nais";
}

MobileIp::Domains::Domain::Nais::Nai::~Nai()
{
}

bool MobileIp::Domains::Domain::Nais::Nai::has_data() const
{
    return nai_name.is_set
	|| apn.is_set
	|| customer.is_set
	|| lma.is_set
	|| network.is_set
	|| service.is_set;
}

bool MobileIp::Domains::Domain::Nais::Nai::has_operation() const
{
    return is_set(operation)
	|| is_set(nai_name.operation)
	|| is_set(apn.operation)
	|| is_set(customer.operation)
	|| is_set(lma.operation)
	|| is_set(network.operation)
	|| is_set(service.operation);
}

std::string MobileIp::Domains::Domain::Nais::Nai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nai" <<"[nai-name='" <<nai_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Nais::Nai::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nai' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nai_name.is_set || is_set(nai_name.operation)) leaf_name_data.push_back(nai_name.get_name_leafdata());
    if (apn.is_set || is_set(apn.operation)) leaf_name_data.push_back(apn.get_name_leafdata());
    if (customer.is_set || is_set(customer.operation)) leaf_name_data.push_back(customer.get_name_leafdata());
    if (lma.is_set || is_set(lma.operation)) leaf_name_data.push_back(lma.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Nais::Nai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Nais::Nai::get_children()
{
    return children;
}

void MobileIp::Domains::Domain::Nais::Nai::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nai-name")
    {
        nai_name = value;
    }
    if(value_path == "apn")
    {
        apn = value;
    }
    if(value_path == "customer")
    {
        customer = value;
    }
    if(value_path == "lma")
    {
        lma = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
}

MobileIp::Domains::Domain::AuthenticateOption::AuthenticateOption()
    :
    key{YType::str, "key"},
    spi{YType::str, "spi"}
{
    yang_name = "authenticate-option"; yang_parent_name = "domain";
}

MobileIp::Domains::Domain::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Domains::Domain::AuthenticateOption::has_data() const
{
    return key.is_set
	|| spi.is_set;
}

bool MobileIp::Domains::Domain::AuthenticateOption::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(spi.operation);
}

std::string MobileIp::Domains::Domain::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::AuthenticateOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticateOption' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::AuthenticateOption::get_children()
{
    return children;
}

void MobileIp::Domains::Domain::AuthenticateOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

MobileIp::Domains::Domain::Lmas::Lmas()
{
    yang_name = "lmas"; yang_parent_name = "domain";
}

MobileIp::Domains::Domain::Lmas::~Lmas()
{
}

bool MobileIp::Domains::Domain::Lmas::has_data() const
{
    for (std::size_t index=0; index<lma.size(); index++)
    {
        if(lma[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Domains::Domain::Lmas::has_operation() const
{
    for (std::size_t index=0; index<lma.size(); index++)
    {
        if(lma[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Domains::Domain::Lmas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmas";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Lmas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmas' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Lmas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lma")
    {
        for(auto const & c : lma)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Domains::Domain::Lmas::Lma>();
        c->parent = this;
        lma.push_back(std::move(c));
        children[segment_path] = lma.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Lmas::get_children()
{
    for (auto const & c : lma)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Domains::Domain::Lmas::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Domains::Domain::Lmas::Lma::Lma()
    :
    lma_name{YType::str, "lma-name"}
{
    yang_name = "lma"; yang_parent_name = "lmas";
}

MobileIp::Domains::Domain::Lmas::Lma::~Lma()
{
}

bool MobileIp::Domains::Domain::Lmas::Lma::has_data() const
{
    return lma_name.is_set;
}

bool MobileIp::Domains::Domain::Lmas::Lma::has_operation() const
{
    return is_set(operation)
	|| is_set(lma_name.operation);
}

std::string MobileIp::Domains::Domain::Lmas::Lma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lma" <<"[lma-name='" <<lma_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Domains::Domain::Lmas::Lma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lma' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_name.is_set || is_set(lma_name.operation)) leaf_name_data.push_back(lma_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Domains::Domain::Lmas::Lma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Domains::Domain::Lmas::Lma::get_children()
{
    return children;
}

void MobileIp::Domains::Domain::Lmas::Lma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lma-name")
    {
        lma_name = value;
    }
}

MobileIp::Lmas::Lmas()
{
    yang_name = "lmas"; yang_parent_name = "mobile-ip";
}

MobileIp::Lmas::~Lmas()
{
}

bool MobileIp::Lmas::has_data() const
{
    for (std::size_t index=0; index<lma.size(); index++)
    {
        if(lma[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::has_operation() const
{
    for (std::size_t index=0; index<lma.size(); index++)
    {
        if(lma[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmas";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lma")
    {
        for(auto const & c : lma)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma>();
        c->parent = this;
        lma.push_back(std::move(c));
        children[segment_path] = lma.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::get_children()
{
    for (auto const & c : lma)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Lma()
    :
    domain_name{YType::str, "domain-name"},
    lma_name{YType::str, "lma-name"},
    ani{YType::empty, "ani"},
    default_profile{YType::str, "default-profile"},
    dynamic{YType::empty, "dynamic"},
    enforce{YType::empty, "enforce"},
    generate{YType::empty, "generate"},
    interface{YType::str, "interface"},
    mobile_map{YType::str, "mobile-map"},
    mobile_route_ad{YType::uint32, "mobile-route-ad"},
    multipath{YType::empty, "multipath"},
    pgw_subs_cont{YType::empty, "pgw-subs-cont"}
    	,
    aaa(std::make_shared<MobileIp::Lmas::Lma::Aaa>())
	,binding_attributes(std::make_shared<MobileIp::Lmas::Lma::BindingAttributes>())
	,binding_revocation_attributes(std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes>())
	,dscp(std::make_shared<MobileIp::Lmas::Lma::Dscp>())
	,heart_beat_attributes(std::make_shared<MobileIp::Lmas::Lma::HeartBeatAttributes>())
	,hnp(std::make_shared<MobileIp::Lmas::Lma::Hnp>())
	,lmaipv4_addresses(std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses>())
	,lmaipv6_addresses(std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses>())
	,mags(std::make_shared<MobileIp::Lmas::Lma::Mags>())
	,networks(std::make_shared<MobileIp::Lmas::Lma::Networks>())
	,rat_attributes(std::make_shared<MobileIp::Lmas::Lma::RatAttributes>())
	,redistribute(std::make_shared<MobileIp::Lmas::Lma::Redistribute>())
	,replay_protection(std::make_shared<MobileIp::Lmas::Lma::ReplayProtection>())
	,roles(std::make_shared<MobileIp::Lmas::Lma::Roles>())
	,services(std::make_shared<MobileIp::Lmas::Lma::Services>())
	,tunnel_attributes(std::make_shared<MobileIp::Lmas::Lma::TunnelAttributes>())
{
    aaa->parent = this;
    children["aaa"] = aaa;

    binding_attributes->parent = this;
    children["binding-attributes"] = binding_attributes;

    binding_revocation_attributes->parent = this;
    children["binding-revocation-attributes"] = binding_revocation_attributes;

    dscp->parent = this;
    children["dscp"] = dscp;

    heart_beat_attributes->parent = this;
    children["heart-beat-attributes"] = heart_beat_attributes;

    hnp->parent = this;
    children["hnp"] = hnp;

    lmaipv4_addresses->parent = this;
    children["lmaipv4-addresses"] = lmaipv4_addresses;

    lmaipv6_addresses->parent = this;
    children["lmaipv6-addresses"] = lmaipv6_addresses;

    mags->parent = this;
    children["mags"] = mags;

    networks->parent = this;
    children["networks"] = networks;

    rat_attributes->parent = this;
    children["rat-attributes"] = rat_attributes;

    redistribute->parent = this;
    children["redistribute"] = redistribute;

    replay_protection->parent = this;
    children["replay-protection"] = replay_protection;

    roles->parent = this;
    children["roles"] = roles;

    services->parent = this;
    children["services"] = services;

    tunnel_attributes->parent = this;
    children["tunnel-attributes"] = tunnel_attributes;

    yang_name = "lma"; yang_parent_name = "lmas";
}

MobileIp::Lmas::Lma::~Lma()
{
}

bool MobileIp::Lmas::Lma::has_data() const
{
    return domain_name.is_set
	|| lma_name.is_set
	|| ani.is_set
	|| default_profile.is_set
	|| dynamic.is_set
	|| enforce.is_set
	|| generate.is_set
	|| interface.is_set
	|| mobile_map.is_set
	|| mobile_route_ad.is_set
	|| multipath.is_set
	|| pgw_subs_cont.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (binding_attributes !=  nullptr && binding_attributes->has_data())
	|| (binding_revocation_attributes !=  nullptr && binding_revocation_attributes->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_data())
	|| (hnp !=  nullptr && hnp->has_data())
	|| (lmaipv4_addresses !=  nullptr && lmaipv4_addresses->has_data())
	|| (lmaipv6_addresses !=  nullptr && lmaipv6_addresses->has_data())
	|| (mags !=  nullptr && mags->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (rat_attributes !=  nullptr && rat_attributes->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (replay_protection !=  nullptr && replay_protection->has_data())
	|| (roles !=  nullptr && roles->has_data())
	|| (services !=  nullptr && services->has_data())
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_data());
}

bool MobileIp::Lmas::Lma::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(lma_name.operation)
	|| is_set(ani.operation)
	|| is_set(default_profile.operation)
	|| is_set(dynamic.operation)
	|| is_set(enforce.operation)
	|| is_set(generate.operation)
	|| is_set(interface.operation)
	|| is_set(mobile_map.operation)
	|| is_set(mobile_route_ad.operation)
	|| is_set(multipath.operation)
	|| is_set(pgw_subs_cont.operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (binding_attributes !=  nullptr && binding_attributes->has_operation())
	|| (binding_revocation_attributes !=  nullptr && binding_revocation_attributes->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_operation())
	|| (hnp !=  nullptr && hnp->has_operation())
	|| (lmaipv4_addresses !=  nullptr && lmaipv4_addresses->has_operation())
	|| (lmaipv6_addresses !=  nullptr && lmaipv6_addresses->has_operation())
	|| (mags !=  nullptr && mags->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (rat_attributes !=  nullptr && rat_attributes->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (replay_protection !=  nullptr && replay_protection->has_operation())
	|| (roles !=  nullptr && roles->has_operation())
	|| (services !=  nullptr && services->has_operation())
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lma" <<"[domain-name='" <<domain_name <<"']" <<"[lma-name='" <<lma_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip/lmas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (lma_name.is_set || is_set(lma_name.operation)) leaf_name_data.push_back(lma_name.get_name_leafdata());
    if (ani.is_set || is_set(ani.operation)) leaf_name_data.push_back(ani.get_name_leafdata());
    if (default_profile.is_set || is_set(default_profile.operation)) leaf_name_data.push_back(default_profile.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (enforce.is_set || is_set(enforce.operation)) leaf_name_data.push_back(enforce.get_name_leafdata());
    if (generate.is_set || is_set(generate.operation)) leaf_name_data.push_back(generate.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mobile_map.is_set || is_set(mobile_map.operation)) leaf_name_data.push_back(mobile_map.get_name_leafdata());
    if (mobile_route_ad.is_set || is_set(mobile_route_ad.operation)) leaf_name_data.push_back(mobile_route_ad.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (pgw_subs_cont.is_set || is_set(pgw_subs_cont.operation)) leaf_name_data.push_back(pgw_subs_cont.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa")
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa;
        }
        else
        {
            aaa = std::make_shared<MobileIp::Lmas::Lma::Aaa>();
            aaa->parent = this;
            children["aaa"] = aaa;
        }
        return children.at("aaa");
    }

    if(child_yang_name == "binding-attributes")
    {
        if(binding_attributes != nullptr)
        {
            children["binding-attributes"] = binding_attributes;
        }
        else
        {
            binding_attributes = std::make_shared<MobileIp::Lmas::Lma::BindingAttributes>();
            binding_attributes->parent = this;
            children["binding-attributes"] = binding_attributes;
        }
        return children.at("binding-attributes");
    }

    if(child_yang_name == "binding-revocation-attributes")
    {
        if(binding_revocation_attributes != nullptr)
        {
            children["binding-revocation-attributes"] = binding_revocation_attributes;
        }
        else
        {
            binding_revocation_attributes = std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes>();
            binding_revocation_attributes->parent = this;
            children["binding-revocation-attributes"] = binding_revocation_attributes;
        }
        return children.at("binding-revocation-attributes");
    }

    if(child_yang_name == "dscp")
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
        else
        {
            dscp = std::make_shared<MobileIp::Lmas::Lma::Dscp>();
            dscp->parent = this;
            children["dscp"] = dscp;
        }
        return children.at("dscp");
    }

    if(child_yang_name == "heart-beat-attributes")
    {
        if(heart_beat_attributes != nullptr)
        {
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
        else
        {
            heart_beat_attributes = std::make_shared<MobileIp::Lmas::Lma::HeartBeatAttributes>();
            heart_beat_attributes->parent = this;
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
        return children.at("heart-beat-attributes");
    }

    if(child_yang_name == "hnp")
    {
        if(hnp != nullptr)
        {
            children["hnp"] = hnp;
        }
        else
        {
            hnp = std::make_shared<MobileIp::Lmas::Lma::Hnp>();
            hnp->parent = this;
            children["hnp"] = hnp;
        }
        return children.at("hnp");
    }

    if(child_yang_name == "lmaipv4-addresses")
    {
        if(lmaipv4_addresses != nullptr)
        {
            children["lmaipv4-addresses"] = lmaipv4_addresses;
        }
        else
        {
            lmaipv4_addresses = std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses>();
            lmaipv4_addresses->parent = this;
            children["lmaipv4-addresses"] = lmaipv4_addresses;
        }
        return children.at("lmaipv4-addresses");
    }

    if(child_yang_name == "lmaipv6-addresses")
    {
        if(lmaipv6_addresses != nullptr)
        {
            children["lmaipv6-addresses"] = lmaipv6_addresses;
        }
        else
        {
            lmaipv6_addresses = std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses>();
            lmaipv6_addresses->parent = this;
            children["lmaipv6-addresses"] = lmaipv6_addresses;
        }
        return children.at("lmaipv6-addresses");
    }

    if(child_yang_name == "mags")
    {
        if(mags != nullptr)
        {
            children["mags"] = mags;
        }
        else
        {
            mags = std::make_shared<MobileIp::Lmas::Lma::Mags>();
            mags->parent = this;
            children["mags"] = mags;
        }
        return children.at("mags");
    }

    if(child_yang_name == "networks")
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
        else
        {
            networks = std::make_shared<MobileIp::Lmas::Lma::Networks>();
            networks->parent = this;
            children["networks"] = networks;
        }
        return children.at("networks");
    }

    if(child_yang_name == "rat-attributes")
    {
        if(rat_attributes != nullptr)
        {
            children["rat-attributes"] = rat_attributes;
        }
        else
        {
            rat_attributes = std::make_shared<MobileIp::Lmas::Lma::RatAttributes>();
            rat_attributes->parent = this;
            children["rat-attributes"] = rat_attributes;
        }
        return children.at("rat-attributes");
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute != nullptr)
        {
            children["redistribute"] = redistribute;
        }
        else
        {
            redistribute = std::make_shared<MobileIp::Lmas::Lma::Redistribute>();
            redistribute->parent = this;
            children["redistribute"] = redistribute;
        }
        return children.at("redistribute");
    }

    if(child_yang_name == "replay-protection")
    {
        if(replay_protection != nullptr)
        {
            children["replay-protection"] = replay_protection;
        }
        else
        {
            replay_protection = std::make_shared<MobileIp::Lmas::Lma::ReplayProtection>();
            replay_protection->parent = this;
            children["replay-protection"] = replay_protection;
        }
        return children.at("replay-protection");
    }

    if(child_yang_name == "roles")
    {
        if(roles != nullptr)
        {
            children["roles"] = roles;
        }
        else
        {
            roles = std::make_shared<MobileIp::Lmas::Lma::Roles>();
            roles->parent = this;
            children["roles"] = roles;
        }
        return children.at("roles");
    }

    if(child_yang_name == "services")
    {
        if(services != nullptr)
        {
            children["services"] = services;
        }
        else
        {
            services = std::make_shared<MobileIp::Lmas::Lma::Services>();
            services->parent = this;
            children["services"] = services;
        }
        return children.at("services");
    }

    if(child_yang_name == "tunnel-attributes")
    {
        if(tunnel_attributes != nullptr)
        {
            children["tunnel-attributes"] = tunnel_attributes;
        }
        else
        {
            tunnel_attributes = std::make_shared<MobileIp::Lmas::Lma::TunnelAttributes>();
            tunnel_attributes->parent = this;
            children["tunnel-attributes"] = tunnel_attributes;
        }
        return children.at("tunnel-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::get_children()
{
    if(children.find("aaa") == children.end())
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa;
        }
    }

    if(children.find("binding-attributes") == children.end())
    {
        if(binding_attributes != nullptr)
        {
            children["binding-attributes"] = binding_attributes;
        }
    }

    if(children.find("binding-revocation-attributes") == children.end())
    {
        if(binding_revocation_attributes != nullptr)
        {
            children["binding-revocation-attributes"] = binding_revocation_attributes;
        }
    }

    if(children.find("dscp") == children.end())
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
    }

    if(children.find("heart-beat-attributes") == children.end())
    {
        if(heart_beat_attributes != nullptr)
        {
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
    }

    if(children.find("hnp") == children.end())
    {
        if(hnp != nullptr)
        {
            children["hnp"] = hnp;
        }
    }

    if(children.find("lmaipv4-addresses") == children.end())
    {
        if(lmaipv4_addresses != nullptr)
        {
            children["lmaipv4-addresses"] = lmaipv4_addresses;
        }
    }

    if(children.find("lmaipv6-addresses") == children.end())
    {
        if(lmaipv6_addresses != nullptr)
        {
            children["lmaipv6-addresses"] = lmaipv6_addresses;
        }
    }

    if(children.find("mags") == children.end())
    {
        if(mags != nullptr)
        {
            children["mags"] = mags;
        }
    }

    if(children.find("networks") == children.end())
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
    }

    if(children.find("rat-attributes") == children.end())
    {
        if(rat_attributes != nullptr)
        {
            children["rat-attributes"] = rat_attributes;
        }
    }

    if(children.find("redistribute") == children.end())
    {
        if(redistribute != nullptr)
        {
            children["redistribute"] = redistribute;
        }
    }

    if(children.find("replay-protection") == children.end())
    {
        if(replay_protection != nullptr)
        {
            children["replay-protection"] = replay_protection;
        }
    }

    if(children.find("roles") == children.end())
    {
        if(roles != nullptr)
        {
            children["roles"] = roles;
        }
    }

    if(children.find("services") == children.end())
    {
        if(services != nullptr)
        {
            children["services"] = services;
        }
    }

    if(children.find("tunnel-attributes") == children.end())
    {
        if(tunnel_attributes != nullptr)
        {
            children["tunnel-attributes"] = tunnel_attributes;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "lma-name")
    {
        lma_name = value;
    }
    if(value_path == "ani")
    {
        ani = value;
    }
    if(value_path == "default-profile")
    {
        default_profile = value;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "enforce")
    {
        enforce = value;
    }
    if(value_path == "generate")
    {
        generate = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mobile-map")
    {
        mobile_map = value;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "pgw-subs-cont")
    {
        pgw_subs_cont = value;
    }
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::BindingRevocationAttributes()
    :
    retry{YType::uint32, "retry"}
    	,
    delay(std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay>())
{
    delay->parent = this;
    children["delay"] = delay;

    yang_name = "binding-revocation-attributes"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::~BindingRevocationAttributes()
{
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::has_data() const
{
    return retry.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(retry.operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MobileIp::Lmas::Lma::BindingRevocationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-revocation-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::BindingRevocationAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingRevocationAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.operation)) leaf_name_data.push_back(retry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::BindingRevocationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "delay")
    {
        if(delay != nullptr)
        {
            children["delay"] = delay;
        }
        else
        {
            delay = std::make_shared<MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay>();
            delay->parent = this;
            children["delay"] = delay;
        }
        return children.at("delay");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::BindingRevocationAttributes::get_children()
{
    if(children.find("delay") == children.end())
    {
        if(delay != nullptr)
        {
            children["delay"] = delay;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "retry")
    {
        retry = value;
    }
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::Delay()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{
    yang_name = "delay"; yang_parent_name = "binding-revocation-attributes";
}

MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::~Delay()
{
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation);
}

std::string MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

MobileIp::Lmas::Lma::RatAttributes::RatAttributes()
    :
    lma_rat{YType::enumeration, "lma-rat"},
    priority_value{YType::uint32, "priority-value"}
{
    yang_name = "rat-attributes"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::RatAttributes::~RatAttributes()
{
}

bool MobileIp::Lmas::Lma::RatAttributes::has_data() const
{
    return lma_rat.is_set
	|| priority_value.is_set;
}

bool MobileIp::Lmas::Lma::RatAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(lma_rat.operation)
	|| is_set(priority_value.operation);
}

std::string MobileIp::Lmas::Lma::RatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rat-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::RatAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RatAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_rat.is_set || is_set(lma_rat.operation)) leaf_name_data.push_back(lma_rat.get_name_leafdata());
    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::RatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::RatAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::RatAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lma-rat")
    {
        lma_rat = value;
    }
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
}

MobileIp::Lmas::Lma::HeartBeatAttributes::HeartBeatAttributes()
    :
    interval{YType::uint32, "interval"},
    retries{YType::uint32, "retries"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "heart-beat-attributes"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::HeartBeatAttributes::~HeartBeatAttributes()
{
}

bool MobileIp::Lmas::Lma::HeartBeatAttributes::has_data() const
{
    return interval.is_set
	|| retries.is_set
	|| timeout.is_set;
}

bool MobileIp::Lmas::Lma::HeartBeatAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(retries.operation)
	|| is_set(timeout.operation);
}

std::string MobileIp::Lmas::Lma::HeartBeatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heart-beat-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::HeartBeatAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HeartBeatAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::HeartBeatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::HeartBeatAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::HeartBeatAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Addresses()
{
    yang_name = "lmaipv6-addresses"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::~Lmaipv6Addresses()
{
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::has_data() const
{
    for (std::size_t index=0; index<lmaipv6_address.size(); index++)
    {
        if(lmaipv6_address[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::has_operation() const
{
    for (std::size_t index=0; index<lmaipv6_address.size(); index++)
    {
        if(lmaipv6_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Lmaipv6Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv6-addresses";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Lmaipv6Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmaipv6Addresses' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Lmaipv6Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lmaipv6-address")
    {
        for(auto const & c : lmaipv6_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address>();
        c->parent = this;
        lmaipv6_address.push_back(std::move(c));
        children[segment_path] = lmaipv6_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Lmaipv6Addresses::get_children()
{
    for (auto const & c : lmaipv6_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::Lmaipv6Address()
    :
    address{YType::str, "address"}
{
    yang_name = "lmaipv6-address"; yang_parent_name = "lmaipv6-addresses";
}

MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::~Lmaipv6Address()
{
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::has_data() const
{
    return address.is_set;
}

bool MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv6-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmaipv6Address' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

MobileIp::Lmas::Lma::Hnp::Hnp()
    :
    maximum{YType::uint32, "maximum"}
{
    yang_name = "hnp"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Hnp::~Hnp()
{
}

bool MobileIp::Lmas::Lma::Hnp::has_data() const
{
    return maximum.is_set;
}

bool MobileIp::Lmas::Lma::Hnp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation);
}

std::string MobileIp::Lmas::Lma::Hnp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hnp";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Hnp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hnp' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Hnp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Hnp::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Hnp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
}

MobileIp::Lmas::Lma::Redistribute::Redistribute()
    :
    redist_sub_type{YType::int32, "redist-sub-type"},
    redist_type{YType::int32, "redist-type"}
{
    yang_name = "redistribute"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Redistribute::~Redistribute()
{
}

bool MobileIp::Lmas::Lma::Redistribute::has_data() const
{
    return redist_sub_type.is_set
	|| redist_type.is_set;
}

bool MobileIp::Lmas::Lma::Redistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(redist_sub_type.operation)
	|| is_set(redist_type.operation);
}

std::string MobileIp::Lmas::Lma::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redist_sub_type.is_set || is_set(redist_sub_type.operation)) leaf_name_data.push_back(redist_sub_type.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.operation)) leaf_name_data.push_back(redist_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Redistribute::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redist-sub-type")
    {
        redist_sub_type = value;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
    }
}

MobileIp::Lmas::Lma::Dscp::Dscp()
    :
    force{YType::int32, "force"},
    value_{YType::uint32, "value"}
{
    yang_name = "dscp"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Dscp::~Dscp()
{
}

bool MobileIp::Lmas::Lma::Dscp::has_data() const
{
    return force.is_set
	|| value_.is_set;
}

bool MobileIp::Lmas::Lma::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(force.operation)
	|| is_set(value_.operation);
}

std::string MobileIp::Lmas::Lma::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Dscp::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Addresses()
{
    yang_name = "lmaipv4-addresses"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::~Lmaipv4Addresses()
{
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::has_data() const
{
    for (std::size_t index=0; index<lmaipv4_address.size(); index++)
    {
        if(lmaipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::has_operation() const
{
    for (std::size_t index=0; index<lmaipv4_address.size(); index++)
    {
        if(lmaipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Lmaipv4Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv4-addresses";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Lmaipv4Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmaipv4Addresses' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Lmaipv4Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lmaipv4-address")
    {
        for(auto const & c : lmaipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address>();
        c->parent = this;
        lmaipv4_address.push_back(std::move(c));
        children[segment_path] = lmaipv4_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Lmaipv4Addresses::get_children()
{
    for (auto const & c : lmaipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::Lmaipv4Address()
    :
    address{YType::str, "address"}
{
    yang_name = "lmaipv4-address"; yang_parent_name = "lmaipv4-addresses";
}

MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::~Lmaipv4Address()
{
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::has_data() const
{
    return address.is_set;
}

bool MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmaipv4-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmaipv4Address' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

MobileIp::Lmas::Lma::Roles::Roles()
{
    yang_name = "roles"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Roles::~Roles()
{
}

bool MobileIp::Lmas::Lma::Roles::has_data() const
{
    for (std::size_t index=0; index<role.size(); index++)
    {
        if(role[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Roles::has_operation() const
{
    for (std::size_t index=0; index<role.size(); index++)
    {
        if(role[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Roles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "roles";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Roles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Roles' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Roles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "role")
    {
        for(auto const & c : role)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Roles::Role>();
        c->parent = this;
        role.push_back(std::move(c));
        children[segment_path] = role.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Roles::get_children()
{
    for (auto const & c : role)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Roles::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Roles::Role::Role()
    :
    lma_role{YType::enumeration, "lma-role"}
{
    yang_name = "role"; yang_parent_name = "roles";
}

MobileIp::Lmas::Lma::Roles::Role::~Role()
{
}

bool MobileIp::Lmas::Lma::Roles::Role::has_data() const
{
    return lma_role.is_set;
}

bool MobileIp::Lmas::Lma::Roles::Role::has_operation() const
{
    return is_set(operation)
	|| is_set(lma_role.operation);
}

std::string MobileIp::Lmas::Lma::Roles::Role::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role" <<"[lma-role='" <<lma_role <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Roles::Role::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Role' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_role.is_set || is_set(lma_role.operation)) leaf_name_data.push_back(lma_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Roles::Role::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Roles::Role::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Roles::Role::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lma-role")
    {
        lma_role = value;
    }
}

MobileIp::Lmas::Lma::BindingAttributes::BindingAttributes()
    :
    create_wait_interval{YType::uint32, "create-wait-interval"},
    delete_wait_interval{YType::uint32, "delete-wait-interval"},
    max_life_time{YType::uint32, "max-life-time"},
    maximum{YType::uint32, "maximum"},
    refresh_time{YType::uint32, "refresh-time"}
{
    yang_name = "binding-attributes"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::BindingAttributes::~BindingAttributes()
{
}

bool MobileIp::Lmas::Lma::BindingAttributes::has_data() const
{
    return create_wait_interval.is_set
	|| delete_wait_interval.is_set
	|| max_life_time.is_set
	|| maximum.is_set
	|| refresh_time.is_set;
}

bool MobileIp::Lmas::Lma::BindingAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(create_wait_interval.operation)
	|| is_set(delete_wait_interval.operation)
	|| is_set(max_life_time.operation)
	|| is_set(maximum.operation)
	|| is_set(refresh_time.operation);
}

std::string MobileIp::Lmas::Lma::BindingAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::BindingAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_wait_interval.is_set || is_set(create_wait_interval.operation)) leaf_name_data.push_back(create_wait_interval.get_name_leafdata());
    if (delete_wait_interval.is_set || is_set(delete_wait_interval.operation)) leaf_name_data.push_back(delete_wait_interval.get_name_leafdata());
    if (max_life_time.is_set || is_set(max_life_time.operation)) leaf_name_data.push_back(max_life_time.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.operation)) leaf_name_data.push_back(refresh_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::BindingAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::BindingAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::BindingAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-wait-interval")
    {
        create_wait_interval = value;
    }
    if(value_path == "delete-wait-interval")
    {
        delete_wait_interval = value;
    }
    if(value_path == "max-life-time")
    {
        max_life_time = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
    }
}

MobileIp::Lmas::Lma::Aaa::Aaa()
    :
    enable{YType::int32, "enable"},
    interim_interval{YType::int32, "interim-interval"}
{
    yang_name = "aaa"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Aaa::~Aaa()
{
}

bool MobileIp::Lmas::Lma::Aaa::has_data() const
{
    return enable.is_set
	|| interim_interval.is_set;
}

bool MobileIp::Lmas::Lma::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(interim_interval.operation);
}

std::string MobileIp::Lmas::Lma::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.operation)) leaf_name_data.push_back(interim_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Aaa::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
    }
}

MobileIp::Lmas::Lma::Mags::Mags()
{
    yang_name = "mags"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Mags::~Mags()
{
}

bool MobileIp::Lmas::Lma::Mags::has_data() const
{
    for (std::size_t index=0; index<mag.size(); index++)
    {
        if(mag[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Mags::has_operation() const
{
    for (std::size_t index=0; index<mag.size(); index++)
    {
        if(mag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Mags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mags";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Mags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mags' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Mags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mag")
    {
        for(auto const & c : mag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag>();
        c->parent = this;
        mag.push_back(std::move(c));
        children[segment_path] = mag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Mags::get_children()
{
    for (auto const & c : mag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Mags::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Mags::Mag::Mag()
    :
    domain_name{YType::str, "domain-name"},
    mag_name{YType::str, "mag-name"},
    encap_option{YType::enumeration, "encap-option"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    tunnel{YType::str, "tunnel"}
    	,
    authenticate_option(std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption>())
	,dscp(std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::Dscp>())
{
    authenticate_option->parent = this;
    children["authenticate-option"] = authenticate_option;

    dscp->parent = this;
    children["dscp"] = dscp;

    yang_name = "mag"; yang_parent_name = "mags";
}

MobileIp::Lmas::Lma::Mags::Mag::~Mag()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::has_data() const
{
    return domain_name.is_set
	|| mag_name.is_set
	|| encap_option.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| tunnel.is_set
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (dscp !=  nullptr && dscp->has_data());
}

bool MobileIp::Lmas::Lma::Mags::Mag::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(mag_name.operation)
	|| is_set(encap_option.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(tunnel.operation)
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation());
}

std::string MobileIp::Lmas::Lma::Mags::Mag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mag" <<"[domain-name='" <<domain_name <<"']" <<"[mag-name='" <<mag_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Mags::Mag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mag' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (mag_name.is_set || is_set(mag_name.operation)) leaf_name_data.push_back(mag_name.get_name_leafdata());
    if (encap_option.is_set || is_set(encap_option.operation)) leaf_name_data.push_back(encap_option.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Mags::Mag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
        else
        {
            authenticate_option = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption>();
            authenticate_option->parent = this;
            children["authenticate-option"] = authenticate_option;
        }
        return children.at("authenticate-option");
    }

    if(child_yang_name == "dscp")
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
        else
        {
            dscp = std::make_shared<MobileIp::Lmas::Lma::Mags::Mag::Dscp>();
            dscp->parent = this;
            children["dscp"] = dscp;
        }
        return children.at("dscp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Mags::Mag::get_children()
{
    if(children.find("authenticate-option") == children.end())
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
    }

    if(children.find("dscp") == children.end())
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Mags::Mag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "mag-name")
    {
        mag_name = value;
    }
    if(value_path == "encap-option")
    {
        encap_option = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::AuthenticateOption()
    :
    key{YType::str, "key"},
    spi{YType::str, "spi"}
{
    yang_name = "authenticate-option"; yang_parent_name = "mag";
}

MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::has_data() const
{
    return key.is_set
	|| spi.is_set;
}

bool MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(spi.operation);
}

std::string MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticateOption' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

MobileIp::Lmas::Lma::Mags::Mag::Dscp::Dscp()
    :
    force{YType::int32, "force"},
    value_{YType::uint32, "value"}
{
    yang_name = "dscp"; yang_parent_name = "mag";
}

MobileIp::Lmas::Lma::Mags::Mag::Dscp::~Dscp()
{
}

bool MobileIp::Lmas::Lma::Mags::Mag::Dscp::has_data() const
{
    return force.is_set
	|| value_.is_set;
}

bool MobileIp::Lmas::Lma::Mags::Mag::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(force.operation)
	|| is_set(value_.operation);
}

std::string MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Mags::Mag::Dscp::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Mags::Mag::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

MobileIp::Lmas::Lma::TunnelAttributes::TunnelAttributes()
    :
    acl{YType::str, "acl"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "tunnel-attributes"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::TunnelAttributes::~TunnelAttributes()
{
}

bool MobileIp::Lmas::Lma::TunnelAttributes::has_data() const
{
    return acl.is_set
	|| mtu.is_set;
}

bool MobileIp::Lmas::Lma::TunnelAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(mtu.operation);
}

std::string MobileIp::Lmas::Lma::TunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::TunnelAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::TunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::TunnelAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::TunnelAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

MobileIp::Lmas::Lma::Services::Services()
{
    yang_name = "services"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Services::~Services()
{
}

bool MobileIp::Lmas::Lma::Services::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Services' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service>();
        c->parent = this;
        service.push_back(std::move(c));
        children[segment_path] = service.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::get_children()
{
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Service()
    :
    lma_service{YType::enumeration, "lma-service"},
    ignore{YType::empty, "ignore"},
    mnp_customer{YType::uint32, "mnp-customer"},
    mnp_ipv4_customer{YType::uint32, "mnp-ipv4-customer"},
    mnp_ipv4_lmn{YType::uint32, "mnp-ipv4-lmn"},
    mnp_ipv6_customer{YType::uint32, "mnp-ipv6-customer"},
    mnp_ipv6_lmn{YType::uint32, "mnp-ipv6-lmn"},
    mnp_lmn{YType::uint32, "mnp-lmn"}
    	,
    customers(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers>())
{
    customers->parent = this;
    children["customers"] = customers;

    yang_name = "service"; yang_parent_name = "services";
}

MobileIp::Lmas::Lma::Services::Service::~Service()
{
}

bool MobileIp::Lmas::Lma::Services::Service::has_data() const
{
    return lma_service.is_set
	|| ignore.is_set
	|| mnp_customer.is_set
	|| mnp_ipv4_customer.is_set
	|| mnp_ipv4_lmn.is_set
	|| mnp_ipv6_customer.is_set
	|| mnp_ipv6_lmn.is_set
	|| mnp_lmn.is_set
	|| (customers !=  nullptr && customers->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::has_operation() const
{
    return is_set(operation)
	|| is_set(lma_service.operation)
	|| is_set(ignore.operation)
	|| is_set(mnp_customer.operation)
	|| is_set(mnp_ipv4_customer.operation)
	|| is_set(mnp_ipv4_lmn.operation)
	|| is_set(mnp_ipv6_customer.operation)
	|| is_set(mnp_ipv6_lmn.operation)
	|| is_set(mnp_lmn.operation)
	|| (customers !=  nullptr && customers->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[lma-service='" <<lma_service <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_service.is_set || is_set(lma_service.operation)) leaf_name_data.push_back(lma_service.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (mnp_customer.is_set || is_set(mnp_customer.operation)) leaf_name_data.push_back(mnp_customer.get_name_leafdata());
    if (mnp_ipv4_customer.is_set || is_set(mnp_ipv4_customer.operation)) leaf_name_data.push_back(mnp_ipv4_customer.get_name_leafdata());
    if (mnp_ipv4_lmn.is_set || is_set(mnp_ipv4_lmn.operation)) leaf_name_data.push_back(mnp_ipv4_lmn.get_name_leafdata());
    if (mnp_ipv6_customer.is_set || is_set(mnp_ipv6_customer.operation)) leaf_name_data.push_back(mnp_ipv6_customer.get_name_leafdata());
    if (mnp_ipv6_lmn.is_set || is_set(mnp_ipv6_lmn.operation)) leaf_name_data.push_back(mnp_ipv6_lmn.get_name_leafdata());
    if (mnp_lmn.is_set || is_set(mnp_lmn.operation)) leaf_name_data.push_back(mnp_lmn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "customers")
    {
        if(customers != nullptr)
        {
            children["customers"] = customers;
        }
        else
        {
            customers = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers>();
            customers->parent = this;
            children["customers"] = customers;
        }
        return children.at("customers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::get_children()
{
    if(children.find("customers") == children.end())
    {
        if(customers != nullptr)
        {
            children["customers"] = customers;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lma-service")
    {
        lma_service = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer = value;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer = value;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn = value;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer = value;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn = value;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customers()
{
    yang_name = "customers"; yang_parent_name = "service";
}

MobileIp::Lmas::Lma::Services::Service::Customers::~Customers()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::has_data() const
{
    for (std::size_t index=0; index<customer.size(); index++)
    {
        if(customer[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::has_operation() const
{
    for (std::size_t index=0; index<customer.size(); index++)
    {
        if(customer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customers";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Customers' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "customer")
    {
        for(auto const & c : customer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer>();
        c->parent = this;
        customer.push_back(std::move(c));
        children[segment_path] = customer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::get_children()
{
    for (auto const & c : customer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Customer()
    :
    customer_name{YType::str, "customer-name"},
    vrf_name{YType::str, "vrf-name"},
    bandwidth_aggregate{YType::int32, "bandwidth-aggregate"},
    mnp_customer{YType::uint32, "mnp-customer"},
    mnp_ipv4_customer{YType::uint32, "mnp-ipv4-customer"},
    mnp_ipv4_lmn{YType::uint32, "mnp-ipv4-lmn"},
    mnp_ipv6_customer{YType::uint32, "mnp-ipv6-customer"},
    mnp_ipv6_lmn{YType::uint32, "mnp-ipv6-lmn"},
    mnp_lmn{YType::uint32, "mnp-lmn"},
    mobile_route_ad{YType::uint32, "mobile-route-ad"}
    	,
    authenticate_option(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption>())
	,binding_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes>())
	,gre_key(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey>())
	,heart_beat_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes>())
	,network_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes>())
	,transports(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports>())
{
    authenticate_option->parent = this;
    children["authenticate-option"] = authenticate_option;

    binding_attributes->parent = this;
    children["binding-attributes"] = binding_attributes;

    gre_key->parent = this;
    children["gre-key"] = gre_key;

    heart_beat_attributes->parent = this;
    children["heart-beat-attributes"] = heart_beat_attributes;

    network_attributes->parent = this;
    children["network-attributes"] = network_attributes;

    transports->parent = this;
    children["transports"] = transports;

    yang_name = "customer"; yang_parent_name = "customers";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::~Customer()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::has_data() const
{
    return customer_name.is_set
	|| vrf_name.is_set
	|| bandwidth_aggregate.is_set
	|| mnp_customer.is_set
	|| mnp_ipv4_customer.is_set
	|| mnp_ipv4_lmn.is_set
	|| mnp_ipv6_customer.is_set
	|| mnp_ipv6_lmn.is_set
	|| mnp_lmn.is_set
	|| mobile_route_ad.is_set
	|| (authenticate_option !=  nullptr && authenticate_option->has_data())
	|| (binding_attributes !=  nullptr && binding_attributes->has_data())
	|| (gre_key !=  nullptr && gre_key->has_data())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_data())
	|| (network_attributes !=  nullptr && network_attributes->has_data())
	|| (transports !=  nullptr && transports->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::has_operation() const
{
    return is_set(operation)
	|| is_set(customer_name.operation)
	|| is_set(vrf_name.operation)
	|| is_set(bandwidth_aggregate.operation)
	|| is_set(mnp_customer.operation)
	|| is_set(mnp_ipv4_customer.operation)
	|| is_set(mnp_ipv4_lmn.operation)
	|| is_set(mnp_ipv6_customer.operation)
	|| is_set(mnp_ipv6_lmn.operation)
	|| is_set(mnp_lmn.operation)
	|| is_set(mobile_route_ad.operation)
	|| (authenticate_option !=  nullptr && authenticate_option->has_operation())
	|| (binding_attributes !=  nullptr && binding_attributes->has_operation())
	|| (gre_key !=  nullptr && gre_key->has_operation())
	|| (heart_beat_attributes !=  nullptr && heart_beat_attributes->has_operation())
	|| (network_attributes !=  nullptr && network_attributes->has_operation())
	|| (transports !=  nullptr && transports->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "customer" <<"[customer-name='" <<customer_name <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Customer' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (customer_name.is_set || is_set(customer_name.operation)) leaf_name_data.push_back(customer_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (bandwidth_aggregate.is_set || is_set(bandwidth_aggregate.operation)) leaf_name_data.push_back(bandwidth_aggregate.get_name_leafdata());
    if (mnp_customer.is_set || is_set(mnp_customer.operation)) leaf_name_data.push_back(mnp_customer.get_name_leafdata());
    if (mnp_ipv4_customer.is_set || is_set(mnp_ipv4_customer.operation)) leaf_name_data.push_back(mnp_ipv4_customer.get_name_leafdata());
    if (mnp_ipv4_lmn.is_set || is_set(mnp_ipv4_lmn.operation)) leaf_name_data.push_back(mnp_ipv4_lmn.get_name_leafdata());
    if (mnp_ipv6_customer.is_set || is_set(mnp_ipv6_customer.operation)) leaf_name_data.push_back(mnp_ipv6_customer.get_name_leafdata());
    if (mnp_ipv6_lmn.is_set || is_set(mnp_ipv6_lmn.operation)) leaf_name_data.push_back(mnp_ipv6_lmn.get_name_leafdata());
    if (mnp_lmn.is_set || is_set(mnp_lmn.operation)) leaf_name_data.push_back(mnp_lmn.get_name_leafdata());
    if (mobile_route_ad.is_set || is_set(mobile_route_ad.operation)) leaf_name_data.push_back(mobile_route_ad.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authenticate-option")
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
        else
        {
            authenticate_option = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption>();
            authenticate_option->parent = this;
            children["authenticate-option"] = authenticate_option;
        }
        return children.at("authenticate-option");
    }

    if(child_yang_name == "binding-attributes")
    {
        if(binding_attributes != nullptr)
        {
            children["binding-attributes"] = binding_attributes;
        }
        else
        {
            binding_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes>();
            binding_attributes->parent = this;
            children["binding-attributes"] = binding_attributes;
        }
        return children.at("binding-attributes");
    }

    if(child_yang_name == "gre-key")
    {
        if(gre_key != nullptr)
        {
            children["gre-key"] = gre_key;
        }
        else
        {
            gre_key = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey>();
            gre_key->parent = this;
            children["gre-key"] = gre_key;
        }
        return children.at("gre-key");
    }

    if(child_yang_name == "heart-beat-attributes")
    {
        if(heart_beat_attributes != nullptr)
        {
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
        else
        {
            heart_beat_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes>();
            heart_beat_attributes->parent = this;
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
        return children.at("heart-beat-attributes");
    }

    if(child_yang_name == "network-attributes")
    {
        if(network_attributes != nullptr)
        {
            children["network-attributes"] = network_attributes;
        }
        else
        {
            network_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes>();
            network_attributes->parent = this;
            children["network-attributes"] = network_attributes;
        }
        return children.at("network-attributes");
    }

    if(child_yang_name == "transports")
    {
        if(transports != nullptr)
        {
            children["transports"] = transports;
        }
        else
        {
            transports = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports>();
            transports->parent = this;
            children["transports"] = transports;
        }
        return children.at("transports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::get_children()
{
    if(children.find("authenticate-option") == children.end())
    {
        if(authenticate_option != nullptr)
        {
            children["authenticate-option"] = authenticate_option;
        }
    }

    if(children.find("binding-attributes") == children.end())
    {
        if(binding_attributes != nullptr)
        {
            children["binding-attributes"] = binding_attributes;
        }
    }

    if(children.find("gre-key") == children.end())
    {
        if(gre_key != nullptr)
        {
            children["gre-key"] = gre_key;
        }
    }

    if(children.find("heart-beat-attributes") == children.end())
    {
        if(heart_beat_attributes != nullptr)
        {
            children["heart-beat-attributes"] = heart_beat_attributes;
        }
    }

    if(children.find("network-attributes") == children.end())
    {
        if(network_attributes != nullptr)
        {
            children["network-attributes"] = network_attributes;
        }
    }

    if(children.find("transports") == children.end())
    {
        if(transports != nullptr)
        {
            children["transports"] = transports;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "customer-name")
    {
        customer_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "bandwidth-aggregate")
    {
        bandwidth_aggregate = value;
    }
    if(value_path == "mnp-customer")
    {
        mnp_customer = value;
    }
    if(value_path == "mnp-ipv4-customer")
    {
        mnp_ipv4_customer = value;
    }
    if(value_path == "mnp-ipv4-lmn")
    {
        mnp_ipv4_lmn = value;
    }
    if(value_path == "mnp-ipv6-customer")
    {
        mnp_ipv6_customer = value;
    }
    if(value_path == "mnp-ipv6-lmn")
    {
        mnp_ipv6_lmn = value;
    }
    if(value_path == "mnp-lmn")
    {
        mnp_lmn = value;
    }
    if(value_path == "mobile-route-ad")
    {
        mobile_route_ad = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::AuthenticateOption()
    :
    key{YType::str, "key"},
    spi{YType::str, "spi"}
{
    yang_name = "authenticate-option"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::~AuthenticateOption()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::has_data() const
{
    return key.is_set
	|| spi.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(spi.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate-option";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticateOption' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::HeartBeatAttributes()
    :
    interval{YType::uint32, "interval"},
    retries{YType::uint32, "retries"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "heart-beat-attributes"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::~HeartBeatAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::has_data() const
{
    return interval.is_set
	|| retries.is_set
	|| timeout.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(retries.operation)
	|| is_set(timeout.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heart-beat-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HeartBeatAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transports()
{
    yang_name = "transports"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::~Transports()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::has_data() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transports' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport")
    {
        for(auto const & c : transport)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport>();
        c->parent = this;
        transport.push_back(std::move(c));
        children[segment_path] = transport.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::get_children()
{
    for (auto const & c : transport)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::Transport()
    :
    vrf_name{YType::str, "vrf-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "transport"; yang_parent_name = "transports";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::~Transport()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::has_data() const
{
    return vrf_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::NetworkAttributes()
    :
    unauthorize{YType::empty, "unauthorize"}
    	,
    authorizes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes>())
{
    authorizes->parent = this;
    children["authorizes"] = authorizes;

    yang_name = "network-attributes"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::~NetworkAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::has_data() const
{
    return unauthorize.is_set
	|| (authorizes !=  nullptr && authorizes->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(unauthorize.operation)
	|| (authorizes !=  nullptr && authorizes->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unauthorize.is_set || is_set(unauthorize.operation)) leaf_name_data.push_back(unauthorize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authorizes")
    {
        if(authorizes != nullptr)
        {
            children["authorizes"] = authorizes;
        }
        else
        {
            authorizes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes>();
            authorizes->parent = this;
            children["authorizes"] = authorizes;
        }
        return children.at("authorizes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::get_children()
{
    if(children.find("authorizes") == children.end())
    {
        if(authorizes != nullptr)
        {
            children["authorizes"] = authorizes;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unauthorize")
    {
        unauthorize = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorizes()
{
    yang_name = "authorizes"; yang_parent_name = "network-attributes";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::~Authorizes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::has_data() const
{
    for (std::size_t index=0; index<authorize.size(); index++)
    {
        if(authorize[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::has_operation() const
{
    for (std::size_t index=0; index<authorize.size(); index++)
    {
        if(authorize[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorizes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authorize")
    {
        for(auto const & c : authorize)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize>();
        c->parent = this;
        authorize.push_back(std::move(c));
        children[segment_path] = authorize.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::get_children()
{
    for (auto const & c : authorize)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::Authorize()
    :
    name{YType::str, "name"}
    	,
    pool_attributes(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes>())
{
    pool_attributes->parent = this;
    children["pool-attributes"] = pool_attributes;

    yang_name = "authorize"; yang_parent_name = "authorizes";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::~Authorize()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::has_data() const
{
    return name.is_set
	|| (pool_attributes !=  nullptr && pool_attributes->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (pool_attributes !=  nullptr && pool_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorize' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-attributes")
    {
        if(pool_attributes != nullptr)
        {
            children["pool-attributes"] = pool_attributes;
        }
        else
        {
            pool_attributes = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes>();
            pool_attributes->parent = this;
            children["pool-attributes"] = pool_attributes;
        }
        return children.at("pool-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::get_children()
{
    if(children.find("pool-attributes") == children.end())
    {
        if(pool_attributes != nullptr)
        {
            children["pool-attributes"] = pool_attributes;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::PoolAttributes()
    :
    mobile_network(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork>())
	,mobile_node(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode>())
{
    mobile_network->parent = this;
    children["mobile-network"] = mobile_network;

    mobile_node->parent = this;
    children["mobile-node"] = mobile_node;

    yang_name = "pool-attributes"; yang_parent_name = "authorize";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::~PoolAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::has_data() const
{
    return (mobile_network !=  nullptr && mobile_network->has_data())
	|| (mobile_node !=  nullptr && mobile_node->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::has_operation() const
{
    return is_set(operation)
	|| (mobile_network !=  nullptr && mobile_network->has_operation())
	|| (mobile_node !=  nullptr && mobile_node->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mobile-network")
    {
        if(mobile_network != nullptr)
        {
            children["mobile-network"] = mobile_network;
        }
        else
        {
            mobile_network = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork>();
            mobile_network->parent = this;
            children["mobile-network"] = mobile_network;
        }
        return children.at("mobile-network");
    }

    if(child_yang_name == "mobile-node")
    {
        if(mobile_node != nullptr)
        {
            children["mobile-node"] = mobile_node;
        }
        else
        {
            mobile_node = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode>();
            mobile_node->parent = this;
            children["mobile-node"] = mobile_node;
        }
        return children.at("mobile-node");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::get_children()
{
    if(children.find("mobile-network") == children.end())
    {
        if(mobile_network != nullptr)
        {
            children["mobile-network"] = mobile_network;
        }
    }

    if(children.find("mobile-node") == children.end())
    {
        if(mobile_node != nullptr)
        {
            children["mobile-node"] = mobile_node;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::MobileNode()
    :
    ipv4_pool(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool>())
	,ipv6_pool(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool>())
{
    ipv4_pool->parent = this;
    children["ipv4-pool"] = ipv4_pool;

    ipv6_pool->parent = this;
    children["ipv6-pool"] = ipv6_pool;

    yang_name = "mobile-node"; yang_parent_name = "pool-attributes";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::~MobileNode()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::has_data() const
{
    return (ipv4_pool !=  nullptr && ipv4_pool->has_data())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::has_operation() const
{
    return is_set(operation)
	|| (ipv4_pool !=  nullptr && ipv4_pool->has_operation())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-node";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileNode' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-pool")
    {
        if(ipv4_pool != nullptr)
        {
            children["ipv4-pool"] = ipv4_pool;
        }
        else
        {
            ipv4_pool = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool>();
            ipv4_pool->parent = this;
            children["ipv4-pool"] = ipv4_pool;
        }
        return children.at("ipv4-pool");
    }

    if(child_yang_name == "ipv6-pool")
    {
        if(ipv6_pool != nullptr)
        {
            children["ipv6-pool"] = ipv6_pool;
        }
        else
        {
            ipv6_pool = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool>();
            ipv6_pool->parent = this;
            children["ipv6-pool"] = ipv6_pool;
        }
        return children.at("ipv6-pool");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::get_children()
{
    if(children.find("ipv4-pool") == children.end())
    {
        if(ipv4_pool != nullptr)
        {
            children["ipv4-pool"] = ipv4_pool;
        }
    }

    if(children.find("ipv6-pool") == children.end())
    {
        if(ipv6_pool != nullptr)
        {
            children["ipv6-pool"] = ipv6_pool;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::Ipv4Pool()
    :
    pool_prefix{YType::uint32, "pool-prefix"},
    start_address{YType::str, "start-address"}
{
    yang_name = "ipv4-pool"; yang_parent_name = "mobile-node";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::~Ipv4Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::has_data() const
{
    return pool_prefix.is_set
	|| start_address.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_prefix.operation)
	|| is_set(start_address.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pool";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::Ipv6Pool()
    :
    pool_prefix{YType::uint32, "pool-prefix"},
    start_address{YType::str, "start-address"}
{
    yang_name = "ipv6-pool"; yang_parent_name = "mobile-node";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::~Ipv6Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::has_data() const
{
    return pool_prefix.is_set
	|| start_address.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_prefix.operation)
	|| is_set(start_address.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-pool";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::MobileNetwork()
    :
    mripv4_pools(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools>())
	,mripv6_pools(std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools>())
{
    mripv4_pools->parent = this;
    children["mripv4-pools"] = mripv4_pools;

    mripv6_pools->parent = this;
    children["mripv6-pools"] = mripv6_pools;

    yang_name = "mobile-network"; yang_parent_name = "pool-attributes";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::~MobileNetwork()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::has_data() const
{
    return (mripv4_pools !=  nullptr && mripv4_pools->has_data())
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_data());
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::has_operation() const
{
    return is_set(operation)
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_operation())
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_operation());
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-network";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileNetwork' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv4-pools")
    {
        if(mripv4_pools != nullptr)
        {
            children["mripv4-pools"] = mripv4_pools;
        }
        else
        {
            mripv4_pools = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools>();
            mripv4_pools->parent = this;
            children["mripv4-pools"] = mripv4_pools;
        }
        return children.at("mripv4-pools");
    }

    if(child_yang_name == "mripv6-pools")
    {
        if(mripv6_pools != nullptr)
        {
            children["mripv6-pools"] = mripv6_pools;
        }
        else
        {
            mripv6_pools = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools>();
            mripv6_pools->parent = this;
            children["mripv6-pools"] = mripv6_pools;
        }
        return children.at("mripv6-pools");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::get_children()
{
    if(children.find("mripv4-pools") == children.end())
    {
        if(mripv4_pools != nullptr)
        {
            children["mripv4-pools"] = mripv4_pools;
        }
    }

    if(children.find("mripv6-pools") == children.end())
    {
        if(mripv6_pools != nullptr)
        {
            children["mripv6-pools"] = mripv6_pools;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pools()
{
    yang_name = "mripv4-pools"; yang_parent_name = "mobile-network";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::~Mripv4Pools()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::has_data() const
{
    for (std::size_t index=0; index<mripv4_pool.size(); index++)
    {
        if(mripv4_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv4_pool.size(); index++)
    {
        if(mripv4_pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pools";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv4Pools' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv4-pool")
    {
        for(auto const & c : mripv4_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool>();
        c->parent = this;
        mripv4_pool.push_back(std::move(c));
        children[segment_path] = mripv4_pool.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::get_children()
{
    for (auto const & c : mripv4_pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::Mripv4Pool()
    :
    start_address{YType::str, "start-address"},
    network_prefix{YType::uint32, "network-prefix"},
    pool_prefix{YType::uint32, "pool-prefix"}
{
    yang_name = "mripv4-pool"; yang_parent_name = "mripv4-pools";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::~Mripv4Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_data() const
{
    return start_address.is_set
	|| network_prefix.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(network_prefix.operation)
	|| is_set(pool_prefix.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pool" <<"[start-address='" <<start_address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv4Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pools()
{
    yang_name = "mripv6-pools"; yang_parent_name = "mobile-network";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::~Mripv6Pools()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::has_data() const
{
    for (std::size_t index=0; index<mripv6_pool.size(); index++)
    {
        if(mripv6_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv6_pool.size(); index++)
    {
        if(mripv6_pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pools";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv6Pools' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv6-pool")
    {
        for(auto const & c : mripv6_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool>();
        c->parent = this;
        mripv6_pool.push_back(std::move(c));
        children[segment_path] = mripv6_pool.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::get_children()
{
    for (auto const & c : mripv6_pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::Mripv6Pool()
    :
    start_address{YType::str, "start-address"},
    network_prefix{YType::uint32, "network-prefix"},
    pool_prefix{YType::uint32, "pool-prefix"}
{
    yang_name = "mripv6-pool"; yang_parent_name = "mripv6-pools";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::~Mripv6Pool()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_data() const
{
    return start_address.is_set
	|| network_prefix.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(network_prefix.operation)
	|| is_set(pool_prefix.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pool" <<"[start-address='" <<start_address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv6Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::GreKey()
    :
    gre_key_type{YType::int32, "gre-key-type"},
    gre_key_value{YType::int32, "gre-key-value"}
{
    yang_name = "gre-key"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::~GreKey()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::has_data() const
{
    return gre_key_type.is_set
	|| gre_key_value.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::has_operation() const
{
    return is_set(operation)
	|| is_set(gre_key_type.operation)
	|| is_set(gre_key_value.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-key";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreKey' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_key_type.is_set || is_set(gre_key_type.operation)) leaf_name_data.push_back(gre_key_type.get_name_leafdata());
    if (gre_key_value.is_set || is_set(gre_key_value.operation)) leaf_name_data.push_back(gre_key_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gre-key-type")
    {
        gre_key_type = value;
    }
    if(value_path == "gre-key-value")
    {
        gre_key_value = value;
    }
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::BindingAttributes()
    :
    max_life_time{YType::uint32, "max-life-time"}
{
    yang_name = "binding-attributes"; yang_parent_name = "customer";
}

MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::~BindingAttributes()
{
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::has_data() const
{
    return max_life_time.is_set;
}

bool MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(max_life_time.operation);
}

std::string MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_life_time.is_set || is_set(max_life_time.operation)) leaf_name_data.push_back(max_life_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-life-time")
    {
        max_life_time = value;
    }
}

MobileIp::Lmas::Lma::ReplayProtection::ReplayProtection()
    :
    ignore{YType::int32, "ignore"},
    validity_window{YType::uint32, "validity-window"}
{
    yang_name = "replay-protection"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::ReplayProtection::~ReplayProtection()
{
}

bool MobileIp::Lmas::Lma::ReplayProtection::has_data() const
{
    return ignore.is_set
	|| validity_window.is_set;
}

bool MobileIp::Lmas::Lma::ReplayProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(validity_window.operation);
}

std::string MobileIp::Lmas::Lma::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::ReplayProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplayProtection' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (validity_window.is_set || is_set(validity_window.operation)) leaf_name_data.push_back(validity_window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::ReplayProtection::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::ReplayProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "validity-window")
    {
        validity_window = value;
    }
}

MobileIp::Lmas::Lma::Networks::Networks()
{
    yang_name = "networks"; yang_parent_name = "lma";
}

MobileIp::Lmas::Lma::Networks::~Networks()
{
}

bool MobileIp::Lmas::Lma::Networks::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Networks' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Networks::Network>();
        c->parent = this;
        network.push_back(std::move(c));
        children[segment_path] = network.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::get_children()
{
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::Network()
    :
    lma_network{YType::str, "lma-network"}
    	,
    pool_attributes(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes>())
{
    pool_attributes->parent = this;
    children["pool-attributes"] = pool_attributes;

    yang_name = "network"; yang_parent_name = "networks";
}

MobileIp::Lmas::Lma::Networks::Network::~Network()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::has_data() const
{
    return lma_network.is_set
	|| (pool_attributes !=  nullptr && pool_attributes->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(lma_network.operation)
	|| (pool_attributes !=  nullptr && pool_attributes->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[lma-network='" <<lma_network <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lma_network.is_set || is_set(lma_network.operation)) leaf_name_data.push_back(lma_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-attributes")
    {
        if(pool_attributes != nullptr)
        {
            children["pool-attributes"] = pool_attributes;
        }
        else
        {
            pool_attributes = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes>();
            pool_attributes->parent = this;
            children["pool-attributes"] = pool_attributes;
        }
        return children.at("pool-attributes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::get_children()
{
    if(children.find("pool-attributes") == children.end())
    {
        if(pool_attributes != nullptr)
        {
            children["pool-attributes"] = pool_attributes;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lma-network")
    {
        lma_network = value;
    }
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::PoolAttributes()
    :
    mobile_network(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork>())
	,mobile_node(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode>())
{
    mobile_network->parent = this;
    children["mobile-network"] = mobile_network;

    mobile_node->parent = this;
    children["mobile-node"] = mobile_node;

    yang_name = "pool-attributes"; yang_parent_name = "network";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::~PoolAttributes()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::has_data() const
{
    return (mobile_network !=  nullptr && mobile_network->has_data())
	|| (mobile_node !=  nullptr && mobile_node->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::has_operation() const
{
    return is_set(operation)
	|| (mobile_network !=  nullptr && mobile_network->has_operation())
	|| (mobile_node !=  nullptr && mobile_node->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-attributes";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolAttributes' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mobile-network")
    {
        if(mobile_network != nullptr)
        {
            children["mobile-network"] = mobile_network;
        }
        else
        {
            mobile_network = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork>();
            mobile_network->parent = this;
            children["mobile-network"] = mobile_network;
        }
        return children.at("mobile-network");
    }

    if(child_yang_name == "mobile-node")
    {
        if(mobile_node != nullptr)
        {
            children["mobile-node"] = mobile_node;
        }
        else
        {
            mobile_node = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode>();
            mobile_node->parent = this;
            children["mobile-node"] = mobile_node;
        }
        return children.at("mobile-node");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::get_children()
{
    if(children.find("mobile-network") == children.end())
    {
        if(mobile_network != nullptr)
        {
            children["mobile-network"] = mobile_network;
        }
    }

    if(children.find("mobile-node") == children.end())
    {
        if(mobile_node != nullptr)
        {
            children["mobile-node"] = mobile_node;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::MobileNode()
    :
    ipv4_pool(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool>())
	,ipv6_pool(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool>())
{
    ipv4_pool->parent = this;
    children["ipv4-pool"] = ipv4_pool;

    ipv6_pool->parent = this;
    children["ipv6-pool"] = ipv6_pool;

    yang_name = "mobile-node"; yang_parent_name = "pool-attributes";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::~MobileNode()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::has_data() const
{
    return (ipv4_pool !=  nullptr && ipv4_pool->has_data())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::has_operation() const
{
    return is_set(operation)
	|| (ipv4_pool !=  nullptr && ipv4_pool->has_operation())
	|| (ipv6_pool !=  nullptr && ipv6_pool->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-node";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileNode' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-pool")
    {
        if(ipv4_pool != nullptr)
        {
            children["ipv4-pool"] = ipv4_pool;
        }
        else
        {
            ipv4_pool = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool>();
            ipv4_pool->parent = this;
            children["ipv4-pool"] = ipv4_pool;
        }
        return children.at("ipv4-pool");
    }

    if(child_yang_name == "ipv6-pool")
    {
        if(ipv6_pool != nullptr)
        {
            children["ipv6-pool"] = ipv6_pool;
        }
        else
        {
            ipv6_pool = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool>();
            ipv6_pool->parent = this;
            children["ipv6-pool"] = ipv6_pool;
        }
        return children.at("ipv6-pool");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::get_children()
{
    if(children.find("ipv4-pool") == children.end())
    {
        if(ipv4_pool != nullptr)
        {
            children["ipv4-pool"] = ipv4_pool;
        }
    }

    if(children.find("ipv6-pool") == children.end())
    {
        if(ipv6_pool != nullptr)
        {
            children["ipv6-pool"] = ipv6_pool;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::Ipv4Pool()
    :
    pool_prefix{YType::uint32, "pool-prefix"},
    start_address{YType::str, "start-address"}
{
    yang_name = "ipv4-pool"; yang_parent_name = "mobile-node";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::~Ipv4Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::has_data() const
{
    return pool_prefix.is_set
	|| start_address.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_prefix.operation)
	|| is_set(start_address.operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-pool";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::Ipv6Pool()
    :
    pool_prefix{YType::uint32, "pool-prefix"},
    start_address{YType::str, "start-address"}
{
    yang_name = "ipv6-pool"; yang_parent_name = "mobile-node";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::~Ipv6Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::has_data() const
{
    return pool_prefix.is_set
	|| start_address.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_prefix.operation)
	|| is_set(start_address.operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-pool";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::MobileNetwork()
    :
    mripv4_pools(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools>())
	,mripv6_pools(std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools>())
{
    mripv4_pools->parent = this;
    children["mripv4-pools"] = mripv4_pools;

    mripv6_pools->parent = this;
    children["mripv6-pools"] = mripv6_pools;

    yang_name = "mobile-network"; yang_parent_name = "pool-attributes";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::~MobileNetwork()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::has_data() const
{
    return (mripv4_pools !=  nullptr && mripv4_pools->has_data())
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_data());
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::has_operation() const
{
    return is_set(operation)
	|| (mripv4_pools !=  nullptr && mripv4_pools->has_operation())
	|| (mripv6_pools !=  nullptr && mripv6_pools->has_operation());
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-network";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobileNetwork' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv4-pools")
    {
        if(mripv4_pools != nullptr)
        {
            children["mripv4-pools"] = mripv4_pools;
        }
        else
        {
            mripv4_pools = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools>();
            mripv4_pools->parent = this;
            children["mripv4-pools"] = mripv4_pools;
        }
        return children.at("mripv4-pools");
    }

    if(child_yang_name == "mripv6-pools")
    {
        if(mripv6_pools != nullptr)
        {
            children["mripv6-pools"] = mripv6_pools;
        }
        else
        {
            mripv6_pools = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools>();
            mripv6_pools->parent = this;
            children["mripv6-pools"] = mripv6_pools;
        }
        return children.at("mripv6-pools");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::get_children()
{
    if(children.find("mripv4-pools") == children.end())
    {
        if(mripv4_pools != nullptr)
        {
            children["mripv4-pools"] = mripv4_pools;
        }
    }

    if(children.find("mripv6-pools") == children.end())
    {
        if(mripv6_pools != nullptr)
        {
            children["mripv6-pools"] = mripv6_pools;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pools()
{
    yang_name = "mripv6-pools"; yang_parent_name = "mobile-network";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::~Mripv6Pools()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::has_data() const
{
    for (std::size_t index=0; index<mripv6_pool.size(); index++)
    {
        if(mripv6_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv6_pool.size(); index++)
    {
        if(mripv6_pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pools";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv6Pools' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv6-pool")
    {
        for(auto const & c : mripv6_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool>();
        c->parent = this;
        mripv6_pool.push_back(std::move(c));
        children[segment_path] = mripv6_pool.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::get_children()
{
    for (auto const & c : mripv6_pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::Mripv6Pool()
    :
    start_address{YType::str, "start-address"},
    network_prefix{YType::uint32, "network-prefix"},
    pool_prefix{YType::uint32, "pool-prefix"}
{
    yang_name = "mripv6-pool"; yang_parent_name = "mripv6-pools";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::~Mripv6Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_data() const
{
    return start_address.is_set
	|| network_prefix.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(network_prefix.operation)
	|| is_set(pool_prefix.operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv6-pool" <<"[start-address='" <<start_address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv6Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pools()
{
    yang_name = "mripv4-pools"; yang_parent_name = "mobile-network";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::~Mripv4Pools()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::has_data() const
{
    for (std::size_t index=0; index<mripv4_pool.size(); index++)
    {
        if(mripv4_pool[index]->has_data())
            return true;
    }
    return false;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::has_operation() const
{
    for (std::size_t index=0; index<mripv4_pool.size(); index++)
    {
        if(mripv4_pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pools";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv4Pools' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mripv4-pool")
    {
        for(auto const & c : mripv4_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool>();
        c->parent = this;
        mripv4_pool.push_back(std::move(c));
        children[segment_path] = mripv4_pool.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::get_children()
{
    for (auto const & c : mripv4_pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::set_value(const std::string & value_path, std::string value)
{
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::Mripv4Pool()
    :
    start_address{YType::str, "start-address"},
    network_prefix{YType::uint32, "network-prefix"},
    pool_prefix{YType::uint32, "pool-prefix"}
{
    yang_name = "mripv4-pool"; yang_parent_name = "mripv4-pools";
}

MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::~Mripv4Pool()
{
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_data() const
{
    return start_address.is_set
	|| network_prefix.is_set
	|| pool_prefix.is_set;
}

bool MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(network_prefix.operation)
	|| is_set(pool_prefix.operation);
}

std::string MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mripv4-pool" <<"[start-address='" <<start_address <<"']";

    return path_buffer.str();

}

EntityPath MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mripv4Pool' in Cisco_IOS_XR_ip_mobileip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (pool_prefix.is_set || is_set(pool_prefix.operation)) leaf_name_data.push_back(pool_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::get_children()
{
    return children;
}

void MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
    if(value_path == "pool-prefix")
    {
        pool_prefix = value;
    }
}

const Enum::YLeaf LmaRatEnum::virtual_ {0, "virtual"};
const Enum::YLeaf LmaRatEnum::ppp {1, "ppp"};
const Enum::YLeaf LmaRatEnum::ethernet {2, "ethernet"};
const Enum::YLeaf LmaRatEnum::wlan {3, "wlan"};
const Enum::YLeaf LmaRatEnum::wi_max {4, "wi-max"};
const Enum::YLeaf LmaRatEnum::Y_3gppgeran {5, "3gppgeran"};
const Enum::YLeaf LmaRatEnum::Y_3gpputran {6, "3gpputran"};
const Enum::YLeaf LmaRatEnum::Y_3gppeutran {7, "3gppeutran"};
const Enum::YLeaf LmaRatEnum::Y_3gpp2ehrpd {8, "3gpp2ehrpd"};
const Enum::YLeaf LmaRatEnum::Y_3gpp2hrpd {9, "3gpp2hrpd"};
const Enum::YLeaf LmaRatEnum::Y_3gpp21rtt {10, "3gpp21rtt"};
const Enum::YLeaf LmaRatEnum::Y_3gpp2umb {11, "3gpp2umb"};

const Enum::YLeaf ServiceTypeEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf ServiceTypeEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf ServiceTypeEnum::dual {3, "dual"};

const Enum::YLeaf LmaServiceEnum::service_mll {1, "service-mll"};

const Enum::YLeaf EncapOptEnum::greipv4 {4, "greipv4"};
const Enum::YLeaf EncapOptEnum::greipv6 {5, "greipv6"};
const Enum::YLeaf EncapOptEnum::mgreipv4 {7, "mgreipv4"};
const Enum::YLeaf EncapOptEnum::mgreipv6 {8, "mgreipv6"};

const Enum::YLeaf LmaRoleEnum::Y_3gma {0, "3gma"};


}
}

