
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {

PimMa::PimMa()
    :
    active(std::make_shared<PimMa::Active>())
	,standby(std::make_shared<PimMa::Standby>())
{
    active->parent = this;
    children["active"] = active;

    standby->parent = this;
    children["standby"] = standby;

    yang_name = "pim-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper";
}

PimMa::~PimMa()
{
}

bool PimMa::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool PimMa::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string PimMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma";

    return path_buffer.str();

}

EntityPath PimMa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PimMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
        else
        {
            active = std::make_shared<PimMa::Active>();
            active->parent = this;
            children["active"] = active;
        }
        return children.at("active");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
        else
        {
            standby = std::make_shared<PimMa::Standby>();
            standby->parent = this;
            children["standby"] = standby;
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
    }

    return children;
}

void PimMa::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PimMa::clone_ptr() const
{
    return std::make_shared<PimMa>();
}

std::string PimMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PimMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PimMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PimMa::Active::Active()
    :
    interface_table(std::make_shared<PimMa::Active::InterfaceTable>())
	,pim_ma_summary(std::make_shared<PimMa::Active::PimMaSummary>())
{
    interface_table->parent = this;
    children["interface-table"] = interface_table;

    pim_ma_summary->parent = this;
    children["pim-ma-summary"] = pim_ma_summary;

    yang_name = "active"; yang_parent_name = "pim-ma";
}

PimMa::Active::~Active()
{
}

bool PimMa::Active::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Active::has_operation() const
{
    return is_set(operation)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath PimMa::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
        else
        {
            interface_table = std::make_shared<PimMa::Active::InterfaceTable>();
            interface_table->parent = this;
            children["interface-table"] = interface_table;
        }
        return children.at("interface-table");
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary != nullptr)
        {
            children["pim-ma-summary"] = pim_ma_summary;
        }
        else
        {
            pim_ma_summary = std::make_shared<PimMa::Active::PimMaSummary>();
            pim_ma_summary->parent = this;
            children["pim-ma-summary"] = pim_ma_summary;
        }
        return children.at("pim-ma-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::get_children()
{
    if(children.find("interface-table") == children.end())
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
    }

    if(children.find("pim-ma-summary") == children.end())
    {
        if(pim_ma_summary != nullptr)
        {
            children["pim-ma-summary"] = pim_ma_summary;
        }
    }

    return children;
}

void PimMa::Active::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    children["interface-by-handles"] = interface_by_handles;

    interface_by_names->parent = this;
    children["interface-by-names"] = interface_by_names;

    yang_name = "interface-table"; yang_parent_name = "active";
}

PimMa::Active::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Active::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Active::InterfaceTable::has_operation() const
{
    return is_set(operation)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles != nullptr)
        {
            children["interface-by-handles"] = interface_by_handles;
        }
        else
        {
            interface_by_handles = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>();
            interface_by_handles->parent = this;
            children["interface-by-handles"] = interface_by_handles;
        }
        return children.at("interface-by-handles");
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names != nullptr)
        {
            children["interface-by-names"] = interface_by_names;
        }
        else
        {
            interface_by_names = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>();
            interface_by_names->parent = this;
            children["interface-by-names"] = interface_by_names;
        }
        return children.at("interface-by-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::get_children()
{
    if(children.find("interface-by-handles") == children.end())
    {
        if(interface_by_handles != nullptr)
        {
            children["interface-by-handles"] = interface_by_handles;
        }
    }

    if(children.find("interface-by-names") == children.end())
    {
        if(interface_by_names != nullptr)
        {
            children["interface-by-names"] = interface_by_names;
        }
    }

    return children;
}

void PimMa::Active::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{
    yang_name = "interface-by-handles"; yang_parent_name = "interface-table";
}

PimMa::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByHandles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(std::move(c));
        children[segment_path] = interface_by_handle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByHandles::get_children()
{
    for (auto const & c : interface_by_handle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles";
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children()
{
    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-handle";
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children()
{
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-handle";
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children()
{
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
{
    yang_name = "interface-by-names"; yang_parent_name = "interface-table";
}

PimMa::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(std::move(c));
        children[segment_path] = interface_by_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByNames::get_children()
{
    for (auto const & c : interface_by_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names";
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children()
{
    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-name";
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children()
{
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-name";
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children()
{
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Active::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{
    yang_name = "pim-ma-summary"; yang_parent_name = "active";
}

PimMa::Active::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Active::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Active::PimMaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(decap_interface_count.operation)
	|| is_set(encap_interface_count.operation)
	|| is_set(is_edm_connection_open.operation)
	|| is_set(is_im_connection_open.operation)
	|| is_set(is_netio_connection_open.operation)
	|| is_set(is_standby_edm_connection_open.operation)
	|| is_set(mdt_interface_count.operation);
}

std::string PimMa::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";

    return path_buffer.str();

}

EntityPath PimMa::Active::PimMaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.operation)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.operation)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.operation)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.operation)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.operation)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.operation)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.operation)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Active::PimMaSummary::get_children()
{
    return children;
}

void PimMa::Active::PimMaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
    }
}

PimMa::Standby::Standby()
    :
    interface_table(std::make_shared<PimMa::Standby::InterfaceTable>())
	,pim_ma_summary(std::make_shared<PimMa::Standby::PimMaSummary>())
{
    interface_table->parent = this;
    children["interface-table"] = interface_table;

    pim_ma_summary->parent = this;
    children["pim-ma-summary"] = pim_ma_summary;

    yang_name = "standby"; yang_parent_name = "pim-ma";
}

PimMa::Standby::~Standby()
{
}

bool PimMa::Standby::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Standby::has_operation() const
{
    return is_set(operation)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

EntityPath PimMa::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
        else
        {
            interface_table = std::make_shared<PimMa::Standby::InterfaceTable>();
            interface_table->parent = this;
            children["interface-table"] = interface_table;
        }
        return children.at("interface-table");
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary != nullptr)
        {
            children["pim-ma-summary"] = pim_ma_summary;
        }
        else
        {
            pim_ma_summary = std::make_shared<PimMa::Standby::PimMaSummary>();
            pim_ma_summary->parent = this;
            children["pim-ma-summary"] = pim_ma_summary;
        }
        return children.at("pim-ma-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::get_children()
{
    if(children.find("interface-table") == children.end())
    {
        if(interface_table != nullptr)
        {
            children["interface-table"] = interface_table;
        }
    }

    if(children.find("pim-ma-summary") == children.end())
    {
        if(pim_ma_summary != nullptr)
        {
            children["pim-ma-summary"] = pim_ma_summary;
        }
    }

    return children;
}

void PimMa::Standby::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    children["interface-by-handles"] = interface_by_handles;

    interface_by_names->parent = this;
    children["interface-by-names"] = interface_by_names;

    yang_name = "interface-table"; yang_parent_name = "standby";
}

PimMa::Standby::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Standby::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Standby::InterfaceTable::has_operation() const
{
    return is_set(operation)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles != nullptr)
        {
            children["interface-by-handles"] = interface_by_handles;
        }
        else
        {
            interface_by_handles = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>();
            interface_by_handles->parent = this;
            children["interface-by-handles"] = interface_by_handles;
        }
        return children.at("interface-by-handles");
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names != nullptr)
        {
            children["interface-by-names"] = interface_by_names;
        }
        else
        {
            interface_by_names = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>();
            interface_by_names->parent = this;
            children["interface-by-names"] = interface_by_names;
        }
        return children.at("interface-by-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::get_children()
{
    if(children.find("interface-by-handles") == children.end())
    {
        if(interface_by_handles != nullptr)
        {
            children["interface-by-handles"] = interface_by_handles;
        }
    }

    if(children.find("interface-by-names") == children.end())
    {
        if(interface_by_names != nullptr)
        {
            children["interface-by-names"] = interface_by_names;
        }
    }

    return children;
}

void PimMa::Standby::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{
    yang_name = "interface-by-handles"; yang_parent_name = "interface-table";
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByHandles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(std::move(c));
        children[segment_path] = interface_by_handle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByHandles::get_children()
{
    for (auto const & c : interface_by_handle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles";
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children()
{
    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-handle";
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children()
{
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-handle";
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children()
{
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
{
    yang_name = "interface-by-names"; yang_parent_name = "interface-table";
}

PimMa::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(std::move(c));
        children[segment_path] = interface_by_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByNames::get_children()
{
    for (auto const & c : interface_by_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, std::string value)
{
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names";
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children()
{
    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-name";
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children()
{
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-name";
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children()
{
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

PimMa::Standby::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{
    yang_name = "pim-ma-summary"; yang_parent_name = "standby";
}

PimMa::Standby::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Standby::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Standby::PimMaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(decap_interface_count.operation)
	|| is_set(encap_interface_count.operation)
	|| is_set(is_edm_connection_open.operation)
	|| is_set(is_im_connection_open.operation)
	|| is_set(is_netio_connection_open.operation)
	|| is_set(is_standby_edm_connection_open.operation)
	|| is_set(mdt_interface_count.operation);
}

std::string PimMa::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";

    return path_buffer.str();

}

EntityPath PimMa::Standby::PimMaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.operation)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.operation)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.operation)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.operation)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.operation)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.operation)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.operation)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMa::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PimMa::Standby::PimMaSummary::get_children()
{
    return children;
}

void PimMa::Standby::PimMaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
    }
}

Pim::Pim()
    :
    active(std::make_shared<Pim::Active>())
	,standby(std::make_shared<Pim::Standby>())
{
    active->parent = this;
    children["active"] = active;

    standby->parent = this;
    children["standby"] = standby;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper";
}

Pim::~Pim()
{
}

bool Pim::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Pim::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim";

    return path_buffer.str();

}

EntityPath Pim::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
        else
        {
            active = std::make_shared<Pim::Active>();
            active->parent = this;
            children["active"] = active;
        }
        return children.at("active");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
        else
        {
            standby = std::make_shared<Pim::Standby>();
            standby->parent = this;
            children["standby"] = standby;
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
    }

    return children;
}

void Pim::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Pim::clone_ptr() const
{
    return std::make_shared<Pim>();
}

std::string Pim::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Pim::Standby::Standby()
    :
    default_context(std::make_shared<Pim::Standby::DefaultContext>())
	,process(std::make_shared<Pim::Standby::Process>())
	,vrfs(std::make_shared<Pim::Standby::Vrfs>())
{
    default_context->parent = this;
    children["default-context"] = default_context;

    process->parent = this;
    children["process"] = process;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "standby"; yang_parent_name = "pim";
}

Pim::Standby::~Standby()
{
}

bool Pim::Standby::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::Standby::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Pim::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

