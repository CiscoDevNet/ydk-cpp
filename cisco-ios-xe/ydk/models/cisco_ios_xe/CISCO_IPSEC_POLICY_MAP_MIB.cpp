
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_POLICY_MAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSEC_POLICY_MAP_MIB {

CISCOIPSECPOLICYMAPMIB::CISCOIPSECPOLICYMAPMIB()
    :
    ikepolmaptable(std::make_shared<CISCOIPSECPOLICYMAPMIB::IkePolMapTable>())
    , ipsecpolmaptable(std::make_shared<CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable>())
{
    ikepolmaptable->parent = this;
    ipsecpolmaptable->parent = this;

    yang_name = "CISCO-IPSEC-POLICY-MAP-MIB"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIPSECPOLICYMAPMIB::~CISCOIPSECPOLICYMAPMIB()
{
}

bool CISCOIPSECPOLICYMAPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ikepolmaptable !=  nullptr && ikepolmaptable->has_data())
	|| (ipsecpolmaptable !=  nullptr && ipsecpolmaptable->has_data());
}

bool CISCOIPSECPOLICYMAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ikepolmaptable !=  nullptr && ikepolmaptable->has_operation())
	|| (ipsecpolmaptable !=  nullptr && ipsecpolmaptable->has_operation());
}

std::string CISCOIPSECPOLICYMAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECPOLICYMAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikePolMapTable")
    {
        if(ikepolmaptable == nullptr)
        {
            ikepolmaptable = std::make_shared<CISCOIPSECPOLICYMAPMIB::IkePolMapTable>();
        }
        return ikepolmaptable;
    }

    if(child_yang_name == "ipSecPolMapTable")
    {
        if(ipsecpolmaptable == nullptr)
        {
            ipsecpolmaptable = std::make_shared<CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable>();
        }
        return ipsecpolmaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECPOLICYMAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ikepolmaptable != nullptr)
    {
        children["ikePolMapTable"] = ikepolmaptable;
    }

    if(ipsecpolmaptable != nullptr)
    {
        children["ipSecPolMapTable"] = ipsecpolmaptable;
    }

    return children;
}

void CISCOIPSECPOLICYMAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECPOLICYMAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPSECPOLICYMAPMIB>();
}

std::string CISCOIPSECPOLICYMAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPSECPOLICYMAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPSECPOLICYMAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPSECPOLICYMAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPSECPOLICYMAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikePolMapTable" || name == "ipSecPolMapTable")
        return true;
    return false;
}

CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapTable()
    :
    ikepolmapentry(this, {"ikepolmaptunindex"})
{

    yang_name = "ikePolMapTable"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECPOLICYMAPMIB::IkePolMapTable::~IkePolMapTable()
{
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ikepolmapentry.len(); index++)
    {
        if(ikepolmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::has_operation() const
{
    for (std::size_t index=0; index<ikepolmapentry.len(); index++)
    {
        if(ikepolmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECPOLICYMAPMIB::IkePolMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECPOLICYMAPMIB::IkePolMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikePolMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECPOLICYMAPMIB::IkePolMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::IkePolMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikePolMapEntry")
    {
        auto c = std::make_shared<CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry>();
        c->parent = this;
        ikepolmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECPOLICYMAPMIB::IkePolMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ikepolmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECPOLICYMAPMIB::IkePolMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECPOLICYMAPMIB::IkePolMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikePolMapEntry")
        return true;
    return false;
}

CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::IkePolMapEntry()
    :
    ikepolmaptunindex{YType::int32, "ikePolMapTunIndex"},
    ikepolmappolicynum{YType::int32, "ikePolMapPolicyNum"}
{

    yang_name = "ikePolMapEntry"; yang_parent_name = "ikePolMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::~IkePolMapEntry()
{
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ikepolmaptunindex.is_set
	|| ikepolmappolicynum.is_set;
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ikepolmaptunindex.yfilter)
	|| ydk::is_set(ikepolmappolicynum.yfilter);
}

std::string CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/ikePolMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikePolMapEntry";
    ADD_KEY_TOKEN(ikepolmaptunindex, "ikePolMapTunIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikepolmaptunindex.is_set || is_set(ikepolmaptunindex.yfilter)) leaf_name_data.push_back(ikepolmaptunindex.get_name_leafdata());
    if (ikepolmappolicynum.is_set || is_set(ikepolmappolicynum.yfilter)) leaf_name_data.push_back(ikepolmappolicynum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ikePolMapTunIndex")
    {
        ikepolmaptunindex = value;
        ikepolmaptunindex.value_namespace = name_space;
        ikepolmaptunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikePolMapPolicyNum")
    {
        ikepolmappolicynum = value;
        ikepolmappolicynum.value_namespace = name_space;
        ikepolmappolicynum.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ikePolMapTunIndex")
    {
        ikepolmaptunindex.yfilter = yfilter;
    }
    if(value_path == "ikePolMapPolicyNum")
    {
        ikepolmappolicynum.yfilter = yfilter;
    }
}

bool CISCOIPSECPOLICYMAPMIB::IkePolMapTable::IkePolMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikePolMapTunIndex" || name == "ikePolMapPolicyNum")
        return true;
    return false;
}

CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapTable()
    :
    ipsecpolmapentry(this, {"ipsecpolmaptunindex"})
{

    yang_name = "ipSecPolMapTable"; yang_parent_name = "CISCO-IPSEC-POLICY-MAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::~IpSecPolMapTable()
{
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsecpolmapentry.len(); index++)
    {
        if(ipsecpolmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::has_operation() const
{
    for (std::size_t index=0; index<ipsecpolmapentry.len(); index++)
    {
        if(ipsecpolmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSecPolMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipSecPolMapEntry")
    {
        auto c = std::make_shared<CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry>();
        c->parent = this;
        ipsecpolmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipsecpolmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipSecPolMapEntry")
        return true;
    return false;
}

CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::IpSecPolMapEntry()
    :
    ipsecpolmaptunindex{YType::int32, "ipSecPolMapTunIndex"},
    ipsecpolmapcryptomapname{YType::str, "ipSecPolMapCryptoMapName"},
    ipsecpolmapcryptomapnum{YType::int32, "ipSecPolMapCryptoMapNum"},
    ipsecpolmapaclstring{YType::str, "ipSecPolMapAclString"},
    ipsecpolmapacestring{YType::str, "ipSecPolMapAceString"}
{

    yang_name = "ipSecPolMapEntry"; yang_parent_name = "ipSecPolMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::~IpSecPolMapEntry()
{
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipsecpolmaptunindex.is_set
	|| ipsecpolmapcryptomapname.is_set
	|| ipsecpolmapcryptomapnum.is_set
	|| ipsecpolmapaclstring.is_set
	|| ipsecpolmapacestring.is_set;
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsecpolmaptunindex.yfilter)
	|| ydk::is_set(ipsecpolmapcryptomapname.yfilter)
	|| ydk::is_set(ipsecpolmapcryptomapnum.yfilter)
	|| ydk::is_set(ipsecpolmapaclstring.yfilter)
	|| ydk::is_set(ipsecpolmapacestring.yfilter);
}

std::string CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-POLICY-MAP-MIB:CISCO-IPSEC-POLICY-MAP-MIB/ipSecPolMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSecPolMapEntry";
    ADD_KEY_TOKEN(ipsecpolmaptunindex, "ipSecPolMapTunIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsecpolmaptunindex.is_set || is_set(ipsecpolmaptunindex.yfilter)) leaf_name_data.push_back(ipsecpolmaptunindex.get_name_leafdata());
    if (ipsecpolmapcryptomapname.is_set || is_set(ipsecpolmapcryptomapname.yfilter)) leaf_name_data.push_back(ipsecpolmapcryptomapname.get_name_leafdata());
    if (ipsecpolmapcryptomapnum.is_set || is_set(ipsecpolmapcryptomapnum.yfilter)) leaf_name_data.push_back(ipsecpolmapcryptomapnum.get_name_leafdata());
    if (ipsecpolmapaclstring.is_set || is_set(ipsecpolmapaclstring.yfilter)) leaf_name_data.push_back(ipsecpolmapaclstring.get_name_leafdata());
    if (ipsecpolmapacestring.is_set || is_set(ipsecpolmapacestring.yfilter)) leaf_name_data.push_back(ipsecpolmapacestring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipSecPolMapTunIndex")
    {
        ipsecpolmaptunindex = value;
        ipsecpolmaptunindex.value_namespace = name_space;
        ipsecpolmaptunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSecPolMapCryptoMapName")
    {
        ipsecpolmapcryptomapname = value;
        ipsecpolmapcryptomapname.value_namespace = name_space;
        ipsecpolmapcryptomapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSecPolMapCryptoMapNum")
    {
        ipsecpolmapcryptomapnum = value;
        ipsecpolmapcryptomapnum.value_namespace = name_space;
        ipsecpolmapcryptomapnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSecPolMapAclString")
    {
        ipsecpolmapaclstring = value;
        ipsecpolmapaclstring.value_namespace = name_space;
        ipsecpolmapaclstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSecPolMapAceString")
    {
        ipsecpolmapacestring = value;
        ipsecpolmapacestring.value_namespace = name_space;
        ipsecpolmapacestring.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipSecPolMapTunIndex")
    {
        ipsecpolmaptunindex.yfilter = yfilter;
    }
    if(value_path == "ipSecPolMapCryptoMapName")
    {
        ipsecpolmapcryptomapname.yfilter = yfilter;
    }
    if(value_path == "ipSecPolMapCryptoMapNum")
    {
        ipsecpolmapcryptomapnum.yfilter = yfilter;
    }
    if(value_path == "ipSecPolMapAclString")
    {
        ipsecpolmapaclstring.yfilter = yfilter;
    }
    if(value_path == "ipSecPolMapAceString")
    {
        ipsecpolmapacestring.yfilter = yfilter;
    }
}

bool CISCOIPSECPOLICYMAPMIB::IpSecPolMapTable::IpSecPolMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipSecPolMapTunIndex" || name == "ipSecPolMapCryptoMapName" || name == "ipSecPolMapCryptoMapNum" || name == "ipSecPolMapAclString" || name == "ipSecPolMapAceString")
        return true;
    return false;
}


}
}

