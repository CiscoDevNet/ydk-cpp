
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IMAGE_LICENSE_MGMT_MIB.hpp"

namespace ydk {
namespace CISCO_IMAGE_LICENSE_MGMT_MIB {

CiscoImageLicenseMgmtMib::CiscoImageLicenseMgmtMib()
    :
    cilmbootimageleveltable_(std::make_shared<CiscoImageLicenseMgmtMib::Cilmbootimageleveltable>())
	,cilmimageleveltolicensemaptable_(std::make_shared<CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable>())
	,cilmnotifcntl_(std::make_shared<CiscoImageLicenseMgmtMib::Cilmnotifcntl>())
	,ciscoimagelicensemgmtmibobjects_(std::make_shared<CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects>())
{
    cilmbootimageleveltable_->parent = this;

    cilmimageleveltolicensemaptable_->parent = this;

    cilmnotifcntl_->parent = this;

    ciscoimagelicensemgmtmibobjects_->parent = this;

    yang_name = "CISCO-IMAGE-LICENSE-MGMT-MIB"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB";
}

CiscoImageLicenseMgmtMib::~CiscoImageLicenseMgmtMib()
{
}

bool CiscoImageLicenseMgmtMib::has_data() const
{
    return (cilmbootimageleveltable_ !=  nullptr && cilmbootimageleveltable_->has_data())
	|| (cilmimageleveltolicensemaptable_ !=  nullptr && cilmimageleveltolicensemaptable_->has_data())
	|| (cilmnotifcntl_ !=  nullptr && cilmnotifcntl_->has_data())
	|| (ciscoimagelicensemgmtmibobjects_ !=  nullptr && ciscoimagelicensemgmtmibobjects_->has_data());
}

bool CiscoImageLicenseMgmtMib::has_operation() const
{
    return is_set(operation)
	|| (cilmbootimageleveltable_ !=  nullptr && cilmbootimageleveltable_->has_operation())
	|| (cilmimageleveltolicensemaptable_ !=  nullptr && cilmimageleveltolicensemaptable_->has_operation())
	|| (cilmnotifcntl_ !=  nullptr && cilmnotifcntl_->has_operation())
	|| (ciscoimagelicensemgmtmibobjects_ !=  nullptr && ciscoimagelicensemgmtmibobjects_->has_operation());
}

std::string CiscoImageLicenseMgmtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmBootImageLevelTable")
    {
        if(cilmbootimageleveltable_ == nullptr)
        {
            cilmbootimageleveltable_ = std::make_shared<CiscoImageLicenseMgmtMib::Cilmbootimageleveltable>();
        }
        return cilmbootimageleveltable_;
    }

    if(child_yang_name == "cilmImageLevelToLicenseMapTable")
    {
        if(cilmimageleveltolicensemaptable_ == nullptr)
        {
            cilmimageleveltolicensemaptable_ = std::make_shared<CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable>();
        }
        return cilmimageleveltolicensemaptable_;
    }

    if(child_yang_name == "cilmNotifCntl")
    {
        if(cilmnotifcntl_ == nullptr)
        {
            cilmnotifcntl_ = std::make_shared<CiscoImageLicenseMgmtMib::Cilmnotifcntl>();
        }
        return cilmnotifcntl_;
    }

    if(child_yang_name == "ciscoImageLicenseMgmtMIBObjects")
    {
        if(ciscoimagelicensemgmtmibobjects_ == nullptr)
        {
            ciscoimagelicensemgmtmibobjects_ = std::make_shared<CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects>();
        }
        return ciscoimagelicensemgmtmibobjects_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cilmbootimageleveltable_ != nullptr)
    {
        children["cilmBootImageLevelTable"] = cilmbootimageleveltable_;
    }

    if(cilmimageleveltolicensemaptable_ != nullptr)
    {
        children["cilmImageLevelToLicenseMapTable"] = cilmimageleveltolicensemaptable_;
    }