EntityPath Pim::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
        else
        {
            default_context = std::make_shared<Pim::Standby::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context;
        }
        return children.at("default-context");
    }

    if(child_yang_name == "process")
    {
        if(process != nullptr)
        {
            children["process"] = process;
        }
        else
        {
            process = std::make_shared<Pim::Standby::Process>();
            process->parent = this;
            children["process"] = process;
        }
        return children.at("process");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Pim::Standby::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
    }

    if(children.find("process") == children.end())
    {
        if(process != nullptr)
        {
            children["process"] = process;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Pim::Standby::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::DefaultContext()
    :
    auto_rp(std::make_shared<Pim::Standby::DefaultContext::AutoRp>())
	,bgp_afs(std::make_shared<Pim::Standby::DefaultContext::BgpAfs>())
	,bidir_df_states(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>())
	,bidir_df_winners(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>())
	,bsr(std::make_shared<Pim::Standby::DefaultContext::Bsr>())
	,context(std::make_shared<Pim::Standby::DefaultContext::Context>())
	,global_interfaces(std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>())
	,gre(std::make_shared<Pim::Standby::DefaultContext::Gre>())
	,group_map_match_rpfs(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs>())
	,group_map_match_sources(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources>())
	,group_map_rpfs(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>())
	,group_map_sources(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>())
	,ifrs_interfaces(std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>())
	,ifrs_summary(std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>())
	,interface_old_formats(std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>())
	,interface_statistics(std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>())
	,interfaces(std::make_shared<Pim::Standby::DefaultContext::Interfaces>())
	,jp_statistics(std::make_shared<Pim::Standby::DefaultContext::JpStatistics>())
	,mib_databases(std::make_shared<Pim::Standby::DefaultContext::MibDatabases>())
	,multicast_static_routes(std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>())
	,neighbor_old_formats(std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>())
	,neighbor_summaries(std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>())
	,neighbors(std::make_shared<Pim::Standby::DefaultContext::Neighbors>())
	,net_io_tunnels(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>())
	,ranges(std::make_shared<Pim::Standby::DefaultContext::Ranges>())
	,route_policy(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>())
	,rpf_redirect(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>())
	,rpf_summary(std::make_shared<Pim::Standby::DefaultContext::RpfSummary>())
	,safs(std::make_shared<Pim::Standby::DefaultContext::Safs>())
	,summary(std::make_shared<Pim::Standby::DefaultContext::Summary>())
	,table_contexts(std::make_shared<Pim::Standby::DefaultContext::TableContexts>())
	,topologies(std::make_shared<Pim::Standby::DefaultContext::Topologies>())
	,topology_entry_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>())
	,topology_interface_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>())
	,topology_route_count(std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>())
	,traffic_counters(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>())
	,tunnels(std::make_shared<Pim::Standby::DefaultContext::Tunnels>())
{
    auto_rp->parent = this;
    children["auto-rp"] = auto_rp;

    bgp_afs->parent = this;
    children["bgp-afs"] = bgp_afs;

    bidir_df_states->parent = this;
    children["bidir-df-states"] = bidir_df_states;

    bidir_df_winners->parent = this;
    children["bidir-df-winners"] = bidir_df_winners;

    bsr->parent = this;
    children["bsr"] = bsr;

    context->parent = this;
    children["context"] = context;

    global_interfaces->parent = this;
    children["global-interfaces"] = global_interfaces;

    gre->parent = this;
    children["gre"] = gre;

    group_map_match_rpfs->parent = this;
    children["group-map-match-rpfs"] = group_map_match_rpfs;

    group_map_match_sources->parent = this;
    children["group-map-match-sources"] = group_map_match_sources;

    group_map_rpfs->parent = this;
    children["group-map-rpfs"] = group_map_rpfs;

    group_map_sources->parent = this;
    children["group-map-sources"] = group_map_sources;

    ifrs_interfaces->parent = this;
    children["ifrs-interfaces"] = ifrs_interfaces;

    ifrs_summary->parent = this;
    children["ifrs-summary"] = ifrs_summary;

    interface_old_formats->parent = this;
    children["interface-old-formats"] = interface_old_formats;

    interface_statistics->parent = this;
    children["interface-statistics"] = interface_statistics;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    jp_statistics->parent = this;
    children["jp-statistics"] = jp_statistics;

    mib_databases->parent = this;
    children["mib-databases"] = mib_databases;

    multicast_static_routes->parent = this;
    children["multicast-static-routes"] = multicast_static_routes;

    neighbor_old_formats->parent = this;
    children["neighbor-old-formats"] = neighbor_old_formats;

    neighbor_summaries->parent = this;
    children["neighbor-summaries"] = neighbor_summaries;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    net_io_tunnels->parent = this;
    children["net-io-tunnels"] = net_io_tunnels;

    ranges->parent = this;
    children["ranges"] = ranges;

    route_policy->parent = this;
    children["route-policy"] = route_policy;

    rpf_redirect->parent = this;
    children["rpf-redirect"] = rpf_redirect;

    rpf_summary->parent = this;
    children["rpf-summary"] = rpf_summary;

    safs->parent = this;
    children["safs"] = safs;

    summary->parent = this;
    children["summary"] = summary;

    table_contexts->parent = this;
    children["table-contexts"] = table_contexts;

    topologies->parent = this;
    children["topologies"] = topologies;

    topology_entry_flag_route_counts->parent = this;
    children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;

    topology_interface_flag_route_counts->parent = this;
    children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;

    topology_route_count->parent = this;
    children["topology-route-count"] = topology_route_count;

    traffic_counters->parent = this;
    children["traffic-counters"] = traffic_counters;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "default-context"; yang_parent_name = "standby";
}

Pim::Standby::DefaultContext::~DefaultContext()
{
}

