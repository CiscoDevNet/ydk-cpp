
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lmp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lmp_oper {

Lmp::Lmp()
    :
    global_status(std::make_shared<Lmp::GlobalStatus>())
    , clients(std::make_shared<Lmp::Clients>())
    , gmpls_uni(std::make_shared<Lmp::GmplsUni>())
    , component_link_ids(std::make_shared<Lmp::ComponentLinkIds>())
{
    global_status->parent = this;
    clients->parent = this;
    gmpls_uni->parent = this;
    component_link_ids->parent = this;

    yang_name = "lmp"; yang_parent_name = "Cisco-IOS-XR-lmp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Lmp::~Lmp()
{
}

bool Lmp::has_data() const
{
    if (is_presence_container) return true;
    return (global_status !=  nullptr && global_status->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_data())
	|| (component_link_ids !=  nullptr && component_link_ids->has_data());
}

bool Lmp::has_operation() const
{
    return is_set(yfilter)
	|| (global_status !=  nullptr && global_status->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (gmpls_uni !=  nullptr && gmpls_uni->has_operation())
	|| (component_link_ids !=  nullptr && component_link_ids->has_operation());
}

std::string Lmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-status")
    {
        if(global_status == nullptr)
        {
            global_status = std::make_shared<Lmp::GlobalStatus>();
        }
        return global_status;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Lmp::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "gmpls-uni")
    {
        if(gmpls_uni == nullptr)
        {
            gmpls_uni = std::make_shared<Lmp::GmplsUni>();
        }
        return gmpls_uni;
    }

    if(child_yang_name == "component-link-ids")
    {
        if(component_link_ids == nullptr)
        {
            component_link_ids = std::make_shared<Lmp::ComponentLinkIds>();
        }
        return component_link_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_status != nullptr)
    {
        _children["global-status"] = global_status;
    }

    if(clients != nullptr)
    {
        _children["clients"] = clients;
    }

    if(gmpls_uni != nullptr)
    {
        _children["gmpls-uni"] = gmpls_uni;
    }

    if(component_link_ids != nullptr)
    {
        _children["component-link-ids"] = component_link_ids;
    }

    return _children;
}

void Lmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Lmp::clone_ptr() const
{
    return std::make_shared<Lmp>();
}

std::string Lmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-status" || name == "clients" || name == "gmpls-uni" || name == "component-link-ids")
        return true;
    return false;
}

Lmp::GlobalStatus::GlobalStatus()
    :
    local_ouni_lmp_node_id_interface{YType::str, "local-ouni-lmp-node-id-interface"},
    local_ouni_lmp_node_id_type{YType::enumeration, "local-ouni-lmp-node-id-type"},
    is_ouni_config_exist{YType::boolean, "is-ouni-config-exist"},
    is_gmpls_nni_config_exist{YType::boolean, "is-gmpls-nni-config-exist"},
    is_gmpls_uni_config_exist{YType::boolean, "is-gmpls-uni-config-exist"}
        ,
    local_ouni_lmp_node_id(std::make_shared<Lmp::GlobalStatus::LocalOuniLmpNodeId>())
    , local_mpls_te_lmp_node_id(std::make_shared<Lmp::GlobalStatus::LocalMplsTeLmpNodeId>())
    , local_gmpls_uni_lmp_node_id(std::make_shared<Lmp::GlobalStatus::LocalGmplsUniLmpNodeId>())
{
    local_ouni_lmp_node_id->parent = this;
    local_mpls_te_lmp_node_id->parent = this;
    local_gmpls_uni_lmp_node_id->parent = this;

    yang_name = "global-status"; yang_parent_name = "lmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::~GlobalStatus()
{
}

bool Lmp::GlobalStatus::has_data() const
{
    if (is_presence_container) return true;
    return local_ouni_lmp_node_id_interface.is_set
	|| local_ouni_lmp_node_id_type.is_set
	|| is_ouni_config_exist.is_set
	|| is_gmpls_nni_config_exist.is_set
	|| is_gmpls_uni_config_exist.is_set
	|| (local_ouni_lmp_node_id !=  nullptr && local_ouni_lmp_node_id->has_data())
	|| (local_mpls_te_lmp_node_id !=  nullptr && local_mpls_te_lmp_node_id->has_data())
	|| (local_gmpls_uni_lmp_node_id !=  nullptr && local_gmpls_uni_lmp_node_id->has_data());
}

bool Lmp::GlobalStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ouni_lmp_node_id_interface.yfilter)
	|| ydk::is_set(local_ouni_lmp_node_id_type.yfilter)
	|| ydk::is_set(is_ouni_config_exist.yfilter)
	|| ydk::is_set(is_gmpls_nni_config_exist.yfilter)
	|| ydk::is_set(is_gmpls_uni_config_exist.yfilter)
	|| (local_ouni_lmp_node_id !=  nullptr && local_ouni_lmp_node_id->has_operation())
	|| (local_mpls_te_lmp_node_id !=  nullptr && local_mpls_te_lmp_node_id->has_operation())
	|| (local_gmpls_uni_lmp_node_id !=  nullptr && local_gmpls_uni_lmp_node_id->has_operation());
}

std::string Lmp::GlobalStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ouni_lmp_node_id_interface.is_set || is_set(local_ouni_lmp_node_id_interface.yfilter)) leaf_name_data.push_back(local_ouni_lmp_node_id_interface.get_name_leafdata());
    if (local_ouni_lmp_node_id_type.is_set || is_set(local_ouni_lmp_node_id_type.yfilter)) leaf_name_data.push_back(local_ouni_lmp_node_id_type.get_name_leafdata());
    if (is_ouni_config_exist.is_set || is_set(is_ouni_config_exist.yfilter)) leaf_name_data.push_back(is_ouni_config_exist.get_name_leafdata());
    if (is_gmpls_nni_config_exist.is_set || is_set(is_gmpls_nni_config_exist.yfilter)) leaf_name_data.push_back(is_gmpls_nni_config_exist.get_name_leafdata());
    if (is_gmpls_uni_config_exist.is_set || is_set(is_gmpls_uni_config_exist.yfilter)) leaf_name_data.push_back(is_gmpls_uni_config_exist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-ouni-lmp-node-id")
    {
        if(local_ouni_lmp_node_id == nullptr)
        {
            local_ouni_lmp_node_id = std::make_shared<Lmp::GlobalStatus::LocalOuniLmpNodeId>();
        }
        return local_ouni_lmp_node_id;
    }

    if(child_yang_name == "local-mpls-te-lmp-node-id")
    {
        if(local_mpls_te_lmp_node_id == nullptr)
        {
            local_mpls_te_lmp_node_id = std::make_shared<Lmp::GlobalStatus::LocalMplsTeLmpNodeId>();
        }
        return local_mpls_te_lmp_node_id;
    }

    if(child_yang_name == "local-gmpls-uni-lmp-node-id")
    {
        if(local_gmpls_uni_lmp_node_id == nullptr)
        {
            local_gmpls_uni_lmp_node_id = std::make_shared<Lmp::GlobalStatus::LocalGmplsUniLmpNodeId>();
        }
        return local_gmpls_uni_lmp_node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_ouni_lmp_node_id != nullptr)
    {
        _children["local-ouni-lmp-node-id"] = local_ouni_lmp_node_id;
    }

    if(local_mpls_te_lmp_node_id != nullptr)
    {
        _children["local-mpls-te-lmp-node-id"] = local_mpls_te_lmp_node_id;
    }

    if(local_gmpls_uni_lmp_node_id != nullptr)
    {
        _children["local-gmpls-uni-lmp-node-id"] = local_gmpls_uni_lmp_node_id;
    }

    return _children;
}

