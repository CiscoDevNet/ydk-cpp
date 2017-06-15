
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_DNIS_MIB.hpp"

namespace ydk {
namespace CISCO_VOICE_DNIS_MIB {

CiscoVoiceDnisMib::CiscoVoiceDnisMib()
    :
    cvdnismappingtable_(std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable>())
	,cvdnisnodetable_(std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable>())
{
    cvdnismappingtable_->parent = this;

    cvdnisnodetable_->parent = this;

    yang_name = "CISCO-VOICE-DNIS-MIB"; yang_parent_name = "CISCO-VOICE-DNIS-MIB";
}

CiscoVoiceDnisMib::~CiscoVoiceDnisMib()
{
}

bool CiscoVoiceDnisMib::has_data() const
{
    return (cvdnismappingtable_ !=  nullptr && cvdnismappingtable_->has_data())
	|| (cvdnisnodetable_ !=  nullptr && cvdnisnodetable_->has_data());
}

bool CiscoVoiceDnisMib::has_operation() const
{
    return is_set(operation)
	|| (cvdnismappingtable_ !=  nullptr && cvdnismappingtable_->has_operation())
	|| (cvdnisnodetable_ !=  nullptr && cvdnisnodetable_->has_operation());
}

std::string CiscoVoiceDnisMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDnisMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVoiceDnisMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisMappingTable")
    {
        if(cvdnismappingtable_ == nullptr)
        {
            cvdnismappingtable_ = std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable>();
        }
        return cvdnismappingtable_;
    }

    if(child_yang_name == "cvDnisNodeTable")
    {
        if(cvdnisnodetable_ == nullptr)
        {
            cvdnisnodetable_ = std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable>();
        }
        return cvdnisnodetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvdnismappingtable_ != nullptr)
    {
        children["cvDnisMappingTable"] = cvdnismappingtable_;
    }

    if(cvdnisnodetable_ != nullptr)
    {
        children["cvDnisNodeTable"] = cvdnisnodetable_;
    }

