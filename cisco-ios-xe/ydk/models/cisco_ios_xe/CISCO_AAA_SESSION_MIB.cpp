
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_AAA_SESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_AAA_SESSION_MIB {

CiscoAaaSessionMib::CiscoAaaSessionMib()
    :
    casnactive(std::make_shared<CiscoAaaSessionMib::Casnactive>())
	,casnactivetable(std::make_shared<CiscoAaaSessionMib::Casnactivetable>())
	,casngeneral(std::make_shared<CiscoAaaSessionMib::Casngeneral>())
{
    casnactive->parent = this;

    casnactivetable->parent = this;

    casngeneral->parent = this;

    yang_name = "CISCO-AAA-SESSION-MIB"; yang_parent_name = "CISCO-AAA-SESSION-MIB";
}

CiscoAaaSessionMib::~CiscoAaaSessionMib()
{
}

bool CiscoAaaSessionMib::has_data() const
{
    return (casnactive !=  nullptr && casnactive->has_data())
	|| (casnactivetable !=  nullptr && casnactivetable->has_data())
	|| (casngeneral !=  nullptr && casngeneral->has_data());
}

bool CiscoAaaSessionMib::has_operation() const
{
    return is_set(yfilter)
	|| (casnactive !=  nullptr && casnactive->has_operation())
	|| (casnactivetable !=  nullptr && casnactivetable->has_operation())
	|| (casngeneral !=  nullptr && casngeneral->has_operation());
}

std::string CiscoAaaSessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoAaaSessionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoAaaSessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casnActive")
    {
        if(casnactive == nullptr)
        {
            casnactive = std::make_shared<CiscoAaaSessionMib::Casnactive>();
        }
        return casnactive;
    }

    if(child_yang_name == "casnActiveTable")
    {
        if(casnactivetable == nullptr)
        {
            casnactivetable = std::make_shared<CiscoAaaSessionMib::Casnactivetable>();
        }
        return casnactivetable;
    }

    if(child_yang_name == "casnGeneral")
    {
        if(casngeneral == nullptr)
        {
            casngeneral = std::make_shared<CiscoAaaSessionMib::Casngeneral>();
        }
        return casngeneral;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(casnactive != nullptr)
    {
        children["casnActive"] = casnactive;
    }

    if(casnactivetable != nullptr)
    {
        children["casnActiveTable"] = casnactivetable;
    }

    if(casngeneral != nullptr)
    {
        children["casnGeneral"] = casngeneral;
    }

    return children;
}

void CiscoAaaSessionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoAaaSessionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoAaaSessionMib::clone_ptr() const
{
    return std::make_shared<CiscoAaaSessionMib>();
}

std::string CiscoAaaSessionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoAaaSessionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoAaaSessionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoAaaSessionMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoAaaSessionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActive" || name == "casnActiveTable" || name == "casnGeneral")
        return true;
    return false;
}

CiscoAaaSessionMib::Casnactive::Casnactive()
    :
    casnactivetableentries{YType::uint32, "casnActiveTableEntries"},
    casnactivetablehighwatermark{YType::uint32, "casnActiveTableHighWaterMark"}
{
    yang_name = "casnActive"; yang_parent_name = "CISCO-AAA-SESSION-MIB";
}

CiscoAaaSessionMib::Casnactive::~Casnactive()
{
}

bool CiscoAaaSessionMib::Casnactive::has_data() const
{
    return casnactivetableentries.is_set
	|| casnactivetablehighwatermark.is_set;
}

bool CiscoAaaSessionMib::Casnactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casnactivetableentries.yfilter)
	|| ydk::is_set(casnactivetablehighwatermark.yfilter);
}

std::string CiscoAaaSessionMib::Casnactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActive";

    return path_buffer.str();

}