bool Pim::Standby::DefaultContext::has_data() const
{
    return (auto_rp !=  nullptr && auto_rp->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_data())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool Pim::Standby::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_operation())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string Pim::Standby::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp;
        }
        else
        {
            auto_rp = std::make_shared<Pim::Standby::DefaultContext::AutoRp>();
            auto_rp->parent = this;
            children["auto-rp"] = auto_rp;
        }
        return children.at("auto-rp");
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs != nullptr)
        {
            children["bgp-afs"] = bgp_afs;
        }
        else
        {
            bgp_afs = std::make_shared<Pim::Standby::DefaultContext::BgpAfs>();
            bgp_afs->parent = this;
            children["bgp-afs"] = bgp_afs;
        }
        return children.at("bgp-afs");
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states != nullptr)
        {
            children["bidir-df-states"] = bidir_df_states;
        }
        else
        {
            bidir_df_states = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>();
            bidir_df_states->parent = this;
            children["bidir-df-states"] = bidir_df_states;
        }
        return children.at("bidir-df-states");
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners != nullptr)
        {
            children["bidir-df-winners"] = bidir_df_winners;
        }
        else
        {
            bidir_df_winners = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>();
            bidir_df_winners->parent = this;
            children["bidir-df-winners"] = bidir_df_winners;
        }
        return children.at("bidir-df-winners");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr;
        }
        else
        {
            bsr = std::make_shared<Pim::Standby::DefaultContext::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr;
        }
        return children.at("bsr");
    }

    if(child_yang_name == "context")
    {
        if(context != nullptr)
        {
            children["context"] = context;
        }
        else
        {
            context = std::make_shared<Pim::Standby::DefaultContext::Context>();
            context->parent = this;
            children["context"] = context;
        }
        return children.at("context");
    }

    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces != nullptr)
        {
            children["global-interfaces"] = global_interfaces;
        }
        else
        {
            global_interfaces = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>();
            global_interfaces->parent = this;
            children["global-interfaces"] = global_interfaces;
        }
        return children.at("global-interfaces");
    }

    if(child_yang_name == "gre")
    {
        if(gre != nullptr)
        {
            children["gre"] = gre;
        }
        else
        {
            gre = std::make_shared<Pim::Standby::DefaultContext::Gre>();
            gre->parent = this;
            children["gre"] = gre;
        }
        return children.at("gre");
    }

    if(child_yang_name == "group-map-match-rpfs")
    {
        if(group_map_match_rpfs != nullptr)
        {
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
        else
        {
            group_map_match_rpfs = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs>();
            group_map_match_rpfs->parent = this;
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
        return children.at("group-map-match-rpfs");
    }

    if(child_yang_name == "group-map-match-sources")
    {
        if(group_map_match_sources != nullptr)
        {
            children["group-map-match-sources"] = group_map_match_sources;
        }
        else
        {
            group_map_match_sources = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources>();
            group_map_match_sources->parent = this;
            children["group-map-match-sources"] = group_map_match_sources;
        }
        return children.at("group-map-match-sources");
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs != nullptr)
        {
            children["group-map-rpfs"] = group_map_rpfs;
        }
        else
        {
            group_map_rpfs = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>();
            group_map_rpfs->parent = this;
            children["group-map-rpfs"] = group_map_rpfs;
        }
        return children.at("group-map-rpfs");
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources != nullptr)
        {
            children["group-map-sources"] = group_map_sources;
        }
        else
        {
            group_map_sources = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>();
            group_map_sources->parent = this;
            children["group-map-sources"] = group_map_sources;
        }
        return children.at("group-map-sources");
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        else
        {
            ifrs_interfaces = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>();
            ifrs_interfaces->parent = this;
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
        return children.at("ifrs-interfaces");
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary != nullptr)
        {
            children["ifrs-summary"] = ifrs_summary;
        }
        else
        {
            ifrs_summary = std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>();
            ifrs_summary->parent = this;
            children["ifrs-summary"] = ifrs_summary;
        }
        return children.at("ifrs-summary");
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
        else
        {
            interface_old_formats = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>();
            interface_old_formats->parent = this;
            children["interface-old-formats"] = interface_old_formats;
        }
        return children.at("interface-old-formats");
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
        else
        {
            interface_statistics = std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>();
            interface_statistics->parent = this;
            children["interface-statistics"] = interface_statistics;
        }
        return children.at("interface-statistics");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Pim::Standby::DefaultContext::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics != nullptr)
        {
            children["jp-statistics"] = jp_statistics;
        }
        else
        {
            jp_statistics = std::make_shared<Pim::Standby::DefaultContext::JpStatistics>();
            jp_statistics->parent = this;
            children["jp-statistics"] = jp_statistics;
        }
        return children.at("jp-statistics");
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases != nullptr)
        {
            children["mib-databases"] = mib_databases;
        }
        else
        {
            mib_databases = std::make_shared<Pim::Standby::DefaultContext::MibDatabases>();
            mib_databases->parent = this;
            children["mib-databases"] = mib_databases;
        }
        return children.at("mib-databases");
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes != nullptr)
        {
            children["multicast-static-routes"] = multicast_static_routes;
        }
        else
        {
            multicast_static_routes = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>();
            multicast_static_routes->parent = this;
            children["multicast-static-routes"] = multicast_static_routes;
        }
        return children.at("multicast-static-routes");
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats != nullptr)
        {
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
        else
        {
            neighbor_old_formats = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>();
            neighbor_old_formats->parent = this;
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
        return children.at("neighbor-old-formats");
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
        else
        {
            neighbor_summaries = std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>();
            neighbor_summaries->parent = this;
            children["neighbor-summaries"] = neighbor_summaries;
        }
        return children.at("neighbor-summaries");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Pim::Standby::DefaultContext::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels != nullptr)
        {
            children["net-io-tunnels"] = net_io_tunnels;
        }
        else
        {
            net_io_tunnels = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>();
            net_io_tunnels->parent = this;
            children["net-io-tunnels"] = net_io_tunnels;
        }
        return children.at("net-io-tunnels");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Pim::Standby::DefaultContext::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy != nullptr)
        {
            children["route-policy"] = route_policy;
        }
        else
        {
            route_policy = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>();
            route_policy->parent = this;
            children["route-policy"] = route_policy;
        }
        return children.at("route-policy");
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect;
        }
        else
        {
            rpf_redirect = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>();
            rpf_redirect->parent = this;
            children["rpf-redirect"] = rpf_redirect;
        }
        return children.at("rpf-redirect");
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary != nullptr)
        {
            children["rpf-summary"] = rpf_summary;
        }
        else
        {
            rpf_summary = std::make_shared<Pim::Standby::DefaultContext::RpfSummary>();
            rpf_summary->parent = this;
            children["rpf-summary"] = rpf_summary;
        }
        return children.at("rpf-summary");
    }

    if(child_yang_name == "safs")
    {
        if(safs != nullptr)
        {
            children["safs"] = safs;
        }
        else
        {
            safs = std::make_shared<Pim::Standby::DefaultContext::Safs>();
            safs->parent = this;
            children["safs"] = safs;
        }
        return children.at("safs");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Pim::Standby::DefaultContext::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts != nullptr)
        {
            children["table-contexts"] = table_contexts;
        }
        else
        {
            table_contexts = std::make_shared<Pim::Standby::DefaultContext::TableContexts>();
            table_contexts->parent = this;
            children["table-contexts"] = table_contexts;
        }
        return children.at("table-contexts");
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<Pim::Standby::DefaultContext::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts != nullptr)
        {
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
        else
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>();
            topology_entry_flag_route_counts->parent = this;
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
        return children.at("topology-entry-flag-route-counts");
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts != nullptr)
        {
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
        else
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>();
            topology_interface_flag_route_counts->parent = this;
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
        return children.at("topology-interface-flag-route-counts");
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count != nullptr)
        {
            children["topology-route-count"] = topology_route_count;
        }
        else
        {
            topology_route_count = std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>();
            topology_route_count->parent = this;
            children["topology-route-count"] = topology_route_count;
        }
        return children.at("topology-route-count");
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
        else
        {
            traffic_counters = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>();
            traffic_counters->parent = this;
            children["traffic-counters"] = traffic_counters;
        }
        return children.at("traffic-counters");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<Pim::Standby::DefaultContext::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::get_children()
{
    if(children.find("auto-rp") == children.end())
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp;
        }
    }

    if(children.find("bgp-afs") == children.end())
    {
        if(bgp_afs != nullptr)
        {
            children["bgp-afs"] = bgp_afs;
        }
    }

    if(children.find("bidir-df-states") == children.end())
    {
        if(bidir_df_states != nullptr)
        {
            children["bidir-df-states"] = bidir_df_states;
        }
    }

    if(children.find("bidir-df-winners") == children.end())
    {
        if(bidir_df_winners != nullptr)
        {
            children["bidir-df-winners"] = bidir_df_winners;
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr;
        }
    }

    if(children.find("context") == children.end())
    {
        if(context != nullptr)
        {
            children["context"] = context;
        }
    }

    if(children.find("global-interfaces") == children.end())
    {
        if(global_interfaces != nullptr)
        {
            children["global-interfaces"] = global_interfaces;
        }
    }

    if(children.find("gre") == children.end())
    {
        if(gre != nullptr)
        {
            children["gre"] = gre;
        }
    }

    if(children.find("group-map-match-rpfs") == children.end())
    {
        if(group_map_match_rpfs != nullptr)
        {
            children["group-map-match-rpfs"] = group_map_match_rpfs;
        }
    }

    if(children.find("group-map-match-sources") == children.end())
    {
        if(group_map_match_sources != nullptr)
        {
            children["group-map-match-sources"] = group_map_match_sources;
        }
    }

    if(children.find("group-map-rpfs") == children.end())
    {
        if(group_map_rpfs != nullptr)
        {
            children["group-map-rpfs"] = group_map_rpfs;
        }
    }

    if(children.find("group-map-sources") == children.end())
    {
        if(group_map_sources != nullptr)
        {
            children["group-map-sources"] = group_map_sources;
        }
    }

    if(children.find("ifrs-interfaces") == children.end())
    {
        if(ifrs_interfaces != nullptr)
        {
            children["ifrs-interfaces"] = ifrs_interfaces;
        }
    }

    if(children.find("ifrs-summary") == children.end())
    {
        if(ifrs_summary != nullptr)
        {
            children["ifrs-summary"] = ifrs_summary;
        }
    }

    if(children.find("interface-old-formats") == children.end())
    {
        if(interface_old_formats != nullptr)
        {
            children["interface-old-formats"] = interface_old_formats;
        }
    }

    if(children.find("interface-statistics") == children.end())
    {
        if(interface_statistics != nullptr)
        {
            children["interface-statistics"] = interface_statistics;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("jp-statistics") == children.end())
    {
        if(jp_statistics != nullptr)
        {
            children["jp-statistics"] = jp_statistics;
        }
    }

    if(children.find("mib-databases") == children.end())
    {
        if(mib_databases != nullptr)
        {
            children["mib-databases"] = mib_databases;
        }
    }

    if(children.find("multicast-static-routes") == children.end())
    {
        if(multicast_static_routes != nullptr)
        {
            children["multicast-static-routes"] = multicast_static_routes;
        }
    }

    if(children.find("neighbor-old-formats") == children.end())
    {
        if(neighbor_old_formats != nullptr)
        {
            children["neighbor-old-formats"] = neighbor_old_formats;
        }
    }

    if(children.find("neighbor-summaries") == children.end())
    {
        if(neighbor_summaries != nullptr)
        {
            children["neighbor-summaries"] = neighbor_summaries;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("net-io-tunnels") == children.end())
    {
        if(net_io_tunnels != nullptr)
        {
            children["net-io-tunnels"] = net_io_tunnels;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("route-policy") == children.end())
    {
        if(route_policy != nullptr)
        {
            children["route-policy"] = route_policy;
        }
    }

    if(children.find("rpf-redirect") == children.end())
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect;
        }
    }

    if(children.find("rpf-summary") == children.end())
    {
        if(rpf_summary != nullptr)
        {
            children["rpf-summary"] = rpf_summary;
        }
    }

    if(children.find("safs") == children.end())
    {
        if(safs != nullptr)
        {
            children["safs"] = safs;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("table-contexts") == children.end())
    {
        if(table_contexts != nullptr)
        {
            children["table-contexts"] = table_contexts;
        }
    }

    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    if(children.find("topology-entry-flag-route-counts") == children.end())
    {
        if(topology_entry_flag_route_counts != nullptr)
        {
            children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
        }
    }

    if(children.find("topology-interface-flag-route-counts") == children.end())
    {
        if(topology_interface_flag_route_counts != nullptr)
        {
            children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
        }
    }

    if(children.find("topology-route-count") == children.end())
    {
        if(topology_route_count != nullptr)
        {
            children["topology-route-count"] = topology_route_count;
        }
    }

    if(children.find("traffic-counters") == children.end())
    {
        if(traffic_counters != nullptr)
        {
            children["traffic-counters"] = traffic_counters;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterfaces()
{
    yang_name = "global-interfaces"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::GlobalInterfaces::~GlobalInterfaces()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::has_data() const
{
    for (std::size_t index=0; index<global_interface.size(); index++)
    {
        if(global_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<global_interface.size(); index++)
    {
        if(global_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GlobalInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-interface")
    {
        for(auto const & c : global_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface>();
        c->parent = this;
        global_interface.push_back(std::move(c));
        children[segment_path] = global_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GlobalInterfaces::get_children()
{
    for (auto const & c : global_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::GlobalInterface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "global-interface"; yang_parent_name = "global-interfaces";
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::~GlobalInterface()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/global-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "global-interface";
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "global-interface";
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(std::move(c));
        children[segment_path] = ifrs_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::IfrsInterfaces::get_children()
{
    for (auto const & c : ifrs_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ifrs-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "ifrs-interface";
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "ifrs-interface";
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Safs()
{
    yang_name = "safs"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Safs::~Safs()
{
}

bool Pim::Standby::DefaultContext::Safs::has_data() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "saf")
    {
        for(auto const & c : saf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf>();
        c->parent = this;
        saf.push_back(std::move(c));
        children[segment_path] = saf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::get_children()
{
    for (auto const & c : saf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    rpf_hash_source_groups(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups>())
	,rpf_hash_sources(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources>())
	,rpfs(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;
    children["rpf-hash-source-groups"] = rpf_hash_source_groups;

    rpf_hash_sources->parent = this;
    children["rpf-hash-sources"] = rpf_hash_sources;

    rpfs->parent = this;
    children["rpfs"] = rpfs;

    yang_name = "saf"; yang_parent_name = "safs";
}

Pim::Standby::DefaultContext::Safs::Saf::~Saf()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::has_data() const
{
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::has_operation() const
{
    return is_set(operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups != nullptr)
        {
            children["rpf-hash-source-groups"] = rpf_hash_source_groups;
        }
        else
        {
            rpf_hash_source_groups = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups>();
            rpf_hash_source_groups->parent = this;
            children["rpf-hash-source-groups"] = rpf_hash_source_groups;
        }
        return children.at("rpf-hash-source-groups");
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources != nullptr)
        {
            children["rpf-hash-sources"] = rpf_hash_sources;
        }
        else
        {
            rpf_hash_sources = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources>();
            rpf_hash_sources->parent = this;
            children["rpf-hash-sources"] = rpf_hash_sources;
        }
        return children.at("rpf-hash-sources");
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs != nullptr)
        {
            children["rpfs"] = rpfs;
        }
        else
        {
            rpfs = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs>();
            rpfs->parent = this;
            children["rpfs"] = rpfs;
        }
        return children.at("rpfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::get_children()
{
    if(children.find("rpf-hash-source-groups") == children.end())
    {
        if(rpf_hash_source_groups != nullptr)
        {
            children["rpf-hash-source-groups"] = rpf_hash_source_groups;
        }
    }

    if(children.find("rpf-hash-sources") == children.end())
    {
        if(rpf_hash_sources != nullptr)
        {
            children["rpf-hash-sources"] = rpf_hash_sources;
        }
    }

    if(children.find("rpfs") == children.end())
    {
        if(rpfs != nullptr)
        {
            children["rpfs"] = rpfs;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
{
    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf-hash-source-group")
    {
        for(auto const & c : rpf_hash_source_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.push_back(std::move(c));
        children[segment_path] = rpf_hash_source_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_children()
{
    for (auto const & c : rpf_hash_source_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    group_address{YType::str, "group-address"},
    mask_length{YType::int32, "mask-length"},
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    children["next-hop-address"] = next_hop_address;

    secondary_next_hop_address->parent = this;
    children["secondary-next-hop-address"] = secondary_next_hop_address;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    return group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mask_length.operation)
	|| is_set(mofrr.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_multipath_enabled.operation)
	|| is_set(secondary_next_hop_interface.operation)
	|| is_set(source_address.operation)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.operation)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.operation)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.operation)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.operation)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address != nullptr)
        {
            children["next-hop-address"] = next_hop_address;
        }
        else
        {
            next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
            next_hop_address->parent = this;
            children["next-hop-address"] = next_hop_address;
        }
        return children.at("next-hop-address");
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address != nullptr)
        {
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
        else
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
            secondary_next_hop_address->parent = this;
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
        return children.at("secondary-next-hop-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children()
{
    if(children.find("next-hop-address") == children.end())
    {
        if(next_hop_address != nullptr)
        {
            children["next-hop-address"] = next_hop_address;
        }
    }

    if(children.find("secondary-next-hop-address") == children.end())
    {
        if(secondary_next_hop_address != nullptr)
        {
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSources()
{
    yang_name = "rpf-hash-sources"; yang_parent_name = "saf";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf-hash-source")
    {
        for(auto const & c : rpf_hash_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.push_back(std::move(c));
        children[segment_path] = rpf_hash_source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_children()
{
    for (auto const & c : rpf_hash_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    children["next-hop-address"] = next_hop_address;

    secondary_next_hop_address->parent = this;
    children["secondary-next-hop-address"] = secondary_next_hop_address;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    return mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(operation)
	|| is_set(mofrr.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_multipath_enabled.operation)
	|| is_set(secondary_next_hop_interface.operation)
	|| is_set(source_address.operation)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mofrr.is_set || is_set(mofrr.operation)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.operation)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.operation)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address != nullptr)
        {
            children["next-hop-address"] = next_hop_address;
        }
        else
        {
            next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
            next_hop_address->parent = this;
            children["next-hop-address"] = next_hop_address;
        }
        return children.at("next-hop-address");
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address != nullptr)
        {
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
        else
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
            secondary_next_hop_address->parent = this;
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
        return children.at("secondary-next-hop-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_children()
{
    if(children.find("next-hop-address") == children.end())
    {
        if(next_hop_address != nullptr)
        {
            children["next-hop-address"] = next_hop_address;
        }
    }

    if(children.find("secondary-next-hop-address") == children.end())
    {
        if(secondary_next_hop_address != nullptr)
        {
            children["secondary-next-hop-address"] = secondary_next_hop_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mofrr")
    {
        mofrr = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpfs()
{
    yang_name = "rpfs"; yang_parent_name = "saf";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::has_data() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf")
    {
        for(auto const & c : rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.push_back(std::move(c));
        children[segment_path] = rpf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_children()
{
    for (auto const & c : rpf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address_xr(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
{
    registered_address_xr->parent = this;
    children["registered-address-xr"] = registered_address_xr;

    yang_name = "rpf"; yang_parent_name = "rpfs";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::has_data() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(registered_address.operation)
	|| is_set(is_connected.operation)
	|| is_set(is_rpf_bgp_route.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf" <<"[registered-address='" <<registered_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.operation)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.operation)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr != nullptr)
        {
            children["registered-address-xr"] = registered_address_xr;
        }
        else
        {
            registered_address_xr = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
            registered_address_xr->parent = this;
            children["registered-address-xr"] = registered_address_xr;
        }
        return children.at("registered-address-xr");
    }

    if(child_yang_name == "rpf-path")
    {
        for(auto const & c : rpf_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.push_back(std::move(c));
        children[segment_path] = rpf_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_children()
{
    if(children.find("registered-address-xr") == children.end())
    {
        if(registered_address_xr != nullptr)
        {
            children["registered-address-xr"] = registered_address_xr;
        }
    }

    for (auto const & c : rpf_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address-xr"; yang_parent_name = "rpf";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    rpf_interface_name{YType::str, "rpf-interface-name"}
    	,
    rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
	,rpf_nexthop(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    rpf_nexthop->parent = this;
    children["rpf-nexthop"] = rpf_nexthop;

    yang_name = "rpf-path"; yang_parent_name = "rpf";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    return connector.is_set
	|| extranet_vrf_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| rpf_interface_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(connector.operation)
	|| is_set(extranet_vrf_name.operation)
	|| is_set(is_connector_attribute_present.operation)
	|| is_set(is_rpf_interface_disabled.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(is_via_mlsm.operation)
	|| is_set(rpf_interface_name.operation)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector.is_set || is_set(connector.operation)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.operation)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.operation)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.operation)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.operation)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop != nullptr)
        {
            children["rpf-nexthop"] = rpf_nexthop;
        }
        else
        {
            rpf_nexthop = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
            rpf_nexthop->parent = this;
            children["rpf-nexthop"] = rpf_nexthop;
        }
        return children.at("rpf-nexthop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_children()
{
    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    if(children.find("rpf-nexthop") == children.end())
    {
        if(rpf_nexthop != nullptr)
        {
            children["rpf-nexthop"] = rpf_nexthop;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connector")
    {
        connector = value;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path";
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNexthop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(std::move(c));
        children[segment_path] = interface_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceStatistics::get_children()
{
    for (auto const & c : interface_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_assert{YType::uint32, "input-assert"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    input_graft_message{YType::uint32, "input-graft-message"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"},
    input_register{YType::uint32, "input-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_assert{YType::uint32, "output-assert"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_df_election{YType::uint32, "output-df-election"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    output_hello{YType::uint32, "output-hello"},
    output_jp{YType::uint32, "output-jp"},
    output_register{YType::uint32, "output-register"},
    output_register_stop{YType::uint32, "output-register-stop"}
{
    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return interface_name.is_set
	|| input_assert.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| input_graft_ack_message.is_set
	|| input_graft_message.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_miscellaneous.is_set
	|| input_register.is_set
	|| input_register_stop.is_set
	|| output_assert.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_df_election.is_set
	|| output_graft_ack_message.is_set
	|| output_graft_message.is_set
	|| output_hello.is_set
	|| output_jp.is_set
	|| output_register.is_set
	|| output_register_stop.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(input_assert.operation)
	|| is_set(input_bsr_message.operation)
	|| is_set(input_candidate_rp_advertisement.operation)
	|| is_set(input_df_election.operation)
	|| is_set(input_graft_ack_message.operation)
	|| is_set(input_graft_message.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_jp.operation)
	|| is_set(input_miscellaneous.operation)
	|| is_set(input_register.operation)
	|| is_set(input_register_stop.operation)
	|| is_set(output_assert.operation)
	|| is_set(output_bsr_message.operation)
	|| is_set(output_candidate_rp_advertisement.operation)
	|| is_set(output_df_election.operation)
	|| is_set(output_graft_ack_message.operation)
	|| is_set(output_graft_message.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_jp.operation)
	|| is_set(output_register.operation)
	|| is_set(output_register_stop.operation);
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interface-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.operation)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.operation)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.operation)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.operation)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.operation)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.operation)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.operation)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.operation)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.operation)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.operation)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.operation)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.operation)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.operation)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.operation)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.operation)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.operation)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.operation)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.operation)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.operation)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
    }
    if(value_path == "input-register")
    {
        input_register = value;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
    }
    if(value_path == "output-register")
    {
        output_register = value;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
    }
}

Pim::Standby::DefaultContext::TopologyRouteCount::TopologyRouteCount()
    :
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    yang_name = "topology-route-count"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::has_data() const
{
    return active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Standby::DefaultContext::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TopologyRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TopologyRouteCount::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-route-count";
}

Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topology-route-count/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::JpStatistics::JpStatistics()
{
    yang_name = "jp-statistics"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::JpStatistics::~JpStatistics()
{
}

bool Pim::Standby::DefaultContext::JpStatistics::has_data() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::JpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "jp-statistic")
    {
        for(auto const & c : jp_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.push_back(std::move(c));
        children[segment_path] = jp_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::JpStatistics::get_children()
{
    for (auto const & c : jp_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::JpStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_10k{YType::uint16, "received-10k"},
    received_1k{YType::uint16, "received-1k"},
    received_50k{YType::uint16, "received-50k"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_50k{YType::uint16, "transmitted-50k"}
{
    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics";
}

Pim::Standby::DefaultContext::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Standby::DefaultContext::JpStatistics::JpStatistic::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| received.is_set
	|| received100.is_set
	|| received_10k.is_set
	|| received_1k.is_set
	|| received_50k.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_10k.is_set
	|| transmitted_1k.is_set
	|| transmitted_50k.is_set;
}

bool Pim::Standby::DefaultContext::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(mtu.operation)
	|| is_set(received.operation)
	|| is_set(received100.operation)
	|| is_set(received_10k.operation)
	|| is_set(received_1k.operation)
	|| is_set(received_50k.operation)
	|| is_set(transmitted.operation)
	|| is_set(transmitted100.operation)
	|| is_set(transmitted_10k.operation)
	|| is_set(transmitted_1k.operation)
	|| is_set(transmitted_50k.operation);
}

std::string Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/jp-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.operation)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.operation)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.operation)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.operation)) leaf_name_data.push_back(received_50k.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.operation)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.operation)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.operation)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.operation)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.operation)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::JpStatistics::JpStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "received100")
    {
        received100 = value;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
    }
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabases()
{
    yang_name = "mib-databases"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::MibDatabases::~MibDatabases()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::has_data() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mib-database")
    {
        for(auto const & c : mib_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.push_back(std::move(c));
        children[segment_path] = mib_database.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::get_children()
{
    for (auto const & c : mib_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::MibDatabase()
    :
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    group_address{YType::str, "group-address"},
    protocol{YType::enumeration, "protocol"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    source_address{YType::str, "source-address"},
    source_netmask{YType::int32, "source-netmask"},
    spt_bit{YType::boolean, "spt-bit"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>())
	,rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot>())
	,source_address_xr(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    rpf_root->parent = this;
    children["rpf-root"] = rpf_root;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "mib-database"; yang_parent_name = "mib-databases";
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::has_data() const
{
    return assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| bidirectional_route.is_set
	|| group_address.is_set
	|| protocol.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| source_address.is_set
	|| source_netmask.is_set
	|| spt_bit.is_set
	|| upstream_assert_timer.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(assert_metric.operation)
	|| is_set(assert_metric_preference.operation)
	|| is_set(assert_rpt_bit.operation)
	|| is_set(bidirectional_route.operation)
	|| is_set(group_address.operation)
	|| is_set(protocol.operation)
	|| is_set(rpf_drop.operation)
	|| is_set(rpf_extranet.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_mask.operation)
	|| is_set(rpf_safi.operation)
	|| is_set(rpf_table_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| is_set(source_address.operation)
	|| is_set(source_netmask.operation)
	|| is_set(spt_bit.operation)
	|| is_set(upstream_assert_timer.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assert_metric.is_set || is_set(assert_metric.operation)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.operation)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.operation)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.operation)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.operation)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.operation)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.operation)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.operation)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.operation)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.operation)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.operation)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.operation)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
        else
        {
            rpf_root = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot>();
            rpf_root->parent = this;
            children["rpf-root"] = rpf_root;
        }
        return children.at("rpf-root");
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    if(children.find("rpf-root") == children.end())
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "assert-metric")
    {
        assert_metric = value;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "mib-database";
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "mib-database";
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database";
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "mib-database";
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpfs()
{
    yang_name = "group-map-match-rpfs"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::~GroupMapMatchRpfs()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpfs";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-match-rpf")
    {
        for(auto const & c : group_map_match_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf>();
        c->parent = this;
        group_map_match_rpf.push_back(std::move(c));
        children[segment_path] = group_map_match_rpf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::get_children()
{
    for (auto const & c : group_map_match_rpf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapMatchRpf()
    :
    group_address{YType::str, "group-address"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>())
{
    group_map_information->parent = this;
    children["group-map-information"] = group_map_information;

    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    yang_name = "group-map-match-rpf"; yang_parent_name = "group-map-match-rpfs";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::~GroupMapMatchRpf()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::has_data() const
{
    return group_address.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(are_we_rp.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpf" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-match-rpfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.operation)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
        else
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>();
            group_map_information->parent = this;
            children["group-map-information"] = group_map_information;
        }
        return children.at("group-map-information");
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::get_children()
{
    if(children.find("group-map-information") == children.end())
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
    }

    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-match-rpf";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-rpf";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormats()
{
    yang_name = "neighbor-old-formats"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::has_data() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NeighborOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-old-format")
    {
        for(auto const & c : neighbor_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.push_back(std::move(c));
        children[segment_path] = neighbor_old_format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NeighborOldFormats::get_children()
{
    for (auto const & c : neighbor_old_format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats";
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(expires.operation)
	|| is_set(expiry_timer.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bfd_state.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_dr_priority_capable.operation)
	|| is_set(is_ecmp_redirect_capable.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(is_this_neighbor_dr.operation)
	|| is_set(is_this_neighbor_us.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(uptime.operation);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbor-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.operation)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.operation)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.operation)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.operation)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.operation)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.operation)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(std::move(c));
        children[segment_path] = neighbor_address_xr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_children()
{
    for (auto const & c : neighbor_address_xr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format";
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbor-old-formats/neighbor-old-format/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::IfrsSummary::IfrsSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-summary"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Standby::DefaultContext::IfrsSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Pim::Standby::DefaultContext::IfrsSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Pim::Standby::DefaultContext::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::IfrsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::IfrsSummary::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::IfrsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Pim::Standby::DefaultContext::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Ranges::~Ranges()
{
}

bool Pim::Standby::DefaultContext::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Ranges::Range::Range()
    :
    client{YType::enumeration, "client"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"}
    	,
    rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr>())
	,source_of_information(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation>())
{
    rp_address_xr->parent = this;
    children["rp-address-xr"] = rp_address_xr;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "range"; yang_parent_name = "ranges";
}

Pim::Standby::DefaultContext::Ranges::Range::~Range()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::has_data() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return client.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(client_xr.operation)
	|| is_set(expires.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.operation)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-range")
    {
        for(auto const & c : group_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.push_back(std::move(c));
        children[segment_path] = group_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
        else
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr>();
            rp_address_xr->parent = this;
            children["rp-address-xr"] = rp_address_xr;
        }
        return children.at("rp-address-xr");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::get_children()
{
    for (auto const & c : group_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rp-address-xr") == children.end())
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
}

Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "range";
}

Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "range";
}

Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::GroupRange()
    :
    expires{YType::uint64, "expires"},
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix>())
	,source_of_information(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "group-range"; yang_parent_name = "range";
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::has_data() const
{
    return expires.is_set
	|| prefix_length.is_set
	|| uptime.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(operation)
	|| is_set(expires.operation)
	|| is_set(prefix_length.operation)
	|| is_set(uptime.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-range";
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/group-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-range";
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/group-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(std::move(c));
        children[segment_path] = interface_old_format.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceOldFormats::get_children()
{
    for (auto const & c : interface_old_format)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interface-old-formats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface-old-format";
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface-old-format";
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Bsr::Bsr()
    :
    bsr_elections(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections>())
	,candidate_rps(std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps>())
	,rp_caches(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches>())
{
    bsr_elections->parent = this;
    children["bsr-elections"] = bsr_elections;

    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps;

    rp_caches->parent = this;
    children["rp-caches"] = rp_caches;

    yang_name = "bsr"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Bsr::~Bsr()
{
}

bool Pim::Standby::DefaultContext::Bsr::has_data() const
{
    return (bsr_elections !=  nullptr && bsr_elections->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (rp_caches !=  nullptr && rp_caches->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::has_operation() const
{
    return is_set(operation)
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (rp_caches !=  nullptr && rp_caches->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections != nullptr)
        {
            children["bsr-elections"] = bsr_elections;
        }
        else
        {
            bsr_elections = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections>();
            bsr_elections->parent = this;
            children["bsr-elections"] = bsr_elections;
        }
        return children.at("bsr-elections");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps;
        }
        else
        {
            candidate_rps = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps;
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "rp-caches")
    {
        if(rp_caches != nullptr)
        {
            children["rp-caches"] = rp_caches;
        }
        else
        {
            rp_caches = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches>();
            rp_caches->parent = this;
            children["rp-caches"] = rp_caches;
        }
        return children.at("rp-caches");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::get_children()
{
    if(children.find("bsr-elections") == children.end())
    {
        if(bsr_elections != nullptr)
        {
            children["bsr-elections"] = bsr_elections;
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps;
        }
    }

    if(children.find("rp-caches") == children.end())
    {
        if(rp_caches != nullptr)
        {
            children["rp-caches"] = rp_caches;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCaches()
{
    yang_name = "rp-caches"; yang_parent_name = "bsr";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::has_data() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-cache")
    {
        for(auto const & c : rp_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.push_back(std::move(c));
        children[segment_path] = rp_cache.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::get_children()
{
    for (auto const & c : rp_cache)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"},
    group_prefix_length{YType::uint32, "group-prefix-length"}
    	,
    candidate_rp_list(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>())
	,group_prefix_xr(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>())
{
    candidate_rp_list->parent = this;
    children["candidate-rp-list"] = candidate_rp_list;

    group_prefix_xr->parent = this;
    children["group-prefix-xr"] = group_prefix_xr;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::has_data() const
{
    return group_prefix.is_set
	|| candidate_rp_group_count.is_set
	|| group_prefix_length.is_set
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_prefix.operation)
	|| is_set(candidate_rp_group_count.operation)
	|| is_set(group_prefix_length.operation)
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache" <<"[group-prefix='" <<group_prefix <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/rp-caches/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.operation)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.operation)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.operation)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list != nullptr)
        {
            children["candidate-rp-list"] = candidate_rp_list;
        }
        else
        {
            candidate_rp_list = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>();
            candidate_rp_list->parent = this;
            children["candidate-rp-list"] = candidate_rp_list;
        }
        return children.at("candidate-rp-list");
    }

    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr != nullptr)
        {
            children["group-prefix-xr"] = group_prefix_xr;
        }
        else
        {
            group_prefix_xr = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>();
            group_prefix_xr->parent = this;
            children["group-prefix-xr"] = group_prefix_xr;
        }
        return children.at("group-prefix-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_children()
{
    if(children.find("candidate-rp-list") == children.end())
    {
        if(candidate_rp_list != nullptr)
        {
            children["candidate-rp-list"] = candidate_rp_list;
        }
    }

    if(children.find("group-prefix-xr") == children.end())
    {
        if(group_prefix_xr != nullptr)
        {
            children["group-prefix-xr"] = group_prefix_xr;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
    }
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupPrefixXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
{
    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpList' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pim-bsr-crp-bag")
    {
        for(auto const & c : pim_bsr_crp_bag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.push_back(std::move(c));
        children[segment_path] = pim_bsr_crp_bag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_children()
{
    for (auto const & c : pim_bsr_crp_bag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    protocol{YType::enumeration, "protocol"}
    	,
    candidate_rp_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;
    children["candidate-rp-address"] = candidate_rp_address;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    return candidate_rp_expires.is_set
	|| candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate_rp_expires.operation)
	|| is_set(candidate_rp_holdtime.operation)
	|| is_set(candidate_rp_priority.operation)
	|| is_set(candidate_rp_up_time.operation)
	|| is_set(protocol.operation)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PimBsrCrpBag' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.operation)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.operation)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.operation)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.operation)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address != nullptr)
        {
            children["candidate-rp-address"] = candidate_rp_address;
        }
        else
        {
            candidate_rp_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
            candidate_rp_address->parent = this;
            children["candidate-rp-address"] = candidate_rp_address;
        }
        return children.at("candidate-rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children()
{
    if(children.find("candidate-rp-address") == children.end())
    {
        if(candidate_rp_address != nullptr)
        {
            children["candidate-rp-address"] = candidate_rp_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
    }
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag";
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    acl_name{YType::str, "acl-name"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    crp_priority{YType::uint8, "crp-priority"}
    	,
    candidate_rp(std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
{
    candidate_rp->parent = this;
    children["candidate-rp"] = candidate_rp;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::has_data() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| acl_name.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| candidate_rp_uptime.is_set
	|| crp_holdtime.is_set
	|| crp_priority.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_advance_interval.operation)
	|| is_set(candidate_rp_mode.operation)
	|| is_set(candidate_rp_scope.operation)
	|| is_set(candidate_rp_uptime.operation)
	|| is_set(crp_holdtime.operation)
	|| is_set(crp_priority.operation)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.operation)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.operation)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.operation)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.operation)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.operation)) leaf_name_data.push_back(crp_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
        else
        {
            candidate_rp = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
            candidate_rp->parent = this;
            children["candidate-rp"] = candidate_rp;
        }
        return children.at("candidate-rp");
    }

    if(child_yang_name == "crp-access")
    {
        for(auto const & c : crp_access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.push_back(std::move(c));
        children[segment_path] = crp_access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("candidate-rp") == children.end())
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
    }

    for (auto const & c : crp_access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
    }
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp";
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    acl_name{YType::str, "acl-name"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"}
{
    yang_name = "crp-access"; yang_parent_name = "candidate-rp";
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    return acl_name.is_set
	|| candidate_rp_mode.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_mode.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrpAccess' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElections()
{
    yang_name = "bsr-elections"; yang_parent_name = "bsr";
}

Pim::Standby::DefaultContext::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::has_data() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::BsrElections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-election")
    {
        for(auto const & c : bsr_election)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.push_back(std::move(c));
        children[segment_path] = bsr_election.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::BsrElections::get_children()
{
    for (auto const & c : bsr_election)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::int32, "pim-scope"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_scope{YType::uint16, "bsr-scope"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"}
    	,
    bsr_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>())
	,candidate_bsr_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;
    children["bsr-address"] = bsr_address;

    candidate_bsr_address->parent = this;
    children["candidate-bsr-address"] = candidate_bsr_address;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections";
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::has_data() const
{
    return pim_scope.is_set
	|| bootstrap_timeout.is_set
	|| bsr_election_state.is_set
	|| bsr_mask_length.is_set
	|| bsr_priority.is_set
	|| bsr_scope.is_set
	|| bsr_up_time.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_mask_length.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_state.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(operation)
	|| is_set(pim_scope.operation)
	|| is_set(bootstrap_timeout.operation)
	|| is_set(bsr_election_state.operation)
	|| is_set(bsr_mask_length.operation)
	|| is_set(bsr_priority.operation)
	|| is_set(bsr_scope.operation)
	|| is_set(bsr_up_time.operation)
	|| is_set(candidate_bsr_flag.operation)
	|| is_set(candidate_bsr_mask_length.operation)
	|| is_set(candidate_bsr_priority.operation)
	|| is_set(candidate_bsr_state.operation)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election" <<"[pim-scope='" <<pim_scope <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/bsr-elections/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.operation)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.operation)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.operation)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.operation)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.operation)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.operation)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.operation)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.operation)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.operation)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.operation)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.operation)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-address")
    {
        if(bsr_address != nullptr)
        {
            children["bsr-address"] = bsr_address;
        }
        else
        {
            bsr_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>();
            bsr_address->parent = this;
            children["bsr-address"] = bsr_address;
        }
        return children.at("bsr-address");
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address != nullptr)
        {
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
        else
        {
            candidate_bsr_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
            candidate_bsr_address->parent = this;
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
        return children.at("candidate-bsr-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_children()
{
    if(children.find("bsr-address") == children.end())
    {
        if(bsr_address != nullptr)
        {
            children["bsr-address"] = bsr_address;
        }
    }

    if(children.find("candidate-bsr-address") == children.end())
    {
        if(candidate_bsr_address != nullptr)
        {
            children["candidate-bsr-address"] = candidate_bsr_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
    }
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics>())
	,route_policy_tests(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;
    children["route-policy-statistics"] = route_policy_statistics;

    route_policy_tests->parent = this;
    children["route-policy-tests"] = route_policy_tests;

    yang_name = "route-policy"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::has_data() const
{
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Standby::DefaultContext::RoutePolicy::has_operation() const
{
    return is_set(operation)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Standby::DefaultContext::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics != nullptr)
        {
            children["route-policy-statistics"] = route_policy_statistics;
        }
        else
        {
            route_policy_statistics = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics>();
            route_policy_statistics->parent = this;
            children["route-policy-statistics"] = route_policy_statistics;
        }
        return children.at("route-policy-statistics");
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests != nullptr)
        {
            children["route-policy-tests"] = route_policy_tests;
        }
        else
        {
            route_policy_tests = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests>();
            route_policy_tests->parent = this;
            children["route-policy-tests"] = route_policy_tests;
        }
        return children.at("route-policy-tests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::get_children()
{
    if(children.find("route-policy-statistics") == children.end())
    {
        if(route_policy_statistics != nullptr)
        {
            children["route-policy-statistics"] = route_policy_statistics;
        }
    }

    if(children.find("route-policy-tests") == children.end())
    {
        if(route_policy_tests != nullptr)
        {
            children["route-policy-tests"] = route_policy_tests;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    any_table{YType::uint32, "any-table"},
    default_table{YType::uint32, "default-table"},
    drop{YType::uint32, "drop"},
    pass{YType::uint32, "pass"},
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"}
{
    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy";
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    return any_table.is_set
	|| default_table.is_set
	|| drop.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| requests.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(any_table.operation)
	|| is_set(default_table.operation)
	|| is_set(drop.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(requests.operation);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_table.is_set || is_set(any_table.operation)) leaf_name_data.push_back(any_table.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-table")
    {
        any_table = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
{
    yang_name = "route-policy-tests"; yang_parent_name = "route-policy";
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::has_data() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-policy-test")
    {
        for(auto const & c : route_policy_test)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.push_back(std::move(c));
        children[segment_path] = route_policy_test.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_children()
{
    for (auto const & c : route_policy_test)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    afi{YType::uint32, "afi"},
    default_table{YType::boolean, "default-table"},
    ext_comm{YType::str, "ext-comm"},
    extended_community_rt{YType::str, "extended-community-rt"},
    group_address{YType::str, "group-address"},
    pass{YType::boolean, "pass"},
    policy_name{YType::str, "policy-name"},
    safi{YType::uint32, "safi"},
    source_address{YType::str, "source-address"},
    table_active{YType::boolean, "table-active"},
    table_exists{YType::boolean, "table-exists"},
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests";
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    return afi.is_set
	|| default_table.is_set
	|| ext_comm.is_set
	|| extended_community_rt.is_set
	|| group_address.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| safi.is_set
	|| source_address.is_set
	|| table_active.is_set
	|| table_exists.is_set
	|| table_name.is_set
	|| vrf_name.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(default_table.operation)
	|| is_set(ext_comm.operation)
	|| is_set(extended_community_rt.operation)
	|| is_set(group_address.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(safi.operation)
	|| is_set(source_address.operation)
	|| is_set(table_active.operation)
	|| is_set(table_exists.operation)
	|| is_set(table_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.operation)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.operation)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.operation)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.operation)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "table-active")
    {
        table_active = value;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    rump_enabled{YType::boolean, "rump-enabled"}
{
    yang_name = "rpf-summary"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::RpfSummary::~RpfSummary()
{
}

bool Pim::Standby::DefaultContext::RpfSummary::has_data() const
{
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_isis_mtr_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_mbgp_configured.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| is_ospf_te_configured.is_set
	|| is_rib_convergence.is_set
	|| mo_frr_configured.is_set
	|| rib_convergence_time_left.is_set
	|| rib_convergence_timeout.is_set
	|| rib_mo_frr_configured.is_set
	|| rpf_registrations.is_set
	|| rump_enabled.is_set;
}

bool Pim::Standby::DefaultContext::RpfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(default_safi.operation)
	|| is_set(default_table_name.operation)
	|| is_set(is_isis_mtr_configured.operation)
	|| is_set(is_isis_te_configured.operation)
	|| is_set(is_mbgp_configured.operation)
	|| is_set(is_multipath_enabled.operation)
	|| is_set(is_multipath_interface_hash_enabled.operation)
	|| is_set(is_multipath_source_hash_enabled.operation)
	|| is_set(is_multipath_source_next_hop_hash_enabled.operation)
	|| is_set(is_ospf_te_configured.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(mo_frr_configured.operation)
	|| is_set(rib_convergence_time_left.operation)
	|| is_set(rib_convergence_timeout.operation)
	|| is_set(rib_mo_frr_configured.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(rump_enabled.operation);
}

std::string Pim::Standby::DefaultContext::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::RpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.operation)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.operation)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.operation)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.operation)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.operation)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.operation)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.operation)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.operation)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.operation)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.operation)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.operation)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.operation)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::RpfSummary::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::RpfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
    }
}

Pim::Standby::DefaultContext::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Interfaces::~Interfaces()
{
}

bool Pim::Standby::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress>())
{
    dr_address->parent = this;
    children["dr-address"] = dr_address;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Standby::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dr-address")
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
        else
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress>();
            dr_address->parent = this;
            children["dr-address"] = dr_address;
        }
        return children.at("dr-address");
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(std::move(c));
        children[segment_path] = interface_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Interfaces::Interface::get_children()
{
    if(children.find("dr-address") == children.end())
    {
        if(dr_address != nullptr)
        {
            children["dr-address"] = dr_address;
        }
    }

    for (auto const & c : interface_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface";
}

Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface";
}

Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnels()
{
    yang_name = "net-io-tunnels"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::has_data() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "net-io-tunnel")
    {
        for(auto const & c : net_io_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.push_back(std::move(c));
        children[segment_path] = net_io_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::get_children()
{
    for (auto const & c : net_io_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    children["group-address-netio"] = group_address_netio;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    source_address->parent = this;
    children["source-address"] = source_address;

    source_address_netio->parent = this;
    children["source-address-netio"] = source_address_netio;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels";
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/net-io-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
        else
        {
            group_address_netio = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
            group_address_netio->parent = this;
            children["group-address-netio"] = group_address_netio;
        }
        return children.at("group-address-netio");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
        else
        {
            source_address_netio = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
            source_address_netio->parent = this;
            children["source-address-netio"] = source_address_netio;
        }
        return children.at("source-address-netio");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_children()
{
    if(children.find("group-address-netio") == children.end())
    {
        if(group_address_netio != nullptr)
        {
            children["group-address-netio"] = group_address_netio;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("source-address-netio") == children.end())
    {
        if(source_address_netio != nullptr)
        {
            children["source-address-netio"] = source_address_netio;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::BidirDfStates::BidirDfStates()
{
    yang_name = "bidir-df-states"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::BidirDfStates::~BidirDfStates()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_data() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-states";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BidirDfStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-df-state")
    {
        for(auto const & c : bidir_df_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState>();
        c->parent = this;
        bidir_df_state.push_back(std::move(c));
        children[segment_path] = bidir_df_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BidirDfStates::get_children()
{
    for (auto const & c : bidir_df_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::BidirDfState()
    :
    election_state{YType::str, "election-state"},
    interface_name{YType::str, "interface-name"},
    our_metric{YType::uint32, "our-metric"},
    our_metric_preference{YType::uint32, "our-metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    time_nano_seconds{YType::uint64, "time-nano-seconds"},
    time_seconds{YType::uint64, "time-seconds"}
    	,
    rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>())
{
    rp_address_xr->parent = this;
    children["rp-address-xr"] = rp_address_xr;

    yang_name = "bidir-df-state"; yang_parent_name = "bidir-df-states";
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::~BidirDfState()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_data() const
{
    return election_state.is_set
	|| interface_name.is_set
	|| our_metric.is_set
	|| our_metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| time_nano_seconds.is_set
	|| time_seconds.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_operation() const
{
    return is_set(operation)
	|| is_set(election_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(our_metric.operation)
	|| is_set(our_metric_preference.operation)
	|| is_set(pim_interface_name.operation)
	|| is_set(rp_address.operation)
	|| is_set(time_nano_seconds.operation)
	|| is_set(time_seconds.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-state";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (election_state.is_set || is_set(election_state.operation)) leaf_name_data.push_back(election_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (our_metric.is_set || is_set(our_metric.operation)) leaf_name_data.push_back(our_metric.get_name_leafdata());
    if (our_metric_preference.is_set || is_set(our_metric_preference.operation)) leaf_name_data.push_back(our_metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.operation)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (time_nano_seconds.is_set || is_set(time_nano_seconds.operation)) leaf_name_data.push_back(time_nano_seconds.get_name_leafdata());
    if (time_seconds.is_set || is_set(time_seconds.operation)) leaf_name_data.push_back(time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
        else
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>();
            rp_address_xr->parent = this;
            children["rp-address-xr"] = rp_address_xr;
        }
        return children.at("rp-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_children()
{
    if(children.find("rp-address-xr") == children.end())
    {
        if(rp_address_xr != nullptr)
        {
            children["rp-address-xr"] = rp_address_xr;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "election-state")
    {
        election_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "our-metric")
    {
        our_metric = value;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference = value;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds = value;
    }
    if(value_path == "time-seconds")
    {
        time_seconds = value;
    }
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-state";
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/bidir-df-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Topologies::~Topologies()
{
}

bool Pim::Standby::DefaultContext::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::Topologies::Topology::Topology()
    :
    alive{YType::int32, "alive"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    assume_alive{YType::boolean, "assume-alive"},
    bgp_join{YType::boolean, "bgp-join"},
    bgpjp_time{YType::uint64, "bgpjp-time"},
    connected{YType::boolean, "connected"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    expiry{YType::uint64, "expiry"},
    extranet_route{YType::boolean, "extranet-route"},
    group_address{YType::str, "group-address"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    jp_status{YType::int32, "jp-status"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    probe_alive{YType::boolean, "probe-alive"},
    protocol{YType::enumeration, "protocol"},
    proxy{YType::boolean, "proxy"},
    really_alive{YType::boolean, "really-alive"},
    register_received{YType::boolean, "register-received"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpt{YType::int32, "rpt"},
    rpt_xr{YType::boolean, "rpt-xr"},
    sa_joined{YType::boolean, "sa-joined"},
    sa_received{YType::boolean, "sa-received"},
    sa_sent{YType::boolean, "sa-sent"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sending_registers{YType::boolean, "sending-registers"},
    signal_sources{YType::boolean, "signal-sources"},
    source_address{YType::str, "source-address"},
    spt{YType::boolean, "spt"},
    suppress_registers{YType::int32, "suppress-registers"},
    uptime{YType::uint64, "uptime"},
    vxlan{YType::boolean, "vxlan"},
    wildcard{YType::boolean, "wildcard"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr>())
	,orig_src_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress>())
	,proxy_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpAddress>())
	,rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot>())
	,secondary_rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>())
	,source_address_xr(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr>())
{
    group_address_xr->parent = this;
    children["group-address-xr"] = group_address_xr;

    orig_src_address->parent = this;
    children["orig-src-address"] = orig_src_address;

    proxy_address->parent = this;
    children["proxy-address"] = proxy_address;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    rpf_neighbor->parent = this;
    children["rpf-neighbor"] = rpf_neighbor;

    rpf_root->parent = this;
    children["rpf-root"] = rpf_root;

    secondary_rpf_neighbor->parent = this;
    children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;

    source_address_xr->parent = this;
    children["source-address-xr"] = source_address_xr;

    yang_name = "topology"; yang_parent_name = "topologies";
}

Pim::Standby::DefaultContext::Topologies::Topology::~Topology()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return alive.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| assume_alive.is_set
	|| bgp_join.is_set
	|| bgpjp_time.is_set
	|| connected.is_set
	|| customer_routing_type.is_set
	|| dont_check_connected.is_set
	|| expiry.is_set
	|| extranet_route.is_set
	|| group_address.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| is_via_lsm.is_set
	|| jp_status.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| mofrr_active.is_set
	|| mofrr_backup.is_set
	|| mofrr_enabled.is_set
	|| mofrr_primary.is_set
	|| probe_alive.is_set
	|| protocol.is_set
	|| proxy.is_set
	|| really_alive.is_set
	|| register_received.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| rib_mo_frr_enabled.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_proxy_enabled.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| rpt.is_set
	|| rpt_xr.is_set
	|| sa_joined.is_set
	|| sa_received.is_set
	|| sa_sent.is_set
	|| secondary_rpf_interface_name.is_set
	|| sending_null_registers.is_set
	|| sending_registers.is_set
	|| signal_sources.is_set
	|| source_address.is_set
	|| spt.is_set
	|| suppress_registers.is_set
	|| uptime.is_set
	|| vxlan.is_set
	|| wildcard.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alive.operation)
	|| is_set(anycast_rp_match.operation)
	|| is_set(anycast_rp_route_target.operation)
	|| is_set(assume_alive.operation)
	|| is_set(bgp_join.operation)
	|| is_set(bgpjp_time.operation)
	|| is_set(connected.operation)
	|| is_set(customer_routing_type.operation)
	|| is_set(dont_check_connected.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_route.operation)
	|| is_set(group_address.operation)
	|| is_set(inherit_alive.operation)
	|| is_set(inherit_spt.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(jp_status.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(limit_reached.operation)
	|| is_set(low_memory.operation)
	|| is_set(mofrr_active.operation)
	|| is_set(mofrr_backup.operation)
	|| is_set(mofrr_enabled.operation)
	|| is_set(mofrr_primary.operation)
	|| is_set(probe_alive.operation)
	|| is_set(protocol.operation)
	|| is_set(proxy.operation)
	|| is_set(really_alive.operation)
	|| is_set(register_received.operation)
	|| is_set(register_received_timer.operation)
	|| is_set(remote_source.operation)
	|| is_set(rib_mo_frr_enabled.operation)
	|| is_set(rpf_drop.operation)
	|| is_set(rpf_extranet.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_proxy_enabled.operation)
	|| is_set(rpf_safi.operation)
	|| is_set(rpf_table_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| is_set(rpt.operation)
	|| is_set(rpt_xr.operation)
	|| is_set(sa_joined.operation)
	|| is_set(sa_received.operation)
	|| is_set(sa_sent.operation)
	|| is_set(secondary_rpf_interface_name.operation)
	|| is_set(sending_null_registers.operation)
	|| is_set(sending_registers.operation)
	|| is_set(signal_sources.operation)
	|| is_set(source_address.operation)
	|| is_set(spt.operation)
	|| is_set(suppress_registers.operation)
	|| is_set(uptime.operation)
	|| is_set(vxlan.operation)
	|| is_set(wildcard.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alive.is_set || is_set(alive.operation)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.operation)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.operation)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.operation)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.operation)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgpjp_time.is_set || is_set(bgpjp_time.operation)) leaf_name_data.push_back(bgpjp_time.get_name_leafdata());
    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.operation)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.operation)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.operation)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.operation)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.operation)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.operation)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.operation)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.operation)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.operation)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.operation)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.operation)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.operation)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.operation)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.operation)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.operation)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.operation)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.operation)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.operation)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.operation)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.operation)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.operation)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.operation)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.operation)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.operation)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.operation)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.operation)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.operation)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.operation)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.operation)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.operation)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.operation)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.operation)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (spt.is_set || is_set(spt.operation)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.operation)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.operation)) leaf_name_data.push_back(wildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
        else
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr>();
            group_address_xr->parent = this;
            children["group-address-xr"] = group_address_xr;
        }
        return children.at("group-address-xr");
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address != nullptr)
        {
            children["orig-src-address"] = orig_src_address;
        }
        else
        {
            orig_src_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress>();
            orig_src_address->parent = this;
            children["orig-src-address"] = orig_src_address;
        }
        return children.at("orig-src-address");
    }

    if(child_yang_name == "outgoing-interface")
    {
        for(auto const & c : outgoing_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.push_back(std::move(c));
        children[segment_path] = outgoing_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address != nullptr)
        {
            children["proxy-address"] = proxy_address;
        }
        else
        {
            proxy_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress>();
            proxy_address->parent = this;
            children["proxy-address"] = proxy_address;
        }
        return children.at("proxy-address");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
        else
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor>();
            rpf_neighbor->parent = this;
            children["rpf-neighbor"] = rpf_neighbor;
        }
        return children.at("rpf-neighbor");
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
        else
        {
            rpf_root = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot>();
            rpf_root->parent = this;
            children["rpf-root"] = rpf_root;
        }
        return children.at("rpf-root");
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor != nullptr)
        {
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
        else
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>();
            secondary_rpf_neighbor->parent = this;
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
        return children.at("secondary-rpf-neighbor");
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
        else
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr>();
            source_address_xr->parent = this;
            children["source-address-xr"] = source_address_xr;
        }
        return children.at("source-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::get_children()
{
    if(children.find("group-address-xr") == children.end())
    {
        if(group_address_xr != nullptr)
        {
            children["group-address-xr"] = group_address_xr;
        }
    }

    if(children.find("orig-src-address") == children.end())
    {
        if(orig_src_address != nullptr)
        {
            children["orig-src-address"] = orig_src_address;
        }
    }

    for (auto const & c : outgoing_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("proxy-address") == children.end())
    {
        if(proxy_address != nullptr)
        {
            children["proxy-address"] = proxy_address;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    if(children.find("rpf-neighbor") == children.end())
    {
        if(rpf_neighbor != nullptr)
        {
            children["rpf-neighbor"] = rpf_neighbor;
        }
    }

    if(children.find("rpf-root") == children.end())
    {
        if(rpf_root != nullptr)
        {
            children["rpf-root"] = rpf_root;
        }
    }

    if(children.find("secondary-rpf-neighbor") == children.end())
    {
        if(secondary_rpf_neighbor != nullptr)
        {
            children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
        }
    }

    if(children.find("source-address-xr") == children.end())
    {
        if(source_address_xr != nullptr)
        {
            children["source-address-xr"] = source_address_xr;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alive")
    {
        alive = value;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
    }
    if(value_path == "bgpjp-time")
    {
        bgpjp_time = value;
    }
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
    }
    if(value_path == "register-received")
    {
        register_received = value;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
    if(value_path == "rpt")
    {
        rpt = value;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "spt")
    {
        spt = value;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
    }
}

Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "proxy-address"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "orig-src-address"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    admin_boundary{YType::boolean, "admin-boundary"},
    assert_timer{YType::int32, "assert-timer"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    expiry{YType::uint64, "expiry"},
    extranet_interface{YType::boolean, "extranet-interface"},
    forwarding_state{YType::int32, "forwarding-state"},
    igmp_membership{YType::boolean, "igmp-membership"},
    immediate_state{YType::int32, "immediate-state"},
    interface_name{YType::str, "interface-name"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    jp_state{YType::int32, "jp-state"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    local_members{YType::int32, "local-members"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    mvp_nv6_safi_join{YType::boolean, "mvp-nv6-safi-join"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    sa_prune{YType::boolean, "sa-prune"},
    uptime{YType::uint64, "uptime"},
    vrf_name{YType::str, "vrf-name"}
    	,
    assert_winner(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;
    children["assert-winner"] = assert_winner;

    yang_name = "outgoing-interface"; yang_parent_name = "topology";
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::has_data() const
{
    return admin_boundary.is_set
	|| assert_timer.is_set
	|| bgp_c_mcast_join.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| data_mdt_join.is_set
	|| expiry.is_set
	|| extranet_interface.is_set
	|| forwarding_state.is_set
	|| igmp_membership.is_set
	|| immediate_state.is_set
	|| interface_name.is_set
	|| internal_interest_info.is_set
	|| jp_state.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| local_mdt_join.is_set
	|| local_members.is_set
	|| mdt_safi_join.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| mvp_nv6_safi_join.is_set
	|| mvpn_safi_join.is_set
	|| sa_prune.is_set
	|| uptime.is_set
	|| vrf_name.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_boundary.operation)
	|| is_set(assert_timer.operation)
	|| is_set(bgp_c_mcast_join.operation)
	|| is_set(bgp_c_mcast_prune_delay_timer.operation)
	|| is_set(data_mdt_join.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_interface.operation)
	|| is_set(forwarding_state.operation)
	|| is_set(igmp_membership.operation)
	|| is_set(immediate_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(internal_interest_info.operation)
	|| is_set(jp_state.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(local_mdt_join.operation)
	|| is_set(local_members.operation)
	|| is_set(mdt_safi_join.operation)
	|| is_set(mldp_inband_mdt.operation)
	|| is_set(mldp_stale.operation)
	|| is_set(mvp_nv6_safi_join.operation)
	|| is_set(mvpn_safi_join.operation)
	|| is_set(sa_prune.operation)
	|| is_set(uptime.operation)
	|| is_set(vrf_name.operation)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_boundary.is_set || is_set(admin_boundary.operation)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.operation)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.operation)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.operation)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.operation)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.operation)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.operation)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.operation)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.operation)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.operation)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.operation)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.operation)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.operation)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.operation)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.operation)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.operation)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (mvp_nv6_safi_join.is_set || is_set(mvp_nv6_safi_join.operation)) leaf_name_data.push_back(mvp_nv6_safi_join.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.operation)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.operation)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assert-winner")
    {
        if(assert_winner != nullptr)
        {
            children["assert-winner"] = assert_winner;
        }
        else
        {
            assert_winner = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>();
            assert_winner->parent = this;
            children["assert-winner"] = assert_winner;
        }
        return children.at("assert-winner");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_children()
{
    if(children.find("assert-winner") == children.end())
    {
        if(assert_winner != nullptr)
        {
            children["assert-winner"] = assert_winner;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
    }
    if(value_path == "local-members")
    {
        local_members = value;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
    }
    if(value_path == "mvp-nv6-safi-join")
    {
        mvp_nv6_safi_join = value;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface";
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/outgoing-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::BgpAfs::BgpAfs()
{
    yang_name = "bgp-afs"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::BgpAfs::~BgpAfs()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::has_data() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BgpAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::BgpAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-afs";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BgpAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-af")
    {
        for(auto const & c : bgp_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf>();
        c->parent = this;
        bgp_af.push_back(std::move(c));
        children[segment_path] = bgp_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BgpAfs::get_children()
{
    for (auto const & c : bgp_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::BgpAf()
    :
    extranet_path_count{YType::uint32, "extranet-path-count"},
    group_address{YType::str, "group-address"},
    is_bgp_added{YType::boolean, "is-bgp-added"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_address{YType::str, "source-address"}
    	,
    group(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>())
	,next_hop(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>())
	,source(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>())
{
    group->parent = this;
    children["group"] = group;

    next_hop->parent = this;
    children["next-hop"] = next_hop;

    source->parent = this;
    children["source"] = source;

    yang_name = "bgp-af"; yang_parent_name = "bgp-afs";
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::~BgpAf()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_data() const
{
    return extranet_path_count.is_set
	|| group_address.is_set
	|| is_bgp_added.is_set
	|| route_distinguisher.is_set
	|| source_address.is_set
	|| (group !=  nullptr && group->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_operation() const
{
    return is_set(operation)
	|| is_set(extranet_path_count.operation)
	|| is_set(group_address.operation)
	|| is_set(is_bgp_added.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(source_address.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-af";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_path_count.is_set || is_set(extranet_path_count.operation)) leaf_name_data.push_back(extranet_path_count.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (is_bgp_added.is_set || is_set(is_bgp_added.operation)) leaf_name_data.push_back(is_bgp_added.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        if(group != nullptr)
        {
            children["group"] = group;
        }
        else
        {
            group = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>();
            group->parent = this;
            children["group"] = group;
        }
        return children.at("group");
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "source")
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
        else
        {
            source = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>();
            source->parent = this;
            children["source"] = source;
        }
        return children.at("source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_children()
{
    if(children.find("group") == children.end())
    {
        if(group != nullptr)
        {
            children["group"] = group;
        }
    }

    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("source") == children.end())
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extranet-path-count")
    {
        extranet_path_count = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source"; yang_parent_name = "bgp-af";
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::~Source()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::Group()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group"; yang_parent_name = "bgp-af";
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::~Group()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop"; yang_parent_name = "bgp-af";
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::AutoRp::AutoRp()
{
    yang_name = "auto-rp"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::AutoRp::~AutoRp()
{
}

bool Pim::Standby::DefaultContext::AutoRp::has_data() const
{
    return false;
}

bool Pim::Standby::DefaultContext::AutoRp::has_operation() const
{
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::AutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::AutoRp::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::AutoRp::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
{
    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-interface-flag-route-count")
    {
        for(auto const & c : topology_interface_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.push_back(std::move(c));
        children[segment_path] = topology_interface_flag_route_count.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_children()
{
    for (auto const & c : topology_interface_flag_route_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;
    children["group-address"] = group_address;

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts";
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    return interface_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_flag.operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count" <<"[interface-flag='" <<interface_flag <<"']";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topology-interface-flag-route-counts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.operation)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-address")
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
        else
        {
            group_address = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>();
            group_address->parent = this;
            children["group-address"] = group_address;
        }
        return children.at("group-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children()
{
    if(children.find("group-address") == children.end())
    {
        if(group_address != nullptr)
        {
            children["group-address"] = group_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-interface-flag-route-count";
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSources()
{
    yang_name = "group-map-sources"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::has_data() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-source")
    {
        for(auto const & c : group_map_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.push_back(std::move(c));
        children[segment_path] = group_map_source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::get_children()
{
    for (auto const & c : group_map_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    client{YType::enumeration, "client"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::int32, "priority"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>())
{
    group_map_information->parent = this;
    children["group-map-information"] = group_map_information;

    source_of_information->parent = this;
    children["source-of-information"] = source_of_information;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources";
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::has_data() const
{
    return client.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(expires.operation)
	|| is_set(holdtime.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| is_set(uptime.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
        else
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>();
            group_map_information->parent = this;
            children["group-map-information"] = group_map_information;
        }
        return children.at("group-map-information");
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
        else
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>();
            source_of_information->parent = this;
            children["source-of-information"] = source_of_information;
        }
        return children.at("source-of-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_children()
{
    if(children.find("group-map-information") == children.end())
    {
        if(group_map_information != nullptr)
        {
            children["group-map-information"] = group_map_information;
        }
    }

    if(children.find("source-of-information") == children.end())
    {
        if(source_of_information != nullptr)
        {
            children["source-of-information"] = source_of_information;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-source";
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    rp_address->parent = this;
    children["rp-address"] = rp_address;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source";
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
        else
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
            rp_address->parent = this;
            children["rp-address"] = rp_address;
        }
        return children.at("rp-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    if(children.find("rp-address") == children.end())
    {
        if(rp_address != nullptr)
        {
            children["rp-address"] = rp_address;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pim::Standby::DefaultContext::TrafficCounters::TrafficCounters()
    :
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    checksum_error{YType::uint32, "checksum-error"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_error{YType::uint32, "format-error"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_data_register{YType::uint32, "input-data-register"},
    input_df_election{YType::uint32, "input-df-election"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_null_register{YType::uint32, "input-null-register"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    input_register_stop{YType::uint32, "input-register-stop"},
    inputs{YType::uint32, "inputs"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    invalid_registers{YType::uint32, "invalid-registers"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_data_register{YType::uint32, "output-data-register"},
    output_df_election{YType::uint32, "output-df-election"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_hello{YType::uint32, "output-hello"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    output_join_group{YType::uint32, "output-join-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_jp{YType::uint32, "output-jp"},
    output_loop_error{YType::uint32, "output-loop-error"},
    output_null_register{YType::uint32, "output-null-register"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_register_stop{YType::uint32, "output-register-stop"},
    outputs{YType::uint32, "outputs"},
    packet_dequeued{YType::uint32, "packet-dequeued"},
    packet_enqueued{YType::uint32, "packet-enqueued"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packet_queue_length{YType::uint32, "packet-queue-length"},
    packet_queue_size{YType::uint32, "packet-queue-size"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packet_tail_drop{YType::uint32, "packet-tail-drop"},
    packets_standby{YType::uint32, "packets-standby"},
    pakman_error{YType::uint32, "pakman-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    socket_error{YType::uint32, "socket-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
{
    yang_name = "traffic-counters"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::has_data() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| checksum_error.is_set
	|| elapsed_time.is_set
	|| format_error.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_data_register.is_set
	|| input_df_election.is_set
	|| input_ecmp_redirect.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_no_idb_error.is_set
	|| input_no_pim_error.is_set
	|| input_no_vrf_error.is_set
	|| input_null_register.is_set
	|| input_pim_version_error.is_set
	|| input_register_stop.is_set
	|| inputs.is_set
	|| invalid_destination_packets.is_set
	|| invalid_join_prunes.is_set
	|| invalid_registers.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| no_mdt_socket_connection.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| non_supported_packets.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_data_register.is_set
	|| output_df_election.is_set
	|| output_ecmp_redirect.is_set
	|| output_hello.is_set
	|| output_hello_bytes.is_set
	|| output_join_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_jp.is_set
	|| output_loop_error.is_set
	|| output_null_register.is_set
	|| output_prune_group.is_set
	|| output_register_stop.is_set
	|| outputs.is_set
	|| packet_packman_error.is_set
	|| packet_queue_last_clear.is_set
	|| packet_read_socket_error.is_set
	|| packets_standby.is_set
	|| pakman_error.is_set
	|| send_queue_full.is_set
	|| socket_error.is_set
	|| standby_packets_error.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(boundary_acl_rx_drop.operation)
	|| is_set(boundary_acl_tx_drop.operation)
	|| is_set(checksum_error.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_error.operation)
	|| is_set(input_assert.operation)
	|| is_set(input_assert_batched.operation)
	|| is_set(input_bsr_message.operation)
	|| is_set(input_candidate_rp_advertisement.operation)
	|| is_set(input_data_register.operation)
	|| is_set(input_df_election.operation)
	|| is_set(input_ecmp_redirect.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_jp.operation)
	|| is_set(input_no_idb_error.operation)
	|| is_set(input_no_pim_error.operation)
	|| is_set(input_no_vrf_error.operation)
	|| is_set(input_null_register.operation)
	|| is_set(input_pim_version_error.operation)
	|| is_set(input_register_stop.operation)
	|| is_set(inputs.operation)
	|| is_set(invalid_destination_packets.operation)
	|| is_set(invalid_join_prunes.operation)
	|| is_set(invalid_registers.operation)
	|| is_set(mdt_drop_local_source_address.operation)
	|| is_set(mdt_drop_no_idb.operation)
	|| is_set(mdt_drop_no_vrf.operation)
	|| is_set(mdt_drop_null_local_address.operation)
	|| is_set(mdt_join_bad_type.operation)
	|| is_set(mdt_join_tlv_received.operation)
	|| is_set(mdt_join_tlv_sent.operation)
	|| is_set(mdt_joins_drop_multiple_encapsulation.operation)
	|| is_set(mdt_send_queue_full.operation)
	|| is_set(mdt_socket_error.operation)
	|| is_set(mldp_mdt_invalid_lsm_identifier.operation)
	|| is_set(no_mdt_socket_connection.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(no_source_address.operation)
	|| is_set(non_supported_packets.operation)
	|| is_set(output_assert.operation)
	|| is_set(output_assert_batched.operation)
	|| is_set(output_bsr_message.operation)
	|| is_set(output_candidate_rp_advertisement.operation)
	|| is_set(output_data_register.operation)
	|| is_set(output_df_election.operation)
	|| is_set(output_ecmp_redirect.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_hello_bytes.operation)
	|| is_set(output_join_group.operation)
	|| is_set(output_join_prune_bytes.operation)
	|| is_set(output_jp.operation)
	|| is_set(output_loop_error.operation)
	|| is_set(output_null_register.operation)
	|| is_set(output_prune_group.operation)
	|| is_set(output_register_stop.operation)
	|| is_set(outputs.operation)
	|| is_set(packet_dequeued.operation)
	|| is_set(packet_enqueued.operation)
	|| is_set(packet_packman_error.operation)
	|| is_set(packet_queue_last_clear.operation)
	|| is_set(packet_queue_length.operation)
	|| is_set(packet_queue_size.operation)
	|| is_set(packet_read_socket_error.operation)
	|| is_set(packet_tail_drop.operation)
	|| is_set(packets_standby.operation)
	|| is_set(pakman_error.operation)
	|| is_set(send_queue_full.operation)
	|| is_set(socket_error.operation)
	|| is_set(standby_packets_error.operation)
	|| is_set(truncated_pim_packets.operation);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.operation)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.operation)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.operation)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.operation)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.operation)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.operation)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.operation)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.operation)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.operation)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.operation)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.operation)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.operation)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.operation)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.operation)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.operation)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.operation)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.operation)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.operation)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.operation)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.operation)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.operation)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.operation)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.operation)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.operation)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.operation)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.operation)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.operation)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.operation)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.operation)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.operation)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.operation)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.operation)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.operation)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.operation)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.operation)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.operation)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.operation)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.operation)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.operation)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_data_register.is_set || is_set(output_data_register.operation)) leaf_name_data.push_back(output_data_register.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.operation)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.operation)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.operation)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.operation)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.operation)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.operation)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.operation)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.operation)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.operation)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.operation)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.operation)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.operation)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.operation)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.operation)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.operation)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.operation)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.operation)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.operation)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.operation)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.operation)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    auto packet_dequeued_name_datas = packet_dequeued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_dequeued_name_datas.begin(), packet_dequeued_name_datas.end());
    auto packet_enqueued_name_datas = packet_enqueued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_enqueued_name_datas.begin(), packet_enqueued_name_datas.end());
    auto packet_queue_length_name_datas = packet_queue_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_length_name_datas.begin(), packet_queue_length_name_datas.end());
    auto packet_queue_size_name_datas = packet_queue_size.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_size_name_datas.begin(), packet_queue_size_name_datas.end());
    auto packet_tail_drop_name_datas = packet_tail_drop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_tail_drop_name_datas.begin(), packet_tail_drop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-queue")
    {
        for(auto const & c : packet_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.push_back(std::move(c));
        children[segment_path] = packet_queue.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TrafficCounters::get_children()
{
    for (auto const & c : packet_queue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-error")
    {
        format_error = value;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
    }
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
    }
    if(value_path == "output-data-register")
    {
        output_data_register = value;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
    }
    if(value_path == "outputs")
    {
        outputs = value;
    }
    if(value_path == "packet-dequeued")
    {
        packet_dequeued.append(value);
    }
    if(value_path == "packet-enqueued")
    {
        packet_enqueued.append(value);
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
    }
    if(value_path == "packet-queue-length")
    {
        packet_queue_length.append(value);
    }
    if(value_path == "packet-queue-size")
    {
        packet_queue_size.append(value);
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
    }
    if(value_path == "packet-tail-drop")
    {
        packet_tail_drop.append(value);
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
    }
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
    	,
    packet_queue_state(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>())
	,packet_queue_stats(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    children["packet-queue-state"] = packet_queue_state;

    packet_queue_stats->parent = this;
    children["packet-queue-stats"] = packet_queue_stats;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters";
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::has_data() const
{
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(packet_queue_priority.operation)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.operation)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state != nullptr)
        {
            children["packet-queue-state"] = packet_queue_state;
        }
        else
        {
            packet_queue_state = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>();
            packet_queue_state->parent = this;
            children["packet-queue-state"] = packet_queue_state;
        }
        return children.at("packet-queue-state");
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats != nullptr)
        {
            children["packet-queue-stats"] = packet_queue_stats;
        }
        else
        {
            packet_queue_stats = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>();
            packet_queue_stats->parent = this;
            children["packet-queue-stats"] = packet_queue_stats;
        }
        return children.at("packet-queue-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_children()
{
    if(children.find("packet-queue-state") == children.end())
    {
        if(packet_queue_state != nullptr)
        {
            children["packet-queue-state"] = packet_queue_state;
        }
    }

    if(children.find("packet-queue-stats") == children.end())
    {
        if(packet_queue_stats != nullptr)
        {
            children["packet-queue-stats"] = packet_queue_stats;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
    }
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{
    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue";
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(operation)
	|| is_set(max_queue_size.operation)
	|| is_set(queue_size_bytes.operation)
	|| is_set(queue_size_packets.operation);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/packet-queue/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.operation)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.operation)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.operation)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
    }
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    dequeued_packets{YType::uint32, "dequeued-packets"},
    enqueued_packets{YType::uint32, "enqueued-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    tail_drops{YType::uint32, "tail-drops"}
{
    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue";
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    return dequeued_packets.is_set
	|| enqueued_packets.is_set
	|| high_water_mark_bytes.is_set
	|| high_water_mark_packets.is_set
	|| tail_drops.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(operation)
	|| is_set(dequeued_packets.operation)
	|| is_set(enqueued_packets.operation)
	|| is_set(high_water_mark_bytes.operation)
	|| is_set(high_water_mark_packets.operation)
	|| is_set(tail_drops.operation);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/packet-queue/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dequeued_packets.is_set || is_set(dequeued_packets.operation)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (enqueued_packets.is_set || is_set(enqueued_packets.operation)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.operation)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.operation)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.operation)) leaf_name_data.push_back(tail_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_children()
{
    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
    }
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpfs()
{
    yang_name = "group-map-rpfs"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";

    return path_buffer.str();

}

EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-map-rpf")
    {
        for(auto const & c : group_map_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.push_back(std::move(c));
        children[segment_path] = group_map_rpf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pim::Standby::DefaultContext::GroupMapRpfs::get_children()
{
    for (auto const & c : group_map_rpf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf PimTopologyEntryFlagEnum::kat {0, "kat"};
const Enum::YLeaf PimTopologyEntryFlagEnum::aa {1, "aa"};
const Enum::YLeaf PimTopologyEntryFlagEnum::pa {2, "pa"};
const Enum::YLeaf PimTopologyEntryFlagEnum::ra {3, "ra"};
const Enum::YLeaf PimTopologyEntryFlagEnum::ia {4, "ia"};
const Enum::YLeaf PimTopologyEntryFlagEnum::rr {5, "rr"};
const Enum::YLeaf PimTopologyEntryFlagEnum::lh {6, "lh"};
const Enum::YLeaf PimTopologyEntryFlagEnum::dss {7, "dss"};
const Enum::YLeaf PimTopologyEntryFlagEnum::dcc {8, "dcc"};
const Enum::YLeaf PimTopologyEntryFlagEnum::sr {9, "sr"};
const Enum::YLeaf PimTopologyEntryFlagEnum::e {10, "e"};
const Enum::YLeaf PimTopologyEntryFlagEnum::ex {11, "ex"};
const Enum::YLeaf PimTopologyEntryFlagEnum::ma {12, "ma"};
const Enum::YLeaf PimTopologyEntryFlagEnum::mt {13, "mt"};
const Enum::YLeaf PimTopologyEntryFlagEnum::mfa {14, "mfa"};
const Enum::YLeaf PimTopologyEntryFlagEnum::mfp {15, "mfp"};
const Enum::YLeaf PimTopologyEntryFlagEnum::mfb {16, "mfb"};

const Enum::YLeaf PimAfiEnum::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf PimAfiEnum::ipv6_unicast {1, "ipv6-unicast"};

const Enum::YLeaf PimInterfaceEnum::encap_interface {0, "encap-interface"};
const Enum::YLeaf PimInterfaceEnum::decap_interface {1, "decap-interface"};
const Enum::YLeaf PimInterfaceEnum::mdt_interface {2, "mdt-interface"};

const Enum::YLeaf PimShowRangeClientEnum::no_client {0, "no-client"};
const Enum::YLeaf PimShowRangeClientEnum::embedded_config {1, "embedded-config"};
const Enum::YLeaf PimShowRangeClientEnum::embedded {2, "embedded"};
const Enum::YLeaf PimShowRangeClientEnum::permanent {3, "permanent"};
const Enum::YLeaf PimShowRangeClientEnum::auto_rp {4, "auto-rp"};
const Enum::YLeaf PimShowRangeClientEnum::bsr {5, "bsr"};
const Enum::YLeaf PimShowRangeClientEnum::config {6, "config"};
const Enum::YLeaf PimShowRangeClientEnum::static_ {7, "static"};

const Enum::YLeaf PimProtocolEnum::non_routable {0, "non-routable"};
const Enum::YLeaf PimProtocolEnum::sparse_mode {1, "sparse-mode"};
const Enum::YLeaf PimProtocolEnum::dense_mode {2, "dense-mode"};
const Enum::YLeaf PimProtocolEnum::bidir {3, "bidir"};
const Enum::YLeaf PimProtocolEnum::ssm {4, "ssm"};
const Enum::YLeaf PimProtocolEnum::maximum {5, "maximum"};
const Enum::YLeaf PimProtocolEnum::any {6, "any"};

const Enum::YLeaf PimSafiEnum::unicast {1, "unicast"};
const Enum::YLeaf PimSafiEnum::multicast {2, "multicast"};
const Enum::YLeaf PimSafiEnum::all {3, "all"};
const Enum::YLeaf PimSafiEnum::default_ {4, "default"};

const Enum::YLeaf PimClientEnum::none {0, "none"};
const Enum::YLeaf PimClientEnum::configured_embedded_rp {1, "configured-embedded-rp"};
const Enum::YLeaf PimClientEnum::embedded {2, "embedded"};
const Enum::YLeaf PimClientEnum::permanent {3, "permanent"};
const Enum::YLeaf PimClientEnum::auto_rp {4, "auto-rp"};
const Enum::YLeaf PimClientEnum::bsr {5, "bsr"};
const Enum::YLeaf PimClientEnum::configured {6, "configured"};
const Enum::YLeaf PimClientEnum::static_ {7, "static"};

const Enum::YLeaf PimShowProtocolEnum::no_route {0, "no-route"};
const Enum::YLeaf PimShowProtocolEnum::sm {1, "sm"};
const Enum::YLeaf PimShowProtocolEnum::dm {2, "dm"};
const Enum::YLeaf PimShowProtocolEnum::bidir {3, "bidir"};
const Enum::YLeaf PimShowProtocolEnum::ssm {4, "ssm"};
const Enum::YLeaf PimShowProtocolEnum::maximum {5, "maximum"};
const Enum::YLeaf PimShowProtocolEnum::any {6, "any"};

const Enum::YLeaf PimTopologyInterfaceFlagEnum::lh {0, "lh"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::ld {1, "ld"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::li {2, "li"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::ii {3, "ii"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::id {4, "id"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::as {5, "as"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::ab {6, "ab"};
const Enum::YLeaf PimTopologyInterfaceFlagEnum::ex {7, "ex"};


}
}