    return children;
}

void CiscoVoiceDnisMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoVoiceDnisMib::clone_ptr() const
{
    return std::make_shared<CiscoVoiceDnisMib>();
}

std::string CiscoVoiceDnisMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVoiceDnisMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVoiceDnisMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingtable()
{
    yang_name = "cvDnisMappingTable"; yang_parent_name = "CISCO-VOICE-DNIS-MIB";
}

CiscoVoiceDnisMib::Cvdnismappingtable::~Cvdnismappingtable()
{
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::has_data() const
{
    for (std::size_t index=0; index<cvdnismappingentry_.size(); index++)
    {
        if(cvdnismappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::has_operation() const
{
    for (std::size_t index=0; index<cvdnismappingentry_.size(); index++)
    {
        if(cvdnismappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDnisMib::Cvdnismappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDnisMib::Cvdnismappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDnisMib::Cvdnismappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisMappingEntry")
    {
        for(auto const & c : cvdnismappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry>();
        c->parent = this;
        cvdnismappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnismappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvdnismappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDnisMib::Cvdnismappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::Cvdnismappingentry()
    :
    cvdnismappingname{YType::str, "cvDnisMappingName"},
    cvdnismappingrefresh{YType::enumeration, "cvDnisMappingRefresh"},
    cvdnismappingstatus{YType::enumeration, "cvDnisMappingStatus"},
    cvdnismappingurl{YType::str, "cvDnisMappingUrl"},
    cvdnismappingurlaccesserror{YType::str, "cvDnisMappingUrlAccessError"}
{
    yang_name = "cvDnisMappingEntry"; yang_parent_name = "cvDnisMappingTable";
}

CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::~Cvdnismappingentry()
{
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::has_data() const
{
    return cvdnismappingname.is_set
	|| cvdnismappingrefresh.is_set
	|| cvdnismappingstatus.is_set
	|| cvdnismappingurl.is_set
	|| cvdnismappingurlaccesserror.is_set;
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvdnismappingname.operation)
	|| is_set(cvdnismappingrefresh.operation)
	|| is_set(cvdnismappingstatus.operation)
	|| is_set(cvdnismappingurl.operation)
	|| is_set(cvdnismappingurlaccesserror.operation);
}

std::string CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisMappingEntry" <<"[cvDnisMappingName='" <<cvdnismappingname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/cvDnisMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.operation)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnismappingrefresh.is_set || is_set(cvdnismappingrefresh.operation)) leaf_name_data.push_back(cvdnismappingrefresh.get_name_leafdata());
    if (cvdnismappingstatus.is_set || is_set(cvdnismappingstatus.operation)) leaf_name_data.push_back(cvdnismappingstatus.get_name_leafdata());
    if (cvdnismappingurl.is_set || is_set(cvdnismappingurl.operation)) leaf_name_data.push_back(cvdnismappingurl.get_name_leafdata());
    if (cvdnismappingurlaccesserror.is_set || is_set(cvdnismappingurlaccesserror.operation)) leaf_name_data.push_back(cvdnismappingurlaccesserror.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
    }
    if(value_path == "cvDnisMappingRefresh")
    {
        cvdnismappingrefresh = value;
    }
    if(value_path == "cvDnisMappingStatus")
    {
        cvdnismappingstatus = value;
    }
    if(value_path == "cvDnisMappingUrl")
    {
        cvdnismappingurl = value;
    }
    if(value_path == "cvDnisMappingUrlAccessError")
    {
        cvdnismappingurlaccesserror = value;
    }
}

CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodetable()
{
    yang_name = "cvDnisNodeTable"; yang_parent_name = "CISCO-VOICE-DNIS-MIB";
}

CiscoVoiceDnisMib::Cvdnisnodetable::~Cvdnisnodetable()
{
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::has_data() const
{
    for (std::size_t index=0; index<cvdnisnodeentry_.size(); index++)
    {
        if(cvdnisnodeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::has_operation() const
{
    for (std::size_t index=0; index<cvdnisnodeentry_.size(); index++)
    {
        if(cvdnisnodeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVoiceDnisMib::Cvdnisnodetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisNodeTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDnisMib::Cvdnisnodetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDnisMib::Cvdnisnodetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvDnisNodeEntry")
    {
        for(auto const & c : cvdnisnodeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry>();
        c->parent = this;
        cvdnisnodeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnisnodetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvdnisnodeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDnisMib::Cvdnisnodetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::Cvdnisnodeentry()
    :
    cvdnismappingname{YType::str, "cvDnisMappingName"},
    cvdnisnumber{YType::str, "cvDnisNumber"},
    cvdnisnodemodifiable{YType::boolean, "cvDnisNodeModifiable"},
    cvdnisnodestatus{YType::enumeration, "cvDnisNodeStatus"},
    cvdnisnodeurl{YType::str, "cvDnisNodeUrl"}
{
    yang_name = "cvDnisNodeEntry"; yang_parent_name = "cvDnisNodeTable";
}

CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::~Cvdnisnodeentry()
{
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::has_data() const
{
    return cvdnismappingname.is_set
	|| cvdnisnumber.is_set
	|| cvdnisnodemodifiable.is_set
	|| cvdnisnodestatus.is_set
	|| cvdnisnodeurl.is_set;
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvdnismappingname.operation)
	|| is_set(cvdnisnumber.operation)
	|| is_set(cvdnisnodemodifiable.operation)
	|| is_set(cvdnisnodestatus.operation)
	|| is_set(cvdnisnodeurl.operation);
}

std::string CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvDnisNodeEntry" <<"[cvDnisMappingName='" <<cvdnismappingname <<"']" <<"[cvDnisNumber='" <<cvdnisnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-DNIS-MIB:CISCO-VOICE-DNIS-MIB/cvDnisNodeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.operation)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnisnumber.is_set || is_set(cvdnisnumber.operation)) leaf_name_data.push_back(cvdnisnumber.get_name_leafdata());
    if (cvdnisnodemodifiable.is_set || is_set(cvdnisnodemodifiable.operation)) leaf_name_data.push_back(cvdnisnodemodifiable.get_name_leafdata());
    if (cvdnisnodestatus.is_set || is_set(cvdnisnodestatus.operation)) leaf_name_data.push_back(cvdnisnodestatus.get_name_leafdata());
    if (cvdnisnodeurl.is_set || is_set(cvdnisnodeurl.operation)) leaf_name_data.push_back(cvdnisnodeurl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
    }
    if(value_path == "cvDnisNumber")
    {
        cvdnisnumber = value;
    }
    if(value_path == "cvDnisNodeModifiable")
    {
        cvdnisnodemodifiable = value;
    }
    if(value_path == "cvDnisNodeStatus")
    {
        cvdnisnodestatus = value;
    }
    if(value_path == "cvDnisNodeUrl")
    {
        cvdnisnodeurl = value;
    }
}

const Enum::YLeaf CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::CvdnismappingrefreshEnum::idle {1, "idle"};
const Enum::YLeaf CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::CvdnismappingrefreshEnum::refresh {2, "refresh"};


}
}

