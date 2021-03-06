
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_OSPF_MIB {

CISCOOSPFMIB::CISCOOSPFMIB()
    :
    cospfgeneralgroup(std::make_shared<CISCOOSPFMIB::CospfGeneralGroup>())
    , cospflsdbtable(std::make_shared<CISCOOSPFMIB::CospfLsdbTable>())
    , cospfshamlinktable(std::make_shared<CISCOOSPFMIB::CospfShamLinkTable>())
    , cospflocallsdbtable(std::make_shared<CISCOOSPFMIB::CospfLocalLsdbTable>())
    , cospfvirtlocallsdbtable(std::make_shared<CISCOOSPFMIB::CospfVirtLocalLsdbTable>())
    , cospfshamlinknbrtable(std::make_shared<CISCOOSPFMIB::CospfShamLinkNbrTable>())
    , cospfshamlinkstable(std::make_shared<CISCOOSPFMIB::CospfShamLinksTable>())
{
    cospfgeneralgroup->parent = this;
    cospflsdbtable->parent = this;
    cospfshamlinktable->parent = this;
    cospflocallsdbtable->parent = this;
    cospfvirtlocallsdbtable->parent = this;
    cospfshamlinknbrtable->parent = this;
    cospfshamlinkstable->parent = this;

    yang_name = "CISCO-OSPF-MIB"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOOSPFMIB::~CISCOOSPFMIB()
{
}

bool CISCOOSPFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cospfgeneralgroup !=  nullptr && cospfgeneralgroup->has_data())
	|| (cospflsdbtable !=  nullptr && cospflsdbtable->has_data())
	|| (cospfshamlinktable !=  nullptr && cospfshamlinktable->has_data())
	|| (cospflocallsdbtable !=  nullptr && cospflocallsdbtable->has_data())
	|| (cospfvirtlocallsdbtable !=  nullptr && cospfvirtlocallsdbtable->has_data())
	|| (cospfshamlinknbrtable !=  nullptr && cospfshamlinknbrtable->has_data())
	|| (cospfshamlinkstable !=  nullptr && cospfshamlinkstable->has_data());
}

bool CISCOOSPFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cospfgeneralgroup !=  nullptr && cospfgeneralgroup->has_operation())
	|| (cospflsdbtable !=  nullptr && cospflsdbtable->has_operation())
	|| (cospfshamlinktable !=  nullptr && cospfshamlinktable->has_operation())
	|| (cospflocallsdbtable !=  nullptr && cospflocallsdbtable->has_operation())
	|| (cospfvirtlocallsdbtable !=  nullptr && cospfvirtlocallsdbtable->has_operation())
	|| (cospfshamlinknbrtable !=  nullptr && cospfshamlinknbrtable->has_operation())
	|| (cospfshamlinkstable !=  nullptr && cospfshamlinkstable->has_operation());
}

std::string CISCOOSPFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfGeneralGroup")
    {
        if(cospfgeneralgroup == nullptr)
        {
            cospfgeneralgroup = std::make_shared<CISCOOSPFMIB::CospfGeneralGroup>();
        }
        return cospfgeneralgroup;
    }

    if(child_yang_name == "cospfLsdbTable")
    {
        if(cospflsdbtable == nullptr)
        {
            cospflsdbtable = std::make_shared<CISCOOSPFMIB::CospfLsdbTable>();
        }
        return cospflsdbtable;
    }

    if(child_yang_name == "cospfShamLinkTable")
    {
        if(cospfshamlinktable == nullptr)
        {
            cospfshamlinktable = std::make_shared<CISCOOSPFMIB::CospfShamLinkTable>();
        }
        return cospfshamlinktable;
    }

    if(child_yang_name == "cospfLocalLsdbTable")
    {
        if(cospflocallsdbtable == nullptr)
        {
            cospflocallsdbtable = std::make_shared<CISCOOSPFMIB::CospfLocalLsdbTable>();
        }
        return cospflocallsdbtable;
    }

    if(child_yang_name == "cospfVirtLocalLsdbTable")
    {
        if(cospfvirtlocallsdbtable == nullptr)
        {
            cospfvirtlocallsdbtable = std::make_shared<CISCOOSPFMIB::CospfVirtLocalLsdbTable>();
        }
        return cospfvirtlocallsdbtable;
    }

    if(child_yang_name == "cospfShamLinkNbrTable")
    {
        if(cospfshamlinknbrtable == nullptr)
        {
            cospfshamlinknbrtable = std::make_shared<CISCOOSPFMIB::CospfShamLinkNbrTable>();
        }
        return cospfshamlinknbrtable;
    }

    if(child_yang_name == "cospfShamLinksTable")
    {
        if(cospfshamlinkstable == nullptr)
        {
            cospfshamlinkstable = std::make_shared<CISCOOSPFMIB::CospfShamLinksTable>();
        }
        return cospfshamlinkstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cospfgeneralgroup != nullptr)
    {
        _children["cospfGeneralGroup"] = cospfgeneralgroup;
    }

    if(cospflsdbtable != nullptr)
    {
        _children["cospfLsdbTable"] = cospflsdbtable;
    }

    if(cospfshamlinktable != nullptr)
    {
        _children["cospfShamLinkTable"] = cospfshamlinktable;
    }

    if(cospflocallsdbtable != nullptr)
    {
        _children["cospfLocalLsdbTable"] = cospflocallsdbtable;
    }

    if(cospfvirtlocallsdbtable != nullptr)
    {
        _children["cospfVirtLocalLsdbTable"] = cospfvirtlocallsdbtable;
    }

    if(cospfshamlinknbrtable != nullptr)
    {
        _children["cospfShamLinkNbrTable"] = cospfshamlinknbrtable;
    }

    if(cospfshamlinkstable != nullptr)
    {
        _children["cospfShamLinksTable"] = cospfshamlinkstable;
    }

    return _children;
}

void CISCOOSPFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::clone_ptr() const
{
    return std::make_shared<CISCOOSPFMIB>();
}

std::string CISCOOSPFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOOSPFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOOSPFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOOSPFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOOSPFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfGeneralGroup" || name == "cospfLsdbTable" || name == "cospfShamLinkTable" || name == "cospfLocalLsdbTable" || name == "cospfVirtLocalLsdbTable" || name == "cospfShamLinkNbrTable" || name == "cospfShamLinksTable")
        return true;
    return false;
}

CISCOOSPFMIB::CospfGeneralGroup::CospfGeneralGroup()
    :
    cospfrfc1583compatibility{YType::boolean, "cospfRFC1583Compatibility"},
    cospfopaquelsasupport{YType::boolean, "cospfOpaqueLsaSupport"},
    cospftrafficengineeringsupport{YType::boolean, "cospfTrafficEngineeringSupport"},
    cospfopaqueaslsacount{YType::uint32, "cospfOpaqueASLsaCount"},
    cospfopaqueaslsacksumsum{YType::uint32, "cospfOpaqueASLsaCksumSum"}
{

    yang_name = "cospfGeneralGroup"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfGeneralGroup::~CospfGeneralGroup()
{
}

bool CISCOOSPFMIB::CospfGeneralGroup::has_data() const
{
    if (is_presence_container) return true;
    return cospfrfc1583compatibility.is_set
	|| cospfopaquelsasupport.is_set
	|| cospftrafficengineeringsupport.is_set
	|| cospfopaqueaslsacount.is_set
	|| cospfopaqueaslsacksumsum.is_set;
}

bool CISCOOSPFMIB::CospfGeneralGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfrfc1583compatibility.yfilter)
	|| ydk::is_set(cospfopaquelsasupport.yfilter)
	|| ydk::is_set(cospftrafficengineeringsupport.yfilter)
	|| ydk::is_set(cospfopaqueaslsacount.yfilter)
	|| ydk::is_set(cospfopaqueaslsacksumsum.yfilter);
}

