
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_PROXY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMP_PROXY_MIB {

SnmpProxyMib::SnmpProxyMib()
    :
    snmpproxytable(std::make_shared<SnmpProxyMib::Snmpproxytable>())
{
    snmpproxytable->parent = this;

    yang_name = "SNMP-PROXY-MIB"; yang_parent_name = "SNMP-PROXY-MIB";
}

SnmpProxyMib::~SnmpProxyMib()
{
}

bool SnmpProxyMib::has_data() const
{
    return (snmpproxytable !=  nullptr && snmpproxytable->has_data());
}

bool SnmpProxyMib::has_operation() const
{
    return is_set(yfilter)
	|| (snmpproxytable !=  nullptr && snmpproxytable->has_operation());
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
        if(snmpproxytable == nullptr)
        {
            snmpproxytable = std::make_shared<SnmpProxyMib::Snmpproxytable>();
        }
        return snmpproxytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpProxyMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmpproxytable != nullptr)
    {
        children["snmpProxyTable"] = snmpproxytable;
    }

    return children;
}

void SnmpProxyMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SnmpProxyMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> SnmpProxyMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SnmpProxyMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyTable")
        return true;
    return false;
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
    for (std::size_t index=0; index<snmpproxyentry.size(); index++)
    {
        if(snmpproxyentry[index]->has_data())
            return true;
    }
    return false;
}

bool SnmpProxyMib::Snmpproxytable::has_operation() const
{
    for (std::size_t index=0; index<snmpproxyentry.size(); index++)
    {
        if(snmpproxyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : snmpproxyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SnmpProxyMib::Snmpproxytable::Snmpproxyentry>();
        c->parent = this;
        snmpproxyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpProxyMib::Snmpproxytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmpproxyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SnmpProxyMib::Snmpproxytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SnmpProxyMib::Snmpproxytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SnmpProxyMib::Snmpproxytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(snmpproxyname.yfilter)
	|| ydk::is_set(snmpproxycontextengineid.yfilter)
	|| ydk::is_set(snmpproxycontextname.yfilter)
	|| ydk::is_set(snmpproxymultipletargetout.yfilter)
	|| ydk::is_set(snmpproxyrowstatus.yfilter)
	|| ydk::is_set(snmpproxysingletargetout.yfilter)
	|| ydk::is_set(snmpproxystoragetype.yfilter)
	|| ydk::is_set(snmpproxytargetparamsin.yfilter)
	|| ydk::is_set(snmpproxytype.yfilter);
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

    if (snmpproxyname.is_set || is_set(snmpproxyname.yfilter)) leaf_name_data.push_back(snmpproxyname.get_name_leafdata());
    if (snmpproxycontextengineid.is_set || is_set(snmpproxycontextengineid.yfilter)) leaf_name_data.push_back(snmpproxycontextengineid.get_name_leafdata());
    if (snmpproxycontextname.is_set || is_set(snmpproxycontextname.yfilter)) leaf_name_data.push_back(snmpproxycontextname.get_name_leafdata());
    if (snmpproxymultipletargetout.is_set || is_set(snmpproxymultipletargetout.yfilter)) leaf_name_data.push_back(snmpproxymultipletargetout.get_name_leafdata());
    if (snmpproxyrowstatus.is_set || is_set(snmpproxyrowstatus.yfilter)) leaf_name_data.push_back(snmpproxyrowstatus.get_name_leafdata());
    if (snmpproxysingletargetout.is_set || is_set(snmpproxysingletargetout.yfilter)) leaf_name_data.push_back(snmpproxysingletargetout.get_name_leafdata());
    if (snmpproxystoragetype.is_set || is_set(snmpproxystoragetype.yfilter)) leaf_name_data.push_back(snmpproxystoragetype.get_name_leafdata());
    if (snmpproxytargetparamsin.is_set || is_set(snmpproxytargetparamsin.yfilter)) leaf_name_data.push_back(snmpproxytargetparamsin.get_name_leafdata());
    if (snmpproxytype.is_set || is_set(snmpproxytype.yfilter)) leaf_name_data.push_back(snmpproxytype.get_name_leafdata());


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

void SnmpProxyMib::Snmpproxytable::Snmpproxyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpProxyName")
    {
        snmpproxyname = value;
        snmpproxyname.value_namespace = name_space;
        snmpproxyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyContextEngineID")
    {
        snmpproxycontextengineid = value;
        snmpproxycontextengineid.value_namespace = name_space;
        snmpproxycontextengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyContextName")
    {
        snmpproxycontextname = value;
        snmpproxycontextname.value_namespace = name_space;
        snmpproxycontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyMultipleTargetOut")
    {
        snmpproxymultipletargetout = value;
        snmpproxymultipletargetout.value_namespace = name_space;
        snmpproxymultipletargetout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyRowStatus")
    {
        snmpproxyrowstatus = value;
        snmpproxyrowstatus.value_namespace = name_space;
        snmpproxyrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxySingleTargetOut")
    {
        snmpproxysingletargetout = value;
        snmpproxysingletargetout.value_namespace = name_space;
        snmpproxysingletargetout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyStorageType")
    {
        snmpproxystoragetype = value;
        snmpproxystoragetype.value_namespace = name_space;
        snmpproxystoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyTargetParamsIn")
    {
        snmpproxytargetparamsin = value;
        snmpproxytargetparamsin.value_namespace = name_space;
        snmpproxytargetparamsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyType")
    {
        snmpproxytype = value;
        snmpproxytype.value_namespace = name_space;
        snmpproxytype.value_namespace_prefix = name_space_prefix;
    }
}

void SnmpProxyMib::Snmpproxytable::Snmpproxyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpProxyName")
    {
        snmpproxyname.yfilter = yfilter;
    }
    if(value_path == "snmpProxyContextEngineID")
    {
        snmpproxycontextengineid.yfilter = yfilter;
    }
    if(value_path == "snmpProxyContextName")
    {
        snmpproxycontextname.yfilter = yfilter;
    }
    if(value_path == "snmpProxyMultipleTargetOut")
    {
        snmpproxymultipletargetout.yfilter = yfilter;
    }
    if(value_path == "snmpProxyRowStatus")
    {
        snmpproxyrowstatus.yfilter = yfilter;
    }
    if(value_path == "snmpProxySingleTargetOut")
    {
        snmpproxysingletargetout.yfilter = yfilter;
    }
    if(value_path == "snmpProxyStorageType")
    {
        snmpproxystoragetype.yfilter = yfilter;
    }
    if(value_path == "snmpProxyTargetParamsIn")
    {
        snmpproxytargetparamsin.yfilter = yfilter;
    }
    if(value_path == "snmpProxyType")
    {
        snmpproxytype.yfilter = yfilter;
    }
}

bool SnmpProxyMib::Snmpproxytable::Snmpproxyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpProxyName" || name == "snmpProxyContextEngineID" || name == "snmpProxyContextName" || name == "snmpProxyMultipleTargetOut" || name == "snmpProxyRowStatus" || name == "snmpProxySingleTargetOut" || name == "snmpProxyStorageType" || name == "snmpProxyTargetParamsIn" || name == "snmpProxyType")
        return true;
    return false;
}

const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::Snmpproxytype::read {1, "read"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::Snmpproxytype::write {2, "write"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::Snmpproxytype::trap {3, "trap"};
const Enum::YLeaf SnmpProxyMib::Snmpproxytable::Snmpproxyentry::Snmpproxytype::inform {4, "inform"};


}
}

