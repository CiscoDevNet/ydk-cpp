
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_PROXY_MIB.hpp"

namespace ydk {
namespace SNMP_PROXY_MIB {

SnmpProxyMib::SnmpProxyMib()
    :
    snmpproxytable_(std::make_shared<SnmpProxyMib::Snmpproxytable>())
{
    snmpproxytable_->parent = this;

    yang_name = "SNMP-PROXY-MIB"; yang_parent_name = "SNMP-PROXY-MIB";
}

SnmpProxyMib::~SnmpProxyMib()
{
}

bool SnmpProxyMib::has_data() const
{
    return (snmpproxytable_ !=  nullptr && snmpproxytable_->has_data());
}

bool SnmpProxyMib::has_operation() const
{
    return is_set(operation)
	|| (snmpproxytable_ !=  nullptr && snmpproxytable_->has_operation());
}

std::string SnmpProxyMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB";

    return path_buffer.str();

}

const EntityPath SnmpProxyMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpProxyMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpProxyTable")
    {
        if(snmpproxytable_ == nullptr)
        {
            snmpproxytable_ = std::make_shared<SnmpProxyMib::Snmpproxytable>();
        }
        return snmpproxytable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpProxyMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmpproxytable_ != nullptr)
    {
        children["snmpProxyTable"] = snmpproxytable_;
    }

    return children;
}

void SnmpProxyMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SnmpProxyMib::clone_ptr() const
{
    return std::make_shared<SnmpProxyMib>();
}

std::string SnmpProxyMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SnmpProxyMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SnmpProxyMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

SnmpProxyMib::Snmpproxytable::Snmpproxytable()
{
    yang_name = "snmpProxyTable"; yang_parent_name = "SNMP-PROXY-MIB";
}

SnmpProxyMib::Snmpproxytable::~Snmpproxytable()
{
}