const EntityPath CiscoAaaSessionMib::Casnactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casnactivetableentries.is_set || is_set(casnactivetableentries.yfilter)) leaf_name_data.push_back(casnactivetableentries.get_name_leafdata());
    if (casnactivetablehighwatermark.is_set || is_set(casnactivetablehighwatermark.yfilter)) leaf_name_data.push_back(casnactivetablehighwatermark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaSessionMib::Casnactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::Casnactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAaaSessionMib::Casnactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casnActiveTableEntries")
    {
        casnactivetableentries = value;
        casnactivetableentries.value_namespace = name_space;
        casnactivetableentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnActiveTableHighWaterMark")
    {
        casnactivetablehighwatermark = value;
        casnactivetablehighwatermark.value_namespace = name_space;
        casnactivetablehighwatermark.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoAaaSessionMib::Casnactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casnActiveTableEntries")
    {
        casnactivetableentries.yfilter = yfilter;
    }
    if(value_path == "casnActiveTableHighWaterMark")
    {
        casnactivetablehighwatermark.yfilter = yfilter;
    }
}

bool CiscoAaaSessionMib::Casnactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveTableEntries" || name == "casnActiveTableHighWaterMark")
        return true;
    return false;
}

CiscoAaaSessionMib::Casngeneral::Casngeneral()
    :
    casndisconnectedsessions{YType::uint32, "casnDisconnectedSessions"},
    casntotalsessions{YType::uint32, "casnTotalSessions"}
{
    yang_name = "casnGeneral"; yang_parent_name = "CISCO-AAA-SESSION-MIB";
}

CiscoAaaSessionMib::Casngeneral::~Casngeneral()
{
}

bool CiscoAaaSessionMib::Casngeneral::has_data() const
{
    return casndisconnectedsessions.is_set
	|| casntotalsessions.is_set;
}

bool CiscoAaaSessionMib::Casngeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casndisconnectedsessions.yfilter)
	|| ydk::is_set(casntotalsessions.yfilter);
}

std::string CiscoAaaSessionMib::Casngeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnGeneral";

    return path_buffer.str();

}