    if(cilmnotifcntl_ != nullptr)
    {
        children["cilmNotifCntl"] = cilmnotifcntl_;
    }

    if(ciscoimagelicensemgmtmibobjects_ != nullptr)
    {
        children["ciscoImageLicenseMgmtMIBObjects"] = ciscoimagelicensemgmtmibobjects_;
    }

    return children;
}

void CiscoImageLicenseMgmtMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::clone_ptr() const
{
    return std::make_shared<CiscoImageLicenseMgmtMib>();
}

std::string CiscoImageLicenseMgmtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoImageLicenseMgmtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoImageLicenseMgmtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::Ciscoimagelicensemgmtmibobjects()
    :
    cilmeulaaccepted{YType::boolean, "cilmEULAAccepted"}
{
    yang_name = "ciscoImageLicenseMgmtMIBObjects"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB";
}

CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::~Ciscoimagelicensemgmtmibobjects()
{
}

bool CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::has_data() const
{
    return cilmeulaaccepted.is_set;
}

bool CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(cilmeulaaccepted.operation);
}

std::string CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageLicenseMgmtMIBObjects";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmeulaaccepted.is_set || is_set(cilmeulaaccepted.operation)) leaf_name_data.push_back(cilmeulaaccepted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cilmEULAAccepted")
    {
        cilmeulaaccepted = value;
    }
}

CiscoImageLicenseMgmtMib::Cilmnotifcntl::Cilmnotifcntl()
    :
    cilmimagelevelchangednotif{YType::boolean, "cilmImageLevelChangedNotif"}
{
    yang_name = "cilmNotifCntl"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB";
}

CiscoImageLicenseMgmtMib::Cilmnotifcntl::~Cilmnotifcntl()
{
}

bool CiscoImageLicenseMgmtMib::Cilmnotifcntl::has_data() const
{
    return cilmimagelevelchangednotif.is_set;
}

bool CiscoImageLicenseMgmtMib::Cilmnotifcntl::has_operation() const
{
    return is_set(operation)
	|| is_set(cilmimagelevelchangednotif.operation);
}

std::string CiscoImageLicenseMgmtMib::Cilmnotifcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmNotifCntl";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Cilmnotifcntl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cilmimagelevelchangednotif.is_set || is_set(cilmimagelevelchangednotif.operation)) leaf_name_data.push_back(cilmimagelevelchangednotif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Cilmnotifcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Cilmnotifcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageLicenseMgmtMib::Cilmnotifcntl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cilmImageLevelChangedNotif")
    {
        cilmimagelevelchangednotif = value;
    }
}

CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimageleveltable()
{
    yang_name = "cilmBootImageLevelTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB";
}

CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::~Cilmbootimageleveltable()
{
}

