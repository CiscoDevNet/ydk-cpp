
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_MPLS_TE_EXT_STD_03_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_TE_EXT_STD_03_MIB {

CISCOIETFMPLSTEEXTSTD03MIB::CISCOIETFMPLSTEEXTSTD03MIB()
    :
    cmplsnodeconfigtable(std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable>())
    , cmplsnodeipmaptable(std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable>())
    , cmplsnodeiccmaptable(std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable>())
    , cmplstunnelexttable(std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable>())
    , cmplstunnelreverseperftable(std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable>())
{
    cmplsnodeconfigtable->parent = this;
    cmplsnodeipmaptable->parent = this;
    cmplsnodeiccmaptable->parent = this;
    cmplstunnelexttable->parent = this;
    cmplstunnelreverseperftable->parent = this;

    yang_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::~CISCOIETFMPLSTEEXTSTD03MIB()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::has_data() const
{
    if (is_presence_container) return true;
    return (cmplsnodeconfigtable !=  nullptr && cmplsnodeconfigtable->has_data())
	|| (cmplsnodeipmaptable !=  nullptr && cmplsnodeipmaptable->has_data())
	|| (cmplsnodeiccmaptable !=  nullptr && cmplsnodeiccmaptable->has_data())
	|| (cmplstunnelexttable !=  nullptr && cmplstunnelexttable->has_data())
	|| (cmplstunnelreverseperftable !=  nullptr && cmplstunnelreverseperftable->has_data());
}

bool CISCOIETFMPLSTEEXTSTD03MIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsnodeconfigtable !=  nullptr && cmplsnodeconfigtable->has_operation())
	|| (cmplsnodeipmaptable !=  nullptr && cmplsnodeipmaptable->has_operation())
	|| (cmplsnodeiccmaptable !=  nullptr && cmplsnodeiccmaptable->has_operation())
	|| (cmplstunnelexttable !=  nullptr && cmplstunnelexttable->has_operation())
	|| (cmplstunnelreverseperftable !=  nullptr && cmplstunnelreverseperftable->has_operation());
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigTable")
    {
        if(cmplsnodeconfigtable == nullptr)
        {
            cmplsnodeconfigtable = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable>();
        }
        return cmplsnodeconfigtable;
    }

    if(child_yang_name == "cmplsNodeIpMapTable")
    {
        if(cmplsnodeipmaptable == nullptr)
        {
            cmplsnodeipmaptable = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable>();
        }
        return cmplsnodeipmaptable;
    }

    if(child_yang_name == "cmplsNodeIccMapTable")
    {
        if(cmplsnodeiccmaptable == nullptr)
        {
            cmplsnodeiccmaptable = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable>();
        }
        return cmplsnodeiccmaptable;
    }

    if(child_yang_name == "cmplsTunnelExtTable")
    {
        if(cmplstunnelexttable == nullptr)
        {
            cmplstunnelexttable = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable>();
        }
        return cmplstunnelexttable;
    }

    if(child_yang_name == "cmplsTunnelReversePerfTable")
    {
        if(cmplstunnelreverseperftable == nullptr)
        {
            cmplstunnelreverseperftable = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable>();
        }
        return cmplstunnelreverseperftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmplsnodeconfigtable != nullptr)
    {
        _children["cmplsNodeConfigTable"] = cmplsnodeconfigtable;
    }

    if(cmplsnodeipmaptable != nullptr)
    {
        _children["cmplsNodeIpMapTable"] = cmplsnodeipmaptable;
    }

    if(cmplsnodeiccmaptable != nullptr)
    {
        _children["cmplsNodeIccMapTable"] = cmplsnodeiccmaptable;
    }

    if(cmplstunnelexttable != nullptr)
    {
        _children["cmplsTunnelExtTable"] = cmplstunnelexttable;
    }

    if(cmplstunnelreverseperftable != nullptr)
    {
        _children["cmplsTunnelReversePerfTable"] = cmplstunnelreverseperftable;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB>();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFMPLSTEEXTSTD03MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFMPLSTEEXTSTD03MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigTable" || name == "cmplsNodeIpMapTable" || name == "cmplsNodeIccMapTable" || name == "cmplsTunnelExtTable" || name == "cmplsTunnelReversePerfTable")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigTable()
    :
    cmplsnodeconfigentry(this, {"cmplsnodeconfiglocalid"})
{

    yang_name = "cmplsNodeConfigTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::~CmplsNodeConfigTable()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsnodeconfigentry.len(); index++)
    {
        if(cmplsnodeconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeconfigentry.len(); index++)
    {
        if(cmplsnodeconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry>();
        ent_->parent = this;
        cmplsnodeconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsnodeconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigEntry")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::CmplsNodeConfigEntry()
    :
    cmplsnodeconfiglocalid{YType::uint32, "cmplsNodeConfigLocalId"},
    cmplsnodeconfigglobalid{YType::str, "cmplsNodeConfigGlobalId"},
    cmplsnodeconfignodeid{YType::uint32, "cmplsNodeConfigNodeId"},
    cmplsnodeconfigiccid{YType::str, "cmplsNodeConfigIccId"},
    cmplsnodeconfigrowstatus{YType::enumeration, "cmplsNodeConfigRowStatus"},
    cmplsnodeconfigstoragetype{YType::enumeration, "cmplsNodeConfigStorageType"}
{

    yang_name = "cmplsNodeConfigEntry"; yang_parent_name = "cmplsNodeConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::~CmplsNodeConfigEntry()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsnodeconfiglocalid.is_set
	|| cmplsnodeconfigglobalid.is_set
	|| cmplsnodeconfignodeid.is_set
	|| cmplsnodeconfigiccid.is_set
	|| cmplsnodeconfigrowstatus.is_set
	|| cmplsnodeconfigstoragetype.is_set;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeconfiglocalid.yfilter)
	|| ydk::is_set(cmplsnodeconfigglobalid.yfilter)
	|| ydk::is_set(cmplsnodeconfignodeid.yfilter)
	|| ydk::is_set(cmplsnodeconfigiccid.yfilter)
	|| ydk::is_set(cmplsnodeconfigrowstatus.yfilter)
	|| ydk::is_set(cmplsnodeconfigstoragetype.yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigEntry";
    ADD_KEY_TOKEN(cmplsnodeconfiglocalid, "cmplsNodeConfigLocalId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeconfiglocalid.is_set || is_set(cmplsnodeconfiglocalid.yfilter)) leaf_name_data.push_back(cmplsnodeconfiglocalid.get_name_leafdata());
    if (cmplsnodeconfigglobalid.is_set || is_set(cmplsnodeconfigglobalid.yfilter)) leaf_name_data.push_back(cmplsnodeconfigglobalid.get_name_leafdata());
    if (cmplsnodeconfignodeid.is_set || is_set(cmplsnodeconfignodeid.yfilter)) leaf_name_data.push_back(cmplsnodeconfignodeid.get_name_leafdata());
    if (cmplsnodeconfigiccid.is_set || is_set(cmplsnodeconfigiccid.yfilter)) leaf_name_data.push_back(cmplsnodeconfigiccid.get_name_leafdata());
    if (cmplsnodeconfigrowstatus.is_set || is_set(cmplsnodeconfigrowstatus.yfilter)) leaf_name_data.push_back(cmplsnodeconfigrowstatus.get_name_leafdata());
    if (cmplsnodeconfigstoragetype.is_set || is_set(cmplsnodeconfigstoragetype.yfilter)) leaf_name_data.push_back(cmplsnodeconfigstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeConfigLocalId")
    {
        cmplsnodeconfiglocalid = value;
        cmplsnodeconfiglocalid.value_namespace = name_space;
        cmplsnodeconfiglocalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigGlobalId")
    {
        cmplsnodeconfigglobalid = value;
        cmplsnodeconfigglobalid.value_namespace = name_space;
        cmplsnodeconfigglobalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigNodeId")
    {
        cmplsnodeconfignodeid = value;
        cmplsnodeconfignodeid.value_namespace = name_space;
        cmplsnodeconfignodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigIccId")
    {
        cmplsnodeconfigiccid = value;
        cmplsnodeconfigiccid.value_namespace = name_space;
        cmplsnodeconfigiccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigRowStatus")
    {
        cmplsnodeconfigrowstatus = value;
        cmplsnodeconfigrowstatus.value_namespace = name_space;
        cmplsnodeconfigrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeConfigStorageType")
    {
        cmplsnodeconfigstoragetype = value;
        cmplsnodeconfigstoragetype.value_namespace = name_space;
        cmplsnodeconfigstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeConfigLocalId")
    {
        cmplsnodeconfiglocalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigGlobalId")
    {
        cmplsnodeconfigglobalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigNodeId")
    {
        cmplsnodeconfignodeid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigIccId")
    {
        cmplsnodeconfigiccid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigRowStatus")
    {
        cmplsnodeconfigrowstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeConfigStorageType")
    {
        cmplsnodeconfigstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeConfigLocalId" || name == "cmplsNodeConfigGlobalId" || name == "cmplsNodeConfigNodeId" || name == "cmplsNodeConfigIccId" || name == "cmplsNodeConfigRowStatus" || name == "cmplsNodeConfigStorageType")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapTable()
    :
    cmplsnodeipmapentry(this, {"cmplsnodeipmapglobalid", "cmplsnodeipmapnodeid"})
{

    yang_name = "cmplsNodeIpMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::~CmplsNodeIpMapTable()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsnodeipmapentry.len(); index++)
    {
        if(cmplsnodeipmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeipmapentry.len(); index++)
    {
        if(cmplsnodeipmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIpMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry>();
        ent_->parent = this;
        cmplsnodeipmapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsnodeipmapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIpMapEntry")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::CmplsNodeIpMapEntry()
    :
    cmplsnodeipmapglobalid{YType::str, "cmplsNodeIpMapGlobalId"},
    cmplsnodeipmapnodeid{YType::uint32, "cmplsNodeIpMapNodeId"},
    cmplsnodeipmaplocalid{YType::uint32, "cmplsNodeIpMapLocalId"}
{

    yang_name = "cmplsNodeIpMapEntry"; yang_parent_name = "cmplsNodeIpMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::~CmplsNodeIpMapEntry()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsnodeipmapglobalid.is_set
	|| cmplsnodeipmapnodeid.is_set
	|| cmplsnodeipmaplocalid.is_set;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeipmapglobalid.yfilter)
	|| ydk::is_set(cmplsnodeipmapnodeid.yfilter)
	|| ydk::is_set(cmplsnodeipmaplocalid.yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIpMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapEntry";
    ADD_KEY_TOKEN(cmplsnodeipmapglobalid, "cmplsNodeIpMapGlobalId");
    ADD_KEY_TOKEN(cmplsnodeipmapnodeid, "cmplsNodeIpMapNodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeipmapglobalid.is_set || is_set(cmplsnodeipmapglobalid.yfilter)) leaf_name_data.push_back(cmplsnodeipmapglobalid.get_name_leafdata());
    if (cmplsnodeipmapnodeid.is_set || is_set(cmplsnodeipmapnodeid.yfilter)) leaf_name_data.push_back(cmplsnodeipmapnodeid.get_name_leafdata());
    if (cmplsnodeipmaplocalid.is_set || is_set(cmplsnodeipmaplocalid.yfilter)) leaf_name_data.push_back(cmplsnodeipmaplocalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeIpMapGlobalId")
    {
        cmplsnodeipmapglobalid = value;
        cmplsnodeipmapglobalid.value_namespace = name_space;
        cmplsnodeipmapglobalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIpMapNodeId")
    {
        cmplsnodeipmapnodeid = value;
        cmplsnodeipmapnodeid.value_namespace = name_space;
        cmplsnodeipmapnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIpMapLocalId")
    {
        cmplsnodeipmaplocalid = value;
        cmplsnodeipmaplocalid.value_namespace = name_space;
        cmplsnodeipmaplocalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeIpMapGlobalId")
    {
        cmplsnodeipmapglobalid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIpMapNodeId")
    {
        cmplsnodeipmapnodeid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIpMapLocalId")
    {
        cmplsnodeipmaplocalid.yfilter = yfilter;
    }
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIpMapGlobalId" || name == "cmplsNodeIpMapNodeId" || name == "cmplsNodeIpMapLocalId")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapTable()
    :
    cmplsnodeiccmapentry(this, {"cmplsnodeiccmapiccid"})
{

    yang_name = "cmplsNodeIccMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::~CmplsNodeIccMapTable()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsnodeiccmapentry.len(); index++)
    {
        if(cmplsnodeiccmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeiccmapentry.len(); index++)
    {
        if(cmplsnodeiccmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIccMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry>();
        ent_->parent = this;
        cmplsnodeiccmapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsnodeiccmapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIccMapEntry")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::CmplsNodeIccMapEntry()
    :
    cmplsnodeiccmapiccid{YType::str, "cmplsNodeIccMapIccId"},
    cmplsnodeiccmaplocalid{YType::uint32, "cmplsNodeIccMapLocalId"}
{

    yang_name = "cmplsNodeIccMapEntry"; yang_parent_name = "cmplsNodeIccMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::~CmplsNodeIccMapEntry()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsnodeiccmapiccid.is_set
	|| cmplsnodeiccmaplocalid.is_set;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsnodeiccmapiccid.yfilter)
	|| ydk::is_set(cmplsnodeiccmaplocalid.yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIccMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapEntry";
    ADD_KEY_TOKEN(cmplsnodeiccmapiccid, "cmplsNodeIccMapIccId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeiccmapiccid.is_set || is_set(cmplsnodeiccmapiccid.yfilter)) leaf_name_data.push_back(cmplsnodeiccmapiccid.get_name_leafdata());
    if (cmplsnodeiccmaplocalid.is_set || is_set(cmplsnodeiccmaplocalid.yfilter)) leaf_name_data.push_back(cmplsnodeiccmaplocalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsNodeIccMapIccId")
    {
        cmplsnodeiccmapiccid = value;
        cmplsnodeiccmapiccid.value_namespace = name_space;
        cmplsnodeiccmapiccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsNodeIccMapLocalId")
    {
        cmplsnodeiccmaplocalid = value;
        cmplsnodeiccmaplocalid.value_namespace = name_space;
        cmplsnodeiccmaplocalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsNodeIccMapIccId")
    {
        cmplsnodeiccmapiccid.yfilter = yfilter;
    }
    if(value_path == "cmplsNodeIccMapLocalId")
    {
        cmplsnodeiccmaplocalid.yfilter = yfilter;
    }
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsNodeIccMapIccId" || name == "cmplsNodeIccMapLocalId")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtTable()
    :
    cmplstunnelextentry(this, {"mplstunnelindex", "mplstunnelinstance", "mplstunnelingresslsrid", "mplstunnelegresslsrid"})
{

    yang_name = "cmplsTunnelExtTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::~CmplsTunnelExtTable()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplstunnelextentry.len(); index++)
    {
        if(cmplstunnelextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelextentry.len(); index++)
    {
        if(cmplstunnelextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelExtEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry>();
        ent_->parent = this;
        cmplstunnelextentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplstunnelextentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsTunnelExtEntry")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::CmplsTunnelExtEntry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunneloppositedirptr{YType::str, "cmplsTunnelOppositeDirPtr"},
    cmplstunnelextoppositedirtnlvalid{YType::boolean, "cmplsTunnelExtOppositeDirTnlValid"},
    cmplstunnelextdesttnlindex{YType::uint32, "cmplsTunnelExtDestTnlIndex"},
    cmplstunnelextdesttnllspindex{YType::uint32, "cmplsTunnelExtDestTnlLspIndex"},
    cmplstunnelextdesttnlvalid{YType::boolean, "cmplsTunnelExtDestTnlValid"}
{

    yang_name = "cmplsTunnelExtEntry"; yang_parent_name = "cmplsTunnelExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::~CmplsTunnelExtEntry()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunneloppositedirptr.is_set
	|| cmplstunnelextoppositedirtnlvalid.is_set
	|| cmplstunnelextdesttnlindex.is_set
	|| cmplstunnelextdesttnllspindex.is_set
	|| cmplstunnelextdesttnlvalid.is_set;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(cmplstunneloppositedirptr.yfilter)
	|| ydk::is_set(cmplstunnelextoppositedirtnlvalid.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnlindex.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnllspindex.yfilter)
	|| ydk::is_set(cmplstunnelextdesttnlvalid.yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtEntry";
    ADD_KEY_TOKEN(mplstunnelindex, "mplsTunnelIndex");
    ADD_KEY_TOKEN(mplstunnelinstance, "mplsTunnelInstance");
    ADD_KEY_TOKEN(mplstunnelingresslsrid, "mplsTunnelIngressLSRId");
    ADD_KEY_TOKEN(mplstunnelegresslsrid, "mplsTunnelEgressLSRId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunneloppositedirptr.is_set || is_set(cmplstunneloppositedirptr.yfilter)) leaf_name_data.push_back(cmplstunneloppositedirptr.get_name_leafdata());
    if (cmplstunnelextoppositedirtnlvalid.is_set || is_set(cmplstunnelextoppositedirtnlvalid.yfilter)) leaf_name_data.push_back(cmplstunnelextoppositedirtnlvalid.get_name_leafdata());
    if (cmplstunnelextdesttnlindex.is_set || is_set(cmplstunnelextdesttnlindex.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnlindex.get_name_leafdata());
    if (cmplstunnelextdesttnllspindex.is_set || is_set(cmplstunnelextdesttnllspindex.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnllspindex.get_name_leafdata());
    if (cmplstunnelextdesttnlvalid.is_set || is_set(cmplstunnelextdesttnlvalid.yfilter)) leaf_name_data.push_back(cmplstunnelextdesttnlvalid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
        mplstunnelindex.value_namespace = name_space;
        mplstunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
        mplstunnelinstance.value_namespace = name_space;
        mplstunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
        mplstunnelingresslsrid.value_namespace = name_space;
        mplstunnelingresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
        mplstunnelegresslsrid.value_namespace = name_space;
        mplstunnelegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelOppositeDirPtr")
    {
        cmplstunneloppositedirptr = value;
        cmplstunneloppositedirptr.value_namespace = name_space;
        cmplstunneloppositedirptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtOppositeDirTnlValid")
    {
        cmplstunnelextoppositedirtnlvalid = value;
        cmplstunnelextoppositedirtnlvalid.value_namespace = name_space;
        cmplstunnelextoppositedirtnlvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlIndex")
    {
        cmplstunnelextdesttnlindex = value;
        cmplstunnelextdesttnlindex.value_namespace = name_space;
        cmplstunnelextdesttnlindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlLspIndex")
    {
        cmplstunnelextdesttnllspindex = value;
        cmplstunnelextdesttnllspindex.value_namespace = name_space;
        cmplstunnelextdesttnllspindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelExtDestTnlValid")
    {
        cmplstunnelextdesttnlvalid = value;
        cmplstunnelextdesttnlvalid.value_namespace = name_space;
        cmplstunnelextdesttnlvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelOppositeDirPtr")
    {
        cmplstunneloppositedirptr.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtOppositeDirTnlValid")
    {
        cmplstunnelextoppositedirtnlvalid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlIndex")
    {
        cmplstunnelextdesttnlindex.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlLspIndex")
    {
        cmplstunnelextdesttnllspindex.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelExtDestTnlValid")
    {
        cmplstunnelextdesttnlvalid.yfilter = yfilter;
    }
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "cmplsTunnelOppositeDirPtr" || name == "cmplsTunnelExtOppositeDirTnlValid" || name == "cmplsTunnelExtDestTnlIndex" || name == "cmplsTunnelExtDestTnlLspIndex" || name == "cmplsTunnelExtDestTnlValid")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfTable()
    :
    cmplstunnelreverseperfentry(this, {"mplstunnelindex", "mplstunnelinstance", "mplstunnelingresslsrid", "mplstunnelegresslsrid"})
{

    yang_name = "cmplsTunnelReversePerfTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::~CmplsTunnelReversePerfTable()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplstunnelreverseperfentry.len(); index++)
    {
        if(cmplstunnelreverseperfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelreverseperfentry.len(); index++)
    {
        if(cmplstunnelreverseperfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelReversePerfEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry>();
        ent_->parent = this;
        cmplstunnelreverseperfentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplstunnelreverseperfentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsTunnelReversePerfEntry")
        return true;
    return false;
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::CmplsTunnelReversePerfEntry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunnelreverseperfpackets{YType::uint32, "cmplsTunnelReversePerfPackets"},
    cmplstunnelreverseperfhcpackets{YType::uint64, "cmplsTunnelReversePerfHCPackets"},
    cmplstunnelreverseperferrors{YType::uint32, "cmplsTunnelReversePerfErrors"},
    cmplstunnelreverseperfbytes{YType::uint32, "cmplsTunnelReversePerfBytes"},
    cmplstunnelreverseperfhcbytes{YType::uint64, "cmplsTunnelReversePerfHCBytes"}
{

    yang_name = "cmplsTunnelReversePerfEntry"; yang_parent_name = "cmplsTunnelReversePerfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::~CmplsTunnelReversePerfEntry()
{
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunnelreverseperfpackets.is_set
	|| cmplstunnelreverseperfhcpackets.is_set
	|| cmplstunnelreverseperferrors.is_set
	|| cmplstunnelreverseperfbytes.is_set
	|| cmplstunnelreverseperfhcbytes.is_set;
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfpackets.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfhcpackets.yfilter)
	|| ydk::is_set(cmplstunnelreverseperferrors.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfbytes.yfilter)
	|| ydk::is_set(cmplstunnelreverseperfhcbytes.yfilter);
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelReversePerfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfEntry";
    ADD_KEY_TOKEN(mplstunnelindex, "mplsTunnelIndex");
    ADD_KEY_TOKEN(mplstunnelinstance, "mplsTunnelInstance");
    ADD_KEY_TOKEN(mplstunnelingresslsrid, "mplsTunnelIngressLSRId");
    ADD_KEY_TOKEN(mplstunnelegresslsrid, "mplsTunnelEgressLSRId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunnelreverseperfpackets.is_set || is_set(cmplstunnelreverseperfpackets.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfpackets.get_name_leafdata());
    if (cmplstunnelreverseperfhcpackets.is_set || is_set(cmplstunnelreverseperfhcpackets.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfhcpackets.get_name_leafdata());
    if (cmplstunnelreverseperferrors.is_set || is_set(cmplstunnelreverseperferrors.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperferrors.get_name_leafdata());
    if (cmplstunnelreverseperfbytes.is_set || is_set(cmplstunnelreverseperfbytes.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfbytes.get_name_leafdata());
    if (cmplstunnelreverseperfhcbytes.is_set || is_set(cmplstunnelreverseperfhcbytes.yfilter)) leaf_name_data.push_back(cmplstunnelreverseperfhcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
        mplstunnelindex.value_namespace = name_space;
        mplstunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
        mplstunnelinstance.value_namespace = name_space;
        mplstunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
        mplstunnelingresslsrid.value_namespace = name_space;
        mplstunnelingresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
        mplstunnelegresslsrid.value_namespace = name_space;
        mplstunnelegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfPackets")
    {
        cmplstunnelreverseperfpackets = value;
        cmplstunnelreverseperfpackets.value_namespace = name_space;
        cmplstunnelreverseperfpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfHCPackets")
    {
        cmplstunnelreverseperfhcpackets = value;
        cmplstunnelreverseperfhcpackets.value_namespace = name_space;
        cmplstunnelreverseperfhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfErrors")
    {
        cmplstunnelreverseperferrors = value;
        cmplstunnelreverseperferrors.value_namespace = name_space;
        cmplstunnelreverseperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfBytes")
    {
        cmplstunnelreverseperfbytes = value;
        cmplstunnelreverseperfbytes.value_namespace = name_space;
        cmplstunnelreverseperfbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsTunnelReversePerfHCBytes")
    {
        cmplstunnelreverseperfhcbytes = value;
        cmplstunnelreverseperfhcbytes.value_namespace = name_space;
        cmplstunnelreverseperfhcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfPackets")
    {
        cmplstunnelreverseperfpackets.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfHCPackets")
    {
        cmplstunnelreverseperfhcpackets.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfErrors")
    {
        cmplstunnelreverseperferrors.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfBytes")
    {
        cmplstunnelreverseperfbytes.yfilter = yfilter;
    }
    if(value_path == "cmplsTunnelReversePerfHCBytes")
    {
        cmplstunnelreverseperfhcbytes.yfilter = yfilter;
    }
}

bool CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "cmplsTunnelReversePerfPackets" || name == "cmplsTunnelReversePerfHCPackets" || name == "cmplsTunnelReversePerfErrors" || name == "cmplsTunnelReversePerfBytes" || name == "cmplsTunnelReversePerfHCBytes")
        return true;
    return false;
}


}
}

