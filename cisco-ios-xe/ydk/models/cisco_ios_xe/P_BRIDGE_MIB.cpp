
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "P_BRIDGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace P_BRIDGE_MIB {

PBRIDGEMIB::PBRIDGEMIB()
    :
    dot1dextbase(std::make_shared<PBRIDGEMIB::Dot1dExtBase>())
    , dot1dtphcporttable(std::make_shared<PBRIDGEMIB::Dot1dTpHCPortTable>())
    , dot1dtpportoverflowtable(std::make_shared<PBRIDGEMIB::Dot1dTpPortOverflowTable>())
    , dot1duserpriorityregentable(std::make_shared<PBRIDGEMIB::Dot1dUserPriorityRegenTable>())
    , dot1dtrafficclasstable(std::make_shared<PBRIDGEMIB::Dot1dTrafficClassTable>())
    , dot1dportoutboundaccessprioritytable(std::make_shared<PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable>())
{
    dot1dextbase->parent = this;
    dot1dtphcporttable->parent = this;
    dot1dtpportoverflowtable->parent = this;
    dot1duserpriorityregentable->parent = this;
    dot1dtrafficclasstable->parent = this;
    dot1dportoutboundaccessprioritytable->parent = this;

    yang_name = "P-BRIDGE-MIB"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

PBRIDGEMIB::~PBRIDGEMIB()
{
}

bool PBRIDGEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (dot1dextbase !=  nullptr && dot1dextbase->has_data())
	|| (dot1dtphcporttable !=  nullptr && dot1dtphcporttable->has_data())
	|| (dot1dtpportoverflowtable !=  nullptr && dot1dtpportoverflowtable->has_data())
	|| (dot1duserpriorityregentable !=  nullptr && dot1duserpriorityregentable->has_data())
	|| (dot1dtrafficclasstable !=  nullptr && dot1dtrafficclasstable->has_data())
	|| (dot1dportoutboundaccessprioritytable !=  nullptr && dot1dportoutboundaccessprioritytable->has_data());
}

bool PBRIDGEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot1dextbase !=  nullptr && dot1dextbase->has_operation())
	|| (dot1dtphcporttable !=  nullptr && dot1dtphcporttable->has_operation())
	|| (dot1dtpportoverflowtable !=  nullptr && dot1dtpportoverflowtable->has_operation())
	|| (dot1duserpriorityregentable !=  nullptr && dot1duserpriorityregentable->has_operation())
	|| (dot1dtrafficclasstable !=  nullptr && dot1dtrafficclasstable->has_operation())
	|| (dot1dportoutboundaccessprioritytable !=  nullptr && dot1dportoutboundaccessprioritytable->has_operation());
}

std::string PBRIDGEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dExtBase")
    {
        if(dot1dextbase == nullptr)
        {
            dot1dextbase = std::make_shared<PBRIDGEMIB::Dot1dExtBase>();
        }
        return dot1dextbase;
    }

    if(child_yang_name == "dot1dTpHCPortTable")
    {
        if(dot1dtphcporttable == nullptr)
        {
            dot1dtphcporttable = std::make_shared<PBRIDGEMIB::Dot1dTpHCPortTable>();
        }
        return dot1dtphcporttable;
    }

    if(child_yang_name == "dot1dTpPortOverflowTable")
    {
        if(dot1dtpportoverflowtable == nullptr)
        {
            dot1dtpportoverflowtable = std::make_shared<PBRIDGEMIB::Dot1dTpPortOverflowTable>();
        }
        return dot1dtpportoverflowtable;
    }

    if(child_yang_name == "dot1dUserPriorityRegenTable")
    {
        if(dot1duserpriorityregentable == nullptr)
        {
            dot1duserpriorityregentable = std::make_shared<PBRIDGEMIB::Dot1dUserPriorityRegenTable>();
        }
        return dot1duserpriorityregentable;
    }

    if(child_yang_name == "dot1dTrafficClassTable")
    {
        if(dot1dtrafficclasstable == nullptr)
        {
            dot1dtrafficclasstable = std::make_shared<PBRIDGEMIB::Dot1dTrafficClassTable>();
        }
        return dot1dtrafficclasstable;
    }

    if(child_yang_name == "dot1dPortOutboundAccessPriorityTable")
    {
        if(dot1dportoutboundaccessprioritytable == nullptr)
        {
            dot1dportoutboundaccessprioritytable = std::make_shared<PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable>();
        }
        return dot1dportoutboundaccessprioritytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1dextbase != nullptr)
    {
        children["dot1dExtBase"] = dot1dextbase;
    }

    if(dot1dtphcporttable != nullptr)
    {
        children["dot1dTpHCPortTable"] = dot1dtphcporttable;
    }

    if(dot1dtpportoverflowtable != nullptr)
    {
        children["dot1dTpPortOverflowTable"] = dot1dtpportoverflowtable;
    }

    if(dot1duserpriorityregentable != nullptr)
    {
        children["dot1dUserPriorityRegenTable"] = dot1duserpriorityregentable;
    }

    if(dot1dtrafficclasstable != nullptr)
    {
        children["dot1dTrafficClassTable"] = dot1dtrafficclasstable;
    }

    if(dot1dportoutboundaccessprioritytable != nullptr)
    {
        children["dot1dPortOutboundAccessPriorityTable"] = dot1dportoutboundaccessprioritytable;
    }

    return children;
}

void PBRIDGEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PBRIDGEMIB::clone_ptr() const
{
    return std::make_shared<PBRIDGEMIB>();
}

std::string PBRIDGEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PBRIDGEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PBRIDGEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PBRIDGEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PBRIDGEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dExtBase" || name == "dot1dTpHCPortTable" || name == "dot1dTpPortOverflowTable" || name == "dot1dUserPriorityRegenTable" || name == "dot1dTrafficClassTable" || name == "dot1dPortOutboundAccessPriorityTable")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dExtBase::Dot1dExtBase()
    :
    dot1ddevicecapabilities{YType::bits, "dot1dDeviceCapabilities"},
    dot1dtrafficclassesenabled{YType::boolean, "dot1dTrafficClassesEnabled"},
    dot1dgmrpstatus{YType::enumeration, "dot1dGmrpStatus"}
{

    yang_name = "dot1dExtBase"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dExtBase::~Dot1dExtBase()
{
}

bool PBRIDGEMIB::Dot1dExtBase::has_data() const
{
    if (is_presence_container) return true;
    return dot1ddevicecapabilities.is_set
	|| dot1dtrafficclassesenabled.is_set
	|| dot1dgmrpstatus.is_set;
}

bool PBRIDGEMIB::Dot1dExtBase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1ddevicecapabilities.yfilter)
	|| ydk::is_set(dot1dtrafficclassesenabled.yfilter)
	|| ydk::is_set(dot1dgmrpstatus.yfilter);
}