bool CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::has_data() const
{
    for (std::size_t index=0; index<cilmbootimagelevelentry_.size(); index++)
    {
        if(cilmbootimagelevelentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::has_operation() const
{
    for (std::size_t index=0; index<cilmbootimagelevelentry_.size(); index++)
    {
        if(cilmbootimagelevelentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelTable";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmBootImageLevelEntry")
    {
        for(auto const & c : cilmbootimagelevelentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry>();
        c->parent = this;
        cilmbootimagelevelentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cilmbootimagelevelentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::Cilmbootimagelevelentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cilmmodulename{YType::str, "cilmModuleName"},
    cilmconfiguredbootimagelevel{YType::str, "cilmConfiguredBootImageLevel"},
    cilmcurrentimagelevel{YType::str, "cilmCurrentImageLevel"},
    cilmcurrentlicenseindex{YType::uint32, "cilmCurrentLicenseIndex"},
    cilmcurrentlicensestoreindex{YType::uint32, "cilmCurrentLicenseStoreIndex"},
    cilmnextbootimagelevel{YType::str, "cilmNextBootImageLevel"},
    cilmnextbootlicenseindex{YType::uint32, "cilmNextBootLicenseIndex"},
    cilmnextbootlicensestoreindex{YType::uint32, "cilmNextBootLicenseStoreIndex"}
{
    yang_name = "cilmBootImageLevelEntry"; yang_parent_name = "cilmBootImageLevelTable";
}

CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::~Cilmbootimagelevelentry()
{
}

bool CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::has_data() const
{
    return entphysicalindex.is_set
	|| cilmmodulename.is_set
	|| cilmconfiguredbootimagelevel.is_set
	|| cilmcurrentimagelevel.is_set
	|| cilmcurrentlicenseindex.is_set
	|| cilmcurrentlicensestoreindex.is_set
	|| cilmnextbootimagelevel.is_set
	|| cilmnextbootlicenseindex.is_set
	|| cilmnextbootlicensestoreindex.is_set;
}

bool CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cilmmodulename.operation)
	|| is_set(cilmconfiguredbootimagelevel.operation)
	|| is_set(cilmcurrentimagelevel.operation)
	|| is_set(cilmcurrentlicenseindex.operation)
	|| is_set(cilmcurrentlicensestoreindex.operation)
	|| is_set(cilmnextbootimagelevel.operation)
	|| is_set(cilmnextbootlicenseindex.operation)
	|| is_set(cilmnextbootlicensestoreindex.operation);
}

std::string CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmBootImageLevelEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cilmModuleName='" <<cilmmodulename <<"']";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmBootImageLevelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cilmmodulename.is_set || is_set(cilmmodulename.operation)) leaf_name_data.push_back(cilmmodulename.get_name_leafdata());
    if (cilmconfiguredbootimagelevel.is_set || is_set(cilmconfiguredbootimagelevel.operation)) leaf_name_data.push_back(cilmconfiguredbootimagelevel.get_name_leafdata());
    if (cilmcurrentimagelevel.is_set || is_set(cilmcurrentimagelevel.operation)) leaf_name_data.push_back(cilmcurrentimagelevel.get_name_leafdata());
    if (cilmcurrentlicenseindex.is_set || is_set(cilmcurrentlicenseindex.operation)) leaf_name_data.push_back(cilmcurrentlicenseindex.get_name_leafdata());
    if (cilmcurrentlicensestoreindex.is_set || is_set(cilmcurrentlicensestoreindex.operation)) leaf_name_data.push_back(cilmcurrentlicensestoreindex.get_name_leafdata());
    if (cilmnextbootimagelevel.is_set || is_set(cilmnextbootimagelevel.operation)) leaf_name_data.push_back(cilmnextbootimagelevel.get_name_leafdata());
    if (cilmnextbootlicenseindex.is_set || is_set(cilmnextbootlicenseindex.operation)) leaf_name_data.push_back(cilmnextbootlicenseindex.get_name_leafdata());
    if (cilmnextbootlicensestoreindex.is_set || is_set(cilmnextbootlicensestoreindex.operation)) leaf_name_data.push_back(cilmnextbootlicensestoreindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename = value;
    }
    if(value_path == "cilmConfiguredBootImageLevel")
    {
        cilmconfiguredbootimagelevel = value;
    }
    if(value_path == "cilmCurrentImageLevel")
    {
        cilmcurrentimagelevel = value;
    }
    if(value_path == "cilmCurrentLicenseIndex")
    {
        cilmcurrentlicenseindex = value;
    }
    if(value_path == "cilmCurrentLicenseStoreIndex")
    {
        cilmcurrentlicensestoreindex = value;
    }
    if(value_path == "cilmNextBootImageLevel")
    {
        cilmnextbootimagelevel = value;
    }
    if(value_path == "cilmNextBootLicenseIndex")
    {
        cilmnextbootlicenseindex = value;
    }
    if(value_path == "cilmNextBootLicenseStoreIndex")
    {
        cilmnextbootlicensestoreindex = value;
    }
}

CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemaptable()
{
    yang_name = "cilmImageLevelToLicenseMapTable"; yang_parent_name = "CISCO-IMAGE-LICENSE-MGMT-MIB";
}

CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::~Cilmimageleveltolicensemaptable()
{
}

bool CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::has_data() const
{
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry_.size(); index++)
    {
        if(cilmimageleveltolicensemapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::has_operation() const
{
    for (std::size_t index=0; index<cilmimageleveltolicensemapentry_.size(); index++)
    {
        if(cilmimageleveltolicensemapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapTable";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cilmImageLevelToLicenseMapEntry")
    {
        for(auto const & c : cilmimageleveltolicensemapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry>();
        c->parent = this;
        cilmimageleveltolicensemapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cilmimageleveltolicensemapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::Cilmimageleveltolicensemapentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cilmmodulename{YType::str, "cilmModuleName"},
    cilmimagelicensemapindex{YType::uint32, "cilmImageLicenseMapIndex"},
    cilmimagelicenseimagelevel{YType::str, "cilmImageLicenseImageLevel"},
    cilmimagelicensename{YType::str, "cilmImageLicenseName"},
    cilmimagelicensepriority{YType::uint32, "cilmImageLicensePriority"}
{
    yang_name = "cilmImageLevelToLicenseMapEntry"; yang_parent_name = "cilmImageLevelToLicenseMapTable";
}

CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::~Cilmimageleveltolicensemapentry()
{
}

bool CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::has_data() const
{
    return entphysicalindex.is_set
	|| cilmmodulename.is_set
	|| cilmimagelicensemapindex.is_set
	|| cilmimagelicenseimagelevel.is_set
	|| cilmimagelicensename.is_set
	|| cilmimagelicensepriority.is_set;
}

bool CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cilmmodulename.operation)
	|| is_set(cilmimagelicensemapindex.operation)
	|| is_set(cilmimagelicenseimagelevel.operation)
	|| is_set(cilmimagelicensename.operation)
	|| is_set(cilmimagelicensepriority.operation);
}

std::string CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cilmImageLevelToLicenseMapEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cilmModuleName='" <<cilmmodulename <<"']" <<"[cilmImageLicenseMapIndex='" <<cilmimagelicensemapindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IMAGE-LICENSE-MGMT-MIB:CISCO-IMAGE-LICENSE-MGMT-MIB/cilmImageLevelToLicenseMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cilmmodulename.is_set || is_set(cilmmodulename.operation)) leaf_name_data.push_back(cilmmodulename.get_name_leafdata());
    if (cilmimagelicensemapindex.is_set || is_set(cilmimagelicensemapindex.operation)) leaf_name_data.push_back(cilmimagelicensemapindex.get_name_leafdata());
    if (cilmimagelicenseimagelevel.is_set || is_set(cilmimagelicenseimagelevel.operation)) leaf_name_data.push_back(cilmimagelicenseimagelevel.get_name_leafdata());
    if (cilmimagelicensename.is_set || is_set(cilmimagelicensename.operation)) leaf_name_data.push_back(cilmimagelicensename.get_name_leafdata());
    if (cilmimagelicensepriority.is_set || is_set(cilmimagelicensepriority.operation)) leaf_name_data.push_back(cilmimagelicensepriority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cilmModuleName")
    {
        cilmmodulename = value;
    }
    if(value_path == "cilmImageLicenseMapIndex")
    {
        cilmimagelicensemapindex = value;
    }
    if(value_path == "cilmImageLicenseImageLevel")
    {
        cilmimagelicenseimagelevel = value;
    }
    if(value_path == "cilmImageLicenseName")
    {
        cilmimagelicensename = value;
    }
    if(value_path == "cilmImageLicensePriority")
    {
        cilmimagelicensepriority = value;
    }
}


}
}

