
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>())
	,secondary_domain_ids(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>())
{
    primary_domain_id->parent = this;
    secondary_domain_ids->parent = this;

    yang_name = "domain-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::~DomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::has_data() const
{
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::has_operation() const
{
    return is_set(yfilter)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id == nullptr)
        {
            primary_domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>();
        }
        return primary_domain_id;
    }

    if(child_yang_name == "secondary-domain-ids")
    {
        if(secondary_domain_ids == nullptr)
        {
            secondary_domain_ids = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>();
        }
        return secondary_domain_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    if(secondary_domain_ids != nullptr)
    {
        children["secondary-domain-ids"] = secondary_domain_ids;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-domain-id" || name == "secondary-domain-ids")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{

    yang_name = "primary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_name.yfilter)
	|| ydk::is_set(domain_id_type.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.yfilter)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
        domain_id_name.value_namespace = name_space;
        domain_id_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name.yfilter = yfilter;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-name" || name == "domain-id-type")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainIds()
{

    yang_name = "secondary-domain-ids"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::~SecondaryDomainIds()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-domain-id")
    {
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_domain_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-domain-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::enumeration, "domain-id-type"},
    domain_id_name{YType::str, "domain-id-name"}
{

    yang_name = "secondary-domain-id"; yang_parent_name = "secondary-domain-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id" <<"[domain-id-type='" <<domain_id_type <<"']" <<"[domain-id-name='" <<domain_id_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_name.is_set || is_set(domain_id_name.yfilter)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
        domain_id_name.value_namespace = name_space;
        domain_id_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-name")
    {
        domain_id_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "encryption"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::PerLink()
    :
    priority{YType::enumeration, "priority"}
{

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_data() const
{
    return priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::PerPrefix()
    :
    load_sharing_disable{YType::empty, "load-sharing-disable"},
    priority{YType::enumeration, "priority"}
    	,
    tiebreakers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>())
{
    tiebreakers->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_data() const
{
    return load_sharing_disable.is_set
	|| priority.is_set
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing_disable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing_disable.is_set || is_set(load_sharing_disable.yfilter)) leaf_name_data.push_back(load_sharing_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers == nullptr)
        {
            tiebreakers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>();
        }
        return tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tiebreakers != nullptr)
    {
        children["tiebreakers"] = tiebreakers;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable = value;
        load_sharing_disable.value_namespace = name_space;
        load_sharing_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreakers" || name == "load-sharing-disable" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{

    yang_name = "tiebreakers"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::GracefulRestart()
    :
    enable{YType::empty, "enable"},
    helper{YType::empty, "helper"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "graceful-restart"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::has_data() const
{
    return enable.is_set
	|| helper.is_set
	|| interval.is_set
	|| lifetime.is_set
	|| strict_lsa_checking.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(helper.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (helper.is_set || is_set(helper.yfilter)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper")
    {
        helper = value;
        helper.value_namespace = name_space;
        helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
        strict_lsa_checking.value_namespace = name_space;
        strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "helper")
    {
        helper.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "helper" || name == "interval" || name == "lifetime" || name == "strict-lsa-checking")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Ignore()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa>())
{
    lsa->parent = this;

    yang_name = "ignore"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::~Ignore()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa>();
        }
        return lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::Lsa()
    :
    mospf{YType::empty, "mospf"}
{

    yang_name = "lsa"; yang_parent_name = "ignore"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::has_data() const
{
    return mospf.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mospf.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mospf.is_set || is_set(mospf.yfilter)) leaf_name_data.push_back(mospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mospf")
    {
        mospf = value;
        mospf.value_namespace = name_space;
        mospf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mospf")
    {
        mospf.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mospf")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::Maximum()
    :
    interfaces{YType::uint32, "interfaces"},
    paths{YType::uint32, "paths"}
    	,
    redistributed_prefixes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes>())
{
    redistributed_prefixes->parent = this;

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::has_data() const
{
    return interfaces.is_set
	|| paths.is_set
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistributed-prefixes")
    {
        if(redistributed_prefixes == nullptr)
        {
            redistributed_prefixes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes>();
        }
        return redistributed_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistributed_prefixes != nullptr)
    {
        children["redistributed-prefixes"] = redistributed_prefixes;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistributed-prefixes" || name == "interfaces" || name == "paths")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::RedistributedPrefixes()
    :
    prefixes{YType::uint32, "prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "redistributed-prefixes"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::~RedistributedPrefixes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::has_data() const
{
    return prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::ProcessScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>())
{
    fast_reroute->parent = this;

    yang_name = "process-scope"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::~ProcessScope()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "process-scope"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistributes()
{

    yang_name = "redistributes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::~Redistributes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        for(auto const & c : redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_subscriber_or_mobile(nullptr) // presence node
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected-or-static-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_subscriber_or_mobile == nullptr)
        {
            connected_or_static_or_subscriber_or_mobile = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile>();
        }
        return connected_or_static_or_subscriber_or_mobile;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3-or-isis-or-application")
    {
        for(auto const & c : ospfv3_or_isis_or_application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication>();
        c->parent = this;
        ospfv3_or_isis_or_application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected_or_static_or_subscriber_or_mobile != nullptr)
    {
        children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3_or_isis_or_application)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected-or-static-or-subscriber-or-mobile" || name == "eigrp" || name == "ospfv3-or-isis-or-application" || name == "protocol-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::ConnectedOrStaticOrSubscriberOrMobile()
    :
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "connected-or-static-or-subscriber-or-mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::~ConnectedOrStaticOrSubscriberOrMobile()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_data() const
{
    return default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-subscriber-or-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    as_xx{YType::uint32, "as-xx"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::has_data() const
{
    return as_xx.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-xx='" <<as_xx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::Ospfv3OrIsisOrApplication()
    :
    process_name{YType::str, "process-name"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ospfv3-or-isis-or-application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::~Ospfv3OrIsisOrApplication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_data() const
{
    return process_name.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-or-isis-or-application" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::Snmp()
    :
    context{YType::str, "context"}
    	,
    trap_rate_limit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit>())
{
    trap_rate_limit->parent = this;

    yang_name = "snmp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::~Snmp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::has_data() const
{
    return context.is_set
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-rate-limit")
    {
        if(trap_rate_limit == nullptr)
        {
            trap_rate_limit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit>();
        }
        return trap_rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_rate_limit != nullptr)
    {
        children["trap-rate-limit"] = trap_rate_limit;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-rate-limit" || name == "context")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::TrapRateLimit()
    :
    max_window_traps{YType::uint32, "max-window-traps"},
    window_size{YType::uint32, "window-size"}
{

    yang_name = "trap-rate-limit"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::~TrapRateLimit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::has_data() const
{
    return max_window_traps.is_set
	|| window_size.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_window_traps.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_window_traps.is_set || is_set(max_window_traps.yfilter)) leaf_name_data.push_back(max_window_traps.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps = value;
        max_window_traps.value_namespace = name_space;
        max_window_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-window-traps" || name == "window-size")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::StubRouter()
    :
    max_metric(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric>())
	,rbit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit>())
	,v6bit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit>())
{
    max_metric->parent = this;
    rbit->parent = this;
    v6bit->parent = this;

    yang_name = "stub-router"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::has_data() const
{
    return (max_metric !=  nullptr && max_metric->has_data())
	|| (rbit !=  nullptr && rbit->has_data())
	|| (v6bit !=  nullptr && v6bit->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::has_operation() const
{
    return is_set(yfilter)
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (rbit !=  nullptr && rbit->has_operation())
	|| (v6bit !=  nullptr && v6bit->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "rbit")
    {
        if(rbit == nullptr)
        {
            rbit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit>();
        }
        return rbit;
    }

    if(child_yang_name == "v6bit")
    {
        if(v6bit == nullptr)
        {
            v6bit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit>();
        }
        return v6bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(rbit != nullptr)
    {
        children["rbit"] = rbit;
    }

    if(v6bit != nullptr)
    {
        children["v6bit"] = v6bit;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-metric" || name == "rbit" || name == "v6bit")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::MaxMetric()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "max-metric"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::~MaxMetric()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::Rbit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "rbit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::~Rbit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "rbit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::V6Bit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "v6bit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::~V6Bit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "v6bit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Timers()
    :
    lsa_timers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers>())
	,pacing(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing>())
	,throttle(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle>())
{
    lsa_timers->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::~Timers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::has_data() const
{
    return (lsa_timers !=  nullptr && lsa_timers->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_timers !=  nullptr && lsa_timers->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-timers")
    {
        if(lsa_timers == nullptr)
        {
            lsa_timers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers>();
        }
        return lsa_timers;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_timers != nullptr)
    {
        children["lsa-timers"] = lsa_timers;
    }

    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-timers" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::LsaTimers()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa-timers"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::~LsaTimers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::has_data() const
{
    return arrival.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::~Pacing()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::~Throttle()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::Lsa()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "maximum-delay" || name == "minimum-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::Spf()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::~Spf()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "maximum-delay" || name == "minimum-delay")
        return true;
    return false;
}


}
}

