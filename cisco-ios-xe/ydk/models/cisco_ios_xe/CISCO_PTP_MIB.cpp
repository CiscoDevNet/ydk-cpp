
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PTP_MIB.hpp"

namespace ydk {
namespace CISCO_PTP_MIB {

CiscoPtpMib::CiscoPtpMib()
    :
    ciscoptpmibsysteminfo_(std::make_shared<CiscoPtpMib::Ciscoptpmibsysteminfo>())
	,cptpclockcurrentdstable_(std::make_shared<CiscoPtpMib::Cptpclockcurrentdstable>())
	,cptpclockdefaultdstable_(std::make_shared<CiscoPtpMib::Cptpclockdefaultdstable>())
	,cptpclocknodetable_(std::make_shared<CiscoPtpMib::Cptpclocknodetable>())
	,cptpclockparentdstable_(std::make_shared<CiscoPtpMib::Cptpclockparentdstable>())
	,cptpclockportassociatetable_(std::make_shared<CiscoPtpMib::Cptpclockportassociatetable>())
	,cptpclockportdstable_(std::make_shared<CiscoPtpMib::Cptpclockportdstable>())
	,cptpclockportrunningtable_(std::make_shared<CiscoPtpMib::Cptpclockportrunningtable>())
	,cptpclockporttable_(std::make_shared<CiscoPtpMib::Cptpclockporttable>())
	,cptpclockporttransdstable_(std::make_shared<CiscoPtpMib::Cptpclockporttransdstable>())
	,cptpclockrunningtable_(std::make_shared<CiscoPtpMib::Cptpclockrunningtable>())
	,cptpclocktimepropertiesdstable_(std::make_shared<CiscoPtpMib::Cptpclocktimepropertiesdstable>())
	,cptpclocktransdefaultdstable_(std::make_shared<CiscoPtpMib::Cptpclocktransdefaultdstable>())
	,cptpsystemdomaintable_(std::make_shared<CiscoPtpMib::Cptpsystemdomaintable>())
	,cptpsystemtable_(std::make_shared<CiscoPtpMib::Cptpsystemtable>())
{
    ciscoptpmibsysteminfo_->parent = this;

    cptpclockcurrentdstable_->parent = this;

    cptpclockdefaultdstable_->parent = this;

    cptpclocknodetable_->parent = this;

    cptpclockparentdstable_->parent = this;

    cptpclockportassociatetable_->parent = this;

    cptpclockportdstable_->parent = this;

    cptpclockportrunningtable_->parent = this;

    cptpclockporttable_->parent = this;

    cptpclockporttransdstable_->parent = this;

    cptpclockrunningtable_->parent = this;

    cptpclocktimepropertiesdstable_->parent = this;

    cptpclocktransdefaultdstable_->parent = this;

    cptpsystemdomaintable_->parent = this;

    cptpsystemtable_->parent = this;

    yang_name = "CISCO-PTP-MIB"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::~CiscoPtpMib()
{
}

bool CiscoPtpMib::has_data() const
{
    return (ciscoptpmibsysteminfo_ !=  nullptr && ciscoptpmibsysteminfo_->has_data())
	|| (cptpclockcurrentdstable_ !=  nullptr && cptpclockcurrentdstable_->has_data())
	|| (cptpclockdefaultdstable_ !=  nullptr && cptpclockdefaultdstable_->has_data())
	|| (cptpclocknodetable_ !=  nullptr && cptpclocknodetable_->has_data())
	|| (cptpclockparentdstable_ !=  nullptr && cptpclockparentdstable_->has_data())
	|| (cptpclockportassociatetable_ !=  nullptr && cptpclockportassociatetable_->has_data())
	|| (cptpclockportdstable_ !=  nullptr && cptpclockportdstable_->has_data())
	|| (cptpclockportrunningtable_ !=  nullptr && cptpclockportrunningtable_->has_data())
	|| (cptpclockporttable_ !=  nullptr && cptpclockporttable_->has_data())
	|| (cptpclockporttransdstable_ !=  nullptr && cptpclockporttransdstable_->has_data())
	|| (cptpclockrunningtable_ !=  nullptr && cptpclockrunningtable_->has_data())
	|| (cptpclocktimepropertiesdstable_ !=  nullptr && cptpclocktimepropertiesdstable_->has_data())
	|| (cptpclocktransdefaultdstable_ !=  nullptr && cptpclocktransdefaultdstable_->has_data())
	|| (cptpsystemdomaintable_ !=  nullptr && cptpsystemdomaintable_->has_data())
	|| (cptpsystemtable_ !=  nullptr && cptpsystemtable_->has_data());
}

bool CiscoPtpMib::has_operation() const
{
    return is_set(operation)
	|| (ciscoptpmibsysteminfo_ !=  nullptr && ciscoptpmibsysteminfo_->has_operation())
	|| (cptpclockcurrentdstable_ !=  nullptr && cptpclockcurrentdstable_->has_operation())
	|| (cptpclockdefaultdstable_ !=  nullptr && cptpclockdefaultdstable_->has_operation())
	|| (cptpclocknodetable_ !=  nullptr && cptpclocknodetable_->has_operation())
	|| (cptpclockparentdstable_ !=  nullptr && cptpclockparentdstable_->has_operation())
	|| (cptpclockportassociatetable_ !=  nullptr && cptpclockportassociatetable_->has_operation())
	|| (cptpclockportdstable_ !=  nullptr && cptpclockportdstable_->has_operation())
	|| (cptpclockportrunningtable_ !=  nullptr && cptpclockportrunningtable_->has_operation())
	|| (cptpclockporttable_ !=  nullptr && cptpclockporttable_->has_operation())
	|| (cptpclockporttransdstable_ !=  nullptr && cptpclockporttransdstable_->has_operation())
	|| (cptpclockrunningtable_ !=  nullptr && cptpclockrunningtable_->has_operation())
	|| (cptpclocktimepropertiesdstable_ !=  nullptr && cptpclocktimepropertiesdstable_->has_operation())
	|| (cptpclocktransdefaultdstable_ !=  nullptr && cptpclocktransdefaultdstable_->has_operation())
	|| (cptpsystemdomaintable_ !=  nullptr && cptpsystemdomaintable_->has_operation())
	|| (cptpsystemtable_ !=  nullptr && cptpsystemtable_->has_operation());
}

std::string CiscoPtpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoPtpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPtpMIBSystemInfo")
    {
        if(ciscoptpmibsysteminfo_ == nullptr)
        {
            ciscoptpmibsysteminfo_ = std::make_shared<CiscoPtpMib::Ciscoptpmibsysteminfo>();
        }
        return ciscoptpmibsysteminfo_;
    }

    if(child_yang_name == "cPtpClockCurrentDSTable")
    {
        if(cptpclockcurrentdstable_ == nullptr)
        {
            cptpclockcurrentdstable_ = std::make_shared<CiscoPtpMib::Cptpclockcurrentdstable>();
        }
        return cptpclockcurrentdstable_;
    }

    if(child_yang_name == "cPtpClockDefaultDSTable")
    {
        if(cptpclockdefaultdstable_ == nullptr)
        {
            cptpclockdefaultdstable_ = std::make_shared<CiscoPtpMib::Cptpclockdefaultdstable>();
        }
        return cptpclockdefaultdstable_;
    }

    if(child_yang_name == "cPtpClockNodeTable")
    {
        if(cptpclocknodetable_ == nullptr)
        {
            cptpclocknodetable_ = std::make_shared<CiscoPtpMib::Cptpclocknodetable>();
        }
        return cptpclocknodetable_;
    }

    if(child_yang_name == "cPtpClockParentDSTable")
    {
        if(cptpclockparentdstable_ == nullptr)
        {
            cptpclockparentdstable_ = std::make_shared<CiscoPtpMib::Cptpclockparentdstable>();
        }
        return cptpclockparentdstable_;
    }

    if(child_yang_name == "cPtpClockPortAssociateTable")
    {
        if(cptpclockportassociatetable_ == nullptr)
        {
            cptpclockportassociatetable_ = std::make_shared<CiscoPtpMib::Cptpclockportassociatetable>();
        }
        return cptpclockportassociatetable_;
    }

    if(child_yang_name == "cPtpClockPortDSTable")
    {
        if(cptpclockportdstable_ == nullptr)
        {
            cptpclockportdstable_ = std::make_shared<CiscoPtpMib::Cptpclockportdstable>();
        }
        return cptpclockportdstable_;
    }

    if(child_yang_name == "cPtpClockPortRunningTable")
    {
        if(cptpclockportrunningtable_ == nullptr)
        {
            cptpclockportrunningtable_ = std::make_shared<CiscoPtpMib::Cptpclockportrunningtable>();
        }
        return cptpclockportrunningtable_;
    }

    if(child_yang_name == "cPtpClockPortTable")
    {
        if(cptpclockporttable_ == nullptr)
        {
            cptpclockporttable_ = std::make_shared<CiscoPtpMib::Cptpclockporttable>();
        }
        return cptpclockporttable_;
    }

    if(child_yang_name == "cPtpClockPortTransDSTable")
    {
        if(cptpclockporttransdstable_ == nullptr)
        {
            cptpclockporttransdstable_ = std::make_shared<CiscoPtpMib::Cptpclockporttransdstable>();
        }
        return cptpclockporttransdstable_;
    }

    if(child_yang_name == "cPtpClockRunningTable")
    {
        if(cptpclockrunningtable_ == nullptr)
        {
            cptpclockrunningtable_ = std::make_shared<CiscoPtpMib::Cptpclockrunningtable>();
        }
        return cptpclockrunningtable_;
    }

    if(child_yang_name == "cPtpClockTimePropertiesDSTable")
    {
        if(cptpclocktimepropertiesdstable_ == nullptr)
        {
            cptpclocktimepropertiesdstable_ = std::make_shared<CiscoPtpMib::Cptpclocktimepropertiesdstable>();
        }
        return cptpclocktimepropertiesdstable_;
    }

    if(child_yang_name == "cPtpClockTransDefaultDSTable")
    {
        if(cptpclocktransdefaultdstable_ == nullptr)
        {
            cptpclocktransdefaultdstable_ = std::make_shared<CiscoPtpMib::Cptpclocktransdefaultdstable>();
        }
        return cptpclocktransdefaultdstable_;
    }

    if(child_yang_name == "cPtpSystemDomainTable")
    {
        if(cptpsystemdomaintable_ == nullptr)
        {
            cptpsystemdomaintable_ = std::make_shared<CiscoPtpMib::Cptpsystemdomaintable>();
        }
        return cptpsystemdomaintable_;
    }

    if(child_yang_name == "cPtpSystemTable")
    {
        if(cptpsystemtable_ == nullptr)
        {
            cptpsystemtable_ = std::make_shared<CiscoPtpMib::Cptpsystemtable>();
        }
        return cptpsystemtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoptpmibsysteminfo_ != nullptr)
    {
        children["ciscoPtpMIBSystemInfo"] = ciscoptpmibsysteminfo_;
    }

    if(cptpclockcurrentdstable_ != nullptr)
    {
        children["cPtpClockCurrentDSTable"] = cptpclockcurrentdstable_;
    }

    if(cptpclockdefaultdstable_ != nullptr)
    {
        children["cPtpClockDefaultDSTable"] = cptpclockdefaultdstable_;
    }

    if(cptpclocknodetable_ != nullptr)
    {
        children["cPtpClockNodeTable"] = cptpclocknodetable_;
    }

    if(cptpclockparentdstable_ != nullptr)
    {
        children["cPtpClockParentDSTable"] = cptpclockparentdstable_;
    }

    if(cptpclockportassociatetable_ != nullptr)
    {
        children["cPtpClockPortAssociateTable"] = cptpclockportassociatetable_;
    }

    if(cptpclockportdstable_ != nullptr)
    {
        children["cPtpClockPortDSTable"] = cptpclockportdstable_;
    }

    if(cptpclockportrunningtable_ != nullptr)
    {
        children["cPtpClockPortRunningTable"] = cptpclockportrunningtable_;
    }

    if(cptpclockporttable_ != nullptr)
    {
        children["cPtpClockPortTable"] = cptpclockporttable_;
    }

    if(cptpclockporttransdstable_ != nullptr)
    {
        children["cPtpClockPortTransDSTable"] = cptpclockporttransdstable_;
    }

    if(cptpclockrunningtable_ != nullptr)
    {
        children["cPtpClockRunningTable"] = cptpclockrunningtable_;
    }

    if(cptpclocktimepropertiesdstable_ != nullptr)
    {
        children["cPtpClockTimePropertiesDSTable"] = cptpclocktimepropertiesdstable_;
    }

    if(cptpclocktransdefaultdstable_ != nullptr)
    {
        children["cPtpClockTransDefaultDSTable"] = cptpclocktransdefaultdstable_;
    }

    if(cptpsystemdomaintable_ != nullptr)
    {
        children["cPtpSystemDomainTable"] = cptpsystemdomaintable_;
    }

    if(cptpsystemtable_ != nullptr)
    {
        children["cPtpSystemTable"] = cptpsystemtable_;
    }

    return children;
}

void CiscoPtpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoPtpMib::clone_ptr() const
{
    return std::make_shared<CiscoPtpMib>();
}

std::string CiscoPtpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoPtpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoPtpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoPtpMib::Ciscoptpmibsysteminfo::Ciscoptpmibsysteminfo()
    :
    cptpsystemprofile{YType::enumeration, "cPtpSystemProfile"}
{
    yang_name = "ciscoPtpMIBSystemInfo"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Ciscoptpmibsysteminfo::~Ciscoptpmibsysteminfo()
{
}

bool CiscoPtpMib::Ciscoptpmibsysteminfo::has_data() const
{
    return cptpsystemprofile.is_set;
}

bool CiscoPtpMib::Ciscoptpmibsysteminfo::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpsystemprofile.operation);
}

std::string CiscoPtpMib::Ciscoptpmibsysteminfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPtpMIBSystemInfo";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Ciscoptpmibsysteminfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpsystemprofile.is_set || is_set(cptpsystemprofile.operation)) leaf_name_data.push_back(cptpsystemprofile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Ciscoptpmibsysteminfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Ciscoptpmibsysteminfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Ciscoptpmibsysteminfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpSystemProfile")
    {
        cptpsystemprofile = value;
    }
}

