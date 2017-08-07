
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_DNIS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VOICE_DNIS_MIB {

CiscoVoiceDnisMib::CiscoVoiceDnisMib()
    :
    cvdnismappingtable(std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable>())
	,cvdnisnodetable(std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable>())
{
    cvdnismappingtable->parent = this;

    cvdnisnodetable->parent = this;

    yang_name = "CISCO-VOICE-DNIS-MIB"; yang_parent_name = "CISCO-VOICE-DNIS-MIB";
}

CiscoVoiceDnisMib::~CiscoVoiceDnisMib()
{
}

bool CiscoVoiceDnisMib::has_data() const
{
    return (cvdnismappingtable !=  nullptr && cvdnismappingtable->has_data())
	|| (cvdnisnodetable !=  nullptr && cvdnisnodetable->has_data());
}

bool CiscoVoiceDnisMib::has_operation() const
{
    return is_set(yfilter)
	|| (cvdnismappingtable !=  nullptr && cvdnismappingtable->has_operation())
	|| (cvdnisnodetable !=  nullptr && cvdnisnodetable->has_operation());
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
        if(cvdnismappingtable == nullptr)
        {
            cvdnismappingtable = std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable>();
        }
        return cvdnismappingtable;
    }

    if(child_yang_name == "cvDnisNodeTable")
    {
        if(cvdnisnodetable == nullptr)
        {
            cvdnisnodetable = std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable>();
        }
        return cvdnisnodetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvdnismappingtable != nullptr)
    {
        children["cvDnisMappingTable"] = cvdnismappingtable;
    }

    if(cvdnisnodetable != nullptr)
    {
        children["cvDnisNodeTable"] = cvdnisnodetable;
    }

    return children;
}

void CiscoVoiceDnisMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceDnisMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoVoiceDnisMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoVoiceDnisMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingTable" || name == "cvDnisNodeTable")
        return true;
    return false;
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
    for (std::size_t index=0; index<cvdnismappingentry.size(); index++)
    {
        if(cvdnismappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::has_operation() const
{
    for (std::size_t index=0; index<cvdnismappingentry.size(); index++)
    {
        if(cvdnismappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : cvdnismappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry>();
        c->parent = this;
        cvdnismappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnismappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvdnismappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDnisMib::Cvdnismappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceDnisMib::Cvdnismappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cvdnismappingname.yfilter)
	|| ydk::is_set(cvdnismappingrefresh.yfilter)
	|| ydk::is_set(cvdnismappingstatus.yfilter)
	|| ydk::is_set(cvdnismappingurl.yfilter)
	|| ydk::is_set(cvdnismappingurlaccesserror.yfilter);
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

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.yfilter)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnismappingrefresh.is_set || is_set(cvdnismappingrefresh.yfilter)) leaf_name_data.push_back(cvdnismappingrefresh.get_name_leafdata());
    if (cvdnismappingstatus.is_set || is_set(cvdnismappingstatus.yfilter)) leaf_name_data.push_back(cvdnismappingstatus.get_name_leafdata());
    if (cvdnismappingurl.is_set || is_set(cvdnismappingurl.yfilter)) leaf_name_data.push_back(cvdnismappingurl.get_name_leafdata());
    if (cvdnismappingurlaccesserror.is_set || is_set(cvdnismappingurlaccesserror.yfilter)) leaf_name_data.push_back(cvdnismappingurlaccesserror.get_name_leafdata());


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

void CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
        cvdnismappingname.value_namespace = name_space;
        cvdnismappingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingRefresh")
    {
        cvdnismappingrefresh = value;
        cvdnismappingrefresh.value_namespace = name_space;
        cvdnismappingrefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingStatus")
    {
        cvdnismappingstatus = value;
        cvdnismappingstatus.value_namespace = name_space;
        cvdnismappingstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingUrl")
    {
        cvdnismappingurl = value;
        cvdnismappingurl.value_namespace = name_space;
        cvdnismappingurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisMappingUrlAccessError")
    {
        cvdnismappingurlaccesserror = value;
        cvdnismappingurlaccesserror.value_namespace = name_space;
        cvdnismappingurlaccesserror.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingRefresh")
    {
        cvdnismappingrefresh.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingStatus")
    {
        cvdnismappingstatus.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingUrl")
    {
        cvdnismappingurl.yfilter = yfilter;
    }
    if(value_path == "cvDnisMappingUrlAccessError")
    {
        cvdnismappingurlaccesserror.yfilter = yfilter;
    }
}

bool CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingName" || name == "cvDnisMappingRefresh" || name == "cvDnisMappingStatus" || name == "cvDnisMappingUrl" || name == "cvDnisMappingUrlAccessError")
        return true;
    return false;
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
    for (std::size_t index=0; index<cvdnisnodeentry.size(); index++)
    {
        if(cvdnisnodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::has_operation() const
{
    for (std::size_t index=0; index<cvdnisnodeentry.size(); index++)
    {
        if(cvdnisnodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : cvdnisnodeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry>();
        c->parent = this;
        cvdnisnodeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceDnisMib::Cvdnisnodetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvdnisnodeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceDnisMib::Cvdnisnodetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceDnisMib::Cvdnisnodetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisNodeEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cvdnismappingname.yfilter)
	|| ydk::is_set(cvdnisnumber.yfilter)
	|| ydk::is_set(cvdnisnodemodifiable.yfilter)
	|| ydk::is_set(cvdnisnodestatus.yfilter)
	|| ydk::is_set(cvdnisnodeurl.yfilter);
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

    if (cvdnismappingname.is_set || is_set(cvdnismappingname.yfilter)) leaf_name_data.push_back(cvdnismappingname.get_name_leafdata());
    if (cvdnisnumber.is_set || is_set(cvdnisnumber.yfilter)) leaf_name_data.push_back(cvdnisnumber.get_name_leafdata());
    if (cvdnisnodemodifiable.is_set || is_set(cvdnisnodemodifiable.yfilter)) leaf_name_data.push_back(cvdnisnodemodifiable.get_name_leafdata());
    if (cvdnisnodestatus.is_set || is_set(cvdnisnodestatus.yfilter)) leaf_name_data.push_back(cvdnisnodestatus.get_name_leafdata());
    if (cvdnisnodeurl.is_set || is_set(cvdnisnodeurl.yfilter)) leaf_name_data.push_back(cvdnisnodeurl.get_name_leafdata());


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

void CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname = value;
        cvdnismappingname.value_namespace = name_space;
        cvdnismappingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNumber")
    {
        cvdnisnumber = value;
        cvdnisnumber.value_namespace = name_space;
        cvdnisnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeModifiable")
    {
        cvdnisnodemodifiable = value;
        cvdnisnodemodifiable.value_namespace = name_space;
        cvdnisnodemodifiable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeStatus")
    {
        cvdnisnodestatus = value;
        cvdnisnodestatus.value_namespace = name_space;
        cvdnisnodestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvDnisNodeUrl")
    {
        cvdnisnodeurl = value;
        cvdnisnodeurl.value_namespace = name_space;
        cvdnisnodeurl.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvDnisMappingName")
    {
        cvdnismappingname.yfilter = yfilter;
    }
    if(value_path == "cvDnisNumber")
    {
        cvdnisnumber.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeModifiable")
    {
        cvdnisnodemodifiable.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeStatus")
    {
        cvdnisnodestatus.yfilter = yfilter;
    }
    if(value_path == "cvDnisNodeUrl")
    {
        cvdnisnodeurl.yfilter = yfilter;
    }
}

bool CiscoVoiceDnisMib::Cvdnisnodetable::Cvdnisnodeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvDnisMappingName" || name == "cvDnisNumber" || name == "cvDnisNodeModifiable" || name == "cvDnisNodeStatus" || name == "cvDnisNodeUrl")
        return true;
    return false;
}

const Enum::YLeaf CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::Cvdnismappingrefresh::idle {1, "idle"};
const Enum::YLeaf CiscoVoiceDnisMib::Cvdnismappingtable::Cvdnismappingentry::Cvdnismappingrefresh::refresh {2, "refresh"};


}
}