void Lmp::GlobalStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ouni-lmp-node-id-interface")
    {
        local_ouni_lmp_node_id_interface = value;
        local_ouni_lmp_node_id_interface.value_namespace = name_space;
        local_ouni_lmp_node_id_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ouni-lmp-node-id-type")
    {
        local_ouni_lmp_node_id_type = value;
        local_ouni_lmp_node_id_type.value_namespace = name_space;
        local_ouni_lmp_node_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ouni-config-exist")
    {
        is_ouni_config_exist = value;
        is_ouni_config_exist.value_namespace = name_space;
        is_ouni_config_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gmpls-nni-config-exist")
    {
        is_gmpls_nni_config_exist = value;
        is_gmpls_nni_config_exist.value_namespace = name_space;
        is_gmpls_nni_config_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gmpls-uni-config-exist")
    {
        is_gmpls_uni_config_exist = value;
        is_gmpls_uni_config_exist.value_namespace = name_space;
        is_gmpls_uni_config_exist.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GlobalStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ouni-lmp-node-id-interface")
    {
        local_ouni_lmp_node_id_interface.yfilter = yfilter;
    }
    if(value_path == "local-ouni-lmp-node-id-type")
    {
        local_ouni_lmp_node_id_type.yfilter = yfilter;
    }
    if(value_path == "is-ouni-config-exist")
    {
        is_ouni_config_exist.yfilter = yfilter;
    }
    if(value_path == "is-gmpls-nni-config-exist")
    {
        is_gmpls_nni_config_exist.yfilter = yfilter;
    }
    if(value_path == "is-gmpls-uni-config-exist")
    {
        is_gmpls_uni_config_exist.yfilter = yfilter;
    }
}

bool Lmp::GlobalStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ouni-lmp-node-id" || name == "local-mpls-te-lmp-node-id" || name == "local-gmpls-uni-lmp-node-id" || name == "local-ouni-lmp-node-id-interface" || name == "local-ouni-lmp-node-id-type" || name == "is-ouni-config-exist" || name == "is-gmpls-nni-config-exist" || name == "is-gmpls-uni-config-exist")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalOuniLmpNodeId::LocalOuniLmpNodeId()
    :
    address(std::make_shared<Lmp::GlobalStatus::LocalOuniLmpNodeId::Address>())
{
    address->parent = this;

    yang_name = "local-ouni-lmp-node-id"; yang_parent_name = "global-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalOuniLmpNodeId::~LocalOuniLmpNodeId()
{
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GlobalStatus::LocalOuniLmpNodeId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalOuniLmpNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-ouni-lmp-node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalOuniLmpNodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalOuniLmpNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GlobalStatus::LocalOuniLmpNodeId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalOuniLmpNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GlobalStatus::LocalOuniLmpNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GlobalStatus::LocalOuniLmpNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-ouni-lmp-node-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::~Address()
{
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/local-ouni-lmp-node-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GlobalStatus::LocalOuniLmpNodeId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalMplsTeLmpNodeId::LocalMplsTeLmpNodeId()
    :
    address(std::make_shared<Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address>())
{
    address->parent = this;

    yang_name = "local-mpls-te-lmp-node-id"; yang_parent_name = "global-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalMplsTeLmpNodeId::~LocalMplsTeLmpNodeId()
{
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GlobalStatus::LocalMplsTeLmpNodeId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalMplsTeLmpNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-mpls-te-lmp-node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalMplsTeLmpNodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalMplsTeLmpNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalMplsTeLmpNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GlobalStatus::LocalMplsTeLmpNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GlobalStatus::LocalMplsTeLmpNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-mpls-te-lmp-node-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::~Address()
{
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/local-mpls-te-lmp-node-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GlobalStatus::LocalMplsTeLmpNodeId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::LocalGmplsUniLmpNodeId()
    :
    address(std::make_shared<Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address>())
{
    address->parent = this;

    yang_name = "local-gmpls-uni-lmp-node-id"; yang_parent_name = "global-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::~LocalGmplsUniLmpNodeId()
{
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-gmpls-uni-lmp-node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-gmpls-uni-lmp-node-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::~Address()
{
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/global-status/local-gmpls-uni-lmp-node-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GlobalStatus::LocalGmplsUniLmpNodeId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::Clients::Clients()
    :
    client(this, {"client_name"})
{

    yang_name = "clients"; yang_parent_name = "lmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::Clients::~Clients()
{
}

bool Lmp::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Lmp::Clients::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Lmp::Clients::Client::Client()
    :
    client_name{YType::str, "client-name"},
    node_name{YType::str, "node-name"}
        ,
    connected_time(std::make_shared<Lmp::Clients::Client::ConnectedTime>())
{
    connected_time->parent = this;

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::Clients::Client::~Client()
{
}

bool Lmp::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    return client_name.is_set
	|| node_name.is_set
	|| (connected_time !=  nullptr && connected_time->has_data());
}

bool Lmp::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (connected_time !=  nullptr && connected_time->has_operation());
}

std::string Lmp::Clients::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(client_name, "client-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-time")
    {
        if(connected_time == nullptr)
        {
            connected_time = std::make_shared<Lmp::Clients::Client::ConnectedTime>();
        }
        return connected_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connected_time != nullptr)
    {
        _children["connected-time"] = connected_time;
    }

    return _children;
}

void Lmp::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Lmp::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-time" || name == "client-name" || name == "node-name")
        return true;
    return false;
}

Lmp::Clients::Client::ConnectedTime::ConnectedTime()
    :
    time_connected{YType::uint32, "time-connected"}
{

    yang_name = "connected-time"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::Clients::Client::ConnectedTime::~ConnectedTime()
{
}

bool Lmp::Clients::Client::ConnectedTime::has_data() const
{
    if (is_presence_container) return true;
    return time_connected.is_set;
}

bool Lmp::Clients::Client::ConnectedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_connected.yfilter);
}

std::string Lmp::Clients::Client::ConnectedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::Clients::Client::ConnectedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_connected.is_set || is_set(time_connected.yfilter)) leaf_name_data.push_back(time_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::Clients::Client::ConnectedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::Clients::Client::ConnectedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::Clients::Client::ConnectedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-connected")
    {
        time_connected = value;
        time_connected.value_namespace = name_space;
        time_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::Clients::Client::ConnectedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-connected")
    {
        time_connected.yfilter = yfilter;
    }
}

bool Lmp::Clients::Client::ConnectedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-connected")
        return true;
    return false;
}

Lmp::GmplsUni::GmplsUni()
    :
    te_links(std::make_shared<Lmp::GmplsUni::TeLinks>())
    , neighbors(std::make_shared<Lmp::GmplsUni::Neighbors>())
{
    te_links->parent = this;
    neighbors->parent = this;

    yang_name = "gmpls-uni"; yang_parent_name = "lmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::~GmplsUni()
{
}

bool Lmp::GmplsUni::has_data() const
{
    if (is_presence_container) return true;
    return (te_links !=  nullptr && te_links->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Lmp::GmplsUni::has_operation() const
{
    return is_set(yfilter)
	|| (te_links !=  nullptr && te_links->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Lmp::GmplsUni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-links")
    {
        if(te_links == nullptr)
        {
            te_links = std::make_shared<Lmp::GmplsUni::TeLinks>();
        }
        return te_links;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Lmp::GmplsUni::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_links != nullptr)
    {
        _children["te-links"] = te_links;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
}

void Lmp::GmplsUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-links" || name == "neighbors")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLinks()
    :
    te_link(this, {"controller_name"})
{

    yang_name = "te-links"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::TeLinks::~TeLinks()
{
}

bool Lmp::GmplsUni::TeLinks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link.len(); index++)
    {
        if(te_link[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::GmplsUni::TeLinks::has_operation() const
{
    for (std::size_t index=0; index<te_link.len(); index++)
    {
        if(te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::GmplsUni::TeLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::TeLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink>();
        ent_->parent = this;
        te_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::TeLink()
    :
    controller_name{YType::str, "controller-name"},
    interface_name{YType::str, "interface-name"},
    protocol_owner{YType::enumeration, "protocol-owner"},
    neighbor_name{YType::str, "neighbor-name"},
    ipcc_id{YType::uint32, "ipcc-id"},
    ipc_ctype{YType::enumeration, "ipc-ctype"},
    ipcc_name{YType::str, "ipcc-name"},
    local_mux_cap{YType::enumeration, "local-mux-cap"},
    remote_mux_cap{YType::enumeration, "remote-mux-cap"},
    im_state{YType::enumeration, "im-state"},
    lmp_state{YType::enumeration, "lmp-state"},
    te_link_lmp_state{YType::enumeration, "te-link-lmp-state"},
    gmpls_te_link_local_minimum_bandwidth{YType::uint64, "gmpls-te-link-local-minimum-bandwidth"},
    gmpls_te_link_local_maximum_bandwidth{YType::uint64, "gmpls-te-link-local-maximum-bandwidth"},
    gmpls_te_link_neighbor_minimum_bandwidth{YType::uint64, "gmpls-te-link-neighbor-minimum-bandwidth"},
    gmpls_te_link_neighbor_maximum_bandwidth{YType::uint64, "gmpls-te-link-neighbor-maximum-bandwidth"},
    gmpls_te_link_local_encoding_type{YType::enumeration, "gmpls-te-link-local-encoding-type"},
    gmpls_te_link_neighbor_encoding_type{YType::enumeration, "gmpls-te-link-neighbor-encoding-type"},
    is_lmp_enabled{YType::boolean, "is-lmp-enabled"},
    lmp_transmit_msg_id{YType::uint32, "lmp-transmit-msg-id"},
    lmp_receive_msg_id{YType::uint32, "lmp-receive-msg-id"},
    lmp_comp_link_status{YType::enumeration, "lmp-comp-link-status"}
        ,
    local_link_id(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId>())
    , remote_link_id(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId>())
    , local_te_link_id(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId>())
    , remote_te_link_id(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId>())
    , neighbor_address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress>())
    , remote_ipcc_address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress>())
{
    local_link_id->parent = this;
    remote_link_id->parent = this;
    local_te_link_id->parent = this;
    remote_te_link_id->parent = this;
    neighbor_address->parent = this;
    remote_ipcc_address->parent = this;

    yang_name = "te-link"; yang_parent_name = "te-links"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::TeLinks::TeLink::~TeLink()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lmp_comp_link_status.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return controller_name.is_set
	|| interface_name.is_set
	|| protocol_owner.is_set
	|| neighbor_name.is_set
	|| ipcc_id.is_set
	|| ipc_ctype.is_set
	|| ipcc_name.is_set
	|| local_mux_cap.is_set
	|| remote_mux_cap.is_set
	|| im_state.is_set
	|| lmp_state.is_set
	|| te_link_lmp_state.is_set
	|| gmpls_te_link_local_minimum_bandwidth.is_set
	|| gmpls_te_link_local_maximum_bandwidth.is_set
	|| gmpls_te_link_neighbor_minimum_bandwidth.is_set
	|| gmpls_te_link_neighbor_maximum_bandwidth.is_set
	|| gmpls_te_link_local_encoding_type.is_set
	|| gmpls_te_link_neighbor_encoding_type.is_set
	|| is_lmp_enabled.is_set
	|| lmp_transmit_msg_id.is_set
	|| lmp_receive_msg_id.is_set
	|| (local_link_id !=  nullptr && local_link_id->has_data())
	|| (remote_link_id !=  nullptr && remote_link_id->has_data())
	|| (local_te_link_id !=  nullptr && local_te_link_id->has_data())
	|| (remote_te_link_id !=  nullptr && remote_te_link_id->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::has_operation() const
{
    for (auto const & leaf : lmp_comp_link_status.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(protocol_owner.yfilter)
	|| ydk::is_set(neighbor_name.yfilter)
	|| ydk::is_set(ipcc_id.yfilter)
	|| ydk::is_set(ipc_ctype.yfilter)
	|| ydk::is_set(ipcc_name.yfilter)
	|| ydk::is_set(local_mux_cap.yfilter)
	|| ydk::is_set(remote_mux_cap.yfilter)
	|| ydk::is_set(im_state.yfilter)
	|| ydk::is_set(lmp_state.yfilter)
	|| ydk::is_set(te_link_lmp_state.yfilter)
	|| ydk::is_set(gmpls_te_link_local_minimum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_local_maximum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_minimum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_maximum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_local_encoding_type.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_encoding_type.yfilter)
	|| ydk::is_set(is_lmp_enabled.yfilter)
	|| ydk::is_set(lmp_transmit_msg_id.yfilter)
	|| ydk::is_set(lmp_receive_msg_id.yfilter)
	|| ydk::is_set(lmp_comp_link_status.yfilter)
	|| (local_link_id !=  nullptr && local_link_id->has_operation())
	|| (remote_link_id !=  nullptr && remote_link_id->has_operation())
	|| (local_te_link_id !=  nullptr && local_te_link_id->has_operation())
	|| (remote_te_link_id !=  nullptr && remote_te_link_id->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/gmpls-uni/te-links/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::TeLinks::TeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_owner.is_set || is_set(protocol_owner.yfilter)) leaf_name_data.push_back(protocol_owner.get_name_leafdata());
    if (neighbor_name.is_set || is_set(neighbor_name.yfilter)) leaf_name_data.push_back(neighbor_name.get_name_leafdata());
    if (ipcc_id.is_set || is_set(ipcc_id.yfilter)) leaf_name_data.push_back(ipcc_id.get_name_leafdata());
    if (ipc_ctype.is_set || is_set(ipc_ctype.yfilter)) leaf_name_data.push_back(ipc_ctype.get_name_leafdata());
    if (ipcc_name.is_set || is_set(ipcc_name.yfilter)) leaf_name_data.push_back(ipcc_name.get_name_leafdata());
    if (local_mux_cap.is_set || is_set(local_mux_cap.yfilter)) leaf_name_data.push_back(local_mux_cap.get_name_leafdata());
    if (remote_mux_cap.is_set || is_set(remote_mux_cap.yfilter)) leaf_name_data.push_back(remote_mux_cap.get_name_leafdata());
    if (im_state.is_set || is_set(im_state.yfilter)) leaf_name_data.push_back(im_state.get_name_leafdata());
    if (lmp_state.is_set || is_set(lmp_state.yfilter)) leaf_name_data.push_back(lmp_state.get_name_leafdata());
    if (te_link_lmp_state.is_set || is_set(te_link_lmp_state.yfilter)) leaf_name_data.push_back(te_link_lmp_state.get_name_leafdata());
    if (gmpls_te_link_local_minimum_bandwidth.is_set || is_set(gmpls_te_link_local_minimum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_minimum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_local_maximum_bandwidth.is_set || is_set(gmpls_te_link_local_maximum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_maximum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_neighbor_minimum_bandwidth.is_set || is_set(gmpls_te_link_neighbor_minimum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_minimum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_neighbor_maximum_bandwidth.is_set || is_set(gmpls_te_link_neighbor_maximum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_maximum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_local_encoding_type.is_set || is_set(gmpls_te_link_local_encoding_type.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_encoding_type.get_name_leafdata());
    if (gmpls_te_link_neighbor_encoding_type.is_set || is_set(gmpls_te_link_neighbor_encoding_type.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_encoding_type.get_name_leafdata());
    if (is_lmp_enabled.is_set || is_set(is_lmp_enabled.yfilter)) leaf_name_data.push_back(is_lmp_enabled.get_name_leafdata());
    if (lmp_transmit_msg_id.is_set || is_set(lmp_transmit_msg_id.yfilter)) leaf_name_data.push_back(lmp_transmit_msg_id.get_name_leafdata());
    if (lmp_receive_msg_id.is_set || is_set(lmp_receive_msg_id.yfilter)) leaf_name_data.push_back(lmp_receive_msg_id.get_name_leafdata());

    auto lmp_comp_link_status_name_datas = lmp_comp_link_status.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lmp_comp_link_status_name_datas.begin(), lmp_comp_link_status_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-link-id")
    {
        if(local_link_id == nullptr)
        {
            local_link_id = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId>();
        }
        return local_link_id;
    }

    if(child_yang_name == "remote-link-id")
    {
        if(remote_link_id == nullptr)
        {
            remote_link_id = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId>();
        }
        return remote_link_id;
    }

    if(child_yang_name == "local-te-link-id")
    {
        if(local_te_link_id == nullptr)
        {
            local_te_link_id = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId>();
        }
        return local_te_link_id;
    }

    if(child_yang_name == "remote-te-link-id")
    {
        if(remote_te_link_id == nullptr)
        {
            remote_te_link_id = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId>();
        }
        return remote_te_link_id;
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "remote-ipcc-address")
    {
        if(remote_ipcc_address == nullptr)
        {
            remote_ipcc_address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress>();
        }
        return remote_ipcc_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_link_id != nullptr)
    {
        _children["local-link-id"] = local_link_id;
    }

    if(remote_link_id != nullptr)
    {
        _children["remote-link-id"] = remote_link_id;
    }

    if(local_te_link_id != nullptr)
    {
        _children["local-te-link-id"] = local_te_link_id;
    }

    if(remote_te_link_id != nullptr)
    {
        _children["remote-te-link-id"] = remote_te_link_id;
    }

    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    if(remote_ipcc_address != nullptr)
    {
        _children["remote-ipcc-address"] = remote_ipcc_address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner = value;
        protocol_owner.value_namespace = name_space;
        protocol_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name = value;
        neighbor_name.value_namespace = name_space;
        neighbor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id = value;
        ipcc_id.value_namespace = name_space;
        ipcc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype = value;
        ipc_ctype.value_namespace = name_space;
        ipc_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-name")
    {
        ipcc_name = value;
        ipcc_name.value_namespace = name_space;
        ipcc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mux-cap")
    {
        local_mux_cap = value;
        local_mux_cap.value_namespace = name_space;
        local_mux_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mux-cap")
    {
        remote_mux_cap = value;
        remote_mux_cap.value_namespace = name_space;
        remote_mux_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "im-state")
    {
        im_state = value;
        im_state.value_namespace = name_space;
        im_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-state")
    {
        lmp_state = value;
        lmp_state.value_namespace = name_space;
        lmp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-link-lmp-state")
    {
        te_link_lmp_state = value;
        te_link_lmp_state.value_namespace = name_space;
        te_link_lmp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-minimum-bandwidth")
    {
        gmpls_te_link_local_minimum_bandwidth = value;
        gmpls_te_link_local_minimum_bandwidth.value_namespace = name_space;
        gmpls_te_link_local_minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-maximum-bandwidth")
    {
        gmpls_te_link_local_maximum_bandwidth = value;
        gmpls_te_link_local_maximum_bandwidth.value_namespace = name_space;
        gmpls_te_link_local_maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-minimum-bandwidth")
    {
        gmpls_te_link_neighbor_minimum_bandwidth = value;
        gmpls_te_link_neighbor_minimum_bandwidth.value_namespace = name_space;
        gmpls_te_link_neighbor_minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-maximum-bandwidth")
    {
        gmpls_te_link_neighbor_maximum_bandwidth = value;
        gmpls_te_link_neighbor_maximum_bandwidth.value_namespace = name_space;
        gmpls_te_link_neighbor_maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-encoding-type")
    {
        gmpls_te_link_local_encoding_type = value;
        gmpls_te_link_local_encoding_type.value_namespace = name_space;
        gmpls_te_link_local_encoding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-encoding-type")
    {
        gmpls_te_link_neighbor_encoding_type = value;
        gmpls_te_link_neighbor_encoding_type.value_namespace = name_space;
        gmpls_te_link_neighbor_encoding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled = value;
        is_lmp_enabled.value_namespace = name_space;
        is_lmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id = value;
        lmp_transmit_msg_id.value_namespace = name_space;
        lmp_transmit_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id = value;
        lmp_receive_msg_id.value_namespace = name_space;
        lmp_receive_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-comp-link-status")
    {
        lmp_comp_link_status.append(value);
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner.yfilter = yfilter;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name.yfilter = yfilter;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id.yfilter = yfilter;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype.yfilter = yfilter;
    }
    if(value_path == "ipcc-name")
    {
        ipcc_name.yfilter = yfilter;
    }
    if(value_path == "local-mux-cap")
    {
        local_mux_cap.yfilter = yfilter;
    }
    if(value_path == "remote-mux-cap")
    {
        remote_mux_cap.yfilter = yfilter;
    }
    if(value_path == "im-state")
    {
        im_state.yfilter = yfilter;
    }
    if(value_path == "lmp-state")
    {
        lmp_state.yfilter = yfilter;
    }
    if(value_path == "te-link-lmp-state")
    {
        te_link_lmp_state.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-minimum-bandwidth")
    {
        gmpls_te_link_local_minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-maximum-bandwidth")
    {
        gmpls_te_link_local_maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-minimum-bandwidth")
    {
        gmpls_te_link_neighbor_minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-maximum-bandwidth")
    {
        gmpls_te_link_neighbor_maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-encoding-type")
    {
        gmpls_te_link_local_encoding_type.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-encoding-type")
    {
        gmpls_te_link_neighbor_encoding_type.yfilter = yfilter;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled.yfilter = yfilter;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-comp-link-status")
    {
        lmp_comp_link_status.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-id" || name == "remote-link-id" || name == "local-te-link-id" || name == "remote-te-link-id" || name == "neighbor-address" || name == "remote-ipcc-address" || name == "controller-name" || name == "interface-name" || name == "protocol-owner" || name == "neighbor-name" || name == "ipcc-id" || name == "ipc-ctype" || name == "ipcc-name" || name == "local-mux-cap" || name == "remote-mux-cap" || name == "im-state" || name == "lmp-state" || name == "te-link-lmp-state" || name == "gmpls-te-link-local-minimum-bandwidth" || name == "gmpls-te-link-local-maximum-bandwidth" || name == "gmpls-te-link-neighbor-minimum-bandwidth" || name == "gmpls-te-link-neighbor-maximum-bandwidth" || name == "gmpls-te-link-local-encoding-type" || name == "gmpls-te-link-neighbor-encoding-type" || name == "is-lmp-enabled" || name == "lmp-transmit-msg-id" || name == "lmp-receive-msg-id" || name == "lmp-comp-link-status")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::LocalLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address>())
{
    address->parent = this;

    yang_name = "local-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::~LocalLinkId()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::RemoteLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address>())
{
    address->parent = this;

    yang_name = "remote-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::~RemoteLinkId()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::LocalTeLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address>())
{
    address->parent = this;

    yang_name = "local-te-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::~LocalTeLinkId()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-te-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-te-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::LocalTeLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::RemoteTeLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address>())
{
    address->parent = this;

    yang_name = "remote-te-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::~RemoteTeLinkId()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-te-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-te-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteTeLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::NeighborAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address>())
{
    address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::~NeighborAddress()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::NeighborAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::RemoteIpccAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address>())
{
    address->parent = this;

    yang_name = "remote-ipcc-address"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::~RemoteIpccAddress()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-ipcc-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::TeLinks::TeLink::RemoteIpccAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbors()
    :
    neighbor(this, {"neighbor_name"})
{

    yang_name = "neighbors"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Neighbors::~Neighbors()
{
}

bool Lmp::GmplsUni::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::GmplsUni::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::GmplsUni::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Neighbor()
    :
    neighbor_name{YType::str, "neighbor-name"},
    protocol_owner{YType::enumeration, "protocol-owner"},
    ipcc_id{YType::uint32, "ipcc-id"},
    is_lmp_enabled{YType::boolean, "is-lmp-enabled"},
    is_lmp_config_disabled{YType::boolean, "is-lmp-config-disabled"},
    lmp_transmit_msg_id{YType::uint32, "lmp-transmit-msg-id"},
    lmp_receive_msg_id{YType::uint32, "lmp-receive-msg-id"},
    lmp_link_sum_transmit_packets{YType::uint32, "lmp-link-sum-transmit-packets"},
    lmp_link_sum_receive_packets{YType::uint32, "lmp-link-sum-receive-packets"}
        ,
    neighbor_address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress>())
    , te_link(this, {})
    , ipcc(this, {})
{
    neighbor_address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::GmplsUni::Neighbors::Neighbor::~Neighbor()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link.len(); index++)
    {
        if(te_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipcc.len(); index++)
    {
        if(ipcc[index]->has_data())
            return true;
    }
    return neighbor_name.is_set
	|| protocol_owner.is_set
	|| ipcc_id.is_set
	|| is_lmp_enabled.is_set
	|| is_lmp_config_disabled.is_set
	|| lmp_transmit_msg_id.is_set
	|| lmp_receive_msg_id.is_set
	|| lmp_link_sum_transmit_packets.is_set
	|| lmp_link_sum_receive_packets.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<te_link.len(); index++)
    {
        if(te_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipcc.len(); index++)
    {
        if(ipcc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_name.yfilter)
	|| ydk::is_set(protocol_owner.yfilter)
	|| ydk::is_set(ipcc_id.yfilter)
	|| ydk::is_set(is_lmp_enabled.yfilter)
	|| ydk::is_set(is_lmp_config_disabled.yfilter)
	|| ydk::is_set(lmp_transmit_msg_id.yfilter)
	|| ydk::is_set(lmp_receive_msg_id.yfilter)
	|| ydk::is_set(lmp_link_sum_transmit_packets.yfilter)
	|| ydk::is_set(lmp_link_sum_receive_packets.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/gmpls-uni/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_name, "neighbor-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_name.is_set || is_set(neighbor_name.yfilter)) leaf_name_data.push_back(neighbor_name.get_name_leafdata());
    if (protocol_owner.is_set || is_set(protocol_owner.yfilter)) leaf_name_data.push_back(protocol_owner.get_name_leafdata());
    if (ipcc_id.is_set || is_set(ipcc_id.yfilter)) leaf_name_data.push_back(ipcc_id.get_name_leafdata());
    if (is_lmp_enabled.is_set || is_set(is_lmp_enabled.yfilter)) leaf_name_data.push_back(is_lmp_enabled.get_name_leafdata());
    if (is_lmp_config_disabled.is_set || is_set(is_lmp_config_disabled.yfilter)) leaf_name_data.push_back(is_lmp_config_disabled.get_name_leafdata());
    if (lmp_transmit_msg_id.is_set || is_set(lmp_transmit_msg_id.yfilter)) leaf_name_data.push_back(lmp_transmit_msg_id.get_name_leafdata());
    if (lmp_receive_msg_id.is_set || is_set(lmp_receive_msg_id.yfilter)) leaf_name_data.push_back(lmp_receive_msg_id.get_name_leafdata());
    if (lmp_link_sum_transmit_packets.is_set || is_set(lmp_link_sum_transmit_packets.yfilter)) leaf_name_data.push_back(lmp_link_sum_transmit_packets.get_name_leafdata());
    if (lmp_link_sum_receive_packets.is_set || is_set(lmp_link_sum_receive_packets.yfilter)) leaf_name_data.push_back(lmp_link_sum_receive_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "te-link")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink>();
        ent_->parent = this;
        te_link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipcc")
    {
        auto ent_ = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc>();
        ent_->parent = this;
        ipcc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    count_ = 0;
    for (auto ent_ : te_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipcc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-name")
    {
        neighbor_name = value;
        neighbor_name.value_namespace = name_space;
        neighbor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner = value;
        protocol_owner.value_namespace = name_space;
        protocol_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id = value;
        ipcc_id.value_namespace = name_space;
        ipcc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled = value;
        is_lmp_enabled.value_namespace = name_space;
        is_lmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmp-config-disabled")
    {
        is_lmp_config_disabled = value;
        is_lmp_config_disabled.value_namespace = name_space;
        is_lmp_config_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id = value;
        lmp_transmit_msg_id.value_namespace = name_space;
        lmp_transmit_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id = value;
        lmp_receive_msg_id.value_namespace = name_space;
        lmp_receive_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-link-sum-transmit-packets")
    {
        lmp_link_sum_transmit_packets = value;
        lmp_link_sum_transmit_packets.value_namespace = name_space;
        lmp_link_sum_transmit_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-link-sum-receive-packets")
    {
        lmp_link_sum_receive_packets = value;
        lmp_link_sum_receive_packets.value_namespace = name_space;
        lmp_link_sum_receive_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-name")
    {
        neighbor_name.yfilter = yfilter;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner.yfilter = yfilter;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id.yfilter = yfilter;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled.yfilter = yfilter;
    }
    if(value_path == "is-lmp-config-disabled")
    {
        is_lmp_config_disabled.yfilter = yfilter;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-link-sum-transmit-packets")
    {
        lmp_link_sum_transmit_packets.yfilter = yfilter;
    }
    if(value_path == "lmp-link-sum-receive-packets")
    {
        lmp_link_sum_receive_packets.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "te-link" || name == "ipcc" || name == "neighbor-name" || name == "protocol-owner" || name == "ipcc-id" || name == "is-lmp-enabled" || name == "is-lmp-config-disabled" || name == "lmp-transmit-msg-id" || name == "lmp-receive-msg-id" || name == "lmp-link-sum-transmit-packets" || name == "lmp-link-sum-receive-packets")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::NeighborAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address>())
{
    address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::~NeighborAddress()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::NeighborAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::TeLink()
    :
    interface_name{YType::str, "interface-name"},
    protocol_owner{YType::enumeration, "protocol-owner"},
    neighbor_name{YType::str, "neighbor-name"},
    ipcc_id{YType::uint32, "ipcc-id"},
    ipc_ctype{YType::enumeration, "ipc-ctype"},
    ipcc_name{YType::str, "ipcc-name"},
    local_mux_cap{YType::enumeration, "local-mux-cap"},
    remote_mux_cap{YType::enumeration, "remote-mux-cap"},
    im_state{YType::enumeration, "im-state"},
    lmp_state{YType::enumeration, "lmp-state"},
    te_link_lmp_state{YType::enumeration, "te-link-lmp-state"},
    gmpls_te_link_local_minimum_bandwidth{YType::uint64, "gmpls-te-link-local-minimum-bandwidth"},
    gmpls_te_link_local_maximum_bandwidth{YType::uint64, "gmpls-te-link-local-maximum-bandwidth"},
    gmpls_te_link_neighbor_minimum_bandwidth{YType::uint64, "gmpls-te-link-neighbor-minimum-bandwidth"},
    gmpls_te_link_neighbor_maximum_bandwidth{YType::uint64, "gmpls-te-link-neighbor-maximum-bandwidth"},
    gmpls_te_link_local_encoding_type{YType::enumeration, "gmpls-te-link-local-encoding-type"},
    gmpls_te_link_neighbor_encoding_type{YType::enumeration, "gmpls-te-link-neighbor-encoding-type"},
    is_lmp_enabled{YType::boolean, "is-lmp-enabled"},
    lmp_transmit_msg_id{YType::uint32, "lmp-transmit-msg-id"},
    lmp_receive_msg_id{YType::uint32, "lmp-receive-msg-id"},
    lmp_comp_link_status{YType::enumeration, "lmp-comp-link-status"}
        ,
    local_link_id(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId>())
    , remote_link_id(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId>())
    , local_te_link_id(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId>())
    , remote_te_link_id(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId>())
    , neighbor_address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress>())
    , remote_ipcc_address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress>())
{
    local_link_id->parent = this;
    remote_link_id->parent = this;
    local_te_link_id->parent = this;
    remote_te_link_id->parent = this;
    neighbor_address->parent = this;
    remote_ipcc_address->parent = this;

    yang_name = "te-link"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::~TeLink()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lmp_comp_link_status.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| protocol_owner.is_set
	|| neighbor_name.is_set
	|| ipcc_id.is_set
	|| ipc_ctype.is_set
	|| ipcc_name.is_set
	|| local_mux_cap.is_set
	|| remote_mux_cap.is_set
	|| im_state.is_set
	|| lmp_state.is_set
	|| te_link_lmp_state.is_set
	|| gmpls_te_link_local_minimum_bandwidth.is_set
	|| gmpls_te_link_local_maximum_bandwidth.is_set
	|| gmpls_te_link_neighbor_minimum_bandwidth.is_set
	|| gmpls_te_link_neighbor_maximum_bandwidth.is_set
	|| gmpls_te_link_local_encoding_type.is_set
	|| gmpls_te_link_neighbor_encoding_type.is_set
	|| is_lmp_enabled.is_set
	|| lmp_transmit_msg_id.is_set
	|| lmp_receive_msg_id.is_set
	|| (local_link_id !=  nullptr && local_link_id->has_data())
	|| (remote_link_id !=  nullptr && remote_link_id->has_data())
	|| (local_te_link_id !=  nullptr && local_te_link_id->has_data())
	|| (remote_te_link_id !=  nullptr && remote_te_link_id->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::has_operation() const
{
    for (auto const & leaf : lmp_comp_link_status.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(protocol_owner.yfilter)
	|| ydk::is_set(neighbor_name.yfilter)
	|| ydk::is_set(ipcc_id.yfilter)
	|| ydk::is_set(ipc_ctype.yfilter)
	|| ydk::is_set(ipcc_name.yfilter)
	|| ydk::is_set(local_mux_cap.yfilter)
	|| ydk::is_set(remote_mux_cap.yfilter)
	|| ydk::is_set(im_state.yfilter)
	|| ydk::is_set(lmp_state.yfilter)
	|| ydk::is_set(te_link_lmp_state.yfilter)
	|| ydk::is_set(gmpls_te_link_local_minimum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_local_maximum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_minimum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_maximum_bandwidth.yfilter)
	|| ydk::is_set(gmpls_te_link_local_encoding_type.yfilter)
	|| ydk::is_set(gmpls_te_link_neighbor_encoding_type.yfilter)
	|| ydk::is_set(is_lmp_enabled.yfilter)
	|| ydk::is_set(lmp_transmit_msg_id.yfilter)
	|| ydk::is_set(lmp_receive_msg_id.yfilter)
	|| ydk::is_set(lmp_comp_link_status.yfilter)
	|| (local_link_id !=  nullptr && local_link_id->has_operation())
	|| (remote_link_id !=  nullptr && remote_link_id->has_operation())
	|| (local_te_link_id !=  nullptr && local_te_link_id->has_operation())
	|| (remote_te_link_id !=  nullptr && remote_te_link_id->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_owner.is_set || is_set(protocol_owner.yfilter)) leaf_name_data.push_back(protocol_owner.get_name_leafdata());
    if (neighbor_name.is_set || is_set(neighbor_name.yfilter)) leaf_name_data.push_back(neighbor_name.get_name_leafdata());
    if (ipcc_id.is_set || is_set(ipcc_id.yfilter)) leaf_name_data.push_back(ipcc_id.get_name_leafdata());
    if (ipc_ctype.is_set || is_set(ipc_ctype.yfilter)) leaf_name_data.push_back(ipc_ctype.get_name_leafdata());
    if (ipcc_name.is_set || is_set(ipcc_name.yfilter)) leaf_name_data.push_back(ipcc_name.get_name_leafdata());
    if (local_mux_cap.is_set || is_set(local_mux_cap.yfilter)) leaf_name_data.push_back(local_mux_cap.get_name_leafdata());
    if (remote_mux_cap.is_set || is_set(remote_mux_cap.yfilter)) leaf_name_data.push_back(remote_mux_cap.get_name_leafdata());
    if (im_state.is_set || is_set(im_state.yfilter)) leaf_name_data.push_back(im_state.get_name_leafdata());
    if (lmp_state.is_set || is_set(lmp_state.yfilter)) leaf_name_data.push_back(lmp_state.get_name_leafdata());
    if (te_link_lmp_state.is_set || is_set(te_link_lmp_state.yfilter)) leaf_name_data.push_back(te_link_lmp_state.get_name_leafdata());
    if (gmpls_te_link_local_minimum_bandwidth.is_set || is_set(gmpls_te_link_local_minimum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_minimum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_local_maximum_bandwidth.is_set || is_set(gmpls_te_link_local_maximum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_maximum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_neighbor_minimum_bandwidth.is_set || is_set(gmpls_te_link_neighbor_minimum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_minimum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_neighbor_maximum_bandwidth.is_set || is_set(gmpls_te_link_neighbor_maximum_bandwidth.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_maximum_bandwidth.get_name_leafdata());
    if (gmpls_te_link_local_encoding_type.is_set || is_set(gmpls_te_link_local_encoding_type.yfilter)) leaf_name_data.push_back(gmpls_te_link_local_encoding_type.get_name_leafdata());
    if (gmpls_te_link_neighbor_encoding_type.is_set || is_set(gmpls_te_link_neighbor_encoding_type.yfilter)) leaf_name_data.push_back(gmpls_te_link_neighbor_encoding_type.get_name_leafdata());
    if (is_lmp_enabled.is_set || is_set(is_lmp_enabled.yfilter)) leaf_name_data.push_back(is_lmp_enabled.get_name_leafdata());
    if (lmp_transmit_msg_id.is_set || is_set(lmp_transmit_msg_id.yfilter)) leaf_name_data.push_back(lmp_transmit_msg_id.get_name_leafdata());
    if (lmp_receive_msg_id.is_set || is_set(lmp_receive_msg_id.yfilter)) leaf_name_data.push_back(lmp_receive_msg_id.get_name_leafdata());

    auto lmp_comp_link_status_name_datas = lmp_comp_link_status.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lmp_comp_link_status_name_datas.begin(), lmp_comp_link_status_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-link-id")
    {
        if(local_link_id == nullptr)
        {
            local_link_id = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId>();
        }
        return local_link_id;
    }

    if(child_yang_name == "remote-link-id")
    {
        if(remote_link_id == nullptr)
        {
            remote_link_id = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId>();
        }
        return remote_link_id;
    }

    if(child_yang_name == "local-te-link-id")
    {
        if(local_te_link_id == nullptr)
        {
            local_te_link_id = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId>();
        }
        return local_te_link_id;
    }

    if(child_yang_name == "remote-te-link-id")
    {
        if(remote_te_link_id == nullptr)
        {
            remote_te_link_id = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId>();
        }
        return remote_te_link_id;
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "remote-ipcc-address")
    {
        if(remote_ipcc_address == nullptr)
        {
            remote_ipcc_address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress>();
        }
        return remote_ipcc_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_link_id != nullptr)
    {
        _children["local-link-id"] = local_link_id;
    }

    if(remote_link_id != nullptr)
    {
        _children["remote-link-id"] = remote_link_id;
    }

    if(local_te_link_id != nullptr)
    {
        _children["local-te-link-id"] = local_te_link_id;
    }

    if(remote_te_link_id != nullptr)
    {
        _children["remote-te-link-id"] = remote_te_link_id;
    }

    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    if(remote_ipcc_address != nullptr)
    {
        _children["remote-ipcc-address"] = remote_ipcc_address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner = value;
        protocol_owner.value_namespace = name_space;
        protocol_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name = value;
        neighbor_name.value_namespace = name_space;
        neighbor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id = value;
        ipcc_id.value_namespace = name_space;
        ipcc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype = value;
        ipc_ctype.value_namespace = name_space;
        ipc_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-name")
    {
        ipcc_name = value;
        ipcc_name.value_namespace = name_space;
        ipcc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mux-cap")
    {
        local_mux_cap = value;
        local_mux_cap.value_namespace = name_space;
        local_mux_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mux-cap")
    {
        remote_mux_cap = value;
        remote_mux_cap.value_namespace = name_space;
        remote_mux_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "im-state")
    {
        im_state = value;
        im_state.value_namespace = name_space;
        im_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-state")
    {
        lmp_state = value;
        lmp_state.value_namespace = name_space;
        lmp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-link-lmp-state")
    {
        te_link_lmp_state = value;
        te_link_lmp_state.value_namespace = name_space;
        te_link_lmp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-minimum-bandwidth")
    {
        gmpls_te_link_local_minimum_bandwidth = value;
        gmpls_te_link_local_minimum_bandwidth.value_namespace = name_space;
        gmpls_te_link_local_minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-maximum-bandwidth")
    {
        gmpls_te_link_local_maximum_bandwidth = value;
        gmpls_te_link_local_maximum_bandwidth.value_namespace = name_space;
        gmpls_te_link_local_maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-minimum-bandwidth")
    {
        gmpls_te_link_neighbor_minimum_bandwidth = value;
        gmpls_te_link_neighbor_minimum_bandwidth.value_namespace = name_space;
        gmpls_te_link_neighbor_minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-maximum-bandwidth")
    {
        gmpls_te_link_neighbor_maximum_bandwidth = value;
        gmpls_te_link_neighbor_maximum_bandwidth.value_namespace = name_space;
        gmpls_te_link_neighbor_maximum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-local-encoding-type")
    {
        gmpls_te_link_local_encoding_type = value;
        gmpls_te_link_local_encoding_type.value_namespace = name_space;
        gmpls_te_link_local_encoding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmpls-te-link-neighbor-encoding-type")
    {
        gmpls_te_link_neighbor_encoding_type = value;
        gmpls_te_link_neighbor_encoding_type.value_namespace = name_space;
        gmpls_te_link_neighbor_encoding_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled = value;
        is_lmp_enabled.value_namespace = name_space;
        is_lmp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id = value;
        lmp_transmit_msg_id.value_namespace = name_space;
        lmp_transmit_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id = value;
        lmp_receive_msg_id.value_namespace = name_space;
        lmp_receive_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-comp-link-status")
    {
        lmp_comp_link_status.append(value);
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-owner")
    {
        protocol_owner.yfilter = yfilter;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name.yfilter = yfilter;
    }
    if(value_path == "ipcc-id")
    {
        ipcc_id.yfilter = yfilter;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype.yfilter = yfilter;
    }
    if(value_path == "ipcc-name")
    {
        ipcc_name.yfilter = yfilter;
    }
    if(value_path == "local-mux-cap")
    {
        local_mux_cap.yfilter = yfilter;
    }
    if(value_path == "remote-mux-cap")
    {
        remote_mux_cap.yfilter = yfilter;
    }
    if(value_path == "im-state")
    {
        im_state.yfilter = yfilter;
    }
    if(value_path == "lmp-state")
    {
        lmp_state.yfilter = yfilter;
    }
    if(value_path == "te-link-lmp-state")
    {
        te_link_lmp_state.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-minimum-bandwidth")
    {
        gmpls_te_link_local_minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-maximum-bandwidth")
    {
        gmpls_te_link_local_maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-minimum-bandwidth")
    {
        gmpls_te_link_neighbor_minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-maximum-bandwidth")
    {
        gmpls_te_link_neighbor_maximum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-local-encoding-type")
    {
        gmpls_te_link_local_encoding_type.yfilter = yfilter;
    }
    if(value_path == "gmpls-te-link-neighbor-encoding-type")
    {
        gmpls_te_link_neighbor_encoding_type.yfilter = yfilter;
    }
    if(value_path == "is-lmp-enabled")
    {
        is_lmp_enabled.yfilter = yfilter;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-comp-link-status")
    {
        lmp_comp_link_status.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-link-id" || name == "remote-link-id" || name == "local-te-link-id" || name == "remote-te-link-id" || name == "neighbor-address" || name == "remote-ipcc-address" || name == "interface-name" || name == "protocol-owner" || name == "neighbor-name" || name == "ipcc-id" || name == "ipc-ctype" || name == "ipcc-name" || name == "local-mux-cap" || name == "remote-mux-cap" || name == "im-state" || name == "lmp-state" || name == "te-link-lmp-state" || name == "gmpls-te-link-local-minimum-bandwidth" || name == "gmpls-te-link-local-maximum-bandwidth" || name == "gmpls-te-link-neighbor-minimum-bandwidth" || name == "gmpls-te-link-neighbor-maximum-bandwidth" || name == "gmpls-te-link-local-encoding-type" || name == "gmpls-te-link-neighbor-encoding-type" || name == "is-lmp-enabled" || name == "lmp-transmit-msg-id" || name == "lmp-receive-msg-id" || name == "lmp-comp-link-status")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::LocalLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address>())
{
    address->parent = this;

    yang_name = "local-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::~LocalLinkId()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::RemoteLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address>())
{
    address->parent = this;

    yang_name = "remote-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::~RemoteLinkId()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::LocalTeLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address>())
{
    address->parent = this;

    yang_name = "local-te-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::~LocalTeLinkId()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-te-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "local-te-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::LocalTeLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::RemoteTeLinkId()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address>())
{
    address->parent = this;

    yang_name = "remote-te-link-id"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::~RemoteTeLinkId()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-te-link-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-te-link-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteTeLinkId::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::NeighborAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address>())
{
    address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::~NeighborAddress()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::NeighborAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::RemoteIpccAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address>())
{
    address->parent = this;

    yang_name = "remote-ipcc-address"; yang_parent_name = "te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::~RemoteIpccAddress()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-ipcc-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::TeLink::RemoteIpccAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::Ipcc()
    :
    ipcc_id{YType::uint32, "ipcc-id"},
    ipc_ctype{YType::enumeration, "ipc-ctype"},
    interface_name{YType::str, "interface-name"},
    neighbor_name{YType::str, "neighbor-name"},
    ipcc_state{YType::enumeration, "ipcc-state"},
    lmp_hello_interval{YType::uint32, "lmp-hello-interval"},
    lmp_hello_interval_minimum{YType::uint32, "lmp-hello-interval-minimum"},
    lmp_hello_interval_maximum{YType::uint32, "lmp-hello-interval-maximum"},
    lmp_hello_dead_interval{YType::uint32, "lmp-hello-dead-interval"},
    lmp_hello_dead_interval_minimum{YType::uint32, "lmp-hello-dead-interval-minimum"},
    lmp_hello_dead_interval_maximum{YType::uint32, "lmp-hello-dead-interval-maximum"},
    lmp_hello_transmit_packets{YType::uint32, "lmp-hello-transmit-packets"},
    lmp_hello_receive_packets{YType::uint32, "lmp-hello-receive-packets"},
    lmp_hello_transmit_packet_sequence_number{YType::uint32, "lmp-hello-transmit-packet-sequence-number"},
    lmp_hello_receive_packet_sequence_number{YType::uint32, "lmp-hello-receive-packet-sequence-number"},
    lmp_transmit_msg_id{YType::uint32, "lmp-transmit-msg-id"},
    lmp_receive_msg_id{YType::uint32, "lmp-receive-msg-id"},
    lmp_link_sum_transmit_packets{YType::uint32, "lmp-link-sum-transmit-packets"},
    lmp_link_sum_receive_packets{YType::uint32, "lmp-link-sum-receive-packets"}
        ,
    remote_ipcc_address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress>())
    , source_ip_cc_address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress>())
{
    remote_ipcc_address->parent = this;
    source_ip_cc_address->parent = this;

    yang_name = "ipcc"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::~Ipcc()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_data() const
{
    if (is_presence_container) return true;
    return ipcc_id.is_set
	|| ipc_ctype.is_set
	|| interface_name.is_set
	|| neighbor_name.is_set
	|| ipcc_state.is_set
	|| lmp_hello_interval.is_set
	|| lmp_hello_interval_minimum.is_set
	|| lmp_hello_interval_maximum.is_set
	|| lmp_hello_dead_interval.is_set
	|| lmp_hello_dead_interval_minimum.is_set
	|| lmp_hello_dead_interval_maximum.is_set
	|| lmp_hello_transmit_packets.is_set
	|| lmp_hello_receive_packets.is_set
	|| lmp_hello_transmit_packet_sequence_number.is_set
	|| lmp_hello_receive_packet_sequence_number.is_set
	|| lmp_transmit_msg_id.is_set
	|| lmp_receive_msg_id.is_set
	|| lmp_link_sum_transmit_packets.is_set
	|| lmp_link_sum_receive_packets.is_set
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_data())
	|| (source_ip_cc_address !=  nullptr && source_ip_cc_address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipcc_id.yfilter)
	|| ydk::is_set(ipc_ctype.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_name.yfilter)
	|| ydk::is_set(ipcc_state.yfilter)
	|| ydk::is_set(lmp_hello_interval.yfilter)
	|| ydk::is_set(lmp_hello_interval_minimum.yfilter)
	|| ydk::is_set(lmp_hello_interval_maximum.yfilter)
	|| ydk::is_set(lmp_hello_dead_interval.yfilter)
	|| ydk::is_set(lmp_hello_dead_interval_minimum.yfilter)
	|| ydk::is_set(lmp_hello_dead_interval_maximum.yfilter)
	|| ydk::is_set(lmp_hello_transmit_packets.yfilter)
	|| ydk::is_set(lmp_hello_receive_packets.yfilter)
	|| ydk::is_set(lmp_hello_transmit_packet_sequence_number.yfilter)
	|| ydk::is_set(lmp_hello_receive_packet_sequence_number.yfilter)
	|| ydk::is_set(lmp_transmit_msg_id.yfilter)
	|| ydk::is_set(lmp_receive_msg_id.yfilter)
	|| ydk::is_set(lmp_link_sum_transmit_packets.yfilter)
	|| ydk::is_set(lmp_link_sum_receive_packets.yfilter)
	|| (remote_ipcc_address !=  nullptr && remote_ipcc_address->has_operation())
	|| (source_ip_cc_address !=  nullptr && source_ip_cc_address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipcc_id.is_set || is_set(ipcc_id.yfilter)) leaf_name_data.push_back(ipcc_id.get_name_leafdata());
    if (ipc_ctype.is_set || is_set(ipc_ctype.yfilter)) leaf_name_data.push_back(ipc_ctype.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_name.is_set || is_set(neighbor_name.yfilter)) leaf_name_data.push_back(neighbor_name.get_name_leafdata());
    if (ipcc_state.is_set || is_set(ipcc_state.yfilter)) leaf_name_data.push_back(ipcc_state.get_name_leafdata());
    if (lmp_hello_interval.is_set || is_set(lmp_hello_interval.yfilter)) leaf_name_data.push_back(lmp_hello_interval.get_name_leafdata());
    if (lmp_hello_interval_minimum.is_set || is_set(lmp_hello_interval_minimum.yfilter)) leaf_name_data.push_back(lmp_hello_interval_minimum.get_name_leafdata());
    if (lmp_hello_interval_maximum.is_set || is_set(lmp_hello_interval_maximum.yfilter)) leaf_name_data.push_back(lmp_hello_interval_maximum.get_name_leafdata());
    if (lmp_hello_dead_interval.is_set || is_set(lmp_hello_dead_interval.yfilter)) leaf_name_data.push_back(lmp_hello_dead_interval.get_name_leafdata());
    if (lmp_hello_dead_interval_minimum.is_set || is_set(lmp_hello_dead_interval_minimum.yfilter)) leaf_name_data.push_back(lmp_hello_dead_interval_minimum.get_name_leafdata());
    if (lmp_hello_dead_interval_maximum.is_set || is_set(lmp_hello_dead_interval_maximum.yfilter)) leaf_name_data.push_back(lmp_hello_dead_interval_maximum.get_name_leafdata());
    if (lmp_hello_transmit_packets.is_set || is_set(lmp_hello_transmit_packets.yfilter)) leaf_name_data.push_back(lmp_hello_transmit_packets.get_name_leafdata());
    if (lmp_hello_receive_packets.is_set || is_set(lmp_hello_receive_packets.yfilter)) leaf_name_data.push_back(lmp_hello_receive_packets.get_name_leafdata());
    if (lmp_hello_transmit_packet_sequence_number.is_set || is_set(lmp_hello_transmit_packet_sequence_number.yfilter)) leaf_name_data.push_back(lmp_hello_transmit_packet_sequence_number.get_name_leafdata());
    if (lmp_hello_receive_packet_sequence_number.is_set || is_set(lmp_hello_receive_packet_sequence_number.yfilter)) leaf_name_data.push_back(lmp_hello_receive_packet_sequence_number.get_name_leafdata());
    if (lmp_transmit_msg_id.is_set || is_set(lmp_transmit_msg_id.yfilter)) leaf_name_data.push_back(lmp_transmit_msg_id.get_name_leafdata());
    if (lmp_receive_msg_id.is_set || is_set(lmp_receive_msg_id.yfilter)) leaf_name_data.push_back(lmp_receive_msg_id.get_name_leafdata());
    if (lmp_link_sum_transmit_packets.is_set || is_set(lmp_link_sum_transmit_packets.yfilter)) leaf_name_data.push_back(lmp_link_sum_transmit_packets.get_name_leafdata());
    if (lmp_link_sum_receive_packets.is_set || is_set(lmp_link_sum_receive_packets.yfilter)) leaf_name_data.push_back(lmp_link_sum_receive_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ipcc-address")
    {
        if(remote_ipcc_address == nullptr)
        {
            remote_ipcc_address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress>();
        }
        return remote_ipcc_address;
    }

    if(child_yang_name == "source-ip-cc-address")
    {
        if(source_ip_cc_address == nullptr)
        {
            source_ip_cc_address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress>();
        }
        return source_ip_cc_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote_ipcc_address != nullptr)
    {
        _children["remote-ipcc-address"] = remote_ipcc_address;
    }

    if(source_ip_cc_address != nullptr)
    {
        _children["source-ip-cc-address"] = source_ip_cc_address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipcc-id")
    {
        ipcc_id = value;
        ipcc_id.value_namespace = name_space;
        ipcc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype = value;
        ipc_ctype.value_namespace = name_space;
        ipc_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name = value;
        neighbor_name.value_namespace = name_space;
        neighbor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipcc-state")
    {
        ipcc_state = value;
        ipcc_state.value_namespace = name_space;
        ipcc_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-interval")
    {
        lmp_hello_interval = value;
        lmp_hello_interval.value_namespace = name_space;
        lmp_hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-interval-minimum")
    {
        lmp_hello_interval_minimum = value;
        lmp_hello_interval_minimum.value_namespace = name_space;
        lmp_hello_interval_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-interval-maximum")
    {
        lmp_hello_interval_maximum = value;
        lmp_hello_interval_maximum.value_namespace = name_space;
        lmp_hello_interval_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-dead-interval")
    {
        lmp_hello_dead_interval = value;
        lmp_hello_dead_interval.value_namespace = name_space;
        lmp_hello_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-dead-interval-minimum")
    {
        lmp_hello_dead_interval_minimum = value;
        lmp_hello_dead_interval_minimum.value_namespace = name_space;
        lmp_hello_dead_interval_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-dead-interval-maximum")
    {
        lmp_hello_dead_interval_maximum = value;
        lmp_hello_dead_interval_maximum.value_namespace = name_space;
        lmp_hello_dead_interval_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-transmit-packets")
    {
        lmp_hello_transmit_packets = value;
        lmp_hello_transmit_packets.value_namespace = name_space;
        lmp_hello_transmit_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-receive-packets")
    {
        lmp_hello_receive_packets = value;
        lmp_hello_receive_packets.value_namespace = name_space;
        lmp_hello_receive_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-transmit-packet-sequence-number")
    {
        lmp_hello_transmit_packet_sequence_number = value;
        lmp_hello_transmit_packet_sequence_number.value_namespace = name_space;
        lmp_hello_transmit_packet_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-hello-receive-packet-sequence-number")
    {
        lmp_hello_receive_packet_sequence_number = value;
        lmp_hello_receive_packet_sequence_number.value_namespace = name_space;
        lmp_hello_receive_packet_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id = value;
        lmp_transmit_msg_id.value_namespace = name_space;
        lmp_transmit_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id = value;
        lmp_receive_msg_id.value_namespace = name_space;
        lmp_receive_msg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-link-sum-transmit-packets")
    {
        lmp_link_sum_transmit_packets = value;
        lmp_link_sum_transmit_packets.value_namespace = name_space;
        lmp_link_sum_transmit_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmp-link-sum-receive-packets")
    {
        lmp_link_sum_receive_packets = value;
        lmp_link_sum_receive_packets.value_namespace = name_space;
        lmp_link_sum_receive_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipcc-id")
    {
        ipcc_id.yfilter = yfilter;
    }
    if(value_path == "ipc-ctype")
    {
        ipc_ctype.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-name")
    {
        neighbor_name.yfilter = yfilter;
    }
    if(value_path == "ipcc-state")
    {
        ipcc_state.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-interval")
    {
        lmp_hello_interval.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-interval-minimum")
    {
        lmp_hello_interval_minimum.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-interval-maximum")
    {
        lmp_hello_interval_maximum.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-dead-interval")
    {
        lmp_hello_dead_interval.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-dead-interval-minimum")
    {
        lmp_hello_dead_interval_minimum.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-dead-interval-maximum")
    {
        lmp_hello_dead_interval_maximum.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-transmit-packets")
    {
        lmp_hello_transmit_packets.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-receive-packets")
    {
        lmp_hello_receive_packets.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-transmit-packet-sequence-number")
    {
        lmp_hello_transmit_packet_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lmp-hello-receive-packet-sequence-number")
    {
        lmp_hello_receive_packet_sequence_number.yfilter = yfilter;
    }
    if(value_path == "lmp-transmit-msg-id")
    {
        lmp_transmit_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-receive-msg-id")
    {
        lmp_receive_msg_id.yfilter = yfilter;
    }
    if(value_path == "lmp-link-sum-transmit-packets")
    {
        lmp_link_sum_transmit_packets.yfilter = yfilter;
    }
    if(value_path == "lmp-link-sum-receive-packets")
    {
        lmp_link_sum_receive_packets.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ipcc-address" || name == "source-ip-cc-address" || name == "ipcc-id" || name == "ipc-ctype" || name == "interface-name" || name == "neighbor-name" || name == "ipcc-state" || name == "lmp-hello-interval" || name == "lmp-hello-interval-minimum" || name == "lmp-hello-interval-maximum" || name == "lmp-hello-dead-interval" || name == "lmp-hello-dead-interval-minimum" || name == "lmp-hello-dead-interval-maximum" || name == "lmp-hello-transmit-packets" || name == "lmp-hello-receive-packets" || name == "lmp-hello-transmit-packet-sequence-number" || name == "lmp-hello-receive-packet-sequence-number" || name == "lmp-transmit-msg-id" || name == "lmp-receive-msg-id" || name == "lmp-link-sum-transmit-packets" || name == "lmp-link-sum-receive-packets")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::RemoteIpccAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address>())
{
    address->parent = this;

    yang_name = "remote-ipcc-address"; yang_parent_name = "ipcc"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::~RemoteIpccAddress()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ipcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "remote-ipcc-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::RemoteIpccAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::SourceIpCcAddress()
    :
    address(std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address>())
{
    address->parent = this;

    yang_name = "source-ip-cc-address"; yang_parent_name = "ipcc"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::~SourceIpCcAddress()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ip-cc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::Address()
    :
    address_type{YType::enumeration, "address-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    unnumbered_address{YType::uint32, "unnumbered-address"}
{

    yang_name = "address"; yang_parent_name = "source-ip-cc-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::~Address()
{
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| unnumbered_address.is_set;
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(unnumbered_address.yfilter);
}

std::string Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (unnumbered_address.is_set || is_set(unnumbered_address.yfilter)) leaf_name_data.push_back(unnumbered_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered-address")
    {
        unnumbered_address = value;
        unnumbered_address.value_namespace = name_space;
        unnumbered_address.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "unnumbered-address")
    {
        unnumbered_address.yfilter = yfilter;
    }
}

bool Lmp::GmplsUni::Neighbors::Neighbor::Ipcc::SourceIpCcAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "ipv4-address" || name == "ipv6-address" || name == "unnumbered-address")
        return true;
    return false;
}

Lmp::ComponentLinkIds::ComponentLinkIds()
    :
    component_link_id(this, {"controller_name"})
{

    yang_name = "component-link-ids"; yang_parent_name = "lmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::ComponentLinkIds::~ComponentLinkIds()
{
}

bool Lmp::ComponentLinkIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<component_link_id.len(); index++)
    {
        if(component_link_id[index]->has_data())
            return true;
    }
    return false;
}

bool Lmp::ComponentLinkIds::has_operation() const
{
    for (std::size_t index=0; index<component_link_id.len(); index++)
    {
        if(component_link_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lmp::ComponentLinkIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::ComponentLinkIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-link-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::ComponentLinkIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::ComponentLinkIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component-link-id")
    {
        auto ent_ = std::make_shared<Lmp::ComponentLinkIds::ComponentLinkId>();
        ent_->parent = this;
        component_link_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::ComponentLinkIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : component_link_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Lmp::ComponentLinkIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lmp::ComponentLinkIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lmp::ComponentLinkIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component-link-id")
        return true;
    return false;
}

Lmp::ComponentLinkIds::ComponentLinkId::ComponentLinkId()
    :
    controller_name{YType::str, "controller-name"},
    component_interface_id{YType::uint32, "component-interface-id"}
{

    yang_name = "component-link-id"; yang_parent_name = "component-link-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

Lmp::ComponentLinkIds::ComponentLinkId::~ComponentLinkId()
{
}

bool Lmp::ComponentLinkIds::ComponentLinkId::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| component_interface_id.is_set;
}

bool Lmp::ComponentLinkIds::ComponentLinkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(component_interface_id.yfilter);
}

std::string Lmp::ComponentLinkIds::ComponentLinkId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lmp-oper:lmp/component-link-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string Lmp::ComponentLinkIds::ComponentLinkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-link-id";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lmp::ComponentLinkIds::ComponentLinkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (component_interface_id.is_set || is_set(component_interface_id.yfilter)) leaf_name_data.push_back(component_interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lmp::ComponentLinkIds::ComponentLinkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lmp::ComponentLinkIds::ComponentLinkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lmp::ComponentLinkIds::ComponentLinkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "component-interface-id")
    {
        component_interface_id = value;
        component_interface_id.value_namespace = name_space;
        component_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Lmp::ComponentLinkIds::ComponentLinkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "component-interface-id")
    {
        component_interface_id.yfilter = yfilter;
    }
}

bool Lmp::ComponentLinkIds::ComponentLinkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-name" || name == "component-interface-id")
        return true;
    return false;
}

const Enum::YLeaf OlmCompLinkImState::comp_link_im_state_oir {0, "comp-link-im-state-oir"};
const Enum::YLeaf OlmCompLinkImState::comp_link_im_state_down {1, "comp-link-im-state-down"};
const Enum::YLeaf OlmCompLinkImState::comp_link_im_state_admin_down {2, "comp-link-im-state-admin-down"};
const Enum::YLeaf OlmCompLinkImState::comp_link_im_state_up {3, "comp-link-im-state-up"};
const Enum::YLeaf OlmCompLinkImState::comp_link_im_state_unknown {4, "comp-link-im-state-unknown"};

const Enum::YLeaf OlmLinkEncoding::none {0, "none"};
const Enum::YLeaf OlmLinkEncoding::packet {1, "packet"};
const Enum::YLeaf OlmLinkEncoding::ethernet {2, "ethernet"};
const Enum::YLeaf OlmLinkEncoding::ansi_etsi_pdh {3, "ansi-etsi-pdh"};
const Enum::YLeaf OlmLinkEncoding::reserved1 {4, "reserved1"};
const Enum::YLeaf OlmLinkEncoding::sdh_sonet {5, "sdh-sonet"};
const Enum::YLeaf OlmLinkEncoding::reserved2 {6, "reserved2"};
const Enum::YLeaf OlmLinkEncoding::digital_wrapper {7, "digital-wrapper"};
const Enum::YLeaf OlmLinkEncoding::lambda {8, "lambda"};
const Enum::YLeaf OlmLinkEncoding::fiber {9, "fiber"};
const Enum::YLeaf OlmLinkEncoding::reserved3 {10, "reserved3"};
const Enum::YLeaf OlmLinkEncoding::fiber_channel {11, "fiber-channel"};
const Enum::YLeaf OlmLinkEncoding::lencode_unknown {12, "lencode-unknown"};

const Enum::YLeaf OlmMuxCap::psc1 {0, "psc1"};
const Enum::YLeaf OlmMuxCap::psc2 {1, "psc2"};
const Enum::YLeaf OlmMuxCap::psc3 {2, "psc3"};
const Enum::YLeaf OlmMuxCap::psc4 {3, "psc4"};
const Enum::YLeaf OlmMuxCap::l2sc {4, "l2sc"};
const Enum::YLeaf OlmMuxCap::tdm {5, "tdm"};
const Enum::YLeaf OlmMuxCap::lsc {6, "lsc"};
const Enum::YLeaf OlmMuxCap::fsc {7, "fsc"};
const Enum::YLeaf OlmMuxCap::unknown_mux_cap {8, "unknown-mux-cap"};

const Enum::YLeaf OlmCompLinkLmpStatus::comp_link_lmp_status_if_id_mismatch {0, "comp-link-lmp-status-if-id-mismatch"};
const Enum::YLeaf OlmCompLinkLmpStatus::comp_link_lmp_status_switch_cap_mismatch {1, "comp-link-lmp-status-switch-cap-mismatch"};

const Enum::YLeaf OlmAddrTypeId::unknown_address {0, "unknown-address"};
const Enum::YLeaf OlmAddrTypeId::ipv4 {101, "ipv4"};
const Enum::YLeaf OlmAddrTypeId::ipv6 {102, "ipv6"};
const Enum::YLeaf OlmAddrTypeId::unnumbered {103, "unnumbered"};

const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_down {0, "comp-link-lmp-state-down"};
const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_test {1, "comp-link-lmp-state-test"};
const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_passive_test {2, "comp-link-lmp-state-passive-test"};
const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_up_free {3, "comp-link-lmp-state-up-free"};
const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_up_allocated {4, "comp-link-lmp-state-up-allocated"};
const Enum::YLeaf OlmCompLinkLmpState::comp_link_lmp_state_unknown {5, "comp-link-lmp-state-unknown"};

const Enum::YLeaf OlmObjectOwner::unknown {0, "unknown"};
const Enum::YLeaf OlmObjectOwner::ouni {1, "ouni"};
const Enum::YLeaf OlmObjectOwner::gmpls_nni {2, "gmpls-nni"};
const Enum::YLeaf OlmObjectOwner::gmpls_uni {3, "gmpls-uni"};

const Enum::YLeaf OlmteLinkLmpState::te_link_lmp_state_down {0, "te-link-lmp-state-down"};
const Enum::YLeaf OlmteLinkLmpState::te_link_lmp_state_init {1, "te-link-lmp-state-init"};
const Enum::YLeaf OlmteLinkLmpState::te_link_lmp_state_up {2, "te-link-lmp-state-up"};
const Enum::YLeaf OlmteLinkLmpState::te_link_lmp_state_degraded {3, "te-link-lmp-state-degraded"};
const Enum::YLeaf OlmteLinkLmpState::te_link_lmp_state_unknown {4, "te-link-lmp-state-unknown"};

const Enum::YLeaf Olmipcc::ipcc_type_global_routed {0, "ipcc-type-global-routed"};
const Enum::YLeaf Olmipcc::ipcc_type_global_if_bound {1, "ipcc-type-global-if-bound"};
const Enum::YLeaf Olmipcc::ipcc_type_ldcc_sdcc {2, "ipcc-type-ldcc-sdcc"};
const Enum::YLeaf Olmipcc::ipcc_type_unknown {3, "ipcc-type-unknown"};

const Enum::YLeaf OlmipccState::ipcc_state_oir_removed {0, "ipcc-state-oir-removed"};
const Enum::YLeaf OlmipccState::ipcc_state_admin_down {1, "ipcc-state-admin-down"};
const Enum::YLeaf OlmipccState::ipcc_state_down {2, "ipcc-state-down"};
const Enum::YLeaf OlmipccState::ipcc_state_cfg_send {3, "ipcc-state-cfg-send"};
const Enum::YLeaf OlmipccState::ipcc_state_cfg_rcv {4, "ipcc-state-cfg-rcv"};
const Enum::YLeaf OlmipccState::ipcc_state_active {5, "ipcc-state-active"};
const Enum::YLeaf OlmipccState::ipcc_state_up {6, "ipcc-state-up"};
const Enum::YLeaf OlmipccState::ipcc_state_going_down {7, "ipcc-state-going-down"};
const Enum::YLeaf OlmipccState::ipcc_state_unknown {8, "ipcc-state-unknown"};

const Enum::YLeaf OlmRouterId::not_configured {0, "not-configured"};
const Enum::YLeaf OlmRouterId::global {1, "global"};
const Enum::YLeaf OlmRouterId::protocol_based_address {2, "protocol-based-address"};
const Enum::YLeaf OlmRouterId::interface {3, "interface"};
const Enum::YLeaf OlmRouterId::network_element {4, "network-element"};
const Enum::YLeaf OlmRouterId::unknown_type {5, "unknown-type"};


}
}

