
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_COMMUNITY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_COMMUNITY_MIB {

SNMPCOMMUNITYMIB::SNMPCOMMUNITYMIB()
    :
    snmpcommunitytable(std::make_shared<SNMPCOMMUNITYMIB::SnmpCommunityTable>())
{
    snmpcommunitytable->parent = this;

    yang_name = "SNMP-COMMUNITY-MIB"; yang_parent_name = "SNMP-COMMUNITY-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPCOMMUNITYMIB::~SNMPCOMMUNITYMIB()
{
}

bool SNMPCOMMUNITYMIB::has_data() const
{
    if (is_presence_container) return true;
    return (snmpcommunitytable !=  nullptr && snmpcommunitytable->has_data());
}

bool SNMPCOMMUNITYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmpcommunitytable !=  nullptr && snmpcommunitytable->has_operation());
}

std::string SNMPCOMMUNITYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-COMMUNITY-MIB:SNMP-COMMUNITY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPCOMMUNITYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPCOMMUNITYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpCommunityTable")
    {
        if(snmpcommunitytable == nullptr)
        {
            snmpcommunitytable = std::make_shared<SNMPCOMMUNITYMIB::SnmpCommunityTable>();
        }
        return snmpcommunitytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPCOMMUNITYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmpcommunitytable != nullptr)
    {
        _children["snmpCommunityTable"] = snmpcommunitytable;
    }

    return _children;
}

void SNMPCOMMUNITYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPCOMMUNITYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPCOMMUNITYMIB::clone_ptr() const
{
    return std::make_shared<SNMPCOMMUNITYMIB>();
}

std::string SNMPCOMMUNITYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPCOMMUNITYMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPCOMMUNITYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPCOMMUNITYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPCOMMUNITYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpCommunityTable")
        return true;
    return false;
}

SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityTable()
    :
    snmpcommunityentry(this, {"snmpcommunityindex"})
{

    yang_name = "snmpCommunityTable"; yang_parent_name = "SNMP-COMMUNITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPCOMMUNITYMIB::SnmpCommunityTable::~SnmpCommunityTable()
{
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmpcommunityentry.len(); index++)
    {
        if(snmpcommunityentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::has_operation() const
{
    for (std::size_t index=0; index<snmpcommunityentry.len(); index++)
    {
        if(snmpcommunityentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPCOMMUNITYMIB::SnmpCommunityTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-COMMUNITY-MIB:SNMP-COMMUNITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPCOMMUNITYMIB::SnmpCommunityTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpCommunityTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPCOMMUNITYMIB::SnmpCommunityTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPCOMMUNITYMIB::SnmpCommunityTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpCommunityEntry")
    {
        auto ent_ = std::make_shared<SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry>();
        ent_->parent = this;
        snmpcommunityentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPCOMMUNITYMIB::SnmpCommunityTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmpcommunityentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPCOMMUNITYMIB::SnmpCommunityTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPCOMMUNITYMIB::SnmpCommunityTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpCommunityEntry")
        return true;
    return false;
}

SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::SnmpCommunityEntry()
    :
    snmpcommunityindex{YType::str, "snmpCommunityIndex"},
    snmpcommunityname{YType::str, "snmpCommunityName"},
    snmpcommunitysecurityname{YType::str, "snmpCommunitySecurityName"},
    snmpcommunitycontextengineid{YType::str, "snmpCommunityContextEngineID"},
    snmpcommunitycontextname{YType::str, "snmpCommunityContextName"},
    snmpcommunitytransporttag{YType::str, "snmpCommunityTransportTag"},
    snmpcommunitystoragetype{YType::enumeration, "snmpCommunityStorageType"}
{

    yang_name = "snmpCommunityEntry"; yang_parent_name = "snmpCommunityTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::~SnmpCommunityEntry()
{
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmpcommunityindex.is_set
	|| snmpcommunityname.is_set
	|| snmpcommunitysecurityname.is_set
	|| snmpcommunitycontextengineid.is_set
	|| snmpcommunitycontextname.is_set
	|| snmpcommunitytransporttag.is_set
	|| snmpcommunitystoragetype.is_set;
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpcommunityindex.yfilter)
	|| ydk::is_set(snmpcommunityname.yfilter)
	|| ydk::is_set(snmpcommunitysecurityname.yfilter)
	|| ydk::is_set(snmpcommunitycontextengineid.yfilter)
	|| ydk::is_set(snmpcommunitycontextname.yfilter)
	|| ydk::is_set(snmpcommunitytransporttag.yfilter)
	|| ydk::is_set(snmpcommunitystoragetype.yfilter);
}

std::string SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-COMMUNITY-MIB:SNMP-COMMUNITY-MIB/snmpCommunityTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpCommunityEntry";
    ADD_KEY_TOKEN(snmpcommunityindex, "snmpCommunityIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpcommunityindex.is_set || is_set(snmpcommunityindex.yfilter)) leaf_name_data.push_back(snmpcommunityindex.get_name_leafdata());
    if (snmpcommunityname.is_set || is_set(snmpcommunityname.yfilter)) leaf_name_data.push_back(snmpcommunityname.get_name_leafdata());
    if (snmpcommunitysecurityname.is_set || is_set(snmpcommunitysecurityname.yfilter)) leaf_name_data.push_back(snmpcommunitysecurityname.get_name_leafdata());
    if (snmpcommunitycontextengineid.is_set || is_set(snmpcommunitycontextengineid.yfilter)) leaf_name_data.push_back(snmpcommunitycontextengineid.get_name_leafdata());
    if (snmpcommunitycontextname.is_set || is_set(snmpcommunitycontextname.yfilter)) leaf_name_data.push_back(snmpcommunitycontextname.get_name_leafdata());
    if (snmpcommunitytransporttag.is_set || is_set(snmpcommunitytransporttag.yfilter)) leaf_name_data.push_back(snmpcommunitytransporttag.get_name_leafdata());
    if (snmpcommunitystoragetype.is_set || is_set(snmpcommunitystoragetype.yfilter)) leaf_name_data.push_back(snmpcommunitystoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpCommunityIndex")
    {
        snmpcommunityindex = value;
        snmpcommunityindex.value_namespace = name_space;
        snmpcommunityindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunityName")
    {
        snmpcommunityname = value;
        snmpcommunityname.value_namespace = name_space;
        snmpcommunityname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunitySecurityName")
    {
        snmpcommunitysecurityname = value;
        snmpcommunitysecurityname.value_namespace = name_space;
        snmpcommunitysecurityname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunityContextEngineID")
    {
        snmpcommunitycontextengineid = value;
        snmpcommunitycontextengineid.value_namespace = name_space;
        snmpcommunitycontextengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunityContextName")
    {
        snmpcommunitycontextname = value;
        snmpcommunitycontextname.value_namespace = name_space;
        snmpcommunitycontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunityTransportTag")
    {
        snmpcommunitytransporttag = value;
        snmpcommunitytransporttag.value_namespace = name_space;
        snmpcommunitytransporttag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpCommunityStorageType")
    {
        snmpcommunitystoragetype = value;
        snmpcommunitystoragetype.value_namespace = name_space;
        snmpcommunitystoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpCommunityIndex")
    {
        snmpcommunityindex.yfilter = yfilter;
    }
    if(value_path == "snmpCommunityName")
    {
        snmpcommunityname.yfilter = yfilter;
    }
    if(value_path == "snmpCommunitySecurityName")
    {
        snmpcommunitysecurityname.yfilter = yfilter;
    }
    if(value_path == "snmpCommunityContextEngineID")
    {
        snmpcommunitycontextengineid.yfilter = yfilter;
    }
    if(value_path == "snmpCommunityContextName")
    {
        snmpcommunitycontextname.yfilter = yfilter;
    }
    if(value_path == "snmpCommunityTransportTag")
    {
        snmpcommunitytransporttag.yfilter = yfilter;
    }
    if(value_path == "snmpCommunityStorageType")
    {
        snmpcommunitystoragetype.yfilter = yfilter;
    }
}

bool SNMPCOMMUNITYMIB::SnmpCommunityTable::SnmpCommunityEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpCommunityIndex" || name == "snmpCommunityName" || name == "snmpCommunitySecurityName" || name == "snmpCommunityContextEngineID" || name == "snmpCommunityContextName" || name == "snmpCommunityTransportTag" || name == "snmpCommunityStorageType")
        return true;
    return false;
}


}
}

