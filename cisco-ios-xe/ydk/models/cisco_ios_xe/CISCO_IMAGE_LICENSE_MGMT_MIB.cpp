
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IMAGE_LICENSE_MGMT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IMAGE_LICENSE_MGMT_MIB {

CISCOIMAGELICENSEMGMTMIB::CISCOIMAGELICENSEMGMTMIB()
    :
    ciscoimagelicensemgmtmibobjects(std::make_shared<CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects>())
    , cilmnotifcntl(std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl>())
    , cilmbootimageleveltable(std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable>())
    , cilmimageleveltolicensemaptable(std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable>())
{
    ciscoimagelicensemgmtmibobjects->parent = this;
    cilmnotifcntl->parent = this;
    cilmbootimageleveltable->parent = this;
    cilmimageleveltolicensemaptable->parent = this;

    yang_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::~CISCOIMAGELICENSEMGMTMIB()
{
}

bool CISCOIMAGELICENSEMGMTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoimagelicensemgmtmibobjects !=  nullptr && ciscoimagelicensemgmtmibobjects->has_data())
	|| (cilmnotifcntl !=  nullptr && cilmnotifcntl->has_data())
	|| (cilmbootimageleveltable !=  nullptr && cilmbootimageleveltable->has_data())
	|| (cilmimageleveltolicensemaptable !=  nullptr && cilmimageleveltolicensemaptable->has_data());
}

bool CISCOIMAGELICENSEMGMTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoimagelicensemgmtmibobjects !=  nullptr && ciscoimagelicensemgmtmibobjects->has_operation())
	|| (cilmnotifcntl !=  nullptr && cilmnotifcntl->has_operation())
	|| (cilmbootimageleveltable !=  nullptr && cilmbootimageleveltable->has_operation())
	|| (cilmimageleveltolicensemaptable !=  nullptr && cilmimageleveltolicensemaptable->has_operation());
}

std::string CISCOIMAGELICENSEMGMTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageLicenseMgmtMIBObjects")
    {
        if(ciscoimagelicensemgmtmibobjects == nullptr)
        {
            ciscoimagelicensemgmtmibobjects = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects>();
        }
        return ciscoimagelicensemgmtmibobjects;
    }

    if(child_yang_name == "cilmNotifCntl")
    {
        if(cilmnotifcntl == nullptr)
        {
            cilmnotifcntl = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl>();
        }
        return cilmnotifcntl;
    }

    if(child_yang_name == "cilmBootImageLevelTable")
    {
        if(cilmbootimageleveltable == nullptr)
        {
            cilmbootimageleveltable = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable>();
        }
        return cilmbootimageleveltable;
    }

    if(child_yang_name == "cilmImageLevelToLicenseMapTable")
    {
        if(cilmimageleveltolicensemaptable == nullptr)
        {
            cilmimageleveltolicensemaptable = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable>();
        }
        return cilmimageleveltolicensemaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciscoimagelicensemgmtmibobjects != nullptr)
    {
        _children["ciscoImageLicenseMgmtMIBObjects"] = ciscoimagelicensemgmtmibobjects;
    }

    if(cilmnotifcntl != nullptr)
    {
        _children["cilmNotifCntl"] = cilmnotifcntl;
    }

    if(cilmbootimageleveltable != nullptr)
    {
        _children["cilmBootImageLevelTable"] = cilmbootimageleveltable;
    }

    if(cilmimageleveltolicensemaptable != nullptr)
    {
        _children["cilmImageLevelToLicenseMapTable"] = cilmimageleveltolicensemaptable;
    }

    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::clone_ptr() const
{
    return std::make_shared<CISCOIMAGELICENSEMGMTMIB>();
}

std::string CISCOIMAGELICENSEMGMTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIMAGELICENSEMGMTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIMAGELICENSEMGMTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIMAGELICENSEMGMTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIMAGELICENSEMGMTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageLicenseMgmtMIBObjects" || name == "cilmNotifCntl" || name == "cilmBootImageLevelTable" || name == "cilmImageLevelToLicenseMapTable")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::CiscoImageLicenseMgmtMIBObjects()
    :
    cilmeulaaccepted{YType::boolean, "cilmEULAAccepted"}
{

    yang_name = "ciscoImageLicenseMgmtMIBObjects"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::~CiscoImageLicenseMgmtMIBObjects()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::has_data() const
{
    if (is_presence_container) return true;
    return cilmeulaaccepted.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cilmeulaaccepted.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageLicenseMgmtMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmeulaaccepted.is_set || is_set(cilmeulaaccepted.yfilter)) leaf_name_data.push_back(cilmeulaaccepted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cilmEULAAccepted")
    {
        cilmeulaaccepted = value;
        cilmeulaaccepted.value_namespace = name_space;
        cilmeulaaccepted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cilmEULAAccepted")
    {
        cilmeulaaccepted.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmEULAAccepted")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::CilmNotifCntl()
    :
    cilmimagelevelchangednotif{YType::boolean, "cilmImageLevelChangedNotif"}
{

    yang_name = "cilmNotifCntl"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::~CilmNotifCntl()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::has_data() const
{
    if (is_presence_container) return true;
    return cilmimagelevelchangednotif.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cilmimagelevelchangednotif.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmNotifCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmimagelevelchangednotif.is_set || is_set(cilmimagelevelchangednotif.yfilter)) leaf_name_data.push_back(cilmimagelevelchangednotif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cilmImageLevelChangedNotif")
    {
        cilmimagelevelchangednotif = value;
        cilmimagelevelchangednotif.value_namespace = name_space;
        cilmimagelevelchangednotif.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cilmImageLevelChangedNotif")
    {
        cilmimagelevelchangednotif.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmImageLevelChangedNotif")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelTable()
    :
    cilmbootimagelevelentry(this, {"entphysicalindex", "cilmmodulename"})
{

    yang_name = "cilmBootImageLevelTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::~CilmBootImageLevelTable()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cilmbootimagelevelentry.len(); index++)
    {
        if(cilmbootimagelevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::has_operation() const
{
    for (std::size_t index=0; index<cilmbootimagelevelentry.len(); index++)
    {
        if(cilmbootimagelevelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmBootImageLevelEntry")
    {
        auto ent_ = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry>();
        ent_->parent = this;
        cilmbootimagelevelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cilmbootimagelevelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmBootImageLevelEntry")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::CilmBootImageLevelEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cilmmodulename{YType::str, "cilmModuleName"},
    cilmcurrentimagelevel{YType::str, "cilmCurrentImageLevel"},
    cilmconfiguredbootimagelevel{YType::str, "cilmConfiguredBootImageLevel"},
    cilmnextbootimagelevel{YType::str, "cilmNextBootImageLevel"},
    cilmcurrentlicensestoreindex{YType::uint32, "cilmCurrentLicenseStoreIndex"},
    cilmcurrentlicenseindex{YType::uint32, "cilmCurrentLicenseIndex"},
    cilmnextbootlicensestoreindex{YType::uint32, "cilmNextBootLicenseStoreIndex"},
    cilmnextbootlicenseindex{YType::uint32, "cilmNextBootLicenseIndex"}
{

    yang_name = "cilmBootImageLevelEntry"; yang_parent_name = "cilmBootImageLevelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::~CilmBootImageLevelEntry()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cilmmodulename.is_set
	|| cilmcurrentimagelevel.is_set
	|| cilmconfiguredbootimagelevel.is_set
	|| cilmnextbootimagelevel.is_set
	|| cilmcurrentlicensestoreindex.is_set
	|| cilmcurrentlicenseindex.is_set
	|| cilmnextbootlicensestoreindex.is_set
	|| cilmnextbootlicenseindex.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cilmmodulename.yfilter)
	|| ydk::is_set(cilmcurrentimagelevel.yfilter)
	|| ydk::is_set(cilmconfiguredbootimagelevel.yfilter)
	|| ydk::is_set(cilmnextbootimagelevel.yfilter)
	|| ydk::is_set(cilmcurrentlicensestoreindex.yfilter)
	|| ydk::is_set(cilmcurrentlicenseindex.yfilter)
	|| ydk::is_set(cilmnextbootlicensestoreindex.yfilter)
	|| ydk::is_set(cilmnextbootlicenseindex.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmBootImageLevelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cilmmodulename, "cilmModuleName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cilmmodulename.is_set || is_set(cilmmodulename.yfilter)) leaf_name_data.push_back(cilmmodulename.get_name_leafdata());
    if (cilmcurrentimagelevel.is_set || is_set(cilmcurrentimagelevel.yfilter)) leaf_name_data.push_back(cilmcurrentimagelevel.get_name_leafdata());
    if (cilmconfiguredbootimagelevel.is_set || is_set(cilmconfiguredbootimagelevel.yfilter)) leaf_name_data.push_back(cilmconfiguredbootimagelevel.get_name_leafdata());
    if (cilmnextbootimagelevel.is_set || is_set(cilmnextbootimagelevel.yfilter)) leaf_name_data.push_back(cilmnextbootimagelevel.get_name_leafdata());
    if (cilmcurrentlicensestoreindex.is_set || is_set(cilmcurrentlicensestoreindex.yfilter)) leaf_name_data.push_back(cilmcurrentlicensestoreindex.get_name_leafdata());
    if (cilmcurrentlicenseindex.is_set || is_set(cilmcurrentlicenseindex.yfilter)) leaf_name_data.push_back(cilmcurrentlicenseindex.get_name_leafdata());
    if (cilmnextbootlicensestoreindex.is_set || is_set(cilmnextbootlicensestoreindex.yfilter)) leaf_name_data.push_back(cilmnextbootlicensestoreindex.get_name_leafdata());
    if (cilmnextbootlicenseindex.is_set || is_set(cilmnextbootlicenseindex.yfilter)) leaf_name_data.push_back(cilmnextbootlicenseindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename = value;
        cilmmodulename.value_namespace = name_space;
        cilmmodulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmCurrentImageLevel")
    {
        cilmcurrentimagelevel = value;
        cilmcurrentimagelevel.value_namespace = name_space;
        cilmcurrentimagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmConfiguredBootImageLevel")
    {
        cilmconfiguredbootimagelevel = value;
        cilmconfiguredbootimagelevel.value_namespace = name_space;
        cilmconfiguredbootimagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmNextBootImageLevel")
    {
        cilmnextbootimagelevel = value;
        cilmnextbootimagelevel.value_namespace = name_space;
        cilmnextbootimagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmCurrentLicenseStoreIndex")
    {
        cilmcurrentlicensestoreindex = value;
        cilmcurrentlicensestoreindex.value_namespace = name_space;
        cilmcurrentlicensestoreindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmCurrentLicenseIndex")
    {
        cilmcurrentlicenseindex = value;
        cilmcurrentlicenseindex.value_namespace = name_space;
        cilmcurrentlicenseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmNextBootLicenseStoreIndex")
    {
        cilmnextbootlicensestoreindex = value;
        cilmnextbootlicensestoreindex.value_namespace = name_space;
        cilmnextbootlicensestoreindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmNextBootLicenseIndex")
    {
        cilmnextbootlicenseindex = value;
        cilmnextbootlicenseindex.value_namespace = name_space;
        cilmnextbootlicenseindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename.yfilter = yfilter;
    }
    if(value_path == "cilmCurrentImageLevel")
    {
        cilmcurrentimagelevel.yfilter = yfilter;
    }
    if(value_path == "cilmConfiguredBootImageLevel")
    {
        cilmconfiguredbootimagelevel.yfilter = yfilter;
    }
    if(value_path == "cilmNextBootImageLevel")
    {
        cilmnextbootimagelevel.yfilter = yfilter;
    }
    if(value_path == "cilmCurrentLicenseStoreIndex")
    {
        cilmcurrentlicensestoreindex.yfilter = yfilter;
    }
    if(value_path == "cilmCurrentLicenseIndex")
    {
        cilmcurrentlicenseindex.yfilter = yfilter;
    }
    if(value_path == "cilmNextBootLicenseStoreIndex")
    {
        cilmnextbootlicensestoreindex.yfilter = yfilter;
    }
    if(value_path == "cilmNextBootLicenseIndex")
    {
        cilmnextbootlicenseindex.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cilmModuleName" || name == "cilmCurrentImageLevel" || name == "cilmConfiguredBootImageLevel" || name == "cilmNextBootImageLevel" || name == "cilmCurrentLicenseStoreIndex" || name == "cilmCurrentLicenseIndex" || name == "cilmNextBootLicenseStoreIndex" || name == "cilmNextBootLicenseIndex")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapTable()
    :
    cilmimageleveltolicensemapentry(this, {"entphysicalindex", "cilmmodulename", "cilmimagelicensemapindex"})
{

    yang_name = "cilmImageLevelToLicenseMapTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::~CilmImageLevelToLicenseMapTable()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry.len(); index++)
    {
        if(cilmimageleveltolicensemapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::has_operation() const
{
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry.len(); index++)
    {
        if(cilmimageleveltolicensemapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmImageLevelToLicenseMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry>();
        ent_->parent = this;
        cilmimageleveltolicensemapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cilmimageleveltolicensemapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmImageLevelToLicenseMapEntry")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::CilmImageLevelToLicenseMapEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cilmmodulename{YType::str, "cilmModuleName"},
    cilmimagelicensemapindex{YType::uint32, "cilmImageLicenseMapIndex"},
    cilmimagelicenseimagelevel{YType::str, "cilmImageLicenseImageLevel"},
    cilmimagelicensename{YType::str, "cilmImageLicenseName"},
    cilmimagelicensepriority{YType::uint32, "cilmImageLicensePriority"}
{

    yang_name = "cilmImageLevelToLicenseMapEntry"; yang_parent_name = "cilmImageLevelToLicenseMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::~CilmImageLevelToLicenseMapEntry()
{
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cilmmodulename.is_set
	|| cilmimagelicensemapindex.is_set
	|| cilmimagelicenseimagelevel.is_set
	|| cilmimagelicensename.is_set
	|| cilmimagelicensepriority.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cilmmodulename.yfilter)
	|| ydk::is_set(cilmimagelicensemapindex.yfilter)
	|| ydk::is_set(cilmimagelicenseimagelevel.yfilter)
	|| ydk::is_set(cilmimagelicensename.yfilter)
	|| ydk::is_set(cilmimagelicensepriority.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmImageLevelToLicenseMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cilmmodulename, "cilmModuleName");
    ADD_KEY_TOKEN(cilmimagelicensemapindex, "cilmImageLicenseMapIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cilmmodulename.is_set || is_set(cilmmodulename.yfilter)) leaf_name_data.push_back(cilmmodulename.get_name_leafdata());
    if (cilmimagelicensemapindex.is_set || is_set(cilmimagelicensemapindex.yfilter)) leaf_name_data.push_back(cilmimagelicensemapindex.get_name_leafdata());
    if (cilmimagelicenseimagelevel.is_set || is_set(cilmimagelicenseimagelevel.yfilter)) leaf_name_data.push_back(cilmimagelicenseimagelevel.get_name_leafdata());
    if (cilmimagelicensename.is_set || is_set(cilmimagelicensename.yfilter)) leaf_name_data.push_back(cilmimagelicensename.get_name_leafdata());
    if (cilmimagelicensepriority.is_set || is_set(cilmimagelicensepriority.yfilter)) leaf_name_data.push_back(cilmimagelicensepriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename = value;
        cilmmodulename.value_namespace = name_space;
        cilmmodulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmImageLicenseMapIndex")
    {
        cilmimagelicensemapindex = value;
        cilmimagelicensemapindex.value_namespace = name_space;
        cilmimagelicensemapindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmImageLicenseImageLevel")
    {
        cilmimagelicenseimagelevel = value;
        cilmimagelicenseimagelevel.value_namespace = name_space;
        cilmimagelicenseimagelevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmImageLicenseName")
    {
        cilmimagelicensename = value;
        cilmimagelicensename.value_namespace = name_space;
        cilmimagelicensename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cilmImageLicensePriority")
    {
        cilmimagelicensepriority = value;
        cilmimagelicensepriority.value_namespace = name_space;
        cilmimagelicensepriority.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename.yfilter = yfilter;
    }
    if(value_path == "cilmImageLicenseMapIndex")
    {
        cilmimagelicensemapindex.yfilter = yfilter;
    }
    if(value_path == "cilmImageLicenseImageLevel")
    {
        cilmimagelicenseimagelevel.yfilter = yfilter;
    }
    if(value_path == "cilmImageLicenseName")
    {
        cilmimagelicensename.yfilter = yfilter;
    }
    if(value_path == "cilmImageLicensePriority")
    {
        cilmimagelicensepriority.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cilmModuleName" || name == "cilmImageLicenseMapIndex" || name == "cilmImageLicenseImageLevel" || name == "cilmImageLicenseName" || name == "cilmImageLicensePriority")
        return true;
    return false;
}


}
}