CiscoPtpMib::Cptpsystemtable::Cptpsystemtable()
{
    yang_name = "cPtpSystemTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpsystemtable::~Cptpsystemtable()
{
}

bool CiscoPtpMib::Cptpsystemtable::has_data() const
{
    for (std::size_t index=0; index<cptpsystementry_.size(); index++)
    {
        if(cptpsystementry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpsystemtable::has_operation() const
{
    for (std::size_t index=0; index<cptpsystementry_.size(); index++)
    {
        if(cptpsystementry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpsystemtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpsystemtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpsystemtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpSystemEntry")
    {
        for(auto const & c : cptpsystementry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpsystemtable::Cptpsystementry>();
        c->parent = this;
        cptpsystementry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpsystemtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpsystementry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpsystemtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpsystemtable::Cptpsystementry::Cptpsystementry()
    :
    cptpdomainindex{YType::uint32, "cPtpDomainIndex"},
    cptpinstanceindex{YType::uint32, "cPtpInstanceIndex"},
    cptpdomainclockportphysicalinterfacestotal{YType::uint32, "cPtpDomainClockPortPhysicalInterfacesTotal"},
    cptpdomainclockportstotal{YType::uint32, "cPtpDomainClockPortsTotal"}
{
    yang_name = "cPtpSystemEntry"; yang_parent_name = "cPtpSystemTable";
}

CiscoPtpMib::Cptpsystemtable::Cptpsystementry::~Cptpsystementry()
{
}

bool CiscoPtpMib::Cptpsystemtable::Cptpsystementry::has_data() const
{
    return cptpdomainindex.is_set
	|| cptpinstanceindex.is_set
	|| cptpdomainclockportphysicalinterfacestotal.is_set
	|| cptpdomainclockportstotal.is_set;
}

bool CiscoPtpMib::Cptpsystemtable::Cptpsystementry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpdomainindex.operation)
	|| is_set(cptpinstanceindex.operation)
	|| is_set(cptpdomainclockportphysicalinterfacestotal.operation)
	|| is_set(cptpdomainclockportstotal.operation);
}

std::string CiscoPtpMib::Cptpsystemtable::Cptpsystementry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemEntry" <<"[cPtpDomainIndex='" <<cptpdomainindex <<"']" <<"[cPtpInstanceIndex='" <<cptpinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpsystemtable::Cptpsystementry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpSystemTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpdomainindex.is_set || is_set(cptpdomainindex.operation)) leaf_name_data.push_back(cptpdomainindex.get_name_leafdata());
    if (cptpinstanceindex.is_set || is_set(cptpinstanceindex.operation)) leaf_name_data.push_back(cptpinstanceindex.get_name_leafdata());
    if (cptpdomainclockportphysicalinterfacestotal.is_set || is_set(cptpdomainclockportphysicalinterfacestotal.operation)) leaf_name_data.push_back(cptpdomainclockportphysicalinterfacestotal.get_name_leafdata());
    if (cptpdomainclockportstotal.is_set || is_set(cptpdomainclockportstotal.operation)) leaf_name_data.push_back(cptpdomainclockportstotal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpsystemtable::Cptpsystementry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpsystemtable::Cptpsystementry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpsystemtable::Cptpsystementry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpDomainIndex")
    {
        cptpdomainindex = value;
    }
    if(value_path == "cPtpInstanceIndex")
    {
        cptpinstanceindex = value;
    }
    if(value_path == "cPtpDomainClockPortPhysicalInterfacesTotal")
    {
        cptpdomainclockportphysicalinterfacestotal = value;
    }
    if(value_path == "cPtpDomainClockPortsTotal")
    {
        cptpdomainclockportstotal = value;
    }
}

CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomaintable()
{
    yang_name = "cPtpSystemDomainTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpsystemdomaintable::~Cptpsystemdomaintable()
{
}

bool CiscoPtpMib::Cptpsystemdomaintable::has_data() const
{
    for (std::size_t index=0; index<cptpsystemdomainentry_.size(); index++)
    {
        if(cptpsystemdomainentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpsystemdomaintable::has_operation() const
{
    for (std::size_t index=0; index<cptpsystemdomainentry_.size(); index++)
    {
        if(cptpsystemdomainentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpsystemdomaintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemDomainTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpsystemdomaintable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpsystemdomaintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpSystemDomainEntry")
    {
        for(auto const & c : cptpsystemdomainentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry>();
        c->parent = this;
        cptpsystemdomainentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpsystemdomaintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpsystemdomainentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpsystemdomaintable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::Cptpsystemdomainentry()
    :
    cptpsystemdomainclocktypeindex{YType::enumeration, "cPtpSystemDomainClockTypeIndex"},
    cptpsystemdomaintotals{YType::uint32, "cPtpSystemDomainTotals"}
{
    yang_name = "cPtpSystemDomainEntry"; yang_parent_name = "cPtpSystemDomainTable";
}

CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::~Cptpsystemdomainentry()
{
}

bool CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::has_data() const
{
    return cptpsystemdomainclocktypeindex.is_set
	|| cptpsystemdomaintotals.is_set;
}

bool CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpsystemdomainclocktypeindex.operation)
	|| is_set(cptpsystemdomaintotals.operation);
}

std::string CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemDomainEntry" <<"[cPtpSystemDomainClockTypeIndex='" <<cptpsystemdomainclocktypeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpSystemDomainTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpsystemdomainclocktypeindex.is_set || is_set(cptpsystemdomainclocktypeindex.operation)) leaf_name_data.push_back(cptpsystemdomainclocktypeindex.get_name_leafdata());
    if (cptpsystemdomaintotals.is_set || is_set(cptpsystemdomaintotals.operation)) leaf_name_data.push_back(cptpsystemdomaintotals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpSystemDomainClockTypeIndex")
    {
        cptpsystemdomainclocktypeindex = value;
    }
    if(value_path == "cPtpSystemDomainTotals")
    {
        cptpsystemdomaintotals = value;
    }
}

CiscoPtpMib::Cptpclocknodetable::Cptpclocknodetable()
{
    yang_name = "cPtpClockNodeTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclocknodetable::~Cptpclocknodetable()
{
}

bool CiscoPtpMib::Cptpclocknodetable::has_data() const
{
    for (std::size_t index=0; index<cptpclocknodeentry_.size(); index++)
    {
        if(cptpclocknodeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclocknodetable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocknodeentry_.size(); index++)
    {
        if(cptpclocknodeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclocknodetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockNodeTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocknodetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocknodetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockNodeEntry")
    {
        for(auto const & c : cptpclocknodeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry>();
        c->parent = this;
        cptpclocknodeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocknodetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclocknodeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclocknodetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::Cptpclocknodeentry()
    :
    cptpclockdomainindex{YType::uint32, "cPtpClockDomainIndex"},
    cptpclocktypeindex{YType::enumeration, "cPtpClockTypeIndex"},
    cptpclockinstanceindex{YType::uint32, "cPtpClockInstanceIndex"},
    cptpclockinput1ppsenabled{YType::boolean, "cPtpClockInput1ppsEnabled"},
    cptpclockinput1ppsinterface{YType::str, "cPtpClockInput1ppsInterface"},
    cptpclockinputfrequencyenabled{YType::boolean, "cPtpClockInputFrequencyEnabled"},
    cptpclockoutput1ppsenabled{YType::boolean, "cPtpClockOutput1ppsEnabled"},
    cptpclockoutput1ppsinterface{YType::str, "cPtpClockOutput1ppsInterface"},
    cptpclockoutput1ppsoffsetenabled{YType::boolean, "cPtpClockOutput1ppsOffsetEnabled"},
    cptpclockoutput1ppsoffsetnegative{YType::boolean, "cPtpClockOutput1ppsOffsetNegative"},
    cptpclockoutput1ppsoffsetvalue{YType::uint32, "cPtpClockOutput1ppsOffsetValue"},
    cptpclocktodenabled{YType::boolean, "cPtpClockTODEnabled"},
    cptpclocktodinterface{YType::str, "cPtpClockTODInterface"}
{
    yang_name = "cPtpClockNodeEntry"; yang_parent_name = "cPtpClockNodeTable";
}

CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::~Cptpclocknodeentry()
{
}

bool CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::has_data() const
{
    return cptpclockdomainindex.is_set
	|| cptpclocktypeindex.is_set
	|| cptpclockinstanceindex.is_set
	|| cptpclockinput1ppsenabled.is_set
	|| cptpclockinput1ppsinterface.is_set
	|| cptpclockinputfrequencyenabled.is_set
	|| cptpclockoutput1ppsenabled.is_set
	|| cptpclockoutput1ppsinterface.is_set
	|| cptpclockoutput1ppsoffsetenabled.is_set
	|| cptpclockoutput1ppsoffsetnegative.is_set
	|| cptpclockoutput1ppsoffsetvalue.is_set
	|| cptpclocktodenabled.is_set
	|| cptpclocktodinterface.is_set;
}

bool CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockdomainindex.operation)
	|| is_set(cptpclocktypeindex.operation)
	|| is_set(cptpclockinstanceindex.operation)
	|| is_set(cptpclockinput1ppsenabled.operation)
	|| is_set(cptpclockinput1ppsinterface.operation)
	|| is_set(cptpclockinputfrequencyenabled.operation)
	|| is_set(cptpclockoutput1ppsenabled.operation)
	|| is_set(cptpclockoutput1ppsinterface.operation)
	|| is_set(cptpclockoutput1ppsoffsetenabled.operation)
	|| is_set(cptpclockoutput1ppsoffsetnegative.operation)
	|| is_set(cptpclockoutput1ppsoffsetvalue.operation)
	|| is_set(cptpclocktodenabled.operation)
	|| is_set(cptpclocktodinterface.operation);
}

std::string CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockNodeEntry" <<"[cPtpClockDomainIndex='" <<cptpclockdomainindex <<"']" <<"[cPtpClockTypeIndex='" <<cptpclocktypeindex <<"']" <<"[cPtpClockInstanceIndex='" <<cptpclockinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockNodeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockdomainindex.is_set || is_set(cptpclockdomainindex.operation)) leaf_name_data.push_back(cptpclockdomainindex.get_name_leafdata());
    if (cptpclocktypeindex.is_set || is_set(cptpclocktypeindex.operation)) leaf_name_data.push_back(cptpclocktypeindex.get_name_leafdata());
    if (cptpclockinstanceindex.is_set || is_set(cptpclockinstanceindex.operation)) leaf_name_data.push_back(cptpclockinstanceindex.get_name_leafdata());
    if (cptpclockinput1ppsenabled.is_set || is_set(cptpclockinput1ppsenabled.operation)) leaf_name_data.push_back(cptpclockinput1ppsenabled.get_name_leafdata());
    if (cptpclockinput1ppsinterface.is_set || is_set(cptpclockinput1ppsinterface.operation)) leaf_name_data.push_back(cptpclockinput1ppsinterface.get_name_leafdata());
    if (cptpclockinputfrequencyenabled.is_set || is_set(cptpclockinputfrequencyenabled.operation)) leaf_name_data.push_back(cptpclockinputfrequencyenabled.get_name_leafdata());
    if (cptpclockoutput1ppsenabled.is_set || is_set(cptpclockoutput1ppsenabled.operation)) leaf_name_data.push_back(cptpclockoutput1ppsenabled.get_name_leafdata());
    if (cptpclockoutput1ppsinterface.is_set || is_set(cptpclockoutput1ppsinterface.operation)) leaf_name_data.push_back(cptpclockoutput1ppsinterface.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetenabled.is_set || is_set(cptpclockoutput1ppsoffsetenabled.operation)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetenabled.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetnegative.is_set || is_set(cptpclockoutput1ppsoffsetnegative.operation)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetnegative.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetvalue.is_set || is_set(cptpclockoutput1ppsoffsetvalue.operation)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetvalue.get_name_leafdata());
    if (cptpclocktodenabled.is_set || is_set(cptpclocktodenabled.operation)) leaf_name_data.push_back(cptpclocktodenabled.get_name_leafdata());
    if (cptpclocktodinterface.is_set || is_set(cptpclocktodinterface.operation)) leaf_name_data.push_back(cptpclocktodinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockDomainIndex")
    {
        cptpclockdomainindex = value;
    }
    if(value_path == "cPtpClockTypeIndex")
    {
        cptpclocktypeindex = value;
    }
    if(value_path == "cPtpClockInstanceIndex")
    {
        cptpclockinstanceindex = value;
    }
    if(value_path == "cPtpClockInput1ppsEnabled")
    {
        cptpclockinput1ppsenabled = value;
    }
    if(value_path == "cPtpClockInput1ppsInterface")
    {
        cptpclockinput1ppsinterface = value;
    }
    if(value_path == "cPtpClockInputFrequencyEnabled")
    {
        cptpclockinputfrequencyenabled = value;
    }
    if(value_path == "cPtpClockOutput1ppsEnabled")
    {
        cptpclockoutput1ppsenabled = value;
    }
    if(value_path == "cPtpClockOutput1ppsInterface")
    {
        cptpclockoutput1ppsinterface = value;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetEnabled")
    {
        cptpclockoutput1ppsoffsetenabled = value;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetNegative")
    {
        cptpclockoutput1ppsoffsetnegative = value;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetValue")
    {
        cptpclockoutput1ppsoffsetvalue = value;
    }
    if(value_path == "cPtpClockTODEnabled")
    {
        cptpclocktodenabled = value;
    }
    if(value_path == "cPtpClockTODInterface")
    {
        cptpclocktodinterface = value;
    }
}

CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdstable()
{
    yang_name = "cPtpClockCurrentDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockcurrentdstable::~Cptpclockcurrentdstable()
{
}

bool CiscoPtpMib::Cptpclockcurrentdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclockcurrentdsentry_.size(); index++)
    {
        if(cptpclockcurrentdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockcurrentdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockcurrentdsentry_.size(); index++)
    {
        if(cptpclockcurrentdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockcurrentdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockCurrentDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockcurrentdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockcurrentdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockCurrentDSEntry")
    {
        for(auto const & c : cptpclockcurrentdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry>();
        c->parent = this;
        cptpclockcurrentdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockcurrentdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockcurrentdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockcurrentdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::Cptpclockcurrentdsentry()
    :
    cptpclockcurrentdsdomainindex{YType::uint32, "cPtpClockCurrentDSDomainIndex"},
    cptpclockcurrentdsclocktypeindex{YType::enumeration, "cPtpClockCurrentDSClockTypeIndex"},
    cptpclockcurrentdsinstanceindex{YType::uint32, "cPtpClockCurrentDSInstanceIndex"},
    cptpclockcurrentdsmeanpathdelay{YType::str, "cPtpClockCurrentDSMeanPathDelay"},
    cptpclockcurrentdsoffsetfrommaster{YType::str, "cPtpClockCurrentDSOffsetFromMaster"},
    cptpclockcurrentdsstepsremoved{YType::uint32, "cPtpClockCurrentDSStepsRemoved"}
{
    yang_name = "cPtpClockCurrentDSEntry"; yang_parent_name = "cPtpClockCurrentDSTable";
}

CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::~Cptpclockcurrentdsentry()
{
}

bool CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::has_data() const
{
    return cptpclockcurrentdsdomainindex.is_set
	|| cptpclockcurrentdsclocktypeindex.is_set
	|| cptpclockcurrentdsinstanceindex.is_set
	|| cptpclockcurrentdsmeanpathdelay.is_set
	|| cptpclockcurrentdsoffsetfrommaster.is_set
	|| cptpclockcurrentdsstepsremoved.is_set;
}

bool CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockcurrentdsdomainindex.operation)
	|| is_set(cptpclockcurrentdsclocktypeindex.operation)
	|| is_set(cptpclockcurrentdsinstanceindex.operation)
	|| is_set(cptpclockcurrentdsmeanpathdelay.operation)
	|| is_set(cptpclockcurrentdsoffsetfrommaster.operation)
	|| is_set(cptpclockcurrentdsstepsremoved.operation);
}

std::string CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockCurrentDSEntry" <<"[cPtpClockCurrentDSDomainIndex='" <<cptpclockcurrentdsdomainindex <<"']" <<"[cPtpClockCurrentDSClockTypeIndex='" <<cptpclockcurrentdsclocktypeindex <<"']" <<"[cPtpClockCurrentDSInstanceIndex='" <<cptpclockcurrentdsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockCurrentDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockcurrentdsdomainindex.is_set || is_set(cptpclockcurrentdsdomainindex.operation)) leaf_name_data.push_back(cptpclockcurrentdsdomainindex.get_name_leafdata());
    if (cptpclockcurrentdsclocktypeindex.is_set || is_set(cptpclockcurrentdsclocktypeindex.operation)) leaf_name_data.push_back(cptpclockcurrentdsclocktypeindex.get_name_leafdata());
    if (cptpclockcurrentdsinstanceindex.is_set || is_set(cptpclockcurrentdsinstanceindex.operation)) leaf_name_data.push_back(cptpclockcurrentdsinstanceindex.get_name_leafdata());
    if (cptpclockcurrentdsmeanpathdelay.is_set || is_set(cptpclockcurrentdsmeanpathdelay.operation)) leaf_name_data.push_back(cptpclockcurrentdsmeanpathdelay.get_name_leafdata());
    if (cptpclockcurrentdsoffsetfrommaster.is_set || is_set(cptpclockcurrentdsoffsetfrommaster.operation)) leaf_name_data.push_back(cptpclockcurrentdsoffsetfrommaster.get_name_leafdata());
    if (cptpclockcurrentdsstepsremoved.is_set || is_set(cptpclockcurrentdsstepsremoved.operation)) leaf_name_data.push_back(cptpclockcurrentdsstepsremoved.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockCurrentDSDomainIndex")
    {
        cptpclockcurrentdsdomainindex = value;
    }
    if(value_path == "cPtpClockCurrentDSClockTypeIndex")
    {
        cptpclockcurrentdsclocktypeindex = value;
    }
    if(value_path == "cPtpClockCurrentDSInstanceIndex")
    {
        cptpclockcurrentdsinstanceindex = value;
    }
    if(value_path == "cPtpClockCurrentDSMeanPathDelay")
    {
        cptpclockcurrentdsmeanpathdelay = value;
    }
    if(value_path == "cPtpClockCurrentDSOffsetFromMaster")
    {
        cptpclockcurrentdsoffsetfrommaster = value;
    }
    if(value_path == "cPtpClockCurrentDSStepsRemoved")
    {
        cptpclockcurrentdsstepsremoved = value;
    }
}

CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdstable()
{
    yang_name = "cPtpClockParentDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockparentdstable::~Cptpclockparentdstable()
{
}

bool CiscoPtpMib::Cptpclockparentdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclockparentdsentry_.size(); index++)
    {
        if(cptpclockparentdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockparentdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockparentdsentry_.size(); index++)
    {
        if(cptpclockparentdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockparentdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockParentDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockparentdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockparentdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockParentDSEntry")
    {
        for(auto const & c : cptpclockparentdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry>();
        c->parent = this;
        cptpclockparentdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockparentdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockparentdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockparentdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::Cptpclockparentdsentry()
    :
    cptpclockparentdsdomainindex{YType::uint32, "cPtpClockParentDSDomainIndex"},
    cptpclockparentdsclocktypeindex{YType::enumeration, "cPtpClockParentDSClockTypeIndex"},
    cptpclockparentdsinstanceindex{YType::uint32, "cPtpClockParentDSInstanceIndex"},
    cptpclockparentdsclockphchrate{YType::int32, "cPtpClockParentDSClockPhChRate"},
    cptpclockparentdsgmclockidentity{YType::str, "cPtpClockParentDSGMClockIdentity"},
    cptpclockparentdsgmclockpriority1{YType::int32, "cPtpClockParentDSGMClockPriority1"},
    cptpclockparentdsgmclockpriority2{YType::int32, "cPtpClockParentDSGMClockPriority2"},
    cptpclockparentdsgmclockqualityaccuracy{YType::enumeration, "cPtpClockParentDSGMClockQualityAccuracy"},
    cptpclockparentdsgmclockqualityclass{YType::uint32, "cPtpClockParentDSGMClockQualityClass"},
    cptpclockparentdsgmclockqualityoffset{YType::uint32, "cPtpClockParentDSGMClockQualityOffset"},
    cptpclockparentdsoffset{YType::int32, "cPtpClockParentDSOffset"},
    cptpclockparentdsparentportidentity{YType::str, "cPtpClockParentDSParentPortIdentity"},
    cptpclockparentdsparentstats{YType::boolean, "cPtpClockParentDSParentStats"}
{
    yang_name = "cPtpClockParentDSEntry"; yang_parent_name = "cPtpClockParentDSTable";
}

CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::~Cptpclockparentdsentry()
{
}

bool CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::has_data() const
{
    return cptpclockparentdsdomainindex.is_set
	|| cptpclockparentdsclocktypeindex.is_set
	|| cptpclockparentdsinstanceindex.is_set
	|| cptpclockparentdsclockphchrate.is_set
	|| cptpclockparentdsgmclockidentity.is_set
	|| cptpclockparentdsgmclockpriority1.is_set
	|| cptpclockparentdsgmclockpriority2.is_set
	|| cptpclockparentdsgmclockqualityaccuracy.is_set
	|| cptpclockparentdsgmclockqualityclass.is_set
	|| cptpclockparentdsgmclockqualityoffset.is_set
	|| cptpclockparentdsoffset.is_set
	|| cptpclockparentdsparentportidentity.is_set
	|| cptpclockparentdsparentstats.is_set;
}

bool CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockparentdsdomainindex.operation)
	|| is_set(cptpclockparentdsclocktypeindex.operation)
	|| is_set(cptpclockparentdsinstanceindex.operation)
	|| is_set(cptpclockparentdsclockphchrate.operation)
	|| is_set(cptpclockparentdsgmclockidentity.operation)
	|| is_set(cptpclockparentdsgmclockpriority1.operation)
	|| is_set(cptpclockparentdsgmclockpriority2.operation)
	|| is_set(cptpclockparentdsgmclockqualityaccuracy.operation)
	|| is_set(cptpclockparentdsgmclockqualityclass.operation)
	|| is_set(cptpclockparentdsgmclockqualityoffset.operation)
	|| is_set(cptpclockparentdsoffset.operation)
	|| is_set(cptpclockparentdsparentportidentity.operation)
	|| is_set(cptpclockparentdsparentstats.operation);
}

std::string CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockParentDSEntry" <<"[cPtpClockParentDSDomainIndex='" <<cptpclockparentdsdomainindex <<"']" <<"[cPtpClockParentDSClockTypeIndex='" <<cptpclockparentdsclocktypeindex <<"']" <<"[cPtpClockParentDSInstanceIndex='" <<cptpclockparentdsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockParentDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockparentdsdomainindex.is_set || is_set(cptpclockparentdsdomainindex.operation)) leaf_name_data.push_back(cptpclockparentdsdomainindex.get_name_leafdata());
    if (cptpclockparentdsclocktypeindex.is_set || is_set(cptpclockparentdsclocktypeindex.operation)) leaf_name_data.push_back(cptpclockparentdsclocktypeindex.get_name_leafdata());
    if (cptpclockparentdsinstanceindex.is_set || is_set(cptpclockparentdsinstanceindex.operation)) leaf_name_data.push_back(cptpclockparentdsinstanceindex.get_name_leafdata());
    if (cptpclockparentdsclockphchrate.is_set || is_set(cptpclockparentdsclockphchrate.operation)) leaf_name_data.push_back(cptpclockparentdsclockphchrate.get_name_leafdata());
    if (cptpclockparentdsgmclockidentity.is_set || is_set(cptpclockparentdsgmclockidentity.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockidentity.get_name_leafdata());
    if (cptpclockparentdsgmclockpriority1.is_set || is_set(cptpclockparentdsgmclockpriority1.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockpriority1.get_name_leafdata());
    if (cptpclockparentdsgmclockpriority2.is_set || is_set(cptpclockparentdsgmclockpriority2.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockpriority2.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityaccuracy.is_set || is_set(cptpclockparentdsgmclockqualityaccuracy.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityaccuracy.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityclass.is_set || is_set(cptpclockparentdsgmclockqualityclass.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityclass.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityoffset.is_set || is_set(cptpclockparentdsgmclockqualityoffset.operation)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityoffset.get_name_leafdata());
    if (cptpclockparentdsoffset.is_set || is_set(cptpclockparentdsoffset.operation)) leaf_name_data.push_back(cptpclockparentdsoffset.get_name_leafdata());
    if (cptpclockparentdsparentportidentity.is_set || is_set(cptpclockparentdsparentportidentity.operation)) leaf_name_data.push_back(cptpclockparentdsparentportidentity.get_name_leafdata());
    if (cptpclockparentdsparentstats.is_set || is_set(cptpclockparentdsparentstats.operation)) leaf_name_data.push_back(cptpclockparentdsparentstats.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockParentDSDomainIndex")
    {
        cptpclockparentdsdomainindex = value;
    }
    if(value_path == "cPtpClockParentDSClockTypeIndex")
    {
        cptpclockparentdsclocktypeindex = value;
    }
    if(value_path == "cPtpClockParentDSInstanceIndex")
    {
        cptpclockparentdsinstanceindex = value;
    }
    if(value_path == "cPtpClockParentDSClockPhChRate")
    {
        cptpclockparentdsclockphchrate = value;
    }
    if(value_path == "cPtpClockParentDSGMClockIdentity")
    {
        cptpclockparentdsgmclockidentity = value;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority1")
    {
        cptpclockparentdsgmclockpriority1 = value;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority2")
    {
        cptpclockparentdsgmclockpriority2 = value;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityAccuracy")
    {
        cptpclockparentdsgmclockqualityaccuracy = value;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityClass")
    {
        cptpclockparentdsgmclockqualityclass = value;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityOffset")
    {
        cptpclockparentdsgmclockqualityoffset = value;
    }
    if(value_path == "cPtpClockParentDSOffset")
    {
        cptpclockparentdsoffset = value;
    }
    if(value_path == "cPtpClockParentDSParentPortIdentity")
    {
        cptpclockparentdsparentportidentity = value;
    }
    if(value_path == "cPtpClockParentDSParentStats")
    {
        cptpclockparentdsparentstats = value;
    }
}

CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdstable()
{
    yang_name = "cPtpClockDefaultDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockdefaultdstable::~Cptpclockdefaultdstable()
{
}

bool CiscoPtpMib::Cptpclockdefaultdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclockdefaultdsentry_.size(); index++)
    {
        if(cptpclockdefaultdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockdefaultdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockdefaultdsentry_.size(); index++)
    {
        if(cptpclockdefaultdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockdefaultdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockDefaultDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockdefaultdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockdefaultdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockDefaultDSEntry")
    {
        for(auto const & c : cptpclockdefaultdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry>();
        c->parent = this;
        cptpclockdefaultdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockdefaultdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockdefaultdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockdefaultdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::Cptpclockdefaultdsentry()
    :
    cptpclockdefaultdsdomainindex{YType::uint32, "cPtpClockDefaultDSDomainIndex"},
    cptpclockdefaultdsclocktypeindex{YType::enumeration, "cPtpClockDefaultDSClockTypeIndex"},
    cptpclockdefaultdsinstanceindex{YType::uint32, "cPtpClockDefaultDSInstanceIndex"},
    cptpclockdefaultdsclockidentity{YType::str, "cPtpClockDefaultDSClockIdentity"},
    cptpclockdefaultdspriority1{YType::int32, "cPtpClockDefaultDSPriority1"},
    cptpclockdefaultdspriority2{YType::int32, "cPtpClockDefaultDSPriority2"},
    cptpclockdefaultdsqualityaccuracy{YType::enumeration, "cPtpClockDefaultDSQualityAccuracy"},
    cptpclockdefaultdsqualityclass{YType::uint32, "cPtpClockDefaultDSQualityClass"},
    cptpclockdefaultdsqualityoffset{YType::int32, "cPtpClockDefaultDSQualityOffset"},
    cptpclockdefaultdsslaveonly{YType::boolean, "cPtpClockDefaultDSSlaveOnly"},
    cptpclockdefaultdstwostepflag{YType::boolean, "cPtpClockDefaultDSTwoStepFlag"}
{
    yang_name = "cPtpClockDefaultDSEntry"; yang_parent_name = "cPtpClockDefaultDSTable";
}

CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::~Cptpclockdefaultdsentry()
{
}

bool CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::has_data() const
{
    return cptpclockdefaultdsdomainindex.is_set
	|| cptpclockdefaultdsclocktypeindex.is_set
	|| cptpclockdefaultdsinstanceindex.is_set
	|| cptpclockdefaultdsclockidentity.is_set
	|| cptpclockdefaultdspriority1.is_set
	|| cptpclockdefaultdspriority2.is_set
	|| cptpclockdefaultdsqualityaccuracy.is_set
	|| cptpclockdefaultdsqualityclass.is_set
	|| cptpclockdefaultdsqualityoffset.is_set
	|| cptpclockdefaultdsslaveonly.is_set
	|| cptpclockdefaultdstwostepflag.is_set;
}

bool CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockdefaultdsdomainindex.operation)
	|| is_set(cptpclockdefaultdsclocktypeindex.operation)
	|| is_set(cptpclockdefaultdsinstanceindex.operation)
	|| is_set(cptpclockdefaultdsclockidentity.operation)
	|| is_set(cptpclockdefaultdspriority1.operation)
	|| is_set(cptpclockdefaultdspriority2.operation)
	|| is_set(cptpclockdefaultdsqualityaccuracy.operation)
	|| is_set(cptpclockdefaultdsqualityclass.operation)
	|| is_set(cptpclockdefaultdsqualityoffset.operation)
	|| is_set(cptpclockdefaultdsslaveonly.operation)
	|| is_set(cptpclockdefaultdstwostepflag.operation);
}

std::string CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockDefaultDSEntry" <<"[cPtpClockDefaultDSDomainIndex='" <<cptpclockdefaultdsdomainindex <<"']" <<"[cPtpClockDefaultDSClockTypeIndex='" <<cptpclockdefaultdsclocktypeindex <<"']" <<"[cPtpClockDefaultDSInstanceIndex='" <<cptpclockdefaultdsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockDefaultDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockdefaultdsdomainindex.is_set || is_set(cptpclockdefaultdsdomainindex.operation)) leaf_name_data.push_back(cptpclockdefaultdsdomainindex.get_name_leafdata());
    if (cptpclockdefaultdsclocktypeindex.is_set || is_set(cptpclockdefaultdsclocktypeindex.operation)) leaf_name_data.push_back(cptpclockdefaultdsclocktypeindex.get_name_leafdata());
    if (cptpclockdefaultdsinstanceindex.is_set || is_set(cptpclockdefaultdsinstanceindex.operation)) leaf_name_data.push_back(cptpclockdefaultdsinstanceindex.get_name_leafdata());
    if (cptpclockdefaultdsclockidentity.is_set || is_set(cptpclockdefaultdsclockidentity.operation)) leaf_name_data.push_back(cptpclockdefaultdsclockidentity.get_name_leafdata());
    if (cptpclockdefaultdspriority1.is_set || is_set(cptpclockdefaultdspriority1.operation)) leaf_name_data.push_back(cptpclockdefaultdspriority1.get_name_leafdata());
    if (cptpclockdefaultdspriority2.is_set || is_set(cptpclockdefaultdspriority2.operation)) leaf_name_data.push_back(cptpclockdefaultdspriority2.get_name_leafdata());
    if (cptpclockdefaultdsqualityaccuracy.is_set || is_set(cptpclockdefaultdsqualityaccuracy.operation)) leaf_name_data.push_back(cptpclockdefaultdsqualityaccuracy.get_name_leafdata());
    if (cptpclockdefaultdsqualityclass.is_set || is_set(cptpclockdefaultdsqualityclass.operation)) leaf_name_data.push_back(cptpclockdefaultdsqualityclass.get_name_leafdata());
    if (cptpclockdefaultdsqualityoffset.is_set || is_set(cptpclockdefaultdsqualityoffset.operation)) leaf_name_data.push_back(cptpclockdefaultdsqualityoffset.get_name_leafdata());
    if (cptpclockdefaultdsslaveonly.is_set || is_set(cptpclockdefaultdsslaveonly.operation)) leaf_name_data.push_back(cptpclockdefaultdsslaveonly.get_name_leafdata());
    if (cptpclockdefaultdstwostepflag.is_set || is_set(cptpclockdefaultdstwostepflag.operation)) leaf_name_data.push_back(cptpclockdefaultdstwostepflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockDefaultDSDomainIndex")
    {
        cptpclockdefaultdsdomainindex = value;
    }
    if(value_path == "cPtpClockDefaultDSClockTypeIndex")
    {
        cptpclockdefaultdsclocktypeindex = value;
    }
    if(value_path == "cPtpClockDefaultDSInstanceIndex")
    {
        cptpclockdefaultdsinstanceindex = value;
    }
    if(value_path == "cPtpClockDefaultDSClockIdentity")
    {
        cptpclockdefaultdsclockidentity = value;
    }
    if(value_path == "cPtpClockDefaultDSPriority1")
    {
        cptpclockdefaultdspriority1 = value;
    }
    if(value_path == "cPtpClockDefaultDSPriority2")
    {
        cptpclockdefaultdspriority2 = value;
    }
    if(value_path == "cPtpClockDefaultDSQualityAccuracy")
    {
        cptpclockdefaultdsqualityaccuracy = value;
    }
    if(value_path == "cPtpClockDefaultDSQualityClass")
    {
        cptpclockdefaultdsqualityclass = value;
    }
    if(value_path == "cPtpClockDefaultDSQualityOffset")
    {
        cptpclockdefaultdsqualityoffset = value;
    }
    if(value_path == "cPtpClockDefaultDSSlaveOnly")
    {
        cptpclockdefaultdsslaveonly = value;
    }
    if(value_path == "cPtpClockDefaultDSTwoStepFlag")
    {
        cptpclockdefaultdstwostepflag = value;
    }
}

CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningtable()
{
    yang_name = "cPtpClockRunningTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockrunningtable::~Cptpclockrunningtable()
{
}

bool CiscoPtpMib::Cptpclockrunningtable::has_data() const
{
    for (std::size_t index=0; index<cptpclockrunningentry_.size(); index++)
    {
        if(cptpclockrunningentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockrunningtable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockrunningentry_.size(); index++)
    {
        if(cptpclockrunningentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockrunningtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockRunningTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockrunningtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockrunningtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockRunningEntry")
    {
        for(auto const & c : cptpclockrunningentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry>();
        c->parent = this;
        cptpclockrunningentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockrunningtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockrunningentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockrunningtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::Cptpclockrunningentry()
    :
    cptpclockrunningdomainindex{YType::uint32, "cPtpClockRunningDomainIndex"},
    cptpclockrunningclocktypeindex{YType::enumeration, "cPtpClockRunningClockTypeIndex"},
    cptpclockrunninginstanceindex{YType::uint32, "cPtpClockRunningInstanceIndex"},
    cptpclockrunningpacketsreceived{YType::uint64, "cPtpClockRunningPacketsReceived"},
    cptpclockrunningpacketssent{YType::uint64, "cPtpClockRunningPacketsSent"},
    cptpclockrunningstate{YType::enumeration, "cPtpClockRunningState"}
{
    yang_name = "cPtpClockRunningEntry"; yang_parent_name = "cPtpClockRunningTable";
}

CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::~Cptpclockrunningentry()
{
}

bool CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::has_data() const
{
    return cptpclockrunningdomainindex.is_set
	|| cptpclockrunningclocktypeindex.is_set
	|| cptpclockrunninginstanceindex.is_set
	|| cptpclockrunningpacketsreceived.is_set
	|| cptpclockrunningpacketssent.is_set
	|| cptpclockrunningstate.is_set;
}

bool CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockrunningdomainindex.operation)
	|| is_set(cptpclockrunningclocktypeindex.operation)
	|| is_set(cptpclockrunninginstanceindex.operation)
	|| is_set(cptpclockrunningpacketsreceived.operation)
	|| is_set(cptpclockrunningpacketssent.operation)
	|| is_set(cptpclockrunningstate.operation);
}

std::string CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockRunningEntry" <<"[cPtpClockRunningDomainIndex='" <<cptpclockrunningdomainindex <<"']" <<"[cPtpClockRunningClockTypeIndex='" <<cptpclockrunningclocktypeindex <<"']" <<"[cPtpClockRunningInstanceIndex='" <<cptpclockrunninginstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockRunningTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockrunningdomainindex.is_set || is_set(cptpclockrunningdomainindex.operation)) leaf_name_data.push_back(cptpclockrunningdomainindex.get_name_leafdata());
    if (cptpclockrunningclocktypeindex.is_set || is_set(cptpclockrunningclocktypeindex.operation)) leaf_name_data.push_back(cptpclockrunningclocktypeindex.get_name_leafdata());
    if (cptpclockrunninginstanceindex.is_set || is_set(cptpclockrunninginstanceindex.operation)) leaf_name_data.push_back(cptpclockrunninginstanceindex.get_name_leafdata());
    if (cptpclockrunningpacketsreceived.is_set || is_set(cptpclockrunningpacketsreceived.operation)) leaf_name_data.push_back(cptpclockrunningpacketsreceived.get_name_leafdata());
    if (cptpclockrunningpacketssent.is_set || is_set(cptpclockrunningpacketssent.operation)) leaf_name_data.push_back(cptpclockrunningpacketssent.get_name_leafdata());
    if (cptpclockrunningstate.is_set || is_set(cptpclockrunningstate.operation)) leaf_name_data.push_back(cptpclockrunningstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockRunningDomainIndex")
    {
        cptpclockrunningdomainindex = value;
    }
    if(value_path == "cPtpClockRunningClockTypeIndex")
    {
        cptpclockrunningclocktypeindex = value;
    }
    if(value_path == "cPtpClockRunningInstanceIndex")
    {
        cptpclockrunninginstanceindex = value;
    }
    if(value_path == "cPtpClockRunningPacketsReceived")
    {
        cptpclockrunningpacketsreceived = value;
    }
    if(value_path == "cPtpClockRunningPacketsSent")
    {
        cptpclockrunningpacketssent = value;
    }
    if(value_path == "cPtpClockRunningState")
    {
        cptpclockrunningstate = value;
    }
}

CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdstable()
{
    yang_name = "cPtpClockTimePropertiesDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclocktimepropertiesdstable::~Cptpclocktimepropertiesdstable()
{
}

bool CiscoPtpMib::Cptpclocktimepropertiesdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclocktimepropertiesdsentry_.size(); index++)
    {
        if(cptpclocktimepropertiesdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclocktimepropertiesdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocktimepropertiesdsentry_.size(); index++)
    {
        if(cptpclocktimepropertiesdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclocktimepropertiesdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTimePropertiesDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocktimepropertiesdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocktimepropertiesdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockTimePropertiesDSEntry")
    {
        for(auto const & c : cptpclocktimepropertiesdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry>();
        c->parent = this;
        cptpclocktimepropertiesdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocktimepropertiesdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclocktimepropertiesdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclocktimepropertiesdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::Cptpclocktimepropertiesdsentry()
    :
    cptpclocktimepropertiesdsdomainindex{YType::uint32, "cPtpClockTimePropertiesDSDomainIndex"},
    cptpclocktimepropertiesdsclocktypeindex{YType::enumeration, "cPtpClockTimePropertiesDSClockTypeIndex"},
    cptpclocktimepropertiesdsinstanceindex{YType::uint32, "cPtpClockTimePropertiesDSInstanceIndex"},
    cptpclocktimepropertiesdscurrentutcoffset{YType::int32, "cPtpClockTimePropertiesDSCurrentUTCOffset"},
    cptpclocktimepropertiesdscurrentutcoffsetvalid{YType::boolean, "cPtpClockTimePropertiesDSCurrentUTCOffsetValid"},
    cptpclocktimepropertiesdsfreqtraceable{YType::boolean, "cPtpClockTimePropertiesDSFreqTraceable"},
    cptpclocktimepropertiesdsleap59{YType::boolean, "cPtpClockTimePropertiesDSLeap59"},
    cptpclocktimepropertiesdsleap61{YType::boolean, "cPtpClockTimePropertiesDSLeap61"},
    cptpclocktimepropertiesdsptptimescale{YType::boolean, "cPtpClockTimePropertiesDSPTPTimescale"},
    cptpclocktimepropertiesdssource{YType::enumeration, "cPtpClockTimePropertiesDSSource"},
    cptpclocktimepropertiesdstimetraceable{YType::boolean, "cPtpClockTimePropertiesDSTimeTraceable"}
{
    yang_name = "cPtpClockTimePropertiesDSEntry"; yang_parent_name = "cPtpClockTimePropertiesDSTable";
}

CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::~Cptpclocktimepropertiesdsentry()
{
}

bool CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::has_data() const
{
    return cptpclocktimepropertiesdsdomainindex.is_set
	|| cptpclocktimepropertiesdsclocktypeindex.is_set
	|| cptpclocktimepropertiesdsinstanceindex.is_set
	|| cptpclocktimepropertiesdscurrentutcoffset.is_set
	|| cptpclocktimepropertiesdscurrentutcoffsetvalid.is_set
	|| cptpclocktimepropertiesdsfreqtraceable.is_set
	|| cptpclocktimepropertiesdsleap59.is_set
	|| cptpclocktimepropertiesdsleap61.is_set
	|| cptpclocktimepropertiesdsptptimescale.is_set
	|| cptpclocktimepropertiesdssource.is_set
	|| cptpclocktimepropertiesdstimetraceable.is_set;
}

bool CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclocktimepropertiesdsdomainindex.operation)
	|| is_set(cptpclocktimepropertiesdsclocktypeindex.operation)
	|| is_set(cptpclocktimepropertiesdsinstanceindex.operation)
	|| is_set(cptpclocktimepropertiesdscurrentutcoffset.operation)
	|| is_set(cptpclocktimepropertiesdscurrentutcoffsetvalid.operation)
	|| is_set(cptpclocktimepropertiesdsfreqtraceable.operation)
	|| is_set(cptpclocktimepropertiesdsleap59.operation)
	|| is_set(cptpclocktimepropertiesdsleap61.operation)
	|| is_set(cptpclocktimepropertiesdsptptimescale.operation)
	|| is_set(cptpclocktimepropertiesdssource.operation)
	|| is_set(cptpclocktimepropertiesdstimetraceable.operation);
}

std::string CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTimePropertiesDSEntry" <<"[cPtpClockTimePropertiesDSDomainIndex='" <<cptpclocktimepropertiesdsdomainindex <<"']" <<"[cPtpClockTimePropertiesDSClockTypeIndex='" <<cptpclocktimepropertiesdsclocktypeindex <<"']" <<"[cPtpClockTimePropertiesDSInstanceIndex='" <<cptpclocktimepropertiesdsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockTimePropertiesDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclocktimepropertiesdsdomainindex.is_set || is_set(cptpclocktimepropertiesdsdomainindex.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsdomainindex.get_name_leafdata());
    if (cptpclocktimepropertiesdsclocktypeindex.is_set || is_set(cptpclocktimepropertiesdsclocktypeindex.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsclocktypeindex.get_name_leafdata());
    if (cptpclocktimepropertiesdsinstanceindex.is_set || is_set(cptpclocktimepropertiesdsinstanceindex.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsinstanceindex.get_name_leafdata());
    if (cptpclocktimepropertiesdscurrentutcoffset.is_set || is_set(cptpclocktimepropertiesdscurrentutcoffset.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdscurrentutcoffset.get_name_leafdata());
    if (cptpclocktimepropertiesdscurrentutcoffsetvalid.is_set || is_set(cptpclocktimepropertiesdscurrentutcoffsetvalid.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdscurrentutcoffsetvalid.get_name_leafdata());
    if (cptpclocktimepropertiesdsfreqtraceable.is_set || is_set(cptpclocktimepropertiesdsfreqtraceable.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsfreqtraceable.get_name_leafdata());
    if (cptpclocktimepropertiesdsleap59.is_set || is_set(cptpclocktimepropertiesdsleap59.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsleap59.get_name_leafdata());
    if (cptpclocktimepropertiesdsleap61.is_set || is_set(cptpclocktimepropertiesdsleap61.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsleap61.get_name_leafdata());
    if (cptpclocktimepropertiesdsptptimescale.is_set || is_set(cptpclocktimepropertiesdsptptimescale.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdsptptimescale.get_name_leafdata());
    if (cptpclocktimepropertiesdssource.is_set || is_set(cptpclocktimepropertiesdssource.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdssource.get_name_leafdata());
    if (cptpclocktimepropertiesdstimetraceable.is_set || is_set(cptpclocktimepropertiesdstimetraceable.operation)) leaf_name_data.push_back(cptpclocktimepropertiesdstimetraceable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockTimePropertiesDSDomainIndex")
    {
        cptpclocktimepropertiesdsdomainindex = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSClockTypeIndex")
    {
        cptpclocktimepropertiesdsclocktypeindex = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSInstanceIndex")
    {
        cptpclocktimepropertiesdsinstanceindex = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffset")
    {
        cptpclocktimepropertiesdscurrentutcoffset = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffsetValid")
    {
        cptpclocktimepropertiesdscurrentutcoffsetvalid = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSFreqTraceable")
    {
        cptpclocktimepropertiesdsfreqtraceable = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap59")
    {
        cptpclocktimepropertiesdsleap59 = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap61")
    {
        cptpclocktimepropertiesdsleap61 = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSPTPTimescale")
    {
        cptpclocktimepropertiesdsptptimescale = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSSource")
    {
        cptpclocktimepropertiesdssource = value;
    }
    if(value_path == "cPtpClockTimePropertiesDSTimeTraceable")
    {
        cptpclocktimepropertiesdstimetraceable = value;
    }
}

CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdstable()
{
    yang_name = "cPtpClockTransDefaultDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclocktransdefaultdstable::~Cptpclocktransdefaultdstable()
{
}

bool CiscoPtpMib::Cptpclocktransdefaultdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclocktransdefaultdsentry_.size(); index++)
    {
        if(cptpclocktransdefaultdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclocktransdefaultdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocktransdefaultdsentry_.size(); index++)
    {
        if(cptpclocktransdefaultdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclocktransdefaultdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTransDefaultDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocktransdefaultdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocktransdefaultdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockTransDefaultDSEntry")
    {
        for(auto const & c : cptpclocktransdefaultdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry>();
        c->parent = this;
        cptpclocktransdefaultdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocktransdefaultdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclocktransdefaultdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclocktransdefaultdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::Cptpclocktransdefaultdsentry()
    :
    cptpclocktransdefaultdsdomainindex{YType::uint32, "cPtpClockTransDefaultDSDomainIndex"},
    cptpclocktransdefaultdsinstanceindex{YType::uint32, "cPtpClockTransDefaultDSInstanceIndex"},
    cptpclocktransdefaultdsclockidentity{YType::str, "cPtpClockTransDefaultDSClockIdentity"},
    cptpclocktransdefaultdsdelay{YType::enumeration, "cPtpClockTransDefaultDSDelay"},
    cptpclocktransdefaultdsnumofports{YType::uint32, "cPtpClockTransDefaultDSNumOfPorts"},
    cptpclocktransdefaultdsprimarydomain{YType::int32, "cPtpClockTransDefaultDSPrimaryDomain"}
{
    yang_name = "cPtpClockTransDefaultDSEntry"; yang_parent_name = "cPtpClockTransDefaultDSTable";
}

CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::~Cptpclocktransdefaultdsentry()
{
}

bool CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::has_data() const
{
    return cptpclocktransdefaultdsdomainindex.is_set
	|| cptpclocktransdefaultdsinstanceindex.is_set
	|| cptpclocktransdefaultdsclockidentity.is_set
	|| cptpclocktransdefaultdsdelay.is_set
	|| cptpclocktransdefaultdsnumofports.is_set
	|| cptpclocktransdefaultdsprimarydomain.is_set;
}

bool CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclocktransdefaultdsdomainindex.operation)
	|| is_set(cptpclocktransdefaultdsinstanceindex.operation)
	|| is_set(cptpclocktransdefaultdsclockidentity.operation)
	|| is_set(cptpclocktransdefaultdsdelay.operation)
	|| is_set(cptpclocktransdefaultdsnumofports.operation)
	|| is_set(cptpclocktransdefaultdsprimarydomain.operation);
}

std::string CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTransDefaultDSEntry" <<"[cPtpClockTransDefaultDSDomainIndex='" <<cptpclocktransdefaultdsdomainindex <<"']" <<"[cPtpClockTransDefaultDSInstanceIndex='" <<cptpclocktransdefaultdsinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockTransDefaultDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclocktransdefaultdsdomainindex.is_set || is_set(cptpclocktransdefaultdsdomainindex.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsdomainindex.get_name_leafdata());
    if (cptpclocktransdefaultdsinstanceindex.is_set || is_set(cptpclocktransdefaultdsinstanceindex.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsinstanceindex.get_name_leafdata());
    if (cptpclocktransdefaultdsclockidentity.is_set || is_set(cptpclocktransdefaultdsclockidentity.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsclockidentity.get_name_leafdata());
    if (cptpclocktransdefaultdsdelay.is_set || is_set(cptpclocktransdefaultdsdelay.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsdelay.get_name_leafdata());
    if (cptpclocktransdefaultdsnumofports.is_set || is_set(cptpclocktransdefaultdsnumofports.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsnumofports.get_name_leafdata());
    if (cptpclocktransdefaultdsprimarydomain.is_set || is_set(cptpclocktransdefaultdsprimarydomain.operation)) leaf_name_data.push_back(cptpclocktransdefaultdsprimarydomain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockTransDefaultDSDomainIndex")
    {
        cptpclocktransdefaultdsdomainindex = value;
    }
    if(value_path == "cPtpClockTransDefaultDSInstanceIndex")
    {
        cptpclocktransdefaultdsinstanceindex = value;
    }
    if(value_path == "cPtpClockTransDefaultDSClockIdentity")
    {
        cptpclocktransdefaultdsclockidentity = value;
    }
    if(value_path == "cPtpClockTransDefaultDSDelay")
    {
        cptpclocktransdefaultdsdelay = value;
    }
    if(value_path == "cPtpClockTransDefaultDSNumOfPorts")
    {
        cptpclocktransdefaultdsnumofports = value;
    }
    if(value_path == "cPtpClockTransDefaultDSPrimaryDomain")
    {
        cptpclocktransdefaultdsprimarydomain = value;
    }
}

CiscoPtpMib::Cptpclockporttable::Cptpclockporttable()
{
    yang_name = "cPtpClockPortTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockporttable::~Cptpclockporttable()
{
}

bool CiscoPtpMib::Cptpclockporttable::has_data() const
{
    for (std::size_t index=0; index<cptpclockportentry_.size(); index++)
    {
        if(cptpclockportentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockporttable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportentry_.size(); index++)
    {
        if(cptpclockportentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortEntry")
    {
        for(auto const & c : cptpclockportentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockporttable::Cptpclockportentry>();
        c->parent = this;
        cptpclockportentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockportentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::Cptpclockportentry()
    :
    cptpclockportdomainindex{YType::uint32, "cPtpClockPortDomainIndex"},
    cptpclockportclocktypeindex{YType::enumeration, "cPtpClockPortClockTypeIndex"},
    cptpclockportclockinstanceindex{YType::uint32, "cPtpClockPortClockInstanceIndex"},
    cptpclockporttableportnumberindex{YType::uint32, "cPtpClockPortTablePortNumberIndex"},
    cptpclockportcurrentpeeraddress{YType::str, "cPtpClockPortCurrentPeerAddress"},
    cptpclockportcurrentpeeraddresstype{YType::enumeration, "cPtpClockPortCurrentPeerAddressType"},
    cptpclockportname{YType::str, "cPtpClockPortName"},
    cptpclockportnumofassociatedports{YType::uint32, "cPtpClockPortNumOfAssociatedPorts"},
    cptpclockportrole{YType::enumeration, "cPtpClockPortRole"},
    cptpclockportsynconestep{YType::boolean, "cPtpClockPortSyncOneStep"}
{
    yang_name = "cPtpClockPortEntry"; yang_parent_name = "cPtpClockPortTable";
}

CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::~Cptpclockportentry()
{
}

bool CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::has_data() const
{
    return cptpclockportdomainindex.is_set
	|| cptpclockportclocktypeindex.is_set
	|| cptpclockportclockinstanceindex.is_set
	|| cptpclockporttableportnumberindex.is_set
	|| cptpclockportcurrentpeeraddress.is_set
	|| cptpclockportcurrentpeeraddresstype.is_set
	|| cptpclockportname.is_set
	|| cptpclockportnumofassociatedports.is_set
	|| cptpclockportrole.is_set
	|| cptpclockportsynconestep.is_set;
}

bool CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockportdomainindex.operation)
	|| is_set(cptpclockportclocktypeindex.operation)
	|| is_set(cptpclockportclockinstanceindex.operation)
	|| is_set(cptpclockporttableportnumberindex.operation)
	|| is_set(cptpclockportcurrentpeeraddress.operation)
	|| is_set(cptpclockportcurrentpeeraddresstype.operation)
	|| is_set(cptpclockportname.operation)
	|| is_set(cptpclockportnumofassociatedports.operation)
	|| is_set(cptpclockportrole.operation)
	|| is_set(cptpclockportsynconestep.operation);
}

std::string CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortEntry" <<"[cPtpClockPortDomainIndex='" <<cptpclockportdomainindex <<"']" <<"[cPtpClockPortClockTypeIndex='" <<cptpclockportclocktypeindex <<"']" <<"[cPtpClockPortClockInstanceIndex='" <<cptpclockportclockinstanceindex <<"']" <<"[cPtpClockPortTablePortNumberIndex='" <<cptpclockporttableportnumberindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportdomainindex.is_set || is_set(cptpclockportdomainindex.operation)) leaf_name_data.push_back(cptpclockportdomainindex.get_name_leafdata());
    if (cptpclockportclocktypeindex.is_set || is_set(cptpclockportclocktypeindex.operation)) leaf_name_data.push_back(cptpclockportclocktypeindex.get_name_leafdata());
    if (cptpclockportclockinstanceindex.is_set || is_set(cptpclockportclockinstanceindex.operation)) leaf_name_data.push_back(cptpclockportclockinstanceindex.get_name_leafdata());
    if (cptpclockporttableportnumberindex.is_set || is_set(cptpclockporttableportnumberindex.operation)) leaf_name_data.push_back(cptpclockporttableportnumberindex.get_name_leafdata());
    if (cptpclockportcurrentpeeraddress.is_set || is_set(cptpclockportcurrentpeeraddress.operation)) leaf_name_data.push_back(cptpclockportcurrentpeeraddress.get_name_leafdata());
    if (cptpclockportcurrentpeeraddresstype.is_set || is_set(cptpclockportcurrentpeeraddresstype.operation)) leaf_name_data.push_back(cptpclockportcurrentpeeraddresstype.get_name_leafdata());
    if (cptpclockportname.is_set || is_set(cptpclockportname.operation)) leaf_name_data.push_back(cptpclockportname.get_name_leafdata());
    if (cptpclockportnumofassociatedports.is_set || is_set(cptpclockportnumofassociatedports.operation)) leaf_name_data.push_back(cptpclockportnumofassociatedports.get_name_leafdata());
    if (cptpclockportrole.is_set || is_set(cptpclockportrole.operation)) leaf_name_data.push_back(cptpclockportrole.get_name_leafdata());
    if (cptpclockportsynconestep.is_set || is_set(cptpclockportsynconestep.operation)) leaf_name_data.push_back(cptpclockportsynconestep.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockporttable::Cptpclockportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockPortDomainIndex")
    {
        cptpclockportdomainindex = value;
    }
    if(value_path == "cPtpClockPortClockTypeIndex")
    {
        cptpclockportclocktypeindex = value;
    }
    if(value_path == "cPtpClockPortClockInstanceIndex")
    {
        cptpclockportclockinstanceindex = value;
    }
    if(value_path == "cPtpClockPortTablePortNumberIndex")
    {
        cptpclockporttableportnumberindex = value;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddress")
    {
        cptpclockportcurrentpeeraddress = value;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddressType")
    {
        cptpclockportcurrentpeeraddresstype = value;
    }
    if(value_path == "cPtpClockPortName")
    {
        cptpclockportname = value;
    }
    if(value_path == "cPtpClockPortNumOfAssociatedPorts")
    {
        cptpclockportnumofassociatedports = value;
    }
    if(value_path == "cPtpClockPortRole")
    {
        cptpclockportrole = value;
    }
    if(value_path == "cPtpClockPortSyncOneStep")
    {
        cptpclockportsynconestep = value;
    }
}

CiscoPtpMib::Cptpclockportdstable::Cptpclockportdstable()
{
    yang_name = "cPtpClockPortDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockportdstable::~Cptpclockportdstable()
{
}

bool CiscoPtpMib::Cptpclockportdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclockportdsentry_.size(); index++)
    {
        if(cptpclockportdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockportdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportdsentry_.size(); index++)
    {
        if(cptpclockportdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockportdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortDSEntry")
    {
        for(auto const & c : cptpclockportdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry>();
        c->parent = this;
        cptpclockportdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockportdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockportdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::Cptpclockportdsentry()
    :
    cptpclockportdsdomainindex{YType::uint32, "cPtpClockPortDSDomainIndex"},
    cptpclockportdsclocktypeindex{YType::enumeration, "cPtpClockPortDSClockTypeIndex"},
    cptpclockportdsclockinstanceindex{YType::uint32, "cPtpClockPortDSClockInstanceIndex"},
    cptpclockportdsportnumberindex{YType::uint32, "cPtpClockPortDSPortNumberIndex"},
    cptpclockportdsannouncementinterval{YType::int32, "cPtpClockPortDSAnnouncementInterval"},
    cptpclockportdsannouncercttimeout{YType::int32, "cPtpClockPortDSAnnounceRctTimeout"},
    cptpclockportdsdelaymech{YType::enumeration, "cPtpClockPortDSDelayMech"},
    cptpclockportdsgrantduration{YType::uint32, "cPtpClockPortDSGrantDuration"},
    cptpclockportdsmindelayreqinterval{YType::int32, "cPtpClockPortDSMinDelayReqInterval"},
    cptpclockportdsname{YType::str, "cPtpClockPortDSName"},
    cptpclockportdspeerdelayreqinterval{YType::int32, "cPtpClockPortDSPeerDelayReqInterval"},
    cptpclockportdspeermeanpathdelay{YType::str, "cPtpClockPortDSPeerMeanPathDelay"},
    cptpclockportdsportidentity{YType::str, "cPtpClockPortDSPortIdentity"},
    cptpclockportdsptpversion{YType::int32, "cPtpClockPortDSPTPVersion"},
    cptpclockportdssyncinterval{YType::int32, "cPtpClockPortDSSyncInterval"}
{
    yang_name = "cPtpClockPortDSEntry"; yang_parent_name = "cPtpClockPortDSTable";
}

CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::~Cptpclockportdsentry()
{
}

bool CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::has_data() const
{
    return cptpclockportdsdomainindex.is_set
	|| cptpclockportdsclocktypeindex.is_set
	|| cptpclockportdsclockinstanceindex.is_set
	|| cptpclockportdsportnumberindex.is_set
	|| cptpclockportdsannouncementinterval.is_set
	|| cptpclockportdsannouncercttimeout.is_set
	|| cptpclockportdsdelaymech.is_set
	|| cptpclockportdsgrantduration.is_set
	|| cptpclockportdsmindelayreqinterval.is_set
	|| cptpclockportdsname.is_set
	|| cptpclockportdspeerdelayreqinterval.is_set
	|| cptpclockportdspeermeanpathdelay.is_set
	|| cptpclockportdsportidentity.is_set
	|| cptpclockportdsptpversion.is_set
	|| cptpclockportdssyncinterval.is_set;
}

bool CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockportdsdomainindex.operation)
	|| is_set(cptpclockportdsclocktypeindex.operation)
	|| is_set(cptpclockportdsclockinstanceindex.operation)
	|| is_set(cptpclockportdsportnumberindex.operation)
	|| is_set(cptpclockportdsannouncementinterval.operation)
	|| is_set(cptpclockportdsannouncercttimeout.operation)
	|| is_set(cptpclockportdsdelaymech.operation)
	|| is_set(cptpclockportdsgrantduration.operation)
	|| is_set(cptpclockportdsmindelayreqinterval.operation)
	|| is_set(cptpclockportdsname.operation)
	|| is_set(cptpclockportdspeerdelayreqinterval.operation)
	|| is_set(cptpclockportdspeermeanpathdelay.operation)
	|| is_set(cptpclockportdsportidentity.operation)
	|| is_set(cptpclockportdsptpversion.operation)
	|| is_set(cptpclockportdssyncinterval.operation);
}

std::string CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortDSEntry" <<"[cPtpClockPortDSDomainIndex='" <<cptpclockportdsdomainindex <<"']" <<"[cPtpClockPortDSClockTypeIndex='" <<cptpclockportdsclocktypeindex <<"']" <<"[cPtpClockPortDSClockInstanceIndex='" <<cptpclockportdsclockinstanceindex <<"']" <<"[cPtpClockPortDSPortNumberIndex='" <<cptpclockportdsportnumberindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportdsdomainindex.is_set || is_set(cptpclockportdsdomainindex.operation)) leaf_name_data.push_back(cptpclockportdsdomainindex.get_name_leafdata());
    if (cptpclockportdsclocktypeindex.is_set || is_set(cptpclockportdsclocktypeindex.operation)) leaf_name_data.push_back(cptpclockportdsclocktypeindex.get_name_leafdata());
    if (cptpclockportdsclockinstanceindex.is_set || is_set(cptpclockportdsclockinstanceindex.operation)) leaf_name_data.push_back(cptpclockportdsclockinstanceindex.get_name_leafdata());
    if (cptpclockportdsportnumberindex.is_set || is_set(cptpclockportdsportnumberindex.operation)) leaf_name_data.push_back(cptpclockportdsportnumberindex.get_name_leafdata());
    if (cptpclockportdsannouncementinterval.is_set || is_set(cptpclockportdsannouncementinterval.operation)) leaf_name_data.push_back(cptpclockportdsannouncementinterval.get_name_leafdata());
    if (cptpclockportdsannouncercttimeout.is_set || is_set(cptpclockportdsannouncercttimeout.operation)) leaf_name_data.push_back(cptpclockportdsannouncercttimeout.get_name_leafdata());
    if (cptpclockportdsdelaymech.is_set || is_set(cptpclockportdsdelaymech.operation)) leaf_name_data.push_back(cptpclockportdsdelaymech.get_name_leafdata());
    if (cptpclockportdsgrantduration.is_set || is_set(cptpclockportdsgrantduration.operation)) leaf_name_data.push_back(cptpclockportdsgrantduration.get_name_leafdata());
    if (cptpclockportdsmindelayreqinterval.is_set || is_set(cptpclockportdsmindelayreqinterval.operation)) leaf_name_data.push_back(cptpclockportdsmindelayreqinterval.get_name_leafdata());
    if (cptpclockportdsname.is_set || is_set(cptpclockportdsname.operation)) leaf_name_data.push_back(cptpclockportdsname.get_name_leafdata());
    if (cptpclockportdspeerdelayreqinterval.is_set || is_set(cptpclockportdspeerdelayreqinterval.operation)) leaf_name_data.push_back(cptpclockportdspeerdelayreqinterval.get_name_leafdata());
    if (cptpclockportdspeermeanpathdelay.is_set || is_set(cptpclockportdspeermeanpathdelay.operation)) leaf_name_data.push_back(cptpclockportdspeermeanpathdelay.get_name_leafdata());
    if (cptpclockportdsportidentity.is_set || is_set(cptpclockportdsportidentity.operation)) leaf_name_data.push_back(cptpclockportdsportidentity.get_name_leafdata());
    if (cptpclockportdsptpversion.is_set || is_set(cptpclockportdsptpversion.operation)) leaf_name_data.push_back(cptpclockportdsptpversion.get_name_leafdata());
    if (cptpclockportdssyncinterval.is_set || is_set(cptpclockportdssyncinterval.operation)) leaf_name_data.push_back(cptpclockportdssyncinterval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockPortDSDomainIndex")
    {
        cptpclockportdsdomainindex = value;
    }
    if(value_path == "cPtpClockPortDSClockTypeIndex")
    {
        cptpclockportdsclocktypeindex = value;
    }
    if(value_path == "cPtpClockPortDSClockInstanceIndex")
    {
        cptpclockportdsclockinstanceindex = value;
    }
    if(value_path == "cPtpClockPortDSPortNumberIndex")
    {
        cptpclockportdsportnumberindex = value;
    }
    if(value_path == "cPtpClockPortDSAnnouncementInterval")
    {
        cptpclockportdsannouncementinterval = value;
    }
    if(value_path == "cPtpClockPortDSAnnounceRctTimeout")
    {
        cptpclockportdsannouncercttimeout = value;
    }
    if(value_path == "cPtpClockPortDSDelayMech")
    {
        cptpclockportdsdelaymech = value;
    }
    if(value_path == "cPtpClockPortDSGrantDuration")
    {
        cptpclockportdsgrantduration = value;
    }
    if(value_path == "cPtpClockPortDSMinDelayReqInterval")
    {
        cptpclockportdsmindelayreqinterval = value;
    }
    if(value_path == "cPtpClockPortDSName")
    {
        cptpclockportdsname = value;
    }
    if(value_path == "cPtpClockPortDSPeerDelayReqInterval")
    {
        cptpclockportdspeerdelayreqinterval = value;
    }
    if(value_path == "cPtpClockPortDSPeerMeanPathDelay")
    {
        cptpclockportdspeermeanpathdelay = value;
    }
    if(value_path == "cPtpClockPortDSPortIdentity")
    {
        cptpclockportdsportidentity = value;
    }
    if(value_path == "cPtpClockPortDSPTPVersion")
    {
        cptpclockportdsptpversion = value;
    }
    if(value_path == "cPtpClockPortDSSyncInterval")
    {
        cptpclockportdssyncinterval = value;
    }
}

CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningtable()
{
    yang_name = "cPtpClockPortRunningTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockportrunningtable::~Cptpclockportrunningtable()
{
}

bool CiscoPtpMib::Cptpclockportrunningtable::has_data() const
{
    for (std::size_t index=0; index<cptpclockportrunningentry_.size(); index++)
    {
        if(cptpclockportrunningentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockportrunningtable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportrunningentry_.size(); index++)
    {
        if(cptpclockportrunningentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockportrunningtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortRunningTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportrunningtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportrunningtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortRunningEntry")
    {
        for(auto const & c : cptpclockportrunningentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry>();
        c->parent = this;
        cptpclockportrunningentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportrunningtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockportrunningentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockportrunningtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::Cptpclockportrunningentry()
    :
    cptpclockportrunningdomainindex{YType::uint32, "cPtpClockPortRunningDomainIndex"},
    cptpclockportrunningclocktypeindex{YType::enumeration, "cPtpClockPortRunningClockTypeIndex"},
    cptpclockportrunningclockinstanceindex{YType::uint32, "cPtpClockPortRunningClockInstanceIndex"},
    cptpclockportrunningportnumberindex{YType::uint32, "cPtpClockPortRunningPortNumberIndex"},
    cptpclockportrunningencapsulationtype{YType::int32, "cPtpClockPortRunningEncapsulationType"},
    cptpclockportrunninginterfaceindex{YType::int32, "cPtpClockPortRunningInterfaceIndex"},
    cptpclockportrunningipversion{YType::int32, "cPtpClockPortRunningIPversion"},
    cptpclockportrunningname{YType::str, "cPtpClockPortRunningName"},
    cptpclockportrunningpacketsreceived{YType::uint64, "cPtpClockPortRunningPacketsReceived"},
    cptpclockportrunningpacketssent{YType::uint64, "cPtpClockPortRunningPacketsSent"},
    cptpclockportrunningrole{YType::enumeration, "cPtpClockPortRunningRole"},
    cptpclockportrunningrxmode{YType::enumeration, "cPtpClockPortRunningRxMode"},
    cptpclockportrunningstate{YType::enumeration, "cPtpClockPortRunningState"},
    cptpclockportrunningtxmode{YType::enumeration, "cPtpClockPortRunningTxMode"}
{
    yang_name = "cPtpClockPortRunningEntry"; yang_parent_name = "cPtpClockPortRunningTable";
}

CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::~Cptpclockportrunningentry()
{
}

bool CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::has_data() const
{
    return cptpclockportrunningdomainindex.is_set
	|| cptpclockportrunningclocktypeindex.is_set
	|| cptpclockportrunningclockinstanceindex.is_set
	|| cptpclockportrunningportnumberindex.is_set
	|| cptpclockportrunningencapsulationtype.is_set
	|| cptpclockportrunninginterfaceindex.is_set
	|| cptpclockportrunningipversion.is_set
	|| cptpclockportrunningname.is_set
	|| cptpclockportrunningpacketsreceived.is_set
	|| cptpclockportrunningpacketssent.is_set
	|| cptpclockportrunningrole.is_set
	|| cptpclockportrunningrxmode.is_set
	|| cptpclockportrunningstate.is_set
	|| cptpclockportrunningtxmode.is_set;
}

bool CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockportrunningdomainindex.operation)
	|| is_set(cptpclockportrunningclocktypeindex.operation)
	|| is_set(cptpclockportrunningclockinstanceindex.operation)
	|| is_set(cptpclockportrunningportnumberindex.operation)
	|| is_set(cptpclockportrunningencapsulationtype.operation)
	|| is_set(cptpclockportrunninginterfaceindex.operation)
	|| is_set(cptpclockportrunningipversion.operation)
	|| is_set(cptpclockportrunningname.operation)
	|| is_set(cptpclockportrunningpacketsreceived.operation)
	|| is_set(cptpclockportrunningpacketssent.operation)
	|| is_set(cptpclockportrunningrole.operation)
	|| is_set(cptpclockportrunningrxmode.operation)
	|| is_set(cptpclockportrunningstate.operation)
	|| is_set(cptpclockportrunningtxmode.operation);
}

std::string CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortRunningEntry" <<"[cPtpClockPortRunningDomainIndex='" <<cptpclockportrunningdomainindex <<"']" <<"[cPtpClockPortRunningClockTypeIndex='" <<cptpclockportrunningclocktypeindex <<"']" <<"[cPtpClockPortRunningClockInstanceIndex='" <<cptpclockportrunningclockinstanceindex <<"']" <<"[cPtpClockPortRunningPortNumberIndex='" <<cptpclockportrunningportnumberindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortRunningTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportrunningdomainindex.is_set || is_set(cptpclockportrunningdomainindex.operation)) leaf_name_data.push_back(cptpclockportrunningdomainindex.get_name_leafdata());
    if (cptpclockportrunningclocktypeindex.is_set || is_set(cptpclockportrunningclocktypeindex.operation)) leaf_name_data.push_back(cptpclockportrunningclocktypeindex.get_name_leafdata());
    if (cptpclockportrunningclockinstanceindex.is_set || is_set(cptpclockportrunningclockinstanceindex.operation)) leaf_name_data.push_back(cptpclockportrunningclockinstanceindex.get_name_leafdata());
    if (cptpclockportrunningportnumberindex.is_set || is_set(cptpclockportrunningportnumberindex.operation)) leaf_name_data.push_back(cptpclockportrunningportnumberindex.get_name_leafdata());
    if (cptpclockportrunningencapsulationtype.is_set || is_set(cptpclockportrunningencapsulationtype.operation)) leaf_name_data.push_back(cptpclockportrunningencapsulationtype.get_name_leafdata());
    if (cptpclockportrunninginterfaceindex.is_set || is_set(cptpclockportrunninginterfaceindex.operation)) leaf_name_data.push_back(cptpclockportrunninginterfaceindex.get_name_leafdata());
    if (cptpclockportrunningipversion.is_set || is_set(cptpclockportrunningipversion.operation)) leaf_name_data.push_back(cptpclockportrunningipversion.get_name_leafdata());
    if (cptpclockportrunningname.is_set || is_set(cptpclockportrunningname.operation)) leaf_name_data.push_back(cptpclockportrunningname.get_name_leafdata());
    if (cptpclockportrunningpacketsreceived.is_set || is_set(cptpclockportrunningpacketsreceived.operation)) leaf_name_data.push_back(cptpclockportrunningpacketsreceived.get_name_leafdata());
    if (cptpclockportrunningpacketssent.is_set || is_set(cptpclockportrunningpacketssent.operation)) leaf_name_data.push_back(cptpclockportrunningpacketssent.get_name_leafdata());
    if (cptpclockportrunningrole.is_set || is_set(cptpclockportrunningrole.operation)) leaf_name_data.push_back(cptpclockportrunningrole.get_name_leafdata());
    if (cptpclockportrunningrxmode.is_set || is_set(cptpclockportrunningrxmode.operation)) leaf_name_data.push_back(cptpclockportrunningrxmode.get_name_leafdata());
    if (cptpclockportrunningstate.is_set || is_set(cptpclockportrunningstate.operation)) leaf_name_data.push_back(cptpclockportrunningstate.get_name_leafdata());
    if (cptpclockportrunningtxmode.is_set || is_set(cptpclockportrunningtxmode.operation)) leaf_name_data.push_back(cptpclockportrunningtxmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockPortRunningDomainIndex")
    {
        cptpclockportrunningdomainindex = value;
    }
    if(value_path == "cPtpClockPortRunningClockTypeIndex")
    {
        cptpclockportrunningclocktypeindex = value;
    }
    if(value_path == "cPtpClockPortRunningClockInstanceIndex")
    {
        cptpclockportrunningclockinstanceindex = value;
    }
    if(value_path == "cPtpClockPortRunningPortNumberIndex")
    {
        cptpclockportrunningportnumberindex = value;
    }
    if(value_path == "cPtpClockPortRunningEncapsulationType")
    {
        cptpclockportrunningencapsulationtype = value;
    }
    if(value_path == "cPtpClockPortRunningInterfaceIndex")
    {
        cptpclockportrunninginterfaceindex = value;
    }
    if(value_path == "cPtpClockPortRunningIPversion")
    {
        cptpclockportrunningipversion = value;
    }
    if(value_path == "cPtpClockPortRunningName")
    {
        cptpclockportrunningname = value;
    }
    if(value_path == "cPtpClockPortRunningPacketsReceived")
    {
        cptpclockportrunningpacketsreceived = value;
    }
    if(value_path == "cPtpClockPortRunningPacketsSent")
    {
        cptpclockportrunningpacketssent = value;
    }
    if(value_path == "cPtpClockPortRunningRole")
    {
        cptpclockportrunningrole = value;
    }
    if(value_path == "cPtpClockPortRunningRxMode")
    {
        cptpclockportrunningrxmode = value;
    }
    if(value_path == "cPtpClockPortRunningState")
    {
        cptpclockportrunningstate = value;
    }
    if(value_path == "cPtpClockPortRunningTxMode")
    {
        cptpclockportrunningtxmode = value;
    }
}

CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdstable()
{
    yang_name = "cPtpClockPortTransDSTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockporttransdstable::~Cptpclockporttransdstable()
{
}

bool CiscoPtpMib::Cptpclockporttransdstable::has_data() const
{
    for (std::size_t index=0; index<cptpclockporttransdsentry_.size(); index++)
    {
        if(cptpclockporttransdsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockporttransdstable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockporttransdsentry_.size(); index++)
    {
        if(cptpclockporttransdsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockporttransdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTransDSTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockporttransdstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockporttransdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortTransDSEntry")
    {
        for(auto const & c : cptpclockporttransdsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry>();
        c->parent = this;
        cptpclockporttransdsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockporttransdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockporttransdsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockporttransdstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::Cptpclockporttransdsentry()
    :
    cptpclockporttransdsdomainindex{YType::uint32, "cPtpClockPortTransDSDomainIndex"},
    cptpclockporttransdsinstanceindex{YType::uint32, "cPtpClockPortTransDSInstanceIndex"},
    cptpclockporttransdsportnumberindex{YType::uint32, "cPtpClockPortTransDSPortNumberIndex"},
    cptpclockporttransdsfaultyflag{YType::boolean, "cPtpClockPortTransDSFaultyFlag"},
    cptpclockporttransdslogminpdelayreqint{YType::int32, "cPtpClockPortTransDSlogMinPdelayReqInt"},
    cptpclockporttransdspeermeanpathdelay{YType::str, "cPtpClockPortTransDSPeerMeanPathDelay"},
    cptpclockporttransdsportidentity{YType::str, "cPtpClockPortTransDSPortIdentity"}
{
    yang_name = "cPtpClockPortTransDSEntry"; yang_parent_name = "cPtpClockPortTransDSTable";
}

CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::~Cptpclockporttransdsentry()
{
}

bool CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::has_data() const
{
    return cptpclockporttransdsdomainindex.is_set
	|| cptpclockporttransdsinstanceindex.is_set
	|| cptpclockporttransdsportnumberindex.is_set
	|| cptpclockporttransdsfaultyflag.is_set
	|| cptpclockporttransdslogminpdelayreqint.is_set
	|| cptpclockporttransdspeermeanpathdelay.is_set
	|| cptpclockporttransdsportidentity.is_set;
}

bool CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockporttransdsdomainindex.operation)
	|| is_set(cptpclockporttransdsinstanceindex.operation)
	|| is_set(cptpclockporttransdsportnumberindex.operation)
	|| is_set(cptpclockporttransdsfaultyflag.operation)
	|| is_set(cptpclockporttransdslogminpdelayreqint.operation)
	|| is_set(cptpclockporttransdspeermeanpathdelay.operation)
	|| is_set(cptpclockporttransdsportidentity.operation);
}

std::string CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTransDSEntry" <<"[cPtpClockPortTransDSDomainIndex='" <<cptpclockporttransdsdomainindex <<"']" <<"[cPtpClockPortTransDSInstanceIndex='" <<cptpclockporttransdsinstanceindex <<"']" <<"[cPtpClockPortTransDSPortNumberIndex='" <<cptpclockporttransdsportnumberindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortTransDSTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockporttransdsdomainindex.is_set || is_set(cptpclockporttransdsdomainindex.operation)) leaf_name_data.push_back(cptpclockporttransdsdomainindex.get_name_leafdata());
    if (cptpclockporttransdsinstanceindex.is_set || is_set(cptpclockporttransdsinstanceindex.operation)) leaf_name_data.push_back(cptpclockporttransdsinstanceindex.get_name_leafdata());
    if (cptpclockporttransdsportnumberindex.is_set || is_set(cptpclockporttransdsportnumberindex.operation)) leaf_name_data.push_back(cptpclockporttransdsportnumberindex.get_name_leafdata());
    if (cptpclockporttransdsfaultyflag.is_set || is_set(cptpclockporttransdsfaultyflag.operation)) leaf_name_data.push_back(cptpclockporttransdsfaultyflag.get_name_leafdata());
    if (cptpclockporttransdslogminpdelayreqint.is_set || is_set(cptpclockporttransdslogminpdelayreqint.operation)) leaf_name_data.push_back(cptpclockporttransdslogminpdelayreqint.get_name_leafdata());
    if (cptpclockporttransdspeermeanpathdelay.is_set || is_set(cptpclockporttransdspeermeanpathdelay.operation)) leaf_name_data.push_back(cptpclockporttransdspeermeanpathdelay.get_name_leafdata());
    if (cptpclockporttransdsportidentity.is_set || is_set(cptpclockporttransdsportidentity.operation)) leaf_name_data.push_back(cptpclockporttransdsportidentity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockPortTransDSDomainIndex")
    {
        cptpclockporttransdsdomainindex = value;
    }
    if(value_path == "cPtpClockPortTransDSInstanceIndex")
    {
        cptpclockporttransdsinstanceindex = value;
    }
    if(value_path == "cPtpClockPortTransDSPortNumberIndex")
    {
        cptpclockporttransdsportnumberindex = value;
    }
    if(value_path == "cPtpClockPortTransDSFaultyFlag")
    {
        cptpclockporttransdsfaultyflag = value;
    }
    if(value_path == "cPtpClockPortTransDSlogMinPdelayReqInt")
    {
        cptpclockporttransdslogminpdelayreqint = value;
    }
    if(value_path == "cPtpClockPortTransDSPeerMeanPathDelay")
    {
        cptpclockporttransdspeermeanpathdelay = value;
    }
    if(value_path == "cPtpClockPortTransDSPortIdentity")
    {
        cptpclockporttransdsportidentity = value;
    }
}

CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociatetable()
{
    yang_name = "cPtpClockPortAssociateTable"; yang_parent_name = "CISCO-PTP-MIB";
}

CiscoPtpMib::Cptpclockportassociatetable::~Cptpclockportassociatetable()
{
}

bool CiscoPtpMib::Cptpclockportassociatetable::has_data() const
{
    for (std::size_t index=0; index<cptpclockportassociateentry_.size(); index++)
    {
        if(cptpclockportassociateentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoPtpMib::Cptpclockportassociatetable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportassociateentry_.size(); index++)
    {
        if(cptpclockportassociateentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoPtpMib::Cptpclockportassociatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortAssociateTable";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportassociatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportassociatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortAssociateEntry")
    {
        for(auto const & c : cptpclockportassociateentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry>();
        c->parent = this;
        cptpclockportassociateentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportassociatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cptpclockportassociateentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoPtpMib::Cptpclockportassociatetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::Cptpclockportassociateentry()
    :
    cptpclockportcurrentdomainindex{YType::uint32, "cPtpClockPortCurrentDomainIndex"},
    cptpclockportcurrentclocktypeindex{YType::enumeration, "cPtpClockPortCurrentClockTypeIndex"},
    cptpclockportcurrentclockinstanceindex{YType::uint32, "cPtpClockPortCurrentClockInstanceIndex"},
    cptpclockportcurrentportnumberindex{YType::uint32, "cPtpClockPortCurrentPortNumberIndex"},
    cptpclockportassociateportindex{YType::uint32, "cPtpClockPortAssociatePortIndex"},
    cptpclockportassociateaddress{YType::str, "cPtpClockPortAssociateAddress"},
    cptpclockportassociateaddresstype{YType::enumeration, "cPtpClockPortAssociateAddressType"},
    cptpclockportassociateinerrors{YType::uint64, "cPtpClockPortAssociateInErrors"},
    cptpclockportassociateouterrors{YType::uint64, "cPtpClockPortAssociateOutErrors"},
    cptpclockportassociatepacketsreceived{YType::uint64, "cPtpClockPortAssociatePacketsReceived"},
    cptpclockportassociatepacketssent{YType::uint64, "cPtpClockPortAssociatePacketsSent"}
{
    yang_name = "cPtpClockPortAssociateEntry"; yang_parent_name = "cPtpClockPortAssociateTable";
}

CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::~Cptpclockportassociateentry()
{
}

bool CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::has_data() const
{
    return cptpclockportcurrentdomainindex.is_set
	|| cptpclockportcurrentclocktypeindex.is_set
	|| cptpclockportcurrentclockinstanceindex.is_set
	|| cptpclockportcurrentportnumberindex.is_set
	|| cptpclockportassociateportindex.is_set
	|| cptpclockportassociateaddress.is_set
	|| cptpclockportassociateaddresstype.is_set
	|| cptpclockportassociateinerrors.is_set
	|| cptpclockportassociateouterrors.is_set
	|| cptpclockportassociatepacketsreceived.is_set
	|| cptpclockportassociatepacketssent.is_set;
}

bool CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cptpclockportcurrentdomainindex.operation)
	|| is_set(cptpclockportcurrentclocktypeindex.operation)
	|| is_set(cptpclockportcurrentclockinstanceindex.operation)
	|| is_set(cptpclockportcurrentportnumberindex.operation)
	|| is_set(cptpclockportassociateportindex.operation)
	|| is_set(cptpclockportassociateaddress.operation)
	|| is_set(cptpclockportassociateaddresstype.operation)
	|| is_set(cptpclockportassociateinerrors.operation)
	|| is_set(cptpclockportassociateouterrors.operation)
	|| is_set(cptpclockportassociatepacketsreceived.operation)
	|| is_set(cptpclockportassociatepacketssent.operation);
}

std::string CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortAssociateEntry" <<"[cPtpClockPortCurrentDomainIndex='" <<cptpclockportcurrentdomainindex <<"']" <<"[cPtpClockPortCurrentClockTypeIndex='" <<cptpclockportcurrentclocktypeindex <<"']" <<"[cPtpClockPortCurrentClockInstanceIndex='" <<cptpclockportcurrentclockinstanceindex <<"']" <<"[cPtpClockPortCurrentPortNumberIndex='" <<cptpclockportcurrentportnumberindex <<"']" <<"[cPtpClockPortAssociatePortIndex='" <<cptpclockportassociateportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortAssociateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportcurrentdomainindex.is_set || is_set(cptpclockportcurrentdomainindex.operation)) leaf_name_data.push_back(cptpclockportcurrentdomainindex.get_name_leafdata());
    if (cptpclockportcurrentclocktypeindex.is_set || is_set(cptpclockportcurrentclocktypeindex.operation)) leaf_name_data.push_back(cptpclockportcurrentclocktypeindex.get_name_leafdata());
    if (cptpclockportcurrentclockinstanceindex.is_set || is_set(cptpclockportcurrentclockinstanceindex.operation)) leaf_name_data.push_back(cptpclockportcurrentclockinstanceindex.get_name_leafdata());
    if (cptpclockportcurrentportnumberindex.is_set || is_set(cptpclockportcurrentportnumberindex.operation)) leaf_name_data.push_back(cptpclockportcurrentportnumberindex.get_name_leafdata());
    if (cptpclockportassociateportindex.is_set || is_set(cptpclockportassociateportindex.operation)) leaf_name_data.push_back(cptpclockportassociateportindex.get_name_leafdata());
    if (cptpclockportassociateaddress.is_set || is_set(cptpclockportassociateaddress.operation)) leaf_name_data.push_back(cptpclockportassociateaddress.get_name_leafdata());
    if (cptpclockportassociateaddresstype.is_set || is_set(cptpclockportassociateaddresstype.operation)) leaf_name_data.push_back(cptpclockportassociateaddresstype.get_name_leafdata());
    if (cptpclockportassociateinerrors.is_set || is_set(cptpclockportassociateinerrors.operation)) leaf_name_data.push_back(cptpclockportassociateinerrors.get_name_leafdata());
    if (cptpclockportassociateouterrors.is_set || is_set(cptpclockportassociateouterrors.operation)) leaf_name_data.push_back(cptpclockportassociateouterrors.get_name_leafdata());
    if (cptpclockportassociatepacketsreceived.is_set || is_set(cptpclockportassociatepacketsreceived.operation)) leaf_name_data.push_back(cptpclockportassociatepacketsreceived.get_name_leafdata());
    if (cptpclockportassociatepacketssent.is_set || is_set(cptpclockportassociatepacketssent.operation)) leaf_name_data.push_back(cptpclockportassociatepacketssent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPtpClockPortCurrentDomainIndex")
    {
        cptpclockportcurrentdomainindex = value;
    }
    if(value_path == "cPtpClockPortCurrentClockTypeIndex")
    {
        cptpclockportcurrentclocktypeindex = value;
    }
    if(value_path == "cPtpClockPortCurrentClockInstanceIndex")
    {
        cptpclockportcurrentclockinstanceindex = value;
    }
    if(value_path == "cPtpClockPortCurrentPortNumberIndex")
    {
        cptpclockportcurrentportnumberindex = value;
    }
    if(value_path == "cPtpClockPortAssociatePortIndex")
    {
        cptpclockportassociateportindex = value;
    }
    if(value_path == "cPtpClockPortAssociateAddress")
    {
        cptpclockportassociateaddress = value;
    }
    if(value_path == "cPtpClockPortAssociateAddressType")
    {
        cptpclockportassociateaddresstype = value;
    }
    if(value_path == "cPtpClockPortAssociateInErrors")
    {
        cptpclockportassociateinerrors = value;
    }
    if(value_path == "cPtpClockPortAssociateOutErrors")
    {
        cptpclockportassociateouterrors = value;
    }
    if(value_path == "cPtpClockPortAssociatePacketsReceived")
    {
        cptpclockportassociatepacketsreceived = value;
    }
    if(value_path == "cPtpClockPortAssociatePacketsSent")
    {
        cptpclockportassociatepacketssent = value;
    }
}

const Enum::YLeaf ClockmechanismtypeEnum::e2e {1, "e2e"};
const Enum::YLeaf ClockmechanismtypeEnum::p2p {2, "p2p"};
const Enum::YLeaf ClockmechanismtypeEnum::disabled {254, "disabled"};

const Enum::YLeaf ClockportstateEnum::initializing {1, "initializing"};
const Enum::YLeaf ClockportstateEnum::faulty {2, "faulty"};
const Enum::YLeaf ClockportstateEnum::disabled {3, "disabled"};
const Enum::YLeaf ClockportstateEnum::listening {4, "listening"};
const Enum::YLeaf ClockportstateEnum::preMaster {5, "preMaster"};
const Enum::YLeaf ClockportstateEnum::master {6, "master"};
const Enum::YLeaf ClockportstateEnum::passive {7, "passive"};
const Enum::YLeaf ClockportstateEnum::uncalibrated {8, "uncalibrated"};
const Enum::YLeaf ClockportstateEnum::slave {9, "slave"};

const Enum::YLeaf ClocktimesourcetypeEnum::atomicClock {16, "atomicClock"};
const Enum::YLeaf ClocktimesourcetypeEnum::gps {32, "gps"};
const Enum::YLeaf ClocktimesourcetypeEnum::terrestrialRadio {48, "terrestrialRadio"};
const Enum::YLeaf ClocktimesourcetypeEnum::ptp {64, "ptp"};
const Enum::YLeaf ClocktimesourcetypeEnum::ntp {80, "ntp"};
const Enum::YLeaf ClocktimesourcetypeEnum::handSet {96, "handSet"};
const Enum::YLeaf ClocktimesourcetypeEnum::other {144, "other"};
const Enum::YLeaf ClocktimesourcetypeEnum::internalOsillator {160, "internalOsillator"};

const Enum::YLeaf ClockprofiletypeEnum::default_ {1, "default"};
const Enum::YLeaf ClockprofiletypeEnum::telecom {2, "telecom"};
const Enum::YLeaf ClockprofiletypeEnum::vendorspecific {3, "vendorspecific"};

const Enum::YLeaf ClockroletypeEnum::master {1, "master"};
const Enum::YLeaf ClockroletypeEnum::slave {2, "slave"};

const Enum::YLeaf ClocktypeEnum::ordinaryClock {1, "ordinaryClock"};
const Enum::YLeaf ClocktypeEnum::boundaryClock {2, "boundaryClock"};
const Enum::YLeaf ClocktypeEnum::transparentClock {3, "transparentClock"};
const Enum::YLeaf ClocktypeEnum::boundaryNode {4, "boundaryNode"};

const Enum::YLeaf ClocktxmodetypeEnum::unicast {1, "unicast"};
const Enum::YLeaf ClocktxmodetypeEnum::multicast {2, "multicast"};
const Enum::YLeaf ClocktxmodetypeEnum::multicastmix {3, "multicastmix"};

const Enum::YLeaf ClockqualityaccuracytypeEnum::reserved00 {1, "reserved00"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::nanoSecond25 {32, "nanoSecond25"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::nanoSecond100 {33, "nanoSecond100"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::nanoSecond250 {34, "nanoSecond250"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec1 {35, "microSec1"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec2dot5 {36, "microSec2dot5"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec10 {37, "microSec10"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec25 {38, "microSec25"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec100 {39, "microSec100"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::microSec250 {40, "microSec250"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec1 {41, "milliSec1"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec2dot5 {42, "milliSec2dot5"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec10 {43, "milliSec10"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec25 {44, "milliSec25"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec100 {45, "milliSec100"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::milliSec250 {46, "milliSec250"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::second1 {47, "second1"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::second10 {48, "second10"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::secondGreater10 {49, "secondGreater10"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::unknown {254, "unknown"};
const Enum::YLeaf ClockqualityaccuracytypeEnum::reserved255 {255, "reserved255"};

const Enum::YLeaf ClockstatetypeEnum::freerun {1, "freerun"};
const Enum::YLeaf ClockstatetypeEnum::holdover {2, "holdover"};
const Enum::YLeaf ClockstatetypeEnum::acquiring {3, "acquiring"};
const Enum::YLeaf ClockstatetypeEnum::frequencyLocked {4, "frequencyLocked"};
const Enum::YLeaf ClockstatetypeEnum::phaseAligned {5, "phaseAligned"};


}
}