std::string PBRIDGEMIB::Dot1dExtBase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dExtBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dExtBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dExtBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1ddevicecapabilities.is_set || is_set(dot1ddevicecapabilities.yfilter)) leaf_name_data.push_back(dot1ddevicecapabilities.get_name_leafdata());
    if (dot1dtrafficclassesenabled.is_set || is_set(dot1dtrafficclassesenabled.yfilter)) leaf_name_data.push_back(dot1dtrafficclassesenabled.get_name_leafdata());
    if (dot1dgmrpstatus.is_set || is_set(dot1dgmrpstatus.yfilter)) leaf_name_data.push_back(dot1dgmrpstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dExtBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dExtBase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dExtBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dDeviceCapabilities")
    {
        dot1ddevicecapabilities[value] = true;
    }
    if(value_path == "dot1dTrafficClassesEnabled")
    {
        dot1dtrafficclassesenabled = value;
        dot1dtrafficclassesenabled.value_namespace = name_space;
        dot1dtrafficclassesenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dGmrpStatus")
    {
        dot1dgmrpstatus = value;
        dot1dgmrpstatus.value_namespace = name_space;
        dot1dgmrpstatus.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dExtBase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dDeviceCapabilities")
    {
        dot1ddevicecapabilities.yfilter = yfilter;
    }
    if(value_path == "dot1dTrafficClassesEnabled")
    {
        dot1dtrafficclassesenabled.yfilter = yfilter;
    }
    if(value_path == "dot1dGmrpStatus")
    {
        dot1dgmrpstatus.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dExtBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dDeviceCapabilities" || name == "dot1dTrafficClassesEnabled" || name == "dot1dGmrpStatus")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortTable()
    :
    dot1dtphcportentry(this, {"dot1dtpport"})
{

    yang_name = "dot1dTpHCPortTable"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTpHCPortTable::~Dot1dTpHCPortTable()
{
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dtphcportentry.len(); index++)
    {
        if(dot1dtphcportentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtphcportentry.len(); index++)
    {
        if(dot1dtphcportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PBRIDGEMIB::Dot1dTpHCPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTpHCPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpHCPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTpHCPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTpHCPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpHCPortEntry")
    {
        auto c = std::make_shared<PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry>();
        c->parent = this;
        dot1dtphcportentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTpHCPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dtphcportentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PBRIDGEMIB::Dot1dTpHCPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::Dot1dTpHCPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpHCPortEntry")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::Dot1dTpHCPortEntry()
    :
    dot1dtpport{YType::str, "dot1dTpPort"},
    dot1dtphcportinframes{YType::uint64, "dot1dTpHCPortInFrames"},
    dot1dtphcportoutframes{YType::uint64, "dot1dTpHCPortOutFrames"},
    dot1dtphcportindiscards{YType::uint64, "dot1dTpHCPortInDiscards"}
{

    yang_name = "dot1dTpHCPortEntry"; yang_parent_name = "dot1dTpHCPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::~Dot1dTpHCPortEntry()
{
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dtpport.is_set
	|| dot1dtphcportinframes.is_set
	|| dot1dtphcportoutframes.is_set
	|| dot1dtphcportindiscards.is_set;
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpport.yfilter)
	|| ydk::is_set(dot1dtphcportinframes.yfilter)
	|| ydk::is_set(dot1dtphcportoutframes.yfilter)
	|| ydk::is_set(dot1dtphcportindiscards.yfilter);
}

std::string PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTpHCPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpHCPortEntry";
    ADD_KEY_TOKEN(dot1dtpport, "dot1dTpPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.yfilter)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtphcportinframes.is_set || is_set(dot1dtphcportinframes.yfilter)) leaf_name_data.push_back(dot1dtphcportinframes.get_name_leafdata());
    if (dot1dtphcportoutframes.is_set || is_set(dot1dtphcportoutframes.yfilter)) leaf_name_data.push_back(dot1dtphcportoutframes.get_name_leafdata());
    if (dot1dtphcportindiscards.is_set || is_set(dot1dtphcportindiscards.yfilter)) leaf_name_data.push_back(dot1dtphcportindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
        dot1dtpport.value_namespace = name_space;
        dot1dtpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpHCPortInFrames")
    {
        dot1dtphcportinframes = value;
        dot1dtphcportinframes.value_namespace = name_space;
        dot1dtphcportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpHCPortOutFrames")
    {
        dot1dtphcportoutframes = value;
        dot1dtphcportoutframes.value_namespace = name_space;
        dot1dtphcportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpHCPortInDiscards")
    {
        dot1dtphcportindiscards = value;
        dot1dtphcportindiscards.value_namespace = name_space;
        dot1dtphcportindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport.yfilter = yfilter;
    }
    if(value_path == "dot1dTpHCPortInFrames")
    {
        dot1dtphcportinframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpHCPortOutFrames")
    {
        dot1dtphcportoutframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpHCPortInDiscards")
    {
        dot1dtphcportindiscards.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dTpHCPortTable::Dot1dTpHCPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPort" || name == "dot1dTpHCPortInFrames" || name == "dot1dTpHCPortOutFrames" || name == "dot1dTpHCPortInDiscards")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowTable()
    :
    dot1dtpportoverflowentry(this, {"dot1dtpport"})
{

    yang_name = "dot1dTpPortOverflowTable"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTpPortOverflowTable::~Dot1dTpPortOverflowTable()
{
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dtpportoverflowentry.len(); index++)
    {
        if(dot1dtpportoverflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpportoverflowentry.len(); index++)
    {
        if(dot1dtpportoverflowentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PBRIDGEMIB::Dot1dTpPortOverflowTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTpPortOverflowTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortOverflowTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTpPortOverflowTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTpPortOverflowTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpPortOverflowEntry")
    {
        auto c = std::make_shared<PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry>();
        c->parent = this;
        dot1dtpportoverflowentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTpPortOverflowTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dtpportoverflowentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PBRIDGEMIB::Dot1dTpPortOverflowTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::Dot1dTpPortOverflowTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPortOverflowEntry")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::Dot1dTpPortOverflowEntry()
    :
    dot1dtpport{YType::str, "dot1dTpPort"},
    dot1dtpportinoverflowframes{YType::uint32, "dot1dTpPortInOverflowFrames"},
    dot1dtpportoutoverflowframes{YType::uint32, "dot1dTpPortOutOverflowFrames"},
    dot1dtpportinoverflowdiscards{YType::uint32, "dot1dTpPortInOverflowDiscards"}
{

    yang_name = "dot1dTpPortOverflowEntry"; yang_parent_name = "dot1dTpPortOverflowTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::~Dot1dTpPortOverflowEntry()
{
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dtpport.is_set
	|| dot1dtpportinoverflowframes.is_set
	|| dot1dtpportoutoverflowframes.is_set
	|| dot1dtpportinoverflowdiscards.is_set;
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpport.yfilter)
	|| ydk::is_set(dot1dtpportinoverflowframes.yfilter)
	|| ydk::is_set(dot1dtpportoutoverflowframes.yfilter)
	|| ydk::is_set(dot1dtpportinoverflowdiscards.yfilter);
}

std::string PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTpPortOverflowTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortOverflowEntry";
    ADD_KEY_TOKEN(dot1dtpport, "dot1dTpPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.yfilter)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtpportinoverflowframes.is_set || is_set(dot1dtpportinoverflowframes.yfilter)) leaf_name_data.push_back(dot1dtpportinoverflowframes.get_name_leafdata());
    if (dot1dtpportoutoverflowframes.is_set || is_set(dot1dtpportoutoverflowframes.yfilter)) leaf_name_data.push_back(dot1dtpportoutoverflowframes.get_name_leafdata());
    if (dot1dtpportinoverflowdiscards.is_set || is_set(dot1dtpportinoverflowdiscards.yfilter)) leaf_name_data.push_back(dot1dtpportinoverflowdiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
        dot1dtpport.value_namespace = name_space;
        dot1dtpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInOverflowFrames")
    {
        dot1dtpportinoverflowframes = value;
        dot1dtpportinoverflowframes.value_namespace = name_space;
        dot1dtpportinoverflowframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortOutOverflowFrames")
    {
        dot1dtpportoutoverflowframes = value;
        dot1dtpportoutoverflowframes.value_namespace = name_space;
        dot1dtpportoutoverflowframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInOverflowDiscards")
    {
        dot1dtpportinoverflowdiscards = value;
        dot1dtpportinoverflowdiscards.value_namespace = name_space;
        dot1dtpportinoverflowdiscards.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInOverflowFrames")
    {
        dot1dtpportinoverflowframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortOutOverflowFrames")
    {
        dot1dtpportoutoverflowframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInOverflowDiscards")
    {
        dot1dtpportinoverflowdiscards.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dTpPortOverflowTable::Dot1dTpPortOverflowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPort" || name == "dot1dTpPortInOverflowFrames" || name == "dot1dTpPortOutOverflowFrames" || name == "dot1dTpPortInOverflowDiscards")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenTable()
    :
    dot1duserpriorityregenentry(this, {"dot1dbaseport", "dot1duserpriority"})
{

    yang_name = "dot1dUserPriorityRegenTable"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dUserPriorityRegenTable::~Dot1dUserPriorityRegenTable()
{
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1duserpriorityregenentry.len(); index++)
    {
        if(dot1duserpriorityregenentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::has_operation() const
{
    for (std::size_t index=0; index<dot1duserpriorityregenentry.len(); index++)
    {
        if(dot1duserpriorityregenentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PBRIDGEMIB::Dot1dUserPriorityRegenTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dUserPriorityRegenTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dUserPriorityRegenTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dUserPriorityRegenTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dUserPriorityRegenTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dUserPriorityRegenEntry")
    {
        auto c = std::make_shared<PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry>();
        c->parent = this;
        dot1duserpriorityregenentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dUserPriorityRegenTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1duserpriorityregenentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PBRIDGEMIB::Dot1dUserPriorityRegenTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::Dot1dUserPriorityRegenTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dUserPriorityRegenEntry")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::Dot1dUserPriorityRegenEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1duserpriority{YType::int32, "dot1dUserPriority"},
    dot1dregenuserpriority{YType::int32, "dot1dRegenUserPriority"}
{

    yang_name = "dot1dUserPriorityRegenEntry"; yang_parent_name = "dot1dUserPriorityRegenTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::~Dot1dUserPriorityRegenEntry()
{
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1duserpriority.is_set
	|| dot1dregenuserpriority.is_set;
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1duserpriority.yfilter)
	|| ydk::is_set(dot1dregenuserpriority.yfilter);
}

std::string PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dUserPriorityRegenTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dUserPriorityRegenEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1duserpriority, "dot1dUserPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1duserpriority.is_set || is_set(dot1duserpriority.yfilter)) leaf_name_data.push_back(dot1duserpriority.get_name_leafdata());
    if (dot1dregenuserpriority.is_set || is_set(dot1dregenuserpriority.yfilter)) leaf_name_data.push_back(dot1dregenuserpriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dUserPriority")
    {
        dot1duserpriority = value;
        dot1duserpriority.value_namespace = name_space;
        dot1duserpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority = value;
        dot1dregenuserpriority.value_namespace = name_space;
        dot1dregenuserpriority.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1dUserPriority")
    {
        dot1duserpriority.yfilter = yfilter;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dUserPriorityRegenTable::Dot1dUserPriorityRegenEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1dUserPriority" || name == "dot1dRegenUserPriority")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassTable()
    :
    dot1dtrafficclassentry(this, {"dot1dbaseport", "dot1dtrafficclasspriority"})
{

    yang_name = "dot1dTrafficClassTable"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTrafficClassTable::~Dot1dTrafficClassTable()
{
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dtrafficclassentry.len(); index++)
    {
        if(dot1dtrafficclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtrafficclassentry.len(); index++)
    {
        if(dot1dtrafficclassentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PBRIDGEMIB::Dot1dTrafficClassTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTrafficClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTrafficClassTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTrafficClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTrafficClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTrafficClassEntry")
    {
        auto c = std::make_shared<PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry>();
        c->parent = this;
        dot1dtrafficclassentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTrafficClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dtrafficclassentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PBRIDGEMIB::Dot1dTrafficClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::Dot1dTrafficClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTrafficClassEntry")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::Dot1dTrafficClassEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1dtrafficclasspriority{YType::int32, "dot1dTrafficClassPriority"},
    dot1dtrafficclass{YType::int32, "dot1dTrafficClass"}
{

    yang_name = "dot1dTrafficClassEntry"; yang_parent_name = "dot1dTrafficClassTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::~Dot1dTrafficClassEntry()
{
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1dtrafficclasspriority.is_set
	|| dot1dtrafficclass.is_set;
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1dtrafficclasspriority.yfilter)
	|| ydk::is_set(dot1dtrafficclass.yfilter);
}

std::string PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTrafficClassTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTrafficClassEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1dtrafficclasspriority, "dot1dTrafficClassPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dtrafficclasspriority.is_set || is_set(dot1dtrafficclasspriority.yfilter)) leaf_name_data.push_back(dot1dtrafficclasspriority.get_name_leafdata());
    if (dot1dtrafficclass.is_set || is_set(dot1dtrafficclass.yfilter)) leaf_name_data.push_back(dot1dtrafficclass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTrafficClassPriority")
    {
        dot1dtrafficclasspriority = value;
        dot1dtrafficclasspriority.value_namespace = name_space;
        dot1dtrafficclasspriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTrafficClass")
    {
        dot1dtrafficclass = value;
        dot1dtrafficclass.value_namespace = name_space;
        dot1dtrafficclass.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1dTrafficClassPriority")
    {
        dot1dtrafficclasspriority.yfilter = yfilter;
    }
    if(value_path == "dot1dTrafficClass")
    {
        dot1dtrafficclass.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dTrafficClassTable::Dot1dTrafficClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1dTrafficClassPriority" || name == "dot1dTrafficClass")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityTable()
    :
    dot1dportoutboundaccesspriorityentry(this, {"dot1dbaseport", "dot1dregenuserpriority"})
{

    yang_name = "dot1dPortOutboundAccessPriorityTable"; yang_parent_name = "P-BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::~Dot1dPortOutboundAccessPriorityTable()
{
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dportoutboundaccesspriorityentry.len(); index++)
    {
        if(dot1dportoutboundaccesspriorityentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dportoutboundaccesspriorityentry.len(); index++)
    {
        if(dot1dportoutboundaccesspriorityentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dPortOutboundAccessPriorityTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dPortOutboundAccessPriorityEntry")
    {
        auto c = std::make_shared<PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry>();
        c->parent = this;
        dot1dportoutboundaccesspriorityentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dportoutboundaccesspriorityentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dPortOutboundAccessPriorityEntry")
        return true;
    return false;
}

PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::Dot1dPortOutboundAccessPriorityEntry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1dregenuserpriority{YType::str, "dot1dRegenUserPriority"},
    dot1dportoutboundaccesspriority{YType::int32, "dot1dPortOutboundAccessPriority"}
{

    yang_name = "dot1dPortOutboundAccessPriorityEntry"; yang_parent_name = "dot1dPortOutboundAccessPriorityTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::~Dot1dPortOutboundAccessPriorityEntry()
{
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1dregenuserpriority.is_set
	|| dot1dportoutboundaccesspriority.is_set;
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1dregenuserpriority.yfilter)
	|| ydk::is_set(dot1dportoutboundaccesspriority.yfilter);
}

std::string PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dPortOutboundAccessPriorityTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dPortOutboundAccessPriorityEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    ADD_KEY_TOKEN(dot1dregenuserpriority, "dot1dRegenUserPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dregenuserpriority.is_set || is_set(dot1dregenuserpriority.yfilter)) leaf_name_data.push_back(dot1dregenuserpriority.get_name_leafdata());
    if (dot1dportoutboundaccesspriority.is_set || is_set(dot1dportoutboundaccesspriority.yfilter)) leaf_name_data.push_back(dot1dportoutboundaccesspriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority = value;
        dot1dregenuserpriority.value_namespace = name_space;
        dot1dregenuserpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortOutboundAccessPriority")
    {
        dot1dportoutboundaccesspriority = value;
        dot1dportoutboundaccesspriority.value_namespace = name_space;
        dot1dportoutboundaccesspriority.value_namespace_prefix = name_space_prefix;
    }
}

void PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority.yfilter = yfilter;
    }
    if(value_path == "dot1dPortOutboundAccessPriority")
    {
        dot1dportoutboundaccesspriority.yfilter = yfilter;
    }
}

bool PBRIDGEMIB::Dot1dPortOutboundAccessPriorityTable::Dot1dPortOutboundAccessPriorityEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1dRegenUserPriority" || name == "dot1dPortOutboundAccessPriority")
        return true;
    return false;
}

const Enum::YLeaf EnabledStatus::enabled {1, "enabled"};
const Enum::YLeaf EnabledStatus::disabled {2, "disabled"};


}
}