const EntityPath CiscoAaaSessionMib::Casngeneral::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casndisconnectedsessions.is_set || is_set(casndisconnectedsessions.yfilter)) leaf_name_data.push_back(casndisconnectedsessions.get_name_leafdata());
    if (casntotalsessions.is_set || is_set(casntotalsessions.yfilter)) leaf_name_data.push_back(casntotalsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaSessionMib::Casngeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::Casngeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAaaSessionMib::Casngeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casnDisconnectedSessions")
    {
        casndisconnectedsessions = value;
        casndisconnectedsessions.value_namespace = name_space;
        casndisconnectedsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnTotalSessions")
    {
        casntotalsessions = value;
        casntotalsessions.value_namespace = name_space;
        casntotalsessions.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoAaaSessionMib::Casngeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casnDisconnectedSessions")
    {
        casndisconnectedsessions.yfilter = yfilter;
    }
    if(value_path == "casnTotalSessions")
    {
        casntotalsessions.yfilter = yfilter;
    }
}

bool CiscoAaaSessionMib::Casngeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnDisconnectedSessions" || name == "casnTotalSessions")
        return true;
    return false;
}

CiscoAaaSessionMib::Casnactivetable::Casnactivetable()
{
    yang_name = "casnActiveTable"; yang_parent_name = "CISCO-AAA-SESSION-MIB";
}

CiscoAaaSessionMib::Casnactivetable::~Casnactivetable()
{
}

bool CiscoAaaSessionMib::Casnactivetable::has_data() const
{
    for (std::size_t index=0; index<casnactiveentry.size(); index++)
    {
        if(casnactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAaaSessionMib::Casnactivetable::has_operation() const
{
    for (std::size_t index=0; index<casnactiveentry.size(); index++)
    {
        if(casnactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoAaaSessionMib::Casnactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveTable";

    return path_buffer.str();

}

const EntityPath CiscoAaaSessionMib::Casnactivetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaSessionMib::Casnactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casnActiveEntry")
    {
        for(auto const & c : casnactiveentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAaaSessionMib::Casnactivetable::Casnactiveentry>();
        c->parent = this;
        casnactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::Casnactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : casnactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAaaSessionMib::Casnactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoAaaSessionMib::Casnactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoAaaSessionMib::Casnactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveEntry")
        return true;
    return false;
}

CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::Casnactiveentry()
    :
    casnsessionid{YType::uint32, "casnSessionId"},
    casncalltrackerid{YType::uint32, "casnCallTrackerId"},
    casndisconnect{YType::boolean, "casnDisconnect"},
    casnidletime{YType::uint32, "casnIdleTime"},
    casnipaddr{YType::str, "casnIpAddr"},
    casnnasport{YType::str, "casnNasPort"},
    casnuserid{YType::str, "casnUserId"},
    casnvaiifindex{YType::int32, "casnVaiIfIndex"}
{
    yang_name = "casnActiveEntry"; yang_parent_name = "casnActiveTable";
}

CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::~Casnactiveentry()
{
}

bool CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::has_data() const
{
    return casnsessionid.is_set
	|| casncalltrackerid.is_set
	|| casndisconnect.is_set
	|| casnidletime.is_set
	|| casnipaddr.is_set
	|| casnnasport.is_set
	|| casnuserid.is_set
	|| casnvaiifindex.is_set;
}

bool CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casnsessionid.yfilter)
	|| ydk::is_set(casncalltrackerid.yfilter)
	|| ydk::is_set(casndisconnect.yfilter)
	|| ydk::is_set(casnidletime.yfilter)
	|| ydk::is_set(casnipaddr.yfilter)
	|| ydk::is_set(casnnasport.yfilter)
	|| ydk::is_set(casnuserid.yfilter)
	|| ydk::is_set(casnvaiifindex.yfilter);
}

std::string CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveEntry" <<"[casnSessionId='" <<casnsessionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/casnActiveTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casnsessionid.is_set || is_set(casnsessionid.yfilter)) leaf_name_data.push_back(casnsessionid.get_name_leafdata());
    if (casncalltrackerid.is_set || is_set(casncalltrackerid.yfilter)) leaf_name_data.push_back(casncalltrackerid.get_name_leafdata());
    if (casndisconnect.is_set || is_set(casndisconnect.yfilter)) leaf_name_data.push_back(casndisconnect.get_name_leafdata());
    if (casnidletime.is_set || is_set(casnidletime.yfilter)) leaf_name_data.push_back(casnidletime.get_name_leafdata());
    if (casnipaddr.is_set || is_set(casnipaddr.yfilter)) leaf_name_data.push_back(casnipaddr.get_name_leafdata());
    if (casnnasport.is_set || is_set(casnnasport.yfilter)) leaf_name_data.push_back(casnnasport.get_name_leafdata());
    if (casnuserid.is_set || is_set(casnuserid.yfilter)) leaf_name_data.push_back(casnuserid.get_name_leafdata());
    if (casnvaiifindex.is_set || is_set(casnvaiifindex.yfilter)) leaf_name_data.push_back(casnvaiifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casnSessionId")
    {
        casnsessionid = value;
        casnsessionid.value_namespace = name_space;
        casnsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnCallTrackerId")
    {
        casncalltrackerid = value;
        casncalltrackerid.value_namespace = name_space;
        casncalltrackerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnDisconnect")
    {
        casndisconnect = value;
        casndisconnect.value_namespace = name_space;
        casndisconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnIdleTime")
    {
        casnidletime = value;
        casnidletime.value_namespace = name_space;
        casnidletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnIpAddr")
    {
        casnipaddr = value;
        casnipaddr.value_namespace = name_space;
        casnipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnNasPort")
    {
        casnnasport = value;
        casnnasport.value_namespace = name_space;
        casnnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnUserId")
    {
        casnuserid = value;
        casnuserid.value_namespace = name_space;
        casnuserid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnVaiIfIndex")
    {
        casnvaiifindex = value;
        casnvaiifindex.value_namespace = name_space;
        casnvaiifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casnSessionId")
    {
        casnsessionid.yfilter = yfilter;
    }
    if(value_path == "casnCallTrackerId")
    {
        casncalltrackerid.yfilter = yfilter;
    }
    if(value_path == "casnDisconnect")
    {
        casndisconnect.yfilter = yfilter;
    }
    if(value_path == "casnIdleTime")
    {
        casnidletime.yfilter = yfilter;
    }
    if(value_path == "casnIpAddr")
    {
        casnipaddr.yfilter = yfilter;
    }
    if(value_path == "casnNasPort")
    {
        casnnasport.yfilter = yfilter;
    }
    if(value_path == "casnUserId")
    {
        casnuserid.yfilter = yfilter;
    }
    if(value_path == "casnVaiIfIndex")
    {
        casnvaiifindex.yfilter = yfilter;
    }
}

bool CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnSessionId" || name == "casnCallTrackerId" || name == "casnDisconnect" || name == "casnIdleTime" || name == "casnIpAddr" || name == "casnNasPort" || name == "casnUserId" || name == "casnVaiIfIndex")
        return true;
    return false;
}


}
}

