
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ETHERLIKE_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ETHERLIKE_EXT_MIB {

CiscoEtherlikeExtMib::CiscoEtherlikeExtMib()
    :
    ceedot3pauseexttable(std::make_shared<CiscoEtherlikeExtMib::Ceedot3Pauseexttable>())
	,ceesubinterfacetable(std::make_shared<CiscoEtherlikeExtMib::Ceesubinterfacetable>())
{
    ceedot3pauseexttable->parent = this;

    ceesubinterfacetable->parent = this;

    yang_name = "CISCO-ETHERLIKE-EXT-MIB"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB";
}

CiscoEtherlikeExtMib::~CiscoEtherlikeExtMib()
{
}

bool CiscoEtherlikeExtMib::has_data() const
{
    return (ceedot3pauseexttable !=  nullptr && ceedot3pauseexttable->has_data())
	|| (ceesubinterfacetable !=  nullptr && ceesubinterfacetable->has_data());
}

bool CiscoEtherlikeExtMib::has_operation() const
{
    return is_set(yfilter)
	|| (ceedot3pauseexttable !=  nullptr && ceedot3pauseexttable->has_operation())
	|| (ceesubinterfacetable !=  nullptr && ceesubinterfacetable->has_operation());
}

std::string CiscoEtherlikeExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEtherlikeExtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEtherlikeExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeDot3PauseExtTable")
    {
        if(ceedot3pauseexttable == nullptr)
        {
            ceedot3pauseexttable = std::make_shared<CiscoEtherlikeExtMib::Ceedot3Pauseexttable>();
        }
        return ceedot3pauseexttable;
    }

    if(child_yang_name == "ceeSubInterfaceTable")
    {
        if(ceesubinterfacetable == nullptr)
        {
            ceesubinterfacetable = std::make_shared<CiscoEtherlikeExtMib::Ceesubinterfacetable>();
        }
        return ceesubinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEtherlikeExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceedot3pauseexttable != nullptr)
    {
        children["ceeDot3PauseExtTable"] = ceedot3pauseexttable;
    }

    if(ceesubinterfacetable != nullptr)
    {
        children["ceeSubInterfaceTable"] = ceesubinterfacetable;
    }

    return children;
}

void CiscoEtherlikeExtMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEtherlikeExtMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEtherlikeExtMib::clone_ptr() const
{
    return std::make_shared<CiscoEtherlikeExtMib>();
}

std::string CiscoEtherlikeExtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEtherlikeExtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEtherlikeExtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEtherlikeExtMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEtherlikeExtMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeDot3PauseExtTable" || name == "ceeSubInterfaceTable")
        return true;
    return false;
}

CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseexttable()
{
    yang_name = "ceeDot3PauseExtTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB";
}

CiscoEtherlikeExtMib::Ceedot3Pauseexttable::~Ceedot3Pauseexttable()
{
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::has_data() const
{
    for (std::size_t index=0; index<ceedot3pauseextentry.size(); index++)
    {
        if(ceedot3pauseextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::has_operation() const
{
    for (std::size_t index=0; index<ceedot3pauseextentry.size(); index++)
    {
        if(ceedot3pauseextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEtherlikeExtMib::Ceedot3Pauseexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtTable";

    return path_buffer.str();

}

const EntityPath CiscoEtherlikeExtMib::Ceedot3Pauseexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEtherlikeExtMib::Ceedot3Pauseexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeDot3PauseExtEntry")
    {
        for(auto const & c : ceedot3pauseextentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry>();
        c->parent = this;
        ceedot3pauseextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEtherlikeExtMib::Ceedot3Pauseexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceedot3pauseextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEtherlikeExtMib::Ceedot3Pauseexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEtherlikeExtMib::Ceedot3Pauseexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeDot3PauseExtEntry")
        return true;
    return false;
}

CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::Ceedot3Pauseextentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    ceedot3pauseextadminmode{YType::bits, "ceeDot3PauseExtAdminMode"},
    ceedot3pauseextopermode{YType::bits, "ceeDot3PauseExtOperMode"}
{
    yang_name = "ceeDot3PauseExtEntry"; yang_parent_name = "ceeDot3PauseExtTable";
}

CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::~Ceedot3Pauseextentry()
{
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_data() const
{
    return dot3statsindex.is_set
	|| ceedot3pauseextadminmode.is_set
	|| ceedot3pauseextopermode.is_set;
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(ceedot3pauseextadminmode.yfilter)
	|| ydk::is_set(ceedot3pauseextopermode.yfilter);
}

std::string CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeDot3PauseExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (ceedot3pauseextadminmode.is_set || is_set(ceedot3pauseextadminmode.yfilter)) leaf_name_data.push_back(ceedot3pauseextadminmode.get_name_leafdata());
    if (ceedot3pauseextopermode.is_set || is_set(ceedot3pauseextopermode.yfilter)) leaf_name_data.push_back(ceedot3pauseextopermode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceeDot3PauseExtAdminMode")
    {
        ceedot3pauseextadminmode[value] = true;
    }
    if(value_path == "ceeDot3PauseExtOperMode")
    {
        ceedot3pauseextopermode[value] = true;
    }
}

void CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "ceeDot3PauseExtAdminMode")
    {
        ceedot3pauseextadminmode.yfilter = yfilter;
    }
    if(value_path == "ceeDot3PauseExtOperMode")
    {
        ceedot3pauseextopermode.yfilter = yfilter;
    }
}

bool CiscoEtherlikeExtMib::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "ceeDot3PauseExtAdminMode" || name == "ceeDot3PauseExtOperMode")
        return true;
    return false;
}

CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfacetable()
{
    yang_name = "ceeSubInterfaceTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB";
}

CiscoEtherlikeExtMib::Ceesubinterfacetable::~Ceesubinterfacetable()
{
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::has_data() const
{
    for (std::size_t index=0; index<ceesubinterfaceentry.size(); index++)
    {
        if(ceesubinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<ceesubinterfaceentry.size(); index++)
    {
        if(ceesubinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEtherlikeExtMib::Ceesubinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoEtherlikeExtMib::Ceesubinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEtherlikeExtMib::Ceesubinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeSubInterfaceEntry")
    {
        for(auto const & c : ceesubinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry>();
        c->parent = this;
        ceesubinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEtherlikeExtMib::Ceesubinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceesubinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEtherlikeExtMib::Ceesubinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEtherlikeExtMib::Ceesubinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeSubInterfaceEntry")
        return true;
    return false;
}

CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::Ceesubinterfaceentry()
    :
    ifindex{YType::str, "ifIndex"},
    ceesubinterfacecount{YType::uint32, "ceeSubInterfaceCount"}
{
    yang_name = "ceeSubInterfaceEntry"; yang_parent_name = "ceeSubInterfaceTable";
}

CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::~Ceesubinterfaceentry()
{
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::has_data() const
{
    return ifindex.is_set
	|| ceesubinterfacecount.is_set;
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ceesubinterfacecount.yfilter);
}

std::string CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeSubInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceesubinterfacecount.is_set || is_set(ceesubinterfacecount.yfilter)) leaf_name_data.push_back(ceesubinterfacecount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceeSubInterfaceCount")
    {
        ceesubinterfacecount = value;
        ceesubinterfacecount.value_namespace = name_space;
        ceesubinterfacecount.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ceeSubInterfaceCount")
    {
        ceesubinterfacecount.yfilter = yfilter;
    }
}

bool CiscoEtherlikeExtMib::Ceesubinterfacetable::Ceesubinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ceeSubInterfaceCount")
        return true;
    return false;
}


}
}
