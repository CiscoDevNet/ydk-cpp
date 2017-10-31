
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
    ciscoimagelicensemgmtmibobjects(std::make_shared<CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects>())
	,cilmnotifcntl(std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl>())
	,cilmbootimageleveltable(std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable>())
	,cilmimageleveltolicensemaptable(std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable>())
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

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageLicenseMgmtMIBObjects")
    {
        if(ciscoimagelicensemgmtmibobjects == nullptr)
        {
            ciscoimagelicensemgmtmibobjects = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects>();
        }
        return ciscoimagelicensemgmtmibobjects;
    }

    if(child_yang_name == "cilmNotifCntl")
    {
        if(cilmnotifcntl == nullptr)
        {
            cilmnotifcntl = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl>();
        }
        return cilmnotifcntl;
    }

    if(child_yang_name == "cilmBootImageLevelTable")
    {
        if(cilmbootimageleveltable == nullptr)
        {
            cilmbootimageleveltable = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable>();
        }
        return cilmbootimageleveltable;
    }

    if(child_yang_name == "cilmImageLevelToLicenseMapTable")
    {
        if(cilmimageleveltolicensemaptable == nullptr)
        {
            cilmimageleveltolicensemaptable = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable>();
        }
        return cilmimageleveltolicensemaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoimagelicensemgmtmibobjects != nullptr)
    {
        children["ciscoImageLicenseMgmtMIBObjects"] = ciscoimagelicensemgmtmibobjects;
    }

    if(cilmnotifcntl != nullptr)
    {
        children["cilmNotifCntl"] = cilmnotifcntl;
    }

    if(cilmbootimageleveltable != nullptr)
    {
        children["cilmBootImageLevelTable"] = cilmbootimageleveltable;
    }

    if(cilmimageleveltolicensemaptable != nullptr)
    {
        children["cilmImageLevelToLicenseMapTable"] = cilmimageleveltolicensemaptable;
    }

    return children;
}

void CISCOIMAGELICENSEMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::clone_ptr() const
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

CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::Ciscoimagelicensemgmtmibobjects()
    :
    cilmeulaaccepted{YType::boolean, "cilmEULAAccepted"}
{

    yang_name = "ciscoImageLicenseMgmtMIBObjects"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::~Ciscoimagelicensemgmtmibobjects()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::has_data() const
{
    return cilmeulaaccepted.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cilmeulaaccepted.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageLicenseMgmtMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmeulaaccepted.is_set || is_set(cilmeulaaccepted.yfilter)) leaf_name_data.push_back(cilmeulaaccepted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cilmEULAAccepted")
    {
        cilmeulaaccepted = value;
        cilmeulaaccepted.value_namespace = name_space;
        cilmeulaaccepted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cilmEULAAccepted")
    {
        cilmeulaaccepted.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmEULAAccepted")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::Cilmnotifcntl()
    :
    cilmimagelevelchangednotif{YType::boolean, "cilmImageLevelChangedNotif"}
{

    yang_name = "cilmNotifCntl"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::~Cilmnotifcntl()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::has_data() const
{
    return cilmimagelevelchangednotif.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cilmimagelevelchangednotif.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmNotifCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmimagelevelchangednotif.is_set || is_set(cilmimagelevelchangednotif.yfilter)) leaf_name_data.push_back(cilmimagelevelchangednotif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cilmImageLevelChangedNotif")
    {
        cilmimagelevelchangednotif = value;
        cilmimagelevelchangednotif.value_namespace = name_space;
        cilmimagelevelchangednotif.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cilmImageLevelChangedNotif")
    {
        cilmimagelevelchangednotif.yfilter = yfilter;
    }
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmImageLevelChangedNotif")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimageleveltable()
{

    yang_name = "cilmBootImageLevelTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::~Cilmbootimageleveltable()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::has_data() const
{
    for (std::size_t index=0; index<cilmbootimagelevelentry.size(); index++)
    {
        if(cilmbootimagelevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::has_operation() const
{
    for (std::size_t index=0; index<cilmbootimagelevelentry.size(); index++)
    {
        if(cilmbootimagelevelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmBootImageLevelEntry")
    {
        for(auto const & c : cilmbootimagelevelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry>();
        c->parent = this;
        cilmbootimagelevelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cilmbootimagelevelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmBootImageLevelEntry")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::Cilmbootimagelevelentry()
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

CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::~Cilmbootimagelevelentry()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::has_data() const
{
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

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::has_operation() const
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

std::string CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmBootImageLevelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cilmModuleName='" <<cilmmodulename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cilmModuleName" || name == "cilmCurrentImageLevel" || name == "cilmConfiguredBootImageLevel" || name == "cilmNextBootImageLevel" || name == "cilmCurrentLicenseStoreIndex" || name == "cilmCurrentLicenseIndex" || name == "cilmNextBootLicenseStoreIndex" || name == "cilmNextBootLicenseIndex")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemaptable()
{

    yang_name = "cilmImageLevelToLicenseMapTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::~Cilmimageleveltolicensemaptable()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::has_data() const
{
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry.size(); index++)
    {
        if(cilmimageleveltolicensemapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::has_operation() const
{
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry.size(); index++)
    {
        if(cilmimageleveltolicensemapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmImageLevelToLicenseMapEntry")
    {
        for(auto const & c : cilmimageleveltolicensemapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry>();
        c->parent = this;
        cilmimageleveltolicensemapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cilmimageleveltolicensemapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cilmImageLevelToLicenseMapEntry")
        return true;
    return false;
}

CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::Cilmimageleveltolicensemapentry()
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

CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::~Cilmimageleveltolicensemapentry()
{
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::has_data() const
{
    return entphysicalindex.is_set
	|| cilmmodulename.is_set
	|| cilmimagelicensemapindex.is_set
	|| cilmimagelicenseimagelevel.is_set
	|| cilmimagelicensename.is_set
	|| cilmimagelicensepriority.is_set;
}

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cilmmodulename.yfilter)
	|| ydk::is_set(cilmimagelicensemapindex.yfilter)
	|| ydk::is_set(cilmimagelicenseimagelevel.yfilter)
	|| ydk::is_set(cilmimagelicensename.yfilter)
	|| ydk::is_set(cilmimagelicensepriority.yfilter);
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmImageLevelToLicenseMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cilmModuleName='" <<cilmmodulename <<"']" <<"[cilmImageLicenseMapIndex='" <<cilmimagelicensemapindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cilmModuleName" || name == "cilmImageLicenseMapIndex" || name == "cilmImageLicenseImageLevel" || name == "cilmImageLicenseName" || name == "cilmImageLicensePriority")
        return true;
    return false;
}


}
}