bool SnmpProxyMib::Snmpproxytable::has_data() const
{
    for (std::size_t index=0; index<snmpproxyentry_.size(); index++)
    {
        if(snmpproxyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool SnmpProxyMib::Snmpproxytable::has_operation() const
{
    for (std::size_t index=0; index<snmpproxyentry_.size(); index++)
    {
        if(snmpproxyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SnmpProxyMib::Snmpproxytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpProxyTable";

    return path_buffer.str();

}

const EntityPath SnmpProxyMib::Snmpproxytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpProxyMib::Snmpproxytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpProxyEntry")
    {
        for(auto const & c : snmpproxyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SnmpProxyMib::Snmpproxytable::Snmpproxyentry>();
        c->parent = this;
        snmpproxyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpProxyMib::Snmpproxytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmpproxyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SnmpProxyMib::Snmpproxytable::set_value(const std::string & value_path, std::string value)
{
}

SnmpProxyMib::Snmpproxytable::Snmpproxyentry::Snmpproxyentry()
    :
    snmpproxyname{YType::str, "snmpProxyName"},
    snmpproxycontextengineid{YType::str, "snmpProxyContextEngineID"},
    snmpproxycontextname{YType::str, "snmpProxyContextName"},
    snmpproxymultipletargetout{YType::str, "snmpProxyMultipleTargetOut"},
    snmpproxyrowstatus{YType::enumeration, "snmpProxyRowStatus"},
    snmpproxysingletargetout{YType::str, "snmpProxySingleTargetOut"},
    snmpproxystoragetype{YType::enumeration, "snmpProxyStorageType"},
    snmpproxytargetparamsin{YType::str, "snmpProxyTargetParamsIn"},
    snmpproxytype{YType::enumeration, "snmpProxyType"}
{
    yang_name = "snmpProxyEntry"; yang_parent_name = "snmpProxyTable";
}

SnmpProxyMib::Snmpproxytable::Snmpproxyentry::~Snmpproxyentry()
{
}

bool SnmpProxyMib::Snmpproxytable::Snmpproxyentry::has_data() const
{
    return snmpproxyname.is_set
	|| snmpproxycontextengineid.is_set
	|| snmpproxycontextname.is_set
	|| snmpproxymultipletargetout.is_set
	|| snmpproxyrowstatus.is_set
	|| snmpproxysingletargetout.is_set
	|| snmpproxystoragetype.is_set
	|| snmpproxytargetparamsin.is_set
	|| snmpproxytype.is_set;
}

bool SnmpProxyMib::Snmpproxytable::Snmpproxyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(snmpproxyname.operation)
	|| is_set(snmpproxycontextengineid.operation)
	|| is_set(snmpproxycontextname.operation)
	|| is_set(snmpproxymultipletargetout.operation)
	|| is_set(snmpproxyrowstatus.operation)
	|| is_set(snmpproxysingletargetout.operation)
	|| is_set(snmpproxystoragetype.operation)
	|| is_set(snmpproxytargetparamsin.operation)
	|| is_set(snmpproxytype.operation);
}

std::string SnmpProxyMib::Snmpproxytable::Snmpproxyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpProxyEntry" <<"[snmpProxyName='" <<snmpproxyname <<"']";

    return path_buffer.str();

}

const EntityPath SnmpProxyMib::Snmpproxytable::Snmpproxyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-PROXY-MIB:SNMP-PROXY-MIB/snmpProxyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpproxyname.is_set || is_set(snmpproxyname.operation)) leaf_name_data.push_back(snmpproxyname.get_name_leafdata());
    if (snmpproxycontextengineid.is_set || is_set(snmpproxycontextengineid.operation)) leaf_name_data.push_back(snmpproxycontextengineid.get_name_leafdata());
    if (snmpproxycontextname.is_set || is_set(snmpproxycontextname.operation)) leaf_name_data.push_back(snmpproxycontextname.get_name_leafdata());
    if (snmpproxymultipletargetout.is_set || is_set(snmpproxymultipletargetout.operation)) leaf_name_data.push_back(snmpproxymultipletargetout.get_name_leafdata());
    if (snmpproxyrowstatus.is_set || is_set(snmpproxyrowstatus.operation)) leaf_name_data.push_back(snmpproxyrowstatus.get_name_leafdata());
    if (snmpproxysingletargetout.is_set || is_set(snmpproxysingletargetout.operation)) leaf_name_data.push_back(snmpproxysingletargetout.get_name_leafdata());
    if (snmpproxystoragetype.is_set || is_set(snmpproxystoragetype.operation)) leaf_name_data.push_back(snmpproxystoragetype.get_name_leafdata());
    if (snmpproxytargetparamsin.is_set || is_set(snmpproxytargetparamsin.operation)) leaf_name_data.push_back(snmpproxytargetparamsin.get_name_leafdata());
    if (snmpproxytype.is_set || is_set(snmpproxytype.operation)) leaf_name_data.push_back(snmpproxytype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpProxyMib::Snmpproxytable::Snmpproxyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpProxyMib::Snmpproxytable::Snmpproxyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SnmpProxyMib::Snmpproxytable::Snmpproxyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpProxyName")
    {
        snmpproxyname = value;
    }
    if(value_path == "snmpProxyContextEngineID")
    {
        snmpproxycontextengineid = value;
    }
    if(value_path == "snmpProxyContextName")
    {
        snmpproxycontextname = value;
    }
    if(value_path == "snmpProxyMultipleTargetOut")
    {
        snmpproxymultipletargetout = value;
    }
    if(value_path == "snmpProxyRowStatus")
    {
        snmpproxyrowstatus = value;
    }
    if(value_path == "snmpProxySingleTargetOut")
    {
        snmpproxysingletargetout = value;
    }
    if(value_path == "snmpProxyStorageType")
    {
        snmpproxystoragetype = value;
    }
    if(value_path == "snmpProxyTargetParamsIn")
    {
        snmpproxytargetparamsin = value;
    }
    if(value_path == "snmpProxyType")
    {
        snmpproxytype = value;
    }
}

const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::SnmpproxytypeEnum::read {1, "read"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::SnmpproxytypeEnum::write {2, "write"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::SnmpproxytypeEnum::trap {3, "trap"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::SnmpproxytypeEnum::inform {4, "inform"};


}
}