std::string CISCOOSPFMIB::CospfGeneralGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfGeneralGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfGeneralGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfGeneralGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfrfc1583compatibility.is_set || is_set(cospfrfc1583compatibility.yfilter)) leaf_name_data.push_back(cospfrfc1583compatibility.get_name_leafdata());
    if (cospfopaquelsasupport.is_set || is_set(cospfopaquelsasupport.yfilter)) leaf_name_data.push_back(cospfopaquelsasupport.get_name_leafdata());
    if (cospftrafficengineeringsupport.is_set || is_set(cospftrafficengineeringsupport.yfilter)) leaf_name_data.push_back(cospftrafficengineeringsupport.get_name_leafdata());
    if (cospfopaqueaslsacount.is_set || is_set(cospfopaqueaslsacount.yfilter)) leaf_name_data.push_back(cospfopaqueaslsacount.get_name_leafdata());
    if (cospfopaqueaslsacksumsum.is_set || is_set(cospfopaqueaslsacksumsum.yfilter)) leaf_name_data.push_back(cospfopaqueaslsacksumsum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfGeneralGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfGeneralGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfGeneralGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfRFC1583Compatibility")
    {
        cospfrfc1583compatibility = value;
        cospfrfc1583compatibility.value_namespace = name_space;
        cospfrfc1583compatibility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfOpaqueLsaSupport")
    {
        cospfopaquelsasupport = value;
        cospfopaquelsasupport.value_namespace = name_space;
        cospfopaquelsasupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfTrafficEngineeringSupport")
    {
        cospftrafficengineeringsupport = value;
        cospftrafficengineeringsupport.value_namespace = name_space;
        cospftrafficengineeringsupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfOpaqueASLsaCount")
    {
        cospfopaqueaslsacount = value;
        cospfopaqueaslsacount.value_namespace = name_space;
        cospfopaqueaslsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfOpaqueASLsaCksumSum")
    {
        cospfopaqueaslsacksumsum = value;
        cospfopaqueaslsacksumsum.value_namespace = name_space;
        cospfopaqueaslsacksumsum.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfGeneralGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfRFC1583Compatibility")
    {
        cospfrfc1583compatibility.yfilter = yfilter;
    }
    if(value_path == "cospfOpaqueLsaSupport")
    {
        cospfopaquelsasupport.yfilter = yfilter;
    }
    if(value_path == "cospfTrafficEngineeringSupport")
    {
        cospftrafficengineeringsupport.yfilter = yfilter;
    }
    if(value_path == "cospfOpaqueASLsaCount")
    {
        cospfopaqueaslsacount.yfilter = yfilter;
    }
    if(value_path == "cospfOpaqueASLsaCksumSum")
    {
        cospfopaqueaslsacksumsum.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfGeneralGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfRFC1583Compatibility" || name == "cospfOpaqueLsaSupport" || name == "cospfTrafficEngineeringSupport" || name == "cospfOpaqueASLsaCount" || name == "cospfOpaqueASLsaCksumSum")
        return true;
    return false;
}

CISCOOSPFMIB::CospfLsdbTable::CospfLsdbTable()
    :
    cospflsdbentry(this, {"ospflsdbareaid", "cospflsdbtype", "ospflsdblsid", "ospflsdbrouterid"})
{

    yang_name = "cospfLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfLsdbTable::~CospfLsdbTable()
{
}

bool CISCOOSPFMIB::CospfLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospflsdbentry.len(); index++)
    {
        if(cospflsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<cospflsdbentry.len(); index++)
    {
        if(cospflsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfLsdbEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry>();
        ent_->parent = this;
        cospflsdbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospflsdbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfLsdbEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::CospfLsdbEntry()
    :
    ospflsdbareaid{YType::str, "ospfLsdbAreaId"},
    cospflsdbtype{YType::enumeration, "cospfLsdbType"},
    ospflsdblsid{YType::str, "ospfLsdbLsid"},
    ospflsdbrouterid{YType::str, "ospfLsdbRouterId"},
    cospflsdbsequence{YType::int32, "cospfLsdbSequence"},
    cospflsdbage{YType::int32, "cospfLsdbAge"},
    cospflsdbchecksum{YType::int32, "cospfLsdbChecksum"},
    cospflsdbadvertisement{YType::str, "cospfLsdbAdvertisement"}
{

    yang_name = "cospfLsdbEntry"; yang_parent_name = "cospfLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::~CospfLsdbEntry()
{
}

bool CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospflsdbareaid.is_set
	|| cospflsdbtype.is_set
	|| ospflsdblsid.is_set
	|| ospflsdbrouterid.is_set
	|| cospflsdbsequence.is_set
	|| cospflsdbage.is_set
	|| cospflsdbchecksum.is_set
	|| cospflsdbadvertisement.is_set;
}

bool CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospflsdbareaid.yfilter)
	|| ydk::is_set(cospflsdbtype.yfilter)
	|| ydk::is_set(ospflsdblsid.yfilter)
	|| ydk::is_set(ospflsdbrouterid.yfilter)
	|| ydk::is_set(cospflsdbsequence.yfilter)
	|| ydk::is_set(cospflsdbage.yfilter)
	|| ydk::is_set(cospflsdbchecksum.yfilter)
	|| ydk::is_set(cospflsdbadvertisement.yfilter);
}

std::string CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLsdbEntry";
    ADD_KEY_TOKEN(ospflsdbareaid, "ospfLsdbAreaId");
    ADD_KEY_TOKEN(cospflsdbtype, "cospfLsdbType");
    ADD_KEY_TOKEN(ospflsdblsid, "ospfLsdbLsid");
    ADD_KEY_TOKEN(ospflsdbrouterid, "ospfLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflsdbareaid.is_set || is_set(ospflsdbareaid.yfilter)) leaf_name_data.push_back(ospflsdbareaid.get_name_leafdata());
    if (cospflsdbtype.is_set || is_set(cospflsdbtype.yfilter)) leaf_name_data.push_back(cospflsdbtype.get_name_leafdata());
    if (ospflsdblsid.is_set || is_set(ospflsdblsid.yfilter)) leaf_name_data.push_back(ospflsdblsid.get_name_leafdata());
    if (ospflsdbrouterid.is_set || is_set(ospflsdbrouterid.yfilter)) leaf_name_data.push_back(ospflsdbrouterid.get_name_leafdata());
    if (cospflsdbsequence.is_set || is_set(cospflsdbsequence.yfilter)) leaf_name_data.push_back(cospflsdbsequence.get_name_leafdata());
    if (cospflsdbage.is_set || is_set(cospflsdbage.yfilter)) leaf_name_data.push_back(cospflsdbage.get_name_leafdata());
    if (cospflsdbchecksum.is_set || is_set(cospflsdbchecksum.yfilter)) leaf_name_data.push_back(cospflsdbchecksum.get_name_leafdata());
    if (cospflsdbadvertisement.is_set || is_set(cospflsdbadvertisement.yfilter)) leaf_name_data.push_back(cospflsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid = value;
        ospflsdbareaid.value_namespace = name_space;
        ospflsdbareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLsdbType")
    {
        cospflsdbtype = value;
        cospflsdbtype.value_namespace = name_space;
        cospflsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid = value;
        ospflsdblsid.value_namespace = name_space;
        ospflsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid = value;
        ospflsdbrouterid.value_namespace = name_space;
        ospflsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLsdbSequence")
    {
        cospflsdbsequence = value;
        cospflsdbsequence.value_namespace = name_space;
        cospflsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLsdbAge")
    {
        cospflsdbage = value;
        cospflsdbage.value_namespace = name_space;
        cospflsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLsdbChecksum")
    {
        cospflsdbchecksum = value;
        cospflsdbchecksum.value_namespace = name_space;
        cospflsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLsdbAdvertisement")
    {
        cospflsdbadvertisement = value;
        cospflsdbadvertisement.value_namespace = name_space;
        cospflsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid.yfilter = yfilter;
    }
    if(value_path == "cospfLsdbType")
    {
        cospflsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "cospfLsdbSequence")
    {
        cospflsdbsequence.yfilter = yfilter;
    }
    if(value_path == "cospfLsdbAge")
    {
        cospflsdbage.yfilter = yfilter;
    }
    if(value_path == "cospfLsdbChecksum")
    {
        cospflsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "cospfLsdbAdvertisement")
    {
        cospflsdbadvertisement.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLsdbAreaId" || name == "cospfLsdbType" || name == "ospfLsdbLsid" || name == "ospfLsdbRouterId" || name == "cospfLsdbSequence" || name == "cospfLsdbAge" || name == "cospfLsdbChecksum" || name == "cospfLsdbAdvertisement")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkTable()
    :
    cospfshamlinkentry(this, {"cospfshamlinkareaid", "cospfshamlinklocalipaddress", "cospfshamlinkneighborid"})
{

    yang_name = "cospfShamLinkTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinkTable::~CospfShamLinkTable()
{
}

bool CISCOOSPFMIB::CospfShamLinkTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospfshamlinkentry.len(); index++)
    {
        if(cospfshamlinkentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfShamLinkTable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinkentry.len(); index++)
    {
        if(cospfshamlinkentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinkTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinkTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinkTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinkTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinkEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry>();
        ent_->parent = this;
        cospfshamlinkentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinkTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospfshamlinkentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfShamLinkTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfShamLinkTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfShamLinkTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinkEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::CospfShamLinkEntry()
    :
    cospfshamlinkareaid{YType::str, "cospfShamLinkAreaId"},
    cospfshamlinklocalipaddress{YType::str, "cospfShamLinkLocalIpAddress"},
    cospfshamlinkneighborid{YType::str, "cospfShamLinkNeighborId"},
    cospfshamlinkretransinterval{YType::int32, "cospfShamLinkRetransInterval"},
    cospfshamlinkhellointerval{YType::int32, "cospfShamLinkHelloInterval"},
    cospfshamlinkrtrdeadinterval{YType::int32, "cospfShamLinkRtrDeadInterval"},
    cospfshamlinkstate{YType::enumeration, "cospfShamLinkState"},
    cospfshamlinkevents{YType::uint32, "cospfShamLinkEvents"},
    cospfshamlinkmetric{YType::int32, "cospfShamLinkMetric"}
{

    yang_name = "cospfShamLinkEntry"; yang_parent_name = "cospfShamLinkTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::~CospfShamLinkEntry()
{
}

bool CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::has_data() const
{
    if (is_presence_container) return true;
    return cospfshamlinkareaid.is_set
	|| cospfshamlinklocalipaddress.is_set
	|| cospfshamlinkneighborid.is_set
	|| cospfshamlinkretransinterval.is_set
	|| cospfshamlinkhellointerval.is_set
	|| cospfshamlinkrtrdeadinterval.is_set
	|| cospfshamlinkstate.is_set
	|| cospfshamlinkevents.is_set
	|| cospfshamlinkmetric.is_set;
}

bool CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfshamlinkareaid.yfilter)
	|| ydk::is_set(cospfshamlinklocalipaddress.yfilter)
	|| ydk::is_set(cospfshamlinkneighborid.yfilter)
	|| ydk::is_set(cospfshamlinkretransinterval.yfilter)
	|| ydk::is_set(cospfshamlinkhellointerval.yfilter)
	|| ydk::is_set(cospfshamlinkrtrdeadinterval.yfilter)
	|| ydk::is_set(cospfshamlinkstate.yfilter)
	|| ydk::is_set(cospfshamlinkevents.yfilter)
	|| ydk::is_set(cospfshamlinkmetric.yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinkTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkEntry";
    ADD_KEY_TOKEN(cospfshamlinkareaid, "cospfShamLinkAreaId");
    ADD_KEY_TOKEN(cospfshamlinklocalipaddress, "cospfShamLinkLocalIpAddress");
    ADD_KEY_TOKEN(cospfshamlinkneighborid, "cospfShamLinkNeighborId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinkareaid.is_set || is_set(cospfshamlinkareaid.yfilter)) leaf_name_data.push_back(cospfshamlinkareaid.get_name_leafdata());
    if (cospfshamlinklocalipaddress.is_set || is_set(cospfshamlinklocalipaddress.yfilter)) leaf_name_data.push_back(cospfshamlinklocalipaddress.get_name_leafdata());
    if (cospfshamlinkneighborid.is_set || is_set(cospfshamlinkneighborid.yfilter)) leaf_name_data.push_back(cospfshamlinkneighborid.get_name_leafdata());
    if (cospfshamlinkretransinterval.is_set || is_set(cospfshamlinkretransinterval.yfilter)) leaf_name_data.push_back(cospfshamlinkretransinterval.get_name_leafdata());
    if (cospfshamlinkhellointerval.is_set || is_set(cospfshamlinkhellointerval.yfilter)) leaf_name_data.push_back(cospfshamlinkhellointerval.get_name_leafdata());
    if (cospfshamlinkrtrdeadinterval.is_set || is_set(cospfshamlinkrtrdeadinterval.yfilter)) leaf_name_data.push_back(cospfshamlinkrtrdeadinterval.get_name_leafdata());
    if (cospfshamlinkstate.is_set || is_set(cospfshamlinkstate.yfilter)) leaf_name_data.push_back(cospfshamlinkstate.get_name_leafdata());
    if (cospfshamlinkevents.is_set || is_set(cospfshamlinkevents.yfilter)) leaf_name_data.push_back(cospfshamlinkevents.get_name_leafdata());
    if (cospfshamlinkmetric.is_set || is_set(cospfshamlinkmetric.yfilter)) leaf_name_data.push_back(cospfshamlinkmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfShamLinkAreaId")
    {
        cospfshamlinkareaid = value;
        cospfshamlinkareaid.value_namespace = name_space;
        cospfshamlinkareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkLocalIpAddress")
    {
        cospfshamlinklocalipaddress = value;
        cospfshamlinklocalipaddress.value_namespace = name_space;
        cospfshamlinklocalipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNeighborId")
    {
        cospfshamlinkneighborid = value;
        cospfshamlinkneighborid.value_namespace = name_space;
        cospfshamlinkneighborid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkRetransInterval")
    {
        cospfshamlinkretransinterval = value;
        cospfshamlinkretransinterval.value_namespace = name_space;
        cospfshamlinkretransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkHelloInterval")
    {
        cospfshamlinkhellointerval = value;
        cospfshamlinkhellointerval.value_namespace = name_space;
        cospfshamlinkhellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkRtrDeadInterval")
    {
        cospfshamlinkrtrdeadinterval = value;
        cospfshamlinkrtrdeadinterval.value_namespace = name_space;
        cospfshamlinkrtrdeadinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkState")
    {
        cospfshamlinkstate = value;
        cospfshamlinkstate.value_namespace = name_space;
        cospfshamlinkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkEvents")
    {
        cospfshamlinkevents = value;
        cospfshamlinkevents.value_namespace = name_space;
        cospfshamlinkevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkMetric")
    {
        cospfshamlinkmetric = value;
        cospfshamlinkmetric.value_namespace = name_space;
        cospfshamlinkmetric.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfShamLinkAreaId")
    {
        cospfshamlinkareaid.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkLocalIpAddress")
    {
        cospfshamlinklocalipaddress.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNeighborId")
    {
        cospfshamlinkneighborid.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkRetransInterval")
    {
        cospfshamlinkretransinterval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkHelloInterval")
    {
        cospfshamlinkhellointerval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkRtrDeadInterval")
    {
        cospfshamlinkrtrdeadinterval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkState")
    {
        cospfshamlinkstate.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkEvents")
    {
        cospfshamlinkevents.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkMetric")
    {
        cospfshamlinkmetric.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinkAreaId" || name == "cospfShamLinkLocalIpAddress" || name == "cospfShamLinkNeighborId" || name == "cospfShamLinkRetransInterval" || name == "cospfShamLinkHelloInterval" || name == "cospfShamLinkRtrDeadInterval" || name == "cospfShamLinkState" || name == "cospfShamLinkEvents" || name == "cospfShamLinkMetric")
        return true;
    return false;
}

CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbTable()
    :
    cospflocallsdbentry(this, {"cospflocallsdbipaddress", "cospflocallsdbaddresslessif", "cospflocallsdbtype", "cospflocallsdblsid", "cospflocallsdbrouterid"})
{

    yang_name = "cospfLocalLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfLocalLsdbTable::~CospfLocalLsdbTable()
{
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospflocallsdbentry.len(); index++)
    {
        if(cospflocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<cospflocallsdbentry.len(); index++)
    {
        if(cospflocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfLocalLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfLocalLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfLocalLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfLocalLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfLocalLsdbEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry>();
        ent_->parent = this;
        cospflocallsdbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfLocalLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospflocallsdbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfLocalLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfLocalLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfLocalLsdbEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::CospfLocalLsdbEntry()
    :
    cospflocallsdbipaddress{YType::str, "cospfLocalLsdbIpAddress"},
    cospflocallsdbaddresslessif{YType::int32, "cospfLocalLsdbAddressLessIf"},
    cospflocallsdbtype{YType::enumeration, "cospfLocalLsdbType"},
    cospflocallsdblsid{YType::str, "cospfLocalLsdbLsid"},
    cospflocallsdbrouterid{YType::str, "cospfLocalLsdbRouterId"},
    cospflocallsdbsequence{YType::int32, "cospfLocalLsdbSequence"},
    cospflocallsdbage{YType::int32, "cospfLocalLsdbAge"},
    cospflocallsdbchecksum{YType::uint32, "cospfLocalLsdbChecksum"},
    cospflocallsdbadvertisement{YType::str, "cospfLocalLsdbAdvertisement"}
{

    yang_name = "cospfLocalLsdbEntry"; yang_parent_name = "cospfLocalLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::~CospfLocalLsdbEntry()
{
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return cospflocallsdbipaddress.is_set
	|| cospflocallsdbaddresslessif.is_set
	|| cospflocallsdbtype.is_set
	|| cospflocallsdblsid.is_set
	|| cospflocallsdbrouterid.is_set
	|| cospflocallsdbsequence.is_set
	|| cospflocallsdbage.is_set
	|| cospflocallsdbchecksum.is_set
	|| cospflocallsdbadvertisement.is_set;
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospflocallsdbipaddress.yfilter)
	|| ydk::is_set(cospflocallsdbaddresslessif.yfilter)
	|| ydk::is_set(cospflocallsdbtype.yfilter)
	|| ydk::is_set(cospflocallsdblsid.yfilter)
	|| ydk::is_set(cospflocallsdbrouterid.yfilter)
	|| ydk::is_set(cospflocallsdbsequence.yfilter)
	|| ydk::is_set(cospflocallsdbage.yfilter)
	|| ydk::is_set(cospflocallsdbchecksum.yfilter)
	|| ydk::is_set(cospflocallsdbadvertisement.yfilter);
}

std::string CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLocalLsdbEntry";
    ADD_KEY_TOKEN(cospflocallsdbipaddress, "cospfLocalLsdbIpAddress");
    ADD_KEY_TOKEN(cospflocallsdbaddresslessif, "cospfLocalLsdbAddressLessIf");
    ADD_KEY_TOKEN(cospflocallsdbtype, "cospfLocalLsdbType");
    ADD_KEY_TOKEN(cospflocallsdblsid, "cospfLocalLsdbLsid");
    ADD_KEY_TOKEN(cospflocallsdbrouterid, "cospfLocalLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospflocallsdbipaddress.is_set || is_set(cospflocallsdbipaddress.yfilter)) leaf_name_data.push_back(cospflocallsdbipaddress.get_name_leafdata());
    if (cospflocallsdbaddresslessif.is_set || is_set(cospflocallsdbaddresslessif.yfilter)) leaf_name_data.push_back(cospflocallsdbaddresslessif.get_name_leafdata());
    if (cospflocallsdbtype.is_set || is_set(cospflocallsdbtype.yfilter)) leaf_name_data.push_back(cospflocallsdbtype.get_name_leafdata());
    if (cospflocallsdblsid.is_set || is_set(cospflocallsdblsid.yfilter)) leaf_name_data.push_back(cospflocallsdblsid.get_name_leafdata());
    if (cospflocallsdbrouterid.is_set || is_set(cospflocallsdbrouterid.yfilter)) leaf_name_data.push_back(cospflocallsdbrouterid.get_name_leafdata());
    if (cospflocallsdbsequence.is_set || is_set(cospflocallsdbsequence.yfilter)) leaf_name_data.push_back(cospflocallsdbsequence.get_name_leafdata());
    if (cospflocallsdbage.is_set || is_set(cospflocallsdbage.yfilter)) leaf_name_data.push_back(cospflocallsdbage.get_name_leafdata());
    if (cospflocallsdbchecksum.is_set || is_set(cospflocallsdbchecksum.yfilter)) leaf_name_data.push_back(cospflocallsdbchecksum.get_name_leafdata());
    if (cospflocallsdbadvertisement.is_set || is_set(cospflocallsdbadvertisement.yfilter)) leaf_name_data.push_back(cospflocallsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfLocalLsdbIpAddress")
    {
        cospflocallsdbipaddress = value;
        cospflocallsdbipaddress.value_namespace = name_space;
        cospflocallsdbipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbAddressLessIf")
    {
        cospflocallsdbaddresslessif = value;
        cospflocallsdbaddresslessif.value_namespace = name_space;
        cospflocallsdbaddresslessif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbType")
    {
        cospflocallsdbtype = value;
        cospflocallsdbtype.value_namespace = name_space;
        cospflocallsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbLsid")
    {
        cospflocallsdblsid = value;
        cospflocallsdblsid.value_namespace = name_space;
        cospflocallsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbRouterId")
    {
        cospflocallsdbrouterid = value;
        cospflocallsdbrouterid.value_namespace = name_space;
        cospflocallsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbSequence")
    {
        cospflocallsdbsequence = value;
        cospflocallsdbsequence.value_namespace = name_space;
        cospflocallsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbAge")
    {
        cospflocallsdbage = value;
        cospflocallsdbage.value_namespace = name_space;
        cospflocallsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbChecksum")
    {
        cospflocallsdbchecksum = value;
        cospflocallsdbchecksum.value_namespace = name_space;
        cospflocallsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfLocalLsdbAdvertisement")
    {
        cospflocallsdbadvertisement = value;
        cospflocallsdbadvertisement.value_namespace = name_space;
        cospflocallsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfLocalLsdbIpAddress")
    {
        cospflocallsdbipaddress.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbAddressLessIf")
    {
        cospflocallsdbaddresslessif.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbType")
    {
        cospflocallsdbtype.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbLsid")
    {
        cospflocallsdblsid.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbRouterId")
    {
        cospflocallsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbSequence")
    {
        cospflocallsdbsequence.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbAge")
    {
        cospflocallsdbage.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbChecksum")
    {
        cospflocallsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "cospfLocalLsdbAdvertisement")
    {
        cospflocallsdbadvertisement.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfLocalLsdbIpAddress" || name == "cospfLocalLsdbAddressLessIf" || name == "cospfLocalLsdbType" || name == "cospfLocalLsdbLsid" || name == "cospfLocalLsdbRouterId" || name == "cospfLocalLsdbSequence" || name == "cospfLocalLsdbAge" || name == "cospfLocalLsdbChecksum" || name == "cospfLocalLsdbAdvertisement")
        return true;
    return false;
}

CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbTable()
    :
    cospfvirtlocallsdbentry(this, {"cospfvirtlocallsdbtransitarea", "cospfvirtlocallsdbneighbor", "cospfvirtlocallsdbtype", "cospfvirtlocallsdblsid", "cospfvirtlocallsdbrouterid"})
{

    yang_name = "cospfVirtLocalLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfVirtLocalLsdbTable::~CospfVirtLocalLsdbTable()
{
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospfvirtlocallsdbentry.len(); index++)
    {
        if(cospfvirtlocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<cospfvirtlocallsdbentry.len(); index++)
    {
        if(cospfvirtlocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfVirtLocalLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfVirtLocalLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfVirtLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfVirtLocalLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfVirtLocalLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfVirtLocalLsdbEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry>();
        ent_->parent = this;
        cospfvirtlocallsdbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfVirtLocalLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospfvirtlocallsdbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfVirtLocalLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfVirtLocalLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfVirtLocalLsdbEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::CospfVirtLocalLsdbEntry()
    :
    cospfvirtlocallsdbtransitarea{YType::str, "cospfVirtLocalLsdbTransitArea"},
    cospfvirtlocallsdbneighbor{YType::str, "cospfVirtLocalLsdbNeighbor"},
    cospfvirtlocallsdbtype{YType::enumeration, "cospfVirtLocalLsdbType"},
    cospfvirtlocallsdblsid{YType::str, "cospfVirtLocalLsdbLsid"},
    cospfvirtlocallsdbrouterid{YType::str, "cospfVirtLocalLsdbRouterId"},
    cospfvirtlocallsdbsequence{YType::int32, "cospfVirtLocalLsdbSequence"},
    cospfvirtlocallsdbage{YType::int32, "cospfVirtLocalLsdbAge"},
    cospfvirtlocallsdbchecksum{YType::uint32, "cospfVirtLocalLsdbChecksum"},
    cospfvirtlocallsdbadvertisement{YType::str, "cospfVirtLocalLsdbAdvertisement"}
{

    yang_name = "cospfVirtLocalLsdbEntry"; yang_parent_name = "cospfVirtLocalLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::~CospfVirtLocalLsdbEntry()
{
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return cospfvirtlocallsdbtransitarea.is_set
	|| cospfvirtlocallsdbneighbor.is_set
	|| cospfvirtlocallsdbtype.is_set
	|| cospfvirtlocallsdblsid.is_set
	|| cospfvirtlocallsdbrouterid.is_set
	|| cospfvirtlocallsdbsequence.is_set
	|| cospfvirtlocallsdbage.is_set
	|| cospfvirtlocallsdbchecksum.is_set
	|| cospfvirtlocallsdbadvertisement.is_set;
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfvirtlocallsdbtransitarea.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbneighbor.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbtype.yfilter)
	|| ydk::is_set(cospfvirtlocallsdblsid.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbrouterid.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbsequence.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbage.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbchecksum.yfilter)
	|| ydk::is_set(cospfvirtlocallsdbadvertisement.yfilter);
}

std::string CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfVirtLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfVirtLocalLsdbEntry";
    ADD_KEY_TOKEN(cospfvirtlocallsdbtransitarea, "cospfVirtLocalLsdbTransitArea");
    ADD_KEY_TOKEN(cospfvirtlocallsdbneighbor, "cospfVirtLocalLsdbNeighbor");
    ADD_KEY_TOKEN(cospfvirtlocallsdbtype, "cospfVirtLocalLsdbType");
    ADD_KEY_TOKEN(cospfvirtlocallsdblsid, "cospfVirtLocalLsdbLsid");
    ADD_KEY_TOKEN(cospfvirtlocallsdbrouterid, "cospfVirtLocalLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfvirtlocallsdbtransitarea.is_set || is_set(cospfvirtlocallsdbtransitarea.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbtransitarea.get_name_leafdata());
    if (cospfvirtlocallsdbneighbor.is_set || is_set(cospfvirtlocallsdbneighbor.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbneighbor.get_name_leafdata());
    if (cospfvirtlocallsdbtype.is_set || is_set(cospfvirtlocallsdbtype.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbtype.get_name_leafdata());
    if (cospfvirtlocallsdblsid.is_set || is_set(cospfvirtlocallsdblsid.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdblsid.get_name_leafdata());
    if (cospfvirtlocallsdbrouterid.is_set || is_set(cospfvirtlocallsdbrouterid.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbrouterid.get_name_leafdata());
    if (cospfvirtlocallsdbsequence.is_set || is_set(cospfvirtlocallsdbsequence.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbsequence.get_name_leafdata());
    if (cospfvirtlocallsdbage.is_set || is_set(cospfvirtlocallsdbage.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbage.get_name_leafdata());
    if (cospfvirtlocallsdbchecksum.is_set || is_set(cospfvirtlocallsdbchecksum.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbchecksum.get_name_leafdata());
    if (cospfvirtlocallsdbadvertisement.is_set || is_set(cospfvirtlocallsdbadvertisement.yfilter)) leaf_name_data.push_back(cospfvirtlocallsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfVirtLocalLsdbTransitArea")
    {
        cospfvirtlocallsdbtransitarea = value;
        cospfvirtlocallsdbtransitarea.value_namespace = name_space;
        cospfvirtlocallsdbtransitarea.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbNeighbor")
    {
        cospfvirtlocallsdbneighbor = value;
        cospfvirtlocallsdbneighbor.value_namespace = name_space;
        cospfvirtlocallsdbneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbType")
    {
        cospfvirtlocallsdbtype = value;
        cospfvirtlocallsdbtype.value_namespace = name_space;
        cospfvirtlocallsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbLsid")
    {
        cospfvirtlocallsdblsid = value;
        cospfvirtlocallsdblsid.value_namespace = name_space;
        cospfvirtlocallsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbRouterId")
    {
        cospfvirtlocallsdbrouterid = value;
        cospfvirtlocallsdbrouterid.value_namespace = name_space;
        cospfvirtlocallsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbSequence")
    {
        cospfvirtlocallsdbsequence = value;
        cospfvirtlocallsdbsequence.value_namespace = name_space;
        cospfvirtlocallsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbAge")
    {
        cospfvirtlocallsdbage = value;
        cospfvirtlocallsdbage.value_namespace = name_space;
        cospfvirtlocallsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbChecksum")
    {
        cospfvirtlocallsdbchecksum = value;
        cospfvirtlocallsdbchecksum.value_namespace = name_space;
        cospfvirtlocallsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfVirtLocalLsdbAdvertisement")
    {
        cospfvirtlocallsdbadvertisement = value;
        cospfvirtlocallsdbadvertisement.value_namespace = name_space;
        cospfvirtlocallsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfVirtLocalLsdbTransitArea")
    {
        cospfvirtlocallsdbtransitarea.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbNeighbor")
    {
        cospfvirtlocallsdbneighbor.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbType")
    {
        cospfvirtlocallsdbtype.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbLsid")
    {
        cospfvirtlocallsdblsid.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbRouterId")
    {
        cospfvirtlocallsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbSequence")
    {
        cospfvirtlocallsdbsequence.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbAge")
    {
        cospfvirtlocallsdbage.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbChecksum")
    {
        cospfvirtlocallsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "cospfVirtLocalLsdbAdvertisement")
    {
        cospfvirtlocallsdbadvertisement.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfVirtLocalLsdbTransitArea" || name == "cospfVirtLocalLsdbNeighbor" || name == "cospfVirtLocalLsdbType" || name == "cospfVirtLocalLsdbLsid" || name == "cospfVirtLocalLsdbRouterId" || name == "cospfVirtLocalLsdbSequence" || name == "cospfVirtLocalLsdbAge" || name == "cospfVirtLocalLsdbChecksum" || name == "cospfVirtLocalLsdbAdvertisement")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrTable()
    :
    cospfshamlinknbrentry(this, {"cospfshamlinkslocalipaddrtype", "cospfshamlinkslocalipaddr", "cospfshamlinknbrarea", "cospfshamlinknbripaddrtype", "cospfshamlinknbripaddr"})
{

    yang_name = "cospfShamLinkNbrTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinkNbrTable::~CospfShamLinkNbrTable()
{
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospfshamlinknbrentry.len(); index++)
    {
        if(cospfshamlinknbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinknbrentry.len(); index++)
    {
        if(cospfshamlinknbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinkNbrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinkNbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinkNbrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinkNbrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinkNbrEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry>();
        ent_->parent = this;
        cospfshamlinknbrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinkNbrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospfshamlinknbrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfShamLinkNbrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfShamLinkNbrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinkNbrEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrEntry()
    :
    cospfshamlinkslocalipaddrtype{YType::enumeration, "cospfShamLinksLocalIpAddrType"},
    cospfshamlinkslocalipaddr{YType::str, "cospfShamLinksLocalIpAddr"},
    cospfshamlinknbrarea{YType::str, "cospfShamLinkNbrArea"},
    cospfshamlinknbripaddrtype{YType::enumeration, "cospfShamLinkNbrIpAddrType"},
    cospfshamlinknbripaddr{YType::str, "cospfShamLinkNbrIpAddr"},
    cospfshamlinknbrrtrid{YType::str, "cospfShamLinkNbrRtrId"},
    cospfshamlinknbroptions{YType::int32, "cospfShamLinkNbrOptions"},
    cospfshamlinknbrstate{YType::enumeration, "cospfShamLinkNbrState"},
    cospfshamlinknbrevents{YType::uint32, "cospfShamLinkNbrEvents"},
    cospfshamlinknbrlsretransqlen{YType::uint32, "cospfShamLinkNbrLsRetransQLen"},
    cospfshamlinknbrhellosuppressed{YType::boolean, "cospfShamLinkNbrHelloSuppressed"}
{

    yang_name = "cospfShamLinkNbrEntry"; yang_parent_name = "cospfShamLinkNbrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::~CospfShamLinkNbrEntry()
{
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::has_data() const
{
    if (is_presence_container) return true;
    return cospfshamlinkslocalipaddrtype.is_set
	|| cospfshamlinkslocalipaddr.is_set
	|| cospfshamlinknbrarea.is_set
	|| cospfshamlinknbripaddrtype.is_set
	|| cospfshamlinknbripaddr.is_set
	|| cospfshamlinknbrrtrid.is_set
	|| cospfshamlinknbroptions.is_set
	|| cospfshamlinknbrstate.is_set
	|| cospfshamlinknbrevents.is_set
	|| cospfshamlinknbrlsretransqlen.is_set
	|| cospfshamlinknbrhellosuppressed.is_set;
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfshamlinkslocalipaddrtype.yfilter)
	|| ydk::is_set(cospfshamlinkslocalipaddr.yfilter)
	|| ydk::is_set(cospfshamlinknbrarea.yfilter)
	|| ydk::is_set(cospfshamlinknbripaddrtype.yfilter)
	|| ydk::is_set(cospfshamlinknbripaddr.yfilter)
	|| ydk::is_set(cospfshamlinknbrrtrid.yfilter)
	|| ydk::is_set(cospfshamlinknbroptions.yfilter)
	|| ydk::is_set(cospfshamlinknbrstate.yfilter)
	|| ydk::is_set(cospfshamlinknbrevents.yfilter)
	|| ydk::is_set(cospfshamlinknbrlsretransqlen.yfilter)
	|| ydk::is_set(cospfshamlinknbrhellosuppressed.yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinkNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkNbrEntry";
    ADD_KEY_TOKEN(cospfshamlinkslocalipaddrtype, "cospfShamLinksLocalIpAddrType");
    ADD_KEY_TOKEN(cospfshamlinkslocalipaddr, "cospfShamLinksLocalIpAddr");
    ADD_KEY_TOKEN(cospfshamlinknbrarea, "cospfShamLinkNbrArea");
    ADD_KEY_TOKEN(cospfshamlinknbripaddrtype, "cospfShamLinkNbrIpAddrType");
    ADD_KEY_TOKEN(cospfshamlinknbripaddr, "cospfShamLinkNbrIpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinkslocalipaddrtype.is_set || is_set(cospfshamlinkslocalipaddrtype.yfilter)) leaf_name_data.push_back(cospfshamlinkslocalipaddrtype.get_name_leafdata());
    if (cospfshamlinkslocalipaddr.is_set || is_set(cospfshamlinkslocalipaddr.yfilter)) leaf_name_data.push_back(cospfshamlinkslocalipaddr.get_name_leafdata());
    if (cospfshamlinknbrarea.is_set || is_set(cospfshamlinknbrarea.yfilter)) leaf_name_data.push_back(cospfshamlinknbrarea.get_name_leafdata());
    if (cospfshamlinknbripaddrtype.is_set || is_set(cospfshamlinknbripaddrtype.yfilter)) leaf_name_data.push_back(cospfshamlinknbripaddrtype.get_name_leafdata());
    if (cospfshamlinknbripaddr.is_set || is_set(cospfshamlinknbripaddr.yfilter)) leaf_name_data.push_back(cospfshamlinknbripaddr.get_name_leafdata());
    if (cospfshamlinknbrrtrid.is_set || is_set(cospfshamlinknbrrtrid.yfilter)) leaf_name_data.push_back(cospfshamlinknbrrtrid.get_name_leafdata());
    if (cospfshamlinknbroptions.is_set || is_set(cospfshamlinknbroptions.yfilter)) leaf_name_data.push_back(cospfshamlinknbroptions.get_name_leafdata());
    if (cospfshamlinknbrstate.is_set || is_set(cospfshamlinknbrstate.yfilter)) leaf_name_data.push_back(cospfshamlinknbrstate.get_name_leafdata());
    if (cospfshamlinknbrevents.is_set || is_set(cospfshamlinknbrevents.yfilter)) leaf_name_data.push_back(cospfshamlinknbrevents.get_name_leafdata());
    if (cospfshamlinknbrlsretransqlen.is_set || is_set(cospfshamlinknbrlsretransqlen.yfilter)) leaf_name_data.push_back(cospfshamlinknbrlsretransqlen.get_name_leafdata());
    if (cospfshamlinknbrhellosuppressed.is_set || is_set(cospfshamlinknbrhellosuppressed.yfilter)) leaf_name_data.push_back(cospfshamlinknbrhellosuppressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype = value;
        cospfshamlinkslocalipaddrtype.value_namespace = name_space;
        cospfshamlinkslocalipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr = value;
        cospfshamlinkslocalipaddr.value_namespace = name_space;
        cospfshamlinkslocalipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrArea")
    {
        cospfshamlinknbrarea = value;
        cospfshamlinknbrarea.value_namespace = name_space;
        cospfshamlinknbrarea.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrIpAddrType")
    {
        cospfshamlinknbripaddrtype = value;
        cospfshamlinknbripaddrtype.value_namespace = name_space;
        cospfshamlinknbripaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrIpAddr")
    {
        cospfshamlinknbripaddr = value;
        cospfshamlinknbripaddr.value_namespace = name_space;
        cospfshamlinknbripaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrRtrId")
    {
        cospfshamlinknbrrtrid = value;
        cospfshamlinknbrrtrid.value_namespace = name_space;
        cospfshamlinknbrrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrOptions")
    {
        cospfshamlinknbroptions = value;
        cospfshamlinknbroptions.value_namespace = name_space;
        cospfshamlinknbroptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrState")
    {
        cospfshamlinknbrstate = value;
        cospfshamlinknbrstate.value_namespace = name_space;
        cospfshamlinknbrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrEvents")
    {
        cospfshamlinknbrevents = value;
        cospfshamlinknbrevents.value_namespace = name_space;
        cospfshamlinknbrevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrLsRetransQLen")
    {
        cospfshamlinknbrlsretransqlen = value;
        cospfshamlinknbrlsretransqlen.value_namespace = name_space;
        cospfshamlinknbrlsretransqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinkNbrHelloSuppressed")
    {
        cospfshamlinknbrhellosuppressed = value;
        cospfshamlinknbrhellosuppressed.value_namespace = name_space;
        cospfshamlinknbrhellosuppressed.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrArea")
    {
        cospfshamlinknbrarea.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrIpAddrType")
    {
        cospfshamlinknbripaddrtype.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrIpAddr")
    {
        cospfshamlinknbripaddr.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrRtrId")
    {
        cospfshamlinknbrrtrid.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrOptions")
    {
        cospfshamlinknbroptions.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrState")
    {
        cospfshamlinknbrstate.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrEvents")
    {
        cospfshamlinknbrevents.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrLsRetransQLen")
    {
        cospfshamlinknbrlsretransqlen.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinkNbrHelloSuppressed")
    {
        cospfshamlinknbrhellosuppressed.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinksLocalIpAddrType" || name == "cospfShamLinksLocalIpAddr" || name == "cospfShamLinkNbrArea" || name == "cospfShamLinkNbrIpAddrType" || name == "cospfShamLinkNbrIpAddr" || name == "cospfShamLinkNbrRtrId" || name == "cospfShamLinkNbrOptions" || name == "cospfShamLinkNbrState" || name == "cospfShamLinkNbrEvents" || name == "cospfShamLinkNbrLsRetransQLen" || name == "cospfShamLinkNbrHelloSuppressed")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksTable()
    :
    cospfshamlinksentry(this, {"cospfshamlinksareaid", "cospfshamlinkslocalipaddrtype", "cospfshamlinkslocalipaddr", "cospfshamlinksremoteipaddrtype", "cospfshamlinksremoteipaddr"})
{

    yang_name = "cospfShamLinksTable"; yang_parent_name = "CISCO-OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinksTable::~CospfShamLinksTable()
{
}

bool CISCOOSPFMIB::CospfShamLinksTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cospfshamlinksentry.len(); index++)
    {
        if(cospfshamlinksentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOOSPFMIB::CospfShamLinksTable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinksentry.len(); index++)
    {
        if(cospfshamlinksentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinksTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinksTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinksTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinksTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinksTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinksEntry")
    {
        auto ent_ = std::make_shared<CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry>();
        ent_->parent = this;
        cospfshamlinksentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinksTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cospfshamlinksentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOOSPFMIB::CospfShamLinksTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFMIB::CospfShamLinksTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOOSPFMIB::CospfShamLinksTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinksEntry")
        return true;
    return false;
}

CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::CospfShamLinksEntry()
    :
    cospfshamlinksareaid{YType::str, "cospfShamLinksAreaId"},
    cospfshamlinkslocalipaddrtype{YType::enumeration, "cospfShamLinksLocalIpAddrType"},
    cospfshamlinkslocalipaddr{YType::str, "cospfShamLinksLocalIpAddr"},
    cospfshamlinksremoteipaddrtype{YType::enumeration, "cospfShamLinksRemoteIpAddrType"},
    cospfshamlinksremoteipaddr{YType::str, "cospfShamLinksRemoteIpAddr"},
    cospfshamlinksretransinterval{YType::int32, "cospfShamLinksRetransInterval"},
    cospfshamlinkshellointerval{YType::int32, "cospfShamLinksHelloInterval"},
    cospfshamlinksrtrdeadinterval{YType::int32, "cospfShamLinksRtrDeadInterval"},
    cospfshamlinksstate{YType::enumeration, "cospfShamLinksState"},
    cospfshamlinksevents{YType::uint32, "cospfShamLinksEvents"},
    cospfshamlinksmetric{YType::int32, "cospfShamLinksMetric"}
{

    yang_name = "cospfShamLinksEntry"; yang_parent_name = "cospfShamLinksTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::~CospfShamLinksEntry()
{
}

bool CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::has_data() const
{
    if (is_presence_container) return true;
    return cospfshamlinksareaid.is_set
	|| cospfshamlinkslocalipaddrtype.is_set
	|| cospfshamlinkslocalipaddr.is_set
	|| cospfshamlinksremoteipaddrtype.is_set
	|| cospfshamlinksremoteipaddr.is_set
	|| cospfshamlinksretransinterval.is_set
	|| cospfshamlinkshellointerval.is_set
	|| cospfshamlinksrtrdeadinterval.is_set
	|| cospfshamlinksstate.is_set
	|| cospfshamlinksevents.is_set
	|| cospfshamlinksmetric.is_set;
}

bool CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfshamlinksareaid.yfilter)
	|| ydk::is_set(cospfshamlinkslocalipaddrtype.yfilter)
	|| ydk::is_set(cospfshamlinkslocalipaddr.yfilter)
	|| ydk::is_set(cospfshamlinksremoteipaddrtype.yfilter)
	|| ydk::is_set(cospfshamlinksremoteipaddr.yfilter)
	|| ydk::is_set(cospfshamlinksretransinterval.yfilter)
	|| ydk::is_set(cospfshamlinkshellointerval.yfilter)
	|| ydk::is_set(cospfshamlinksrtrdeadinterval.yfilter)
	|| ydk::is_set(cospfshamlinksstate.yfilter)
	|| ydk::is_set(cospfshamlinksevents.yfilter)
	|| ydk::is_set(cospfshamlinksmetric.yfilter);
}

std::string CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinksTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinksEntry";
    ADD_KEY_TOKEN(cospfshamlinksareaid, "cospfShamLinksAreaId");
    ADD_KEY_TOKEN(cospfshamlinkslocalipaddrtype, "cospfShamLinksLocalIpAddrType");
    ADD_KEY_TOKEN(cospfshamlinkslocalipaddr, "cospfShamLinksLocalIpAddr");
    ADD_KEY_TOKEN(cospfshamlinksremoteipaddrtype, "cospfShamLinksRemoteIpAddrType");
    ADD_KEY_TOKEN(cospfshamlinksremoteipaddr, "cospfShamLinksRemoteIpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinksareaid.is_set || is_set(cospfshamlinksareaid.yfilter)) leaf_name_data.push_back(cospfshamlinksareaid.get_name_leafdata());
    if (cospfshamlinkslocalipaddrtype.is_set || is_set(cospfshamlinkslocalipaddrtype.yfilter)) leaf_name_data.push_back(cospfshamlinkslocalipaddrtype.get_name_leafdata());
    if (cospfshamlinkslocalipaddr.is_set || is_set(cospfshamlinkslocalipaddr.yfilter)) leaf_name_data.push_back(cospfshamlinkslocalipaddr.get_name_leafdata());
    if (cospfshamlinksremoteipaddrtype.is_set || is_set(cospfshamlinksremoteipaddrtype.yfilter)) leaf_name_data.push_back(cospfshamlinksremoteipaddrtype.get_name_leafdata());
    if (cospfshamlinksremoteipaddr.is_set || is_set(cospfshamlinksremoteipaddr.yfilter)) leaf_name_data.push_back(cospfshamlinksremoteipaddr.get_name_leafdata());
    if (cospfshamlinksretransinterval.is_set || is_set(cospfshamlinksretransinterval.yfilter)) leaf_name_data.push_back(cospfshamlinksretransinterval.get_name_leafdata());
    if (cospfshamlinkshellointerval.is_set || is_set(cospfshamlinkshellointerval.yfilter)) leaf_name_data.push_back(cospfshamlinkshellointerval.get_name_leafdata());
    if (cospfshamlinksrtrdeadinterval.is_set || is_set(cospfshamlinksrtrdeadinterval.yfilter)) leaf_name_data.push_back(cospfshamlinksrtrdeadinterval.get_name_leafdata());
    if (cospfshamlinksstate.is_set || is_set(cospfshamlinksstate.yfilter)) leaf_name_data.push_back(cospfshamlinksstate.get_name_leafdata());
    if (cospfshamlinksevents.is_set || is_set(cospfshamlinksevents.yfilter)) leaf_name_data.push_back(cospfshamlinksevents.get_name_leafdata());
    if (cospfshamlinksmetric.is_set || is_set(cospfshamlinksmetric.yfilter)) leaf_name_data.push_back(cospfshamlinksmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfShamLinksAreaId")
    {
        cospfshamlinksareaid = value;
        cospfshamlinksareaid.value_namespace = name_space;
        cospfshamlinksareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype = value;
        cospfshamlinkslocalipaddrtype.value_namespace = name_space;
        cospfshamlinkslocalipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr = value;
        cospfshamlinkslocalipaddr.value_namespace = name_space;
        cospfshamlinkslocalipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksRemoteIpAddrType")
    {
        cospfshamlinksremoteipaddrtype = value;
        cospfshamlinksremoteipaddrtype.value_namespace = name_space;
        cospfshamlinksremoteipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksRemoteIpAddr")
    {
        cospfshamlinksremoteipaddr = value;
        cospfshamlinksremoteipaddr.value_namespace = name_space;
        cospfshamlinksremoteipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksRetransInterval")
    {
        cospfshamlinksretransinterval = value;
        cospfshamlinksretransinterval.value_namespace = name_space;
        cospfshamlinksretransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksHelloInterval")
    {
        cospfshamlinkshellointerval = value;
        cospfshamlinkshellointerval.value_namespace = name_space;
        cospfshamlinkshellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksRtrDeadInterval")
    {
        cospfshamlinksrtrdeadinterval = value;
        cospfshamlinksrtrdeadinterval.value_namespace = name_space;
        cospfshamlinksrtrdeadinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksState")
    {
        cospfshamlinksstate = value;
        cospfshamlinksstate.value_namespace = name_space;
        cospfshamlinksstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksEvents")
    {
        cospfshamlinksevents = value;
        cospfshamlinksevents.value_namespace = name_space;
        cospfshamlinksevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfShamLinksMetric")
    {
        cospfshamlinksmetric = value;
        cospfshamlinksmetric.value_namespace = name_space;
        cospfshamlinksmetric.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfShamLinksAreaId")
    {
        cospfshamlinksareaid.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksRemoteIpAddrType")
    {
        cospfshamlinksremoteipaddrtype.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksRemoteIpAddr")
    {
        cospfshamlinksremoteipaddr.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksRetransInterval")
    {
        cospfshamlinksretransinterval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksHelloInterval")
    {
        cospfshamlinkshellointerval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksRtrDeadInterval")
    {
        cospfshamlinksrtrdeadinterval.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksState")
    {
        cospfshamlinksstate.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksEvents")
    {
        cospfshamlinksevents.yfilter = yfilter;
    }
    if(value_path == "cospfShamLinksMetric")
    {
        cospfshamlinksmetric.yfilter = yfilter;
    }
}

bool CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfShamLinksAreaId" || name == "cospfShamLinksLocalIpAddrType" || name == "cospfShamLinksLocalIpAddr" || name == "cospfShamLinksRemoteIpAddrType" || name == "cospfShamLinksRemoteIpAddr" || name == "cospfShamLinksRetransInterval" || name == "cospfShamLinksHelloInterval" || name == "cospfShamLinksRtrDeadInterval" || name == "cospfShamLinksState" || name == "cospfShamLinksEvents" || name == "cospfShamLinksMetric")
        return true;
    return false;
}

const Enum::YLeaf CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::CospfLsdbType::areaOpaqueLink {10, "areaOpaqueLink"};
const Enum::YLeaf CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::CospfLsdbType::asOpaqueLink {11, "asOpaqueLink"};

const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::CospfShamLinkState::down {1, "down"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::CospfShamLinkState::pointToPoint {4, "pointToPoint"};

const Enum::YLeaf CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::CospfLocalLsdbType::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::CospfVirtLocalLsdbType::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::down {1, "down"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::attempt {2, "attempt"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::init {3, "init"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::twoWay {4, "twoWay"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::exchange {6, "exchange"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::loading {7, "loading"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState::full {8, "full"};

const Enum::YLeaf CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::CospfShamLinksState::down {1, "down"};
const Enum::YLeaf CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::CospfShamLinksState::pointToPoint {4, "pointToPoint"};


}
}

