
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_AAA_SESSION_MIB.hpp"

namespace ydk {
namespace CISCO_AAA_SESSION_MIB {

CiscoAaaSessionMib::CiscoAaaSessionMib()
    :
    casnactive_(std::make_shared<CiscoAaaSessionMib::Casnactive>())
	,casnactivetable_(std::make_shared<CiscoAaaSessionMib::Casnactivetable>())
	,casngeneral_(std::make_shared<CiscoAaaSessionMib::Casngeneral>())
{
    casnactive_->parent = this;

    casnactivetable_->parent = this;

    casngeneral_->parent = this;

    yang_name = "CISCO-AAA-SESSION-MIB"; yang_parent_name = "CISCO-AAA-SESSION-MIB";
}

CiscoAaaSessionMib::~CiscoAaaSessionMib()
{
}

bool CiscoAaaSessionMib::has_data() const
{
    return (casnactive_ !=  nullptr && casnactive_->has_data())
	|| (casnactivetable_ !=  nullptr && casnactivetable_->has_data())
	|| (casngeneral_ !=  nullptr && casngeneral_->has_data());
}

bool CiscoAaaSessionMib::has_operation() const
{
    return is_set(operation)
	|| (casnactive_ !=  nullptr && casnactive_->has_operation())
	|| (casnactivetable_ !=  nullptr && casnactivetable_->has_operation())
	|| (casngeneral_ !=  nullptr && casngeneral_->has_operation());
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
        if(casnactive_ == nullptr)
        {
            casnactive_ = std::make_shared<CiscoAaaSessionMib::Casnactive>();
        }
        return casnactive_;
    }

    if(child_yang_name == "casnActiveTable")
    {
        if(casnactivetable_ == nullptr)
        {
            casnactivetable_ = std::make_shared<CiscoAaaSessionMib::Casnactivetable>();
        }
        return casnactivetable_;
    }

    if(child_yang_name == "casnGeneral")
    {
        if(casngeneral_ == nullptr)
        {
            casngeneral_ = std::make_shared<CiscoAaaSessionMib::Casngeneral>();
        }
        return casngeneral_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(casnactive_ != nullptr)
    {
        children["casnActive"] = casnactive_;
    }

    if(casnactivetable_ != nullptr)
    {
        children["casnActiveTable"] = casnactivetable_;
    }

    if(casngeneral_ != nullptr)
    {
        children["casnGeneral"] = casngeneral_;
    }

    return children;
}

void CiscoAaaSessionMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(casnactivetableentries.operation)
	|| is_set(casnactivetablehighwatermark.operation);
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

    if (casnactivetableentries.is_set || is_set(casnactivetableentries.operation)) leaf_name_data.push_back(casnactivetableentries.get_name_leafdata());
    if (casnactivetablehighwatermark.is_set || is_set(casnactivetablehighwatermark.operation)) leaf_name_data.push_back(casnactivetablehighwatermark.get_name_leafdata());


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

void CiscoAaaSessionMib::Casnactive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "casnActiveTableEntries")
    {
        casnactivetableentries = value;
    }
    if(value_path == "casnActiveTableHighWaterMark")
    {
        casnactivetablehighwatermark = value;
    }
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
    return is_set(operation)
	|| is_set(casndisconnectedsessions.operation)
	|| is_set(casntotalsessions.operation);
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

    if (casndisconnectedsessions.is_set || is_set(casndisconnectedsessions.operation)) leaf_name_data.push_back(casndisconnectedsessions.get_name_leafdata());
    if (casntotalsessions.is_set || is_set(casntotalsessions.operation)) leaf_name_data.push_back(casntotalsessions.get_name_leafdata());


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

void CiscoAaaSessionMib::Casngeneral::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "casnDisconnectedSessions")
    {
        casndisconnectedsessions = value;
    }
    if(value_path == "casnTotalSessions")
    {
        casntotalsessions = value;
    }
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
    for (std::size_t index=0; index<casnactiveentry_.size(); index++)
    {
        if(casnactiveentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAaaSessionMib::Casnactivetable::has_operation() const
{
    for (std::size_t index=0; index<casnactiveentry_.size(); index++)
    {
        if(casnactiveentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : casnactiveentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAaaSessionMib::Casnactivetable::Casnactiveentry>();
        c->parent = this;
        casnactiveentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaSessionMib::Casnactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : casnactiveentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAaaSessionMib::Casnactivetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(casnsessionid.operation)
	|| is_set(casncalltrackerid.operation)
	|| is_set(casndisconnect.operation)
	|| is_set(casnidletime.operation)
	|| is_set(casnipaddr.operation)
	|| is_set(casnnasport.operation)
	|| is_set(casnuserid.operation)
	|| is_set(casnvaiifindex.operation);
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

    if (casnsessionid.is_set || is_set(casnsessionid.operation)) leaf_name_data.push_back(casnsessionid.get_name_leafdata());
    if (casncalltrackerid.is_set || is_set(casncalltrackerid.operation)) leaf_name_data.push_back(casncalltrackerid.get_name_leafdata());
    if (casndisconnect.is_set || is_set(casndisconnect.operation)) leaf_name_data.push_back(casndisconnect.get_name_leafdata());
    if (casnidletime.is_set || is_set(casnidletime.operation)) leaf_name_data.push_back(casnidletime.get_name_leafdata());
    if (casnipaddr.is_set || is_set(casnipaddr.operation)) leaf_name_data.push_back(casnipaddr.get_name_leafdata());
    if (casnnasport.is_set || is_set(casnnasport.operation)) leaf_name_data.push_back(casnnasport.get_name_leafdata());
    if (casnuserid.is_set || is_set(casnuserid.operation)) leaf_name_data.push_back(casnuserid.get_name_leafdata());
    if (casnvaiifindex.is_set || is_set(casnvaiifindex.operation)) leaf_name_data.push_back(casnvaiifindex.get_name_leafdata());


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

void CiscoAaaSessionMib::Casnactivetable::Casnactiveentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "casnSessionId")
    {
        casnsessionid = value;
    }
    if(value_path == "casnCallTrackerId")
    {
        casncalltrackerid = value;
    }
    if(value_path == "casnDisconnect")
    {
        casndisconnect = value;
    }
    if(value_path == "casnIdleTime")
    {
        casnidletime = value;
    }
    if(value_path == "casnIpAddr")
    {
        casnipaddr = value;
    }
    if(value_path == "casnNasPort")
    {
        casnnasport = value;
    }
    if(value_path == "casnUserId")
    {
        casnuserid = value;
    }
    if(value_path == "casnVaiIfIndex")
    {
        casnvaiifindex = value;
    }
}


}
}

