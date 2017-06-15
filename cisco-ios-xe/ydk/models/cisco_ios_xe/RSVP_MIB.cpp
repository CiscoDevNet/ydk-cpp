
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RSVP_MIB.hpp"

namespace ydk {
namespace RSVP_MIB {

RsvpMib::RsvpMib()
    :
    rsvpgenobjects_(std::make_shared<RsvpMib::Rsvpgenobjects>())
	,rsvpiftable_(std::make_shared<RsvpMib::Rsvpiftable>())
	,rsvpnbrtable_(std::make_shared<RsvpMib::Rsvpnbrtable>())
	,rsvpresvfwdtable_(std::make_shared<RsvpMib::Rsvpresvfwdtable>())
	,rsvpresvtable_(std::make_shared<RsvpMib::Rsvpresvtable>())
	,rsvpsenderoutinterfacetable_(std::make_shared<RsvpMib::Rsvpsenderoutinterfacetable>())
	,rsvpsendertable_(std::make_shared<RsvpMib::Rsvpsendertable>())
	,rsvpsessiontable_(std::make_shared<RsvpMib::Rsvpsessiontable>())
{
    rsvpgenobjects_->parent = this;

    rsvpiftable_->parent = this;

    rsvpnbrtable_->parent = this;

    rsvpresvfwdtable_->parent = this;

    rsvpresvtable_->parent = this;

    rsvpsenderoutinterfacetable_->parent = this;

    rsvpsendertable_->parent = this;

    rsvpsessiontable_->parent = this;

    yang_name = "RSVP-MIB"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::~RsvpMib()
{
}

bool RsvpMib::has_data() const
{
    return (rsvpgenobjects_ !=  nullptr && rsvpgenobjects_->has_data())
	|| (rsvpiftable_ !=  nullptr && rsvpiftable_->has_data())
	|| (rsvpnbrtable_ !=  nullptr && rsvpnbrtable_->has_data())
	|| (rsvpresvfwdtable_ !=  nullptr && rsvpresvfwdtable_->has_data())
	|| (rsvpresvtable_ !=  nullptr && rsvpresvtable_->has_data())
	|| (rsvpsenderoutinterfacetable_ !=  nullptr && rsvpsenderoutinterfacetable_->has_data())
	|| (rsvpsendertable_ !=  nullptr && rsvpsendertable_->has_data())
	|| (rsvpsessiontable_ !=  nullptr && rsvpsessiontable_->has_data());
}

bool RsvpMib::has_operation() const
{
    return is_set(operation)
	|| (rsvpgenobjects_ !=  nullptr && rsvpgenobjects_->has_operation())
	|| (rsvpiftable_ !=  nullptr && rsvpiftable_->has_operation())
	|| (rsvpnbrtable_ !=  nullptr && rsvpnbrtable_->has_operation())
	|| (rsvpresvfwdtable_ !=  nullptr && rsvpresvfwdtable_->has_operation())
	|| (rsvpresvtable_ !=  nullptr && rsvpresvtable_->has_operation())
	|| (rsvpsenderoutinterfacetable_ !=  nullptr && rsvpsenderoutinterfacetable_->has_operation())
	|| (rsvpsendertable_ !=  nullptr && rsvpsendertable_->has_operation())
	|| (rsvpsessiontable_ !=  nullptr && rsvpsessiontable_->has_operation());
}

std::string RsvpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB";

    return path_buffer.str();

}

const EntityPath RsvpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> RsvpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpGenObjects")
    {
        if(rsvpgenobjects_ == nullptr)
        {
            rsvpgenobjects_ = std::make_shared<RsvpMib::Rsvpgenobjects>();
        }
        return rsvpgenobjects_;
    }

    if(child_yang_name == "rsvpIfTable")
    {
        if(rsvpiftable_ == nullptr)
        {
            rsvpiftable_ = std::make_shared<RsvpMib::Rsvpiftable>();
        }
        return rsvpiftable_;
    }

    if(child_yang_name == "rsvpNbrTable")
    {
        if(rsvpnbrtable_ == nullptr)
        {
            rsvpnbrtable_ = std::make_shared<RsvpMib::Rsvpnbrtable>();
        }
        return rsvpnbrtable_;
    }

    if(child_yang_name == "rsvpResvFwdTable")
    {
        if(rsvpresvfwdtable_ == nullptr)
        {
            rsvpresvfwdtable_ = std::make_shared<RsvpMib::Rsvpresvfwdtable>();
        }
        return rsvpresvfwdtable_;
    }

    if(child_yang_name == "rsvpResvTable")
    {
        if(rsvpresvtable_ == nullptr)
        {
            rsvpresvtable_ = std::make_shared<RsvpMib::Rsvpresvtable>();
        }
        return rsvpresvtable_;
    }

    if(child_yang_name == "rsvpSenderOutInterfaceTable")
    {
        if(rsvpsenderoutinterfacetable_ == nullptr)
        {
            rsvpsenderoutinterfacetable_ = std::make_shared<RsvpMib::Rsvpsenderoutinterfacetable>();
        }
        return rsvpsenderoutinterfacetable_;
    }

    if(child_yang_name == "rsvpSenderTable")
    {
        if(rsvpsendertable_ == nullptr)
        {
            rsvpsendertable_ = std::make_shared<RsvpMib::Rsvpsendertable>();
        }
        return rsvpsendertable_;
    }

    if(child_yang_name == "rsvpSessionTable")
    {
        if(rsvpsessiontable_ == nullptr)
        {
            rsvpsessiontable_ = std::make_shared<RsvpMib::Rsvpsessiontable>();
        }
        return rsvpsessiontable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvpgenobjects_ != nullptr)
    {
        children["rsvpGenObjects"] = rsvpgenobjects_;
    }

    if(rsvpiftable_ != nullptr)
    {
        children["rsvpIfTable"] = rsvpiftable_;
    }

    if(rsvpnbrtable_ != nullptr)
    {
        children["rsvpNbrTable"] = rsvpnbrtable_;
    }

    if(rsvpresvfwdtable_ != nullptr)
    {
        children["rsvpResvFwdTable"] = rsvpresvfwdtable_;
    }

    if(rsvpresvtable_ != nullptr)
    {
        children["rsvpResvTable"] = rsvpresvtable_;
    }

    if(rsvpsenderoutinterfacetable_ != nullptr)
    {
        children["rsvpSenderOutInterfaceTable"] = rsvpsenderoutinterfacetable_;
    }

    if(rsvpsendertable_ != nullptr)
    {
        children["rsvpSenderTable"] = rsvpsendertable_;
    }

    if(rsvpsessiontable_ != nullptr)
    {
        children["rsvpSessionTable"] = rsvpsessiontable_;
    }

    return children;
}

void RsvpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RsvpMib::clone_ptr() const
{
    return std::make_shared<RsvpMib>();
}

std::string RsvpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RsvpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RsvpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

RsvpMib::Rsvpgenobjects::Rsvpgenobjects()
    :
    rsvpbadpackets{YType::uint32, "rsvpBadPackets"},
    rsvpresvfwdnewindex{YType::int32, "rsvpResvFwdNewIndex"},
    rsvpresvnewindex{YType::int32, "rsvpResvNewIndex"},
    rsvpsendernewindex{YType::int32, "rsvpSenderNewIndex"},
    rsvpsessionnewindex{YType::int32, "rsvpSessionNewIndex"}
{
    yang_name = "rsvpGenObjects"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpgenobjects::~Rsvpgenobjects()
{
}

bool RsvpMib::Rsvpgenobjects::has_data() const
{
    return rsvpbadpackets.is_set
	|| rsvpresvfwdnewindex.is_set
	|| rsvpresvnewindex.is_set
	|| rsvpsendernewindex.is_set
	|| rsvpsessionnewindex.is_set;
}

bool RsvpMib::Rsvpgenobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpbadpackets.operation)
	|| is_set(rsvpresvfwdnewindex.operation)
	|| is_set(rsvpresvnewindex.operation)
	|| is_set(rsvpsendernewindex.operation)
	|| is_set(rsvpsessionnewindex.operation);
}

std::string RsvpMib::Rsvpgenobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpGenObjects";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpgenobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpbadpackets.is_set || is_set(rsvpbadpackets.operation)) leaf_name_data.push_back(rsvpbadpackets.get_name_leafdata());
    if (rsvpresvfwdnewindex.is_set || is_set(rsvpresvfwdnewindex.operation)) leaf_name_data.push_back(rsvpresvfwdnewindex.get_name_leafdata());
    if (rsvpresvnewindex.is_set || is_set(rsvpresvnewindex.operation)) leaf_name_data.push_back(rsvpresvnewindex.get_name_leafdata());
    if (rsvpsendernewindex.is_set || is_set(rsvpsendernewindex.operation)) leaf_name_data.push_back(rsvpsendernewindex.get_name_leafdata());
    if (rsvpsessionnewindex.is_set || is_set(rsvpsessionnewindex.operation)) leaf_name_data.push_back(rsvpsessionnewindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpgenobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpgenobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpgenobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpBadPackets")
    {
        rsvpbadpackets = value;
    }
    if(value_path == "rsvpResvFwdNewIndex")
    {
        rsvpresvfwdnewindex = value;
    }
    if(value_path == "rsvpResvNewIndex")
    {
        rsvpresvnewindex = value;
    }
    if(value_path == "rsvpSenderNewIndex")
    {
        rsvpsendernewindex = value;
    }
    if(value_path == "rsvpSessionNewIndex")
    {
        rsvpsessionnewindex = value;
    }
}

RsvpMib::Rsvpsessiontable::Rsvpsessiontable()
{
    yang_name = "rsvpSessionTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpsessiontable::~Rsvpsessiontable()
{
}

bool RsvpMib::Rsvpsessiontable::has_data() const
{
    for (std::size_t index=0; index<rsvpsessionentry_.size(); index++)
    {
        if(rsvpsessionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpsessiontable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsessionentry_.size(); index++)
    {
        if(rsvpsessionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpsessiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSessionTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsessiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsessiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSessionEntry")
    {
        for(auto const & c : rsvpsessionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpsessiontable::Rsvpsessionentry>();
        c->parent = this;
        rsvpsessionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsessiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpsessionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpsessiontable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpsessiontable::Rsvpsessionentry::Rsvpsessionentry()
    :
    rsvpsessionnumber{YType::int32, "rsvpSessionNumber"},
    rsvpsessiondestaddr{YType::str, "rsvpSessionDestAddr"},
    rsvpsessiondestaddrlength{YType::int32, "rsvpSessionDestAddrLength"},
    rsvpsessionport{YType::str, "rsvpSessionPort"},
    rsvpsessionprotocol{YType::int32, "rsvpSessionProtocol"},
    rsvpsessionreceivers{YType::uint32, "rsvpSessionReceivers"},
    rsvpsessionrequests{YType::uint32, "rsvpSessionRequests"},
    rsvpsessionsenders{YType::uint32, "rsvpSessionSenders"},
    rsvpsessiontype{YType::int32, "rsvpSessionType"}
{
    yang_name = "rsvpSessionEntry"; yang_parent_name = "rsvpSessionTable";
}

RsvpMib::Rsvpsessiontable::Rsvpsessionentry::~Rsvpsessionentry()
{
}

bool RsvpMib::Rsvpsessiontable::Rsvpsessionentry::has_data() const
{
    return rsvpsessionnumber.is_set
	|| rsvpsessiondestaddr.is_set
	|| rsvpsessiondestaddrlength.is_set
	|| rsvpsessionport.is_set
	|| rsvpsessionprotocol.is_set
	|| rsvpsessionreceivers.is_set
	|| rsvpsessionrequests.is_set
	|| rsvpsessionsenders.is_set
	|| rsvpsessiontype.is_set;
}

bool RsvpMib::Rsvpsessiontable::Rsvpsessionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpsessionnumber.operation)
	|| is_set(rsvpsessiondestaddr.operation)
	|| is_set(rsvpsessiondestaddrlength.operation)
	|| is_set(rsvpsessionport.operation)
	|| is_set(rsvpsessionprotocol.operation)
	|| is_set(rsvpsessionreceivers.operation)
	|| is_set(rsvpsessionrequests.operation)
	|| is_set(rsvpsessionsenders.operation)
	|| is_set(rsvpsessiontype.operation);
}

std::string RsvpMib::Rsvpsessiontable::Rsvpsessionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSessionEntry" <<"[rsvpSessionNumber='" <<rsvpsessionnumber <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsessiontable::Rsvpsessionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSessionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.operation)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsessiondestaddr.is_set || is_set(rsvpsessiondestaddr.operation)) leaf_name_data.push_back(rsvpsessiondestaddr.get_name_leafdata());
    if (rsvpsessiondestaddrlength.is_set || is_set(rsvpsessiondestaddrlength.operation)) leaf_name_data.push_back(rsvpsessiondestaddrlength.get_name_leafdata());
    if (rsvpsessionport.is_set || is_set(rsvpsessionport.operation)) leaf_name_data.push_back(rsvpsessionport.get_name_leafdata());
    if (rsvpsessionprotocol.is_set || is_set(rsvpsessionprotocol.operation)) leaf_name_data.push_back(rsvpsessionprotocol.get_name_leafdata());
    if (rsvpsessionreceivers.is_set || is_set(rsvpsessionreceivers.operation)) leaf_name_data.push_back(rsvpsessionreceivers.get_name_leafdata());
    if (rsvpsessionrequests.is_set || is_set(rsvpsessionrequests.operation)) leaf_name_data.push_back(rsvpsessionrequests.get_name_leafdata());
    if (rsvpsessionsenders.is_set || is_set(rsvpsessionsenders.operation)) leaf_name_data.push_back(rsvpsessionsenders.get_name_leafdata());
    if (rsvpsessiontype.is_set || is_set(rsvpsessiontype.operation)) leaf_name_data.push_back(rsvpsessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsessiontable::Rsvpsessionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsessiontable::Rsvpsessionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpsessiontable::Rsvpsessionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
    }
    if(value_path == "rsvpSessionDestAddr")
    {
        rsvpsessiondestaddr = value;
    }
    if(value_path == "rsvpSessionDestAddrLength")
    {
        rsvpsessiondestaddrlength = value;
    }
    if(value_path == "rsvpSessionPort")
    {
        rsvpsessionport = value;
    }
    if(value_path == "rsvpSessionProtocol")
    {
        rsvpsessionprotocol = value;
    }
    if(value_path == "rsvpSessionReceivers")
    {
        rsvpsessionreceivers = value;
    }
    if(value_path == "rsvpSessionRequests")
    {
        rsvpsessionrequests = value;
    }
    if(value_path == "rsvpSessionSenders")
    {
        rsvpsessionsenders = value;
    }
    if(value_path == "rsvpSessionType")
    {
        rsvpsessiontype = value;
    }
}

RsvpMib::Rsvpsendertable::Rsvpsendertable()
{
    yang_name = "rsvpSenderTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpsendertable::~Rsvpsendertable()
{
}

bool RsvpMib::Rsvpsendertable::has_data() const
{
    for (std::size_t index=0; index<rsvpsenderentry_.size(); index++)
    {
        if(rsvpsenderentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpsendertable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsenderentry_.size(); index++)
    {
        if(rsvpsenderentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpsendertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsendertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsendertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSenderEntry")
    {
        for(auto const & c : rsvpsenderentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpsendertable::Rsvpsenderentry>();
        c->parent = this;
        rsvpsenderentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsendertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpsenderentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpsendertable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpsendertable::Rsvpsenderentry::Rsvpsenderentry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpsendernumber{YType::int32, "rsvpSenderNumber"},
    rsvpsenderaddr{YType::str, "rsvpSenderAddr"},
    rsvpsenderaddrlength{YType::int32, "rsvpSenderAddrLength"},
    rsvpsenderadspecbreak{YType::boolean, "rsvpSenderAdspecBreak"},
    rsvpsenderadspecctrlloadbreak{YType::boolean, "rsvpSenderAdspecCtrlLoadBreak"},
    rsvpsenderadspecctrlloadhopcount{YType::int32, "rsvpSenderAdspecCtrlLoadHopCount"},
    rsvpsenderadspecctrlloadminlatency{YType::int32, "rsvpSenderAdspecCtrlLoadMinLatency"},
    rsvpsenderadspecctrlloadmtu{YType::int32, "rsvpSenderAdspecCtrlLoadMtu"},
    rsvpsenderadspecctrlloadpathbw{YType::int32, "rsvpSenderAdspecCtrlLoadPathBw"},
    rsvpsenderadspecctrlloadsvc{YType::boolean, "rsvpSenderAdspecCtrlLoadSvc"},
    rsvpsenderadspecguaranteedbreak{YType::boolean, "rsvpSenderAdspecGuaranteedBreak"},
    rsvpsenderadspecguaranteedcsum{YType::int32, "rsvpSenderAdspecGuaranteedCsum"},
    rsvpsenderadspecguaranteedctot{YType::int32, "rsvpSenderAdspecGuaranteedCtot"},
    rsvpsenderadspecguaranteeddsum{YType::int32, "rsvpSenderAdspecGuaranteedDsum"},
    rsvpsenderadspecguaranteeddtot{YType::int32, "rsvpSenderAdspecGuaranteedDtot"},
    rsvpsenderadspecguaranteedhopcount{YType::int32, "rsvpSenderAdspecGuaranteedHopCount"},
    rsvpsenderadspecguaranteedminlatency{YType::int32, "rsvpSenderAdspecGuaranteedMinLatency"},
    rsvpsenderadspecguaranteedmtu{YType::int32, "rsvpSenderAdspecGuaranteedMtu"},
    rsvpsenderadspecguaranteedpathbw{YType::int32, "rsvpSenderAdspecGuaranteedPathBw"},
    rsvpsenderadspecguaranteedsvc{YType::boolean, "rsvpSenderAdspecGuaranteedSvc"},
    rsvpsenderadspechopcount{YType::int32, "rsvpSenderAdspecHopCount"},
    rsvpsenderadspecminlatency{YType::int32, "rsvpSenderAdspecMinLatency"},
    rsvpsenderadspecmtu{YType::int32, "rsvpSenderAdspecMtu"},
    rsvpsenderadspecpathbw{YType::int32, "rsvpSenderAdspecPathBw"},
    rsvpsenderdestaddr{YType::str, "rsvpSenderDestAddr"},
    rsvpsenderdestaddrlength{YType::int32, "rsvpSenderDestAddrLength"},
    rsvpsenderdestport{YType::str, "rsvpSenderDestPort"},
    rsvpsenderflowid{YType::int32, "rsvpSenderFlowId"},
    rsvpsenderhopaddr{YType::str, "rsvpSenderHopAddr"},
    rsvpsenderhoplih{YType::int32, "rsvpSenderHopLih"},
    rsvpsenderinterface{YType::int32, "rsvpSenderInterface"},
    rsvpsenderinterval{YType::int32, "rsvpSenderInterval"},
    rsvpsenderlastchange{YType::uint32, "rsvpSenderLastChange"},
    rsvpsenderpolicy{YType::str, "rsvpSenderPolicy"},
    rsvpsenderport{YType::str, "rsvpSenderPort"},
    rsvpsenderprotocol{YType::int32, "rsvpSenderProtocol"},
    rsvpsenderrsvphop{YType::boolean, "rsvpSenderRSVPHop"},
    rsvpsenderstatus{YType::enumeration, "rsvpSenderStatus"},
    rsvpsendertspecburst{YType::int32, "rsvpSenderTSpecBurst"},
    rsvpsendertspecmaxtu{YType::int32, "rsvpSenderTSpecMaxTU"},
    rsvpsendertspecmintu{YType::int32, "rsvpSenderTSpecMinTU"},
    rsvpsendertspecpeakrate{YType::int32, "rsvpSenderTSpecPeakRate"},
    rsvpsendertspecrate{YType::int32, "rsvpSenderTSpecRate"},
    rsvpsenderttl{YType::int32, "rsvpSenderTTL"},
    rsvpsendertype{YType::int32, "rsvpSenderType"}
{
    yang_name = "rsvpSenderEntry"; yang_parent_name = "rsvpSenderTable";
}

RsvpMib::Rsvpsendertable::Rsvpsenderentry::~Rsvpsenderentry()
{
}

bool RsvpMib::Rsvpsendertable::Rsvpsenderentry::has_data() const
{
    return rsvpsessionnumber.is_set
	|| rsvpsendernumber.is_set
	|| rsvpsenderaddr.is_set
	|| rsvpsenderaddrlength.is_set
	|| rsvpsenderadspecbreak.is_set
	|| rsvpsenderadspecctrlloadbreak.is_set
	|| rsvpsenderadspecctrlloadhopcount.is_set
	|| rsvpsenderadspecctrlloadminlatency.is_set
	|| rsvpsenderadspecctrlloadmtu.is_set
	|| rsvpsenderadspecctrlloadpathbw.is_set
	|| rsvpsenderadspecctrlloadsvc.is_set
	|| rsvpsenderadspecguaranteedbreak.is_set
	|| rsvpsenderadspecguaranteedcsum.is_set
	|| rsvpsenderadspecguaranteedctot.is_set
	|| rsvpsenderadspecguaranteeddsum.is_set
	|| rsvpsenderadspecguaranteeddtot.is_set
	|| rsvpsenderadspecguaranteedhopcount.is_set
	|| rsvpsenderadspecguaranteedminlatency.is_set
	|| rsvpsenderadspecguaranteedmtu.is_set
	|| rsvpsenderadspecguaranteedpathbw.is_set
	|| rsvpsenderadspecguaranteedsvc.is_set
	|| rsvpsenderadspechopcount.is_set
	|| rsvpsenderadspecminlatency.is_set
	|| rsvpsenderadspecmtu.is_set
	|| rsvpsenderadspecpathbw.is_set
	|| rsvpsenderdestaddr.is_set
	|| rsvpsenderdestaddrlength.is_set
	|| rsvpsenderdestport.is_set
	|| rsvpsenderflowid.is_set
	|| rsvpsenderhopaddr.is_set
	|| rsvpsenderhoplih.is_set
	|| rsvpsenderinterface.is_set
	|| rsvpsenderinterval.is_set
	|| rsvpsenderlastchange.is_set
	|| rsvpsenderpolicy.is_set
	|| rsvpsenderport.is_set
	|| rsvpsenderprotocol.is_set
	|| rsvpsenderrsvphop.is_set
	|| rsvpsenderstatus.is_set
	|| rsvpsendertspecburst.is_set
	|| rsvpsendertspecmaxtu.is_set
	|| rsvpsendertspecmintu.is_set
	|| rsvpsendertspecpeakrate.is_set
	|| rsvpsendertspecrate.is_set
	|| rsvpsenderttl.is_set
	|| rsvpsendertype.is_set;
}

bool RsvpMib::Rsvpsendertable::Rsvpsenderentry::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpsessionnumber.operation)
	|| is_set(rsvpsendernumber.operation)
	|| is_set(rsvpsenderaddr.operation)
	|| is_set(rsvpsenderaddrlength.operation)
	|| is_set(rsvpsenderadspecbreak.operation)
	|| is_set(rsvpsenderadspecctrlloadbreak.operation)
	|| is_set(rsvpsenderadspecctrlloadhopcount.operation)
	|| is_set(rsvpsenderadspecctrlloadminlatency.operation)
	|| is_set(rsvpsenderadspecctrlloadmtu.operation)
	|| is_set(rsvpsenderadspecctrlloadpathbw.operation)
	|| is_set(rsvpsenderadspecctrlloadsvc.operation)
	|| is_set(rsvpsenderadspecguaranteedbreak.operation)
	|| is_set(rsvpsenderadspecguaranteedcsum.operation)
	|| is_set(rsvpsenderadspecguaranteedctot.operation)
	|| is_set(rsvpsenderadspecguaranteeddsum.operation)
	|| is_set(rsvpsenderadspecguaranteeddtot.operation)
	|| is_set(rsvpsenderadspecguaranteedhopcount.operation)
	|| is_set(rsvpsenderadspecguaranteedminlatency.operation)
	|| is_set(rsvpsenderadspecguaranteedmtu.operation)
	|| is_set(rsvpsenderadspecguaranteedpathbw.operation)
	|| is_set(rsvpsenderadspecguaranteedsvc.operation)
	|| is_set(rsvpsenderadspechopcount.operation)
	|| is_set(rsvpsenderadspecminlatency.operation)
	|| is_set(rsvpsenderadspecmtu.operation)
	|| is_set(rsvpsenderadspecpathbw.operation)
	|| is_set(rsvpsenderdestaddr.operation)
	|| is_set(rsvpsenderdestaddrlength.operation)
	|| is_set(rsvpsenderdestport.operation)
	|| is_set(rsvpsenderflowid.operation)
	|| is_set(rsvpsenderhopaddr.operation)
	|| is_set(rsvpsenderhoplih.operation)
	|| is_set(rsvpsenderinterface.operation)
	|| is_set(rsvpsenderinterval.operation)
	|| is_set(rsvpsenderlastchange.operation)
	|| is_set(rsvpsenderpolicy.operation)
	|| is_set(rsvpsenderport.operation)
	|| is_set(rsvpsenderprotocol.operation)
	|| is_set(rsvpsenderrsvphop.operation)
	|| is_set(rsvpsenderstatus.operation)
	|| is_set(rsvpsendertspecburst.operation)
	|| is_set(rsvpsendertspecmaxtu.operation)
	|| is_set(rsvpsendertspecmintu.operation)
	|| is_set(rsvpsendertspecpeakrate.operation)
	|| is_set(rsvpsendertspecrate.operation)
	|| is_set(rsvpsenderttl.operation)
	|| is_set(rsvpsendertype.operation);
}

std::string RsvpMib::Rsvpsendertable::Rsvpsenderentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderEntry" <<"[rsvpSessionNumber='" <<rsvpsessionnumber <<"']" <<"[rsvpSenderNumber='" <<rsvpsendernumber <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsendertable::Rsvpsenderentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSenderTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.operation)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsendernumber.is_set || is_set(rsvpsendernumber.operation)) leaf_name_data.push_back(rsvpsendernumber.get_name_leafdata());
    if (rsvpsenderaddr.is_set || is_set(rsvpsenderaddr.operation)) leaf_name_data.push_back(rsvpsenderaddr.get_name_leafdata());
    if (rsvpsenderaddrlength.is_set || is_set(rsvpsenderaddrlength.operation)) leaf_name_data.push_back(rsvpsenderaddrlength.get_name_leafdata());
    if (rsvpsenderadspecbreak.is_set || is_set(rsvpsenderadspecbreak.operation)) leaf_name_data.push_back(rsvpsenderadspecbreak.get_name_leafdata());
    if (rsvpsenderadspecctrlloadbreak.is_set || is_set(rsvpsenderadspecctrlloadbreak.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadbreak.get_name_leafdata());
    if (rsvpsenderadspecctrlloadhopcount.is_set || is_set(rsvpsenderadspecctrlloadhopcount.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadhopcount.get_name_leafdata());
    if (rsvpsenderadspecctrlloadminlatency.is_set || is_set(rsvpsenderadspecctrlloadminlatency.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadminlatency.get_name_leafdata());
    if (rsvpsenderadspecctrlloadmtu.is_set || is_set(rsvpsenderadspecctrlloadmtu.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadmtu.get_name_leafdata());
    if (rsvpsenderadspecctrlloadpathbw.is_set || is_set(rsvpsenderadspecctrlloadpathbw.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadpathbw.get_name_leafdata());
    if (rsvpsenderadspecctrlloadsvc.is_set || is_set(rsvpsenderadspecctrlloadsvc.operation)) leaf_name_data.push_back(rsvpsenderadspecctrlloadsvc.get_name_leafdata());
    if (rsvpsenderadspecguaranteedbreak.is_set || is_set(rsvpsenderadspecguaranteedbreak.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedbreak.get_name_leafdata());
    if (rsvpsenderadspecguaranteedcsum.is_set || is_set(rsvpsenderadspecguaranteedcsum.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedcsum.get_name_leafdata());
    if (rsvpsenderadspecguaranteedctot.is_set || is_set(rsvpsenderadspecguaranteedctot.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedctot.get_name_leafdata());
    if (rsvpsenderadspecguaranteeddsum.is_set || is_set(rsvpsenderadspecguaranteeddsum.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteeddsum.get_name_leafdata());
    if (rsvpsenderadspecguaranteeddtot.is_set || is_set(rsvpsenderadspecguaranteeddtot.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteeddtot.get_name_leafdata());
    if (rsvpsenderadspecguaranteedhopcount.is_set || is_set(rsvpsenderadspecguaranteedhopcount.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedhopcount.get_name_leafdata());
    if (rsvpsenderadspecguaranteedminlatency.is_set || is_set(rsvpsenderadspecguaranteedminlatency.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedminlatency.get_name_leafdata());
    if (rsvpsenderadspecguaranteedmtu.is_set || is_set(rsvpsenderadspecguaranteedmtu.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedmtu.get_name_leafdata());
    if (rsvpsenderadspecguaranteedpathbw.is_set || is_set(rsvpsenderadspecguaranteedpathbw.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedpathbw.get_name_leafdata());
    if (rsvpsenderadspecguaranteedsvc.is_set || is_set(rsvpsenderadspecguaranteedsvc.operation)) leaf_name_data.push_back(rsvpsenderadspecguaranteedsvc.get_name_leafdata());
    if (rsvpsenderadspechopcount.is_set || is_set(rsvpsenderadspechopcount.operation)) leaf_name_data.push_back(rsvpsenderadspechopcount.get_name_leafdata());
    if (rsvpsenderadspecminlatency.is_set || is_set(rsvpsenderadspecminlatency.operation)) leaf_name_data.push_back(rsvpsenderadspecminlatency.get_name_leafdata());
    if (rsvpsenderadspecmtu.is_set || is_set(rsvpsenderadspecmtu.operation)) leaf_name_data.push_back(rsvpsenderadspecmtu.get_name_leafdata());
    if (rsvpsenderadspecpathbw.is_set || is_set(rsvpsenderadspecpathbw.operation)) leaf_name_data.push_back(rsvpsenderadspecpathbw.get_name_leafdata());
    if (rsvpsenderdestaddr.is_set || is_set(rsvpsenderdestaddr.operation)) leaf_name_data.push_back(rsvpsenderdestaddr.get_name_leafdata());
    if (rsvpsenderdestaddrlength.is_set || is_set(rsvpsenderdestaddrlength.operation)) leaf_name_data.push_back(rsvpsenderdestaddrlength.get_name_leafdata());
    if (rsvpsenderdestport.is_set || is_set(rsvpsenderdestport.operation)) leaf_name_data.push_back(rsvpsenderdestport.get_name_leafdata());
    if (rsvpsenderflowid.is_set || is_set(rsvpsenderflowid.operation)) leaf_name_data.push_back(rsvpsenderflowid.get_name_leafdata());
    if (rsvpsenderhopaddr.is_set || is_set(rsvpsenderhopaddr.operation)) leaf_name_data.push_back(rsvpsenderhopaddr.get_name_leafdata());
    if (rsvpsenderhoplih.is_set || is_set(rsvpsenderhoplih.operation)) leaf_name_data.push_back(rsvpsenderhoplih.get_name_leafdata());
    if (rsvpsenderinterface.is_set || is_set(rsvpsenderinterface.operation)) leaf_name_data.push_back(rsvpsenderinterface.get_name_leafdata());
    if (rsvpsenderinterval.is_set || is_set(rsvpsenderinterval.operation)) leaf_name_data.push_back(rsvpsenderinterval.get_name_leafdata());
    if (rsvpsenderlastchange.is_set || is_set(rsvpsenderlastchange.operation)) leaf_name_data.push_back(rsvpsenderlastchange.get_name_leafdata());
    if (rsvpsenderpolicy.is_set || is_set(rsvpsenderpolicy.operation)) leaf_name_data.push_back(rsvpsenderpolicy.get_name_leafdata());
    if (rsvpsenderport.is_set || is_set(rsvpsenderport.operation)) leaf_name_data.push_back(rsvpsenderport.get_name_leafdata());
    if (rsvpsenderprotocol.is_set || is_set(rsvpsenderprotocol.operation)) leaf_name_data.push_back(rsvpsenderprotocol.get_name_leafdata());
    if (rsvpsenderrsvphop.is_set || is_set(rsvpsenderrsvphop.operation)) leaf_name_data.push_back(rsvpsenderrsvphop.get_name_leafdata());
    if (rsvpsenderstatus.is_set || is_set(rsvpsenderstatus.operation)) leaf_name_data.push_back(rsvpsenderstatus.get_name_leafdata());
    if (rsvpsendertspecburst.is_set || is_set(rsvpsendertspecburst.operation)) leaf_name_data.push_back(rsvpsendertspecburst.get_name_leafdata());
    if (rsvpsendertspecmaxtu.is_set || is_set(rsvpsendertspecmaxtu.operation)) leaf_name_data.push_back(rsvpsendertspecmaxtu.get_name_leafdata());
    if (rsvpsendertspecmintu.is_set || is_set(rsvpsendertspecmintu.operation)) leaf_name_data.push_back(rsvpsendertspecmintu.get_name_leafdata());
    if (rsvpsendertspecpeakrate.is_set || is_set(rsvpsendertspecpeakrate.operation)) leaf_name_data.push_back(rsvpsendertspecpeakrate.get_name_leafdata());
    if (rsvpsendertspecrate.is_set || is_set(rsvpsendertspecrate.operation)) leaf_name_data.push_back(rsvpsendertspecrate.get_name_leafdata());
    if (rsvpsenderttl.is_set || is_set(rsvpsenderttl.operation)) leaf_name_data.push_back(rsvpsenderttl.get_name_leafdata());
    if (rsvpsendertype.is_set || is_set(rsvpsendertype.operation)) leaf_name_data.push_back(rsvpsendertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsendertable::Rsvpsenderentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsendertable::Rsvpsenderentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpsendertable::Rsvpsenderentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber = value;
    }
    if(value_path == "rsvpSenderAddr")
    {
        rsvpsenderaddr = value;
    }
    if(value_path == "rsvpSenderAddrLength")
    {
        rsvpsenderaddrlength = value;
    }
    if(value_path == "rsvpSenderAdspecBreak")
    {
        rsvpsenderadspecbreak = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadBreak")
    {
        rsvpsenderadspecctrlloadbreak = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadHopCount")
    {
        rsvpsenderadspecctrlloadhopcount = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMinLatency")
    {
        rsvpsenderadspecctrlloadminlatency = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMtu")
    {
        rsvpsenderadspecctrlloadmtu = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadPathBw")
    {
        rsvpsenderadspecctrlloadpathbw = value;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadSvc")
    {
        rsvpsenderadspecctrlloadsvc = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedBreak")
    {
        rsvpsenderadspecguaranteedbreak = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCsum")
    {
        rsvpsenderadspecguaranteedcsum = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCtot")
    {
        rsvpsenderadspecguaranteedctot = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDsum")
    {
        rsvpsenderadspecguaranteeddsum = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDtot")
    {
        rsvpsenderadspecguaranteeddtot = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedHopCount")
    {
        rsvpsenderadspecguaranteedhopcount = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMinLatency")
    {
        rsvpsenderadspecguaranteedminlatency = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMtu")
    {
        rsvpsenderadspecguaranteedmtu = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedPathBw")
    {
        rsvpsenderadspecguaranteedpathbw = value;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedSvc")
    {
        rsvpsenderadspecguaranteedsvc = value;
    }
    if(value_path == "rsvpSenderAdspecHopCount")
    {
        rsvpsenderadspechopcount = value;
    }
    if(value_path == "rsvpSenderAdspecMinLatency")
    {
        rsvpsenderadspecminlatency = value;
    }
    if(value_path == "rsvpSenderAdspecMtu")
    {
        rsvpsenderadspecmtu = value;
    }
    if(value_path == "rsvpSenderAdspecPathBw")
    {
        rsvpsenderadspecpathbw = value;
    }
    if(value_path == "rsvpSenderDestAddr")
    {
        rsvpsenderdestaddr = value;
    }
    if(value_path == "rsvpSenderDestAddrLength")
    {
        rsvpsenderdestaddrlength = value;
    }
    if(value_path == "rsvpSenderDestPort")
    {
        rsvpsenderdestport = value;
    }
    if(value_path == "rsvpSenderFlowId")
    {
        rsvpsenderflowid = value;
    }
    if(value_path == "rsvpSenderHopAddr")
    {
        rsvpsenderhopaddr = value;
    }
    if(value_path == "rsvpSenderHopLih")
    {
        rsvpsenderhoplih = value;
    }
    if(value_path == "rsvpSenderInterface")
    {
        rsvpsenderinterface = value;
    }
    if(value_path == "rsvpSenderInterval")
    {
        rsvpsenderinterval = value;
    }
    if(value_path == "rsvpSenderLastChange")
    {
        rsvpsenderlastchange = value;
    }
    if(value_path == "rsvpSenderPolicy")
    {
        rsvpsenderpolicy = value;
    }
    if(value_path == "rsvpSenderPort")
    {
        rsvpsenderport = value;
    }
    if(value_path == "rsvpSenderProtocol")
    {
        rsvpsenderprotocol = value;
    }
    if(value_path == "rsvpSenderRSVPHop")
    {
        rsvpsenderrsvphop = value;
    }
    if(value_path == "rsvpSenderStatus")
    {
        rsvpsenderstatus = value;
    }
    if(value_path == "rsvpSenderTSpecBurst")
    {
        rsvpsendertspecburst = value;
    }
    if(value_path == "rsvpSenderTSpecMaxTU")
    {
        rsvpsendertspecmaxtu = value;
    }
    if(value_path == "rsvpSenderTSpecMinTU")
    {
        rsvpsendertspecmintu = value;
    }
    if(value_path == "rsvpSenderTSpecPeakRate")
    {
        rsvpsendertspecpeakrate = value;
    }
    if(value_path == "rsvpSenderTSpecRate")
    {
        rsvpsendertspecrate = value;
    }
    if(value_path == "rsvpSenderTTL")
    {
        rsvpsenderttl = value;
    }
    if(value_path == "rsvpSenderType")
    {
        rsvpsendertype = value;
    }
}

RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfacetable()
{
    yang_name = "rsvpSenderOutInterfaceTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpsenderoutinterfacetable::~Rsvpsenderoutinterfacetable()
{
}

bool RsvpMib::Rsvpsenderoutinterfacetable::has_data() const
{
    for (std::size_t index=0; index<rsvpsenderoutinterfaceentry_.size(); index++)
    {
        if(rsvpsenderoutinterfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpsenderoutinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsenderoutinterfaceentry_.size(); index++)
    {
        if(rsvpsenderoutinterfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpsenderoutinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderOutInterfaceTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsenderoutinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsenderoutinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSenderOutInterfaceEntry")
    {
        for(auto const & c : rsvpsenderoutinterfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry>();
        c->parent = this;
        rsvpsenderoutinterfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsenderoutinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpsenderoutinterfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpsenderoutinterfacetable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::Rsvpsenderoutinterfaceentry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpsendernumber{YType::str, "rsvpSenderNumber"},
    ifindex{YType::str, "ifIndex"},
    rsvpsenderoutinterfacestatus{YType::enumeration, "rsvpSenderOutInterfaceStatus"}
{
    yang_name = "rsvpSenderOutInterfaceEntry"; yang_parent_name = "rsvpSenderOutInterfaceTable";
}

RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::~Rsvpsenderoutinterfaceentry()
{
}

bool RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::has_data() const
{
    return rsvpsessionnumber.is_set
	|| rsvpsendernumber.is_set
	|| ifindex.is_set
	|| rsvpsenderoutinterfacestatus.is_set;
}

bool RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpsessionnumber.operation)
	|| is_set(rsvpsendernumber.operation)
	|| is_set(ifindex.operation)
	|| is_set(rsvpsenderoutinterfacestatus.operation);
}

std::string RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderOutInterfaceEntry" <<"[rsvpSessionNumber='" <<rsvpsessionnumber <<"']" <<"[rsvpSenderNumber='" <<rsvpsendernumber <<"']" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSenderOutInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.operation)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsendernumber.is_set || is_set(rsvpsendernumber.operation)) leaf_name_data.push_back(rsvpsendernumber.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpsenderoutinterfacestatus.is_set || is_set(rsvpsenderoutinterfacestatus.operation)) leaf_name_data.push_back(rsvpsenderoutinterfacestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpsenderoutinterfacetable::Rsvpsenderoutinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "rsvpSenderOutInterfaceStatus")
    {
        rsvpsenderoutinterfacestatus = value;
    }
}

RsvpMib::Rsvpresvtable::Rsvpresvtable()
{
    yang_name = "rsvpResvTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpresvtable::~Rsvpresvtable()
{
}

bool RsvpMib::Rsvpresvtable::has_data() const
{
    for (std::size_t index=0; index<rsvpresventry_.size(); index++)
    {
        if(rsvpresventry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpresvtable::has_operation() const
{
    for (std::size_t index=0; index<rsvpresventry_.size(); index++)
    {
        if(rsvpresventry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpresvtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpresvtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpresvtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpResvEntry")
    {
        for(auto const & c : rsvpresventry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpresvtable::Rsvpresventry>();
        c->parent = this;
        rsvpresventry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpresvtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpresventry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpresvtable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpresvtable::Rsvpresventry::Rsvpresventry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpresvnumber{YType::int32, "rsvpResvNumber"},
    rsvpresvdestaddr{YType::str, "rsvpResvDestAddr"},
    rsvpresvdestaddrlength{YType::int32, "rsvpResvDestAddrLength"},
    rsvpresvdestport{YType::str, "rsvpResvDestPort"},
    rsvpresvexplicit{YType::boolean, "rsvpResvExplicit"},
    rsvpresvflowid{YType::int32, "rsvpResvFlowId"},
    rsvpresvhopaddr{YType::str, "rsvpResvHopAddr"},
    rsvpresvhoplih{YType::int32, "rsvpResvHopLih"},
    rsvpresvinterface{YType::int32, "rsvpResvInterface"},
    rsvpresvinterval{YType::int32, "rsvpResvInterval"},
    rsvpresvlastchange{YType::uint32, "rsvpResvLastChange"},
    rsvpresvpolicy{YType::str, "rsvpResvPolicy"},
    rsvpresvport{YType::str, "rsvpResvPort"},
    rsvpresvprotocol{YType::int32, "rsvpResvProtocol"},
    rsvpresvrspecrate{YType::int32, "rsvpResvRSpecRate"},
    rsvpresvrspecslack{YType::int32, "rsvpResvRSpecSlack"},
    rsvpresvrsvphop{YType::boolean, "rsvpResvRSVPHop"},
    rsvpresvscope{YType::str, "rsvpResvScope"},
    rsvpresvsenderaddr{YType::str, "rsvpResvSenderAddr"},
    rsvpresvsenderaddrlength{YType::int32, "rsvpResvSenderAddrLength"},
    rsvpresvservice{YType::enumeration, "rsvpResvService"},
    rsvpresvshared{YType::boolean, "rsvpResvShared"},
    rsvpresvstatus{YType::enumeration, "rsvpResvStatus"},
    rsvpresvtspecburst{YType::int32, "rsvpResvTSpecBurst"},
    rsvpresvtspecmaxtu{YType::int32, "rsvpResvTSpecMaxTU"},
    rsvpresvtspecmintu{YType::int32, "rsvpResvTSpecMinTU"},
    rsvpresvtspecpeakrate{YType::int32, "rsvpResvTSpecPeakRate"},
    rsvpresvtspecrate{YType::int32, "rsvpResvTSpecRate"},
    rsvpresvttl{YType::int32, "rsvpResvTTL"},
    rsvpresvtype{YType::int32, "rsvpResvType"}
{
    yang_name = "rsvpResvEntry"; yang_parent_name = "rsvpResvTable";
}

RsvpMib::Rsvpresvtable::Rsvpresventry::~Rsvpresventry()
{
}

bool RsvpMib::Rsvpresvtable::Rsvpresventry::has_data() const
{
    return rsvpsessionnumber.is_set
	|| rsvpresvnumber.is_set
	|| rsvpresvdestaddr.is_set
	|| rsvpresvdestaddrlength.is_set
	|| rsvpresvdestport.is_set
	|| rsvpresvexplicit.is_set
	|| rsvpresvflowid.is_set
	|| rsvpresvhopaddr.is_set
	|| rsvpresvhoplih.is_set
	|| rsvpresvinterface.is_set
	|| rsvpresvinterval.is_set
	|| rsvpresvlastchange.is_set
	|| rsvpresvpolicy.is_set
	|| rsvpresvport.is_set
	|| rsvpresvprotocol.is_set
	|| rsvpresvrspecrate.is_set
	|| rsvpresvrspecslack.is_set
	|| rsvpresvrsvphop.is_set
	|| rsvpresvscope.is_set
	|| rsvpresvsenderaddr.is_set
	|| rsvpresvsenderaddrlength.is_set
	|| rsvpresvservice.is_set
	|| rsvpresvshared.is_set
	|| rsvpresvstatus.is_set
	|| rsvpresvtspecburst.is_set
	|| rsvpresvtspecmaxtu.is_set
	|| rsvpresvtspecmintu.is_set
	|| rsvpresvtspecpeakrate.is_set
	|| rsvpresvtspecrate.is_set
	|| rsvpresvttl.is_set
	|| rsvpresvtype.is_set;
}

bool RsvpMib::Rsvpresvtable::Rsvpresventry::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpsessionnumber.operation)
	|| is_set(rsvpresvnumber.operation)
	|| is_set(rsvpresvdestaddr.operation)
	|| is_set(rsvpresvdestaddrlength.operation)
	|| is_set(rsvpresvdestport.operation)
	|| is_set(rsvpresvexplicit.operation)
	|| is_set(rsvpresvflowid.operation)
	|| is_set(rsvpresvhopaddr.operation)
	|| is_set(rsvpresvhoplih.operation)
	|| is_set(rsvpresvinterface.operation)
	|| is_set(rsvpresvinterval.operation)
	|| is_set(rsvpresvlastchange.operation)
	|| is_set(rsvpresvpolicy.operation)
	|| is_set(rsvpresvport.operation)
	|| is_set(rsvpresvprotocol.operation)
	|| is_set(rsvpresvrspecrate.operation)
	|| is_set(rsvpresvrspecslack.operation)
	|| is_set(rsvpresvrsvphop.operation)
	|| is_set(rsvpresvscope.operation)
	|| is_set(rsvpresvsenderaddr.operation)
	|| is_set(rsvpresvsenderaddrlength.operation)
	|| is_set(rsvpresvservice.operation)
	|| is_set(rsvpresvshared.operation)
	|| is_set(rsvpresvstatus.operation)
	|| is_set(rsvpresvtspecburst.operation)
	|| is_set(rsvpresvtspecmaxtu.operation)
	|| is_set(rsvpresvtspecmintu.operation)
	|| is_set(rsvpresvtspecpeakrate.operation)
	|| is_set(rsvpresvtspecrate.operation)
	|| is_set(rsvpresvttl.operation)
	|| is_set(rsvpresvtype.operation);
}

std::string RsvpMib::Rsvpresvtable::Rsvpresventry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvEntry" <<"[rsvpSessionNumber='" <<rsvpsessionnumber <<"']" <<"[rsvpResvNumber='" <<rsvpresvnumber <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpresvtable::Rsvpresventry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpResvTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.operation)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpresvnumber.is_set || is_set(rsvpresvnumber.operation)) leaf_name_data.push_back(rsvpresvnumber.get_name_leafdata());
    if (rsvpresvdestaddr.is_set || is_set(rsvpresvdestaddr.operation)) leaf_name_data.push_back(rsvpresvdestaddr.get_name_leafdata());
    if (rsvpresvdestaddrlength.is_set || is_set(rsvpresvdestaddrlength.operation)) leaf_name_data.push_back(rsvpresvdestaddrlength.get_name_leafdata());
    if (rsvpresvdestport.is_set || is_set(rsvpresvdestport.operation)) leaf_name_data.push_back(rsvpresvdestport.get_name_leafdata());
    if (rsvpresvexplicit.is_set || is_set(rsvpresvexplicit.operation)) leaf_name_data.push_back(rsvpresvexplicit.get_name_leafdata());
    if (rsvpresvflowid.is_set || is_set(rsvpresvflowid.operation)) leaf_name_data.push_back(rsvpresvflowid.get_name_leafdata());
    if (rsvpresvhopaddr.is_set || is_set(rsvpresvhopaddr.operation)) leaf_name_data.push_back(rsvpresvhopaddr.get_name_leafdata());
    if (rsvpresvhoplih.is_set || is_set(rsvpresvhoplih.operation)) leaf_name_data.push_back(rsvpresvhoplih.get_name_leafdata());
    if (rsvpresvinterface.is_set || is_set(rsvpresvinterface.operation)) leaf_name_data.push_back(rsvpresvinterface.get_name_leafdata());
    if (rsvpresvinterval.is_set || is_set(rsvpresvinterval.operation)) leaf_name_data.push_back(rsvpresvinterval.get_name_leafdata());
    if (rsvpresvlastchange.is_set || is_set(rsvpresvlastchange.operation)) leaf_name_data.push_back(rsvpresvlastchange.get_name_leafdata());
    if (rsvpresvpolicy.is_set || is_set(rsvpresvpolicy.operation)) leaf_name_data.push_back(rsvpresvpolicy.get_name_leafdata());
    if (rsvpresvport.is_set || is_set(rsvpresvport.operation)) leaf_name_data.push_back(rsvpresvport.get_name_leafdata());
    if (rsvpresvprotocol.is_set || is_set(rsvpresvprotocol.operation)) leaf_name_data.push_back(rsvpresvprotocol.get_name_leafdata());
    if (rsvpresvrspecrate.is_set || is_set(rsvpresvrspecrate.operation)) leaf_name_data.push_back(rsvpresvrspecrate.get_name_leafdata());
    if (rsvpresvrspecslack.is_set || is_set(rsvpresvrspecslack.operation)) leaf_name_data.push_back(rsvpresvrspecslack.get_name_leafdata());
    if (rsvpresvrsvphop.is_set || is_set(rsvpresvrsvphop.operation)) leaf_name_data.push_back(rsvpresvrsvphop.get_name_leafdata());
    if (rsvpresvscope.is_set || is_set(rsvpresvscope.operation)) leaf_name_data.push_back(rsvpresvscope.get_name_leafdata());
    if (rsvpresvsenderaddr.is_set || is_set(rsvpresvsenderaddr.operation)) leaf_name_data.push_back(rsvpresvsenderaddr.get_name_leafdata());
    if (rsvpresvsenderaddrlength.is_set || is_set(rsvpresvsenderaddrlength.operation)) leaf_name_data.push_back(rsvpresvsenderaddrlength.get_name_leafdata());
    if (rsvpresvservice.is_set || is_set(rsvpresvservice.operation)) leaf_name_data.push_back(rsvpresvservice.get_name_leafdata());
    if (rsvpresvshared.is_set || is_set(rsvpresvshared.operation)) leaf_name_data.push_back(rsvpresvshared.get_name_leafdata());
    if (rsvpresvstatus.is_set || is_set(rsvpresvstatus.operation)) leaf_name_data.push_back(rsvpresvstatus.get_name_leafdata());
    if (rsvpresvtspecburst.is_set || is_set(rsvpresvtspecburst.operation)) leaf_name_data.push_back(rsvpresvtspecburst.get_name_leafdata());
    if (rsvpresvtspecmaxtu.is_set || is_set(rsvpresvtspecmaxtu.operation)) leaf_name_data.push_back(rsvpresvtspecmaxtu.get_name_leafdata());
    if (rsvpresvtspecmintu.is_set || is_set(rsvpresvtspecmintu.operation)) leaf_name_data.push_back(rsvpresvtspecmintu.get_name_leafdata());
    if (rsvpresvtspecpeakrate.is_set || is_set(rsvpresvtspecpeakrate.operation)) leaf_name_data.push_back(rsvpresvtspecpeakrate.get_name_leafdata());
    if (rsvpresvtspecrate.is_set || is_set(rsvpresvtspecrate.operation)) leaf_name_data.push_back(rsvpresvtspecrate.get_name_leafdata());
    if (rsvpresvttl.is_set || is_set(rsvpresvttl.operation)) leaf_name_data.push_back(rsvpresvttl.get_name_leafdata());
    if (rsvpresvtype.is_set || is_set(rsvpresvtype.operation)) leaf_name_data.push_back(rsvpresvtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpresvtable::Rsvpresventry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpresvtable::Rsvpresventry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpresvtable::Rsvpresventry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
    }
    if(value_path == "rsvpResvNumber")
    {
        rsvpresvnumber = value;
    }
    if(value_path == "rsvpResvDestAddr")
    {
        rsvpresvdestaddr = value;
    }
    if(value_path == "rsvpResvDestAddrLength")
    {
        rsvpresvdestaddrlength = value;
    }
    if(value_path == "rsvpResvDestPort")
    {
        rsvpresvdestport = value;
    }
    if(value_path == "rsvpResvExplicit")
    {
        rsvpresvexplicit = value;
    }
    if(value_path == "rsvpResvFlowId")
    {
        rsvpresvflowid = value;
    }
    if(value_path == "rsvpResvHopAddr")
    {
        rsvpresvhopaddr = value;
    }
    if(value_path == "rsvpResvHopLih")
    {
        rsvpresvhoplih = value;
    }
    if(value_path == "rsvpResvInterface")
    {
        rsvpresvinterface = value;
    }
    if(value_path == "rsvpResvInterval")
    {
        rsvpresvinterval = value;
    }
    if(value_path == "rsvpResvLastChange")
    {
        rsvpresvlastchange = value;
    }
    if(value_path == "rsvpResvPolicy")
    {
        rsvpresvpolicy = value;
    }
    if(value_path == "rsvpResvPort")
    {
        rsvpresvport = value;
    }
    if(value_path == "rsvpResvProtocol")
    {
        rsvpresvprotocol = value;
    }
    if(value_path == "rsvpResvRSpecRate")
    {
        rsvpresvrspecrate = value;
    }
    if(value_path == "rsvpResvRSpecSlack")
    {
        rsvpresvrspecslack = value;
    }
    if(value_path == "rsvpResvRSVPHop")
    {
        rsvpresvrsvphop = value;
    }
    if(value_path == "rsvpResvScope")
    {
        rsvpresvscope = value;
    }
    if(value_path == "rsvpResvSenderAddr")
    {
        rsvpresvsenderaddr = value;
    }
    if(value_path == "rsvpResvSenderAddrLength")
    {
        rsvpresvsenderaddrlength = value;
    }
    if(value_path == "rsvpResvService")
    {
        rsvpresvservice = value;
    }
    if(value_path == "rsvpResvShared")
    {
        rsvpresvshared = value;
    }
    if(value_path == "rsvpResvStatus")
    {
        rsvpresvstatus = value;
    }
    if(value_path == "rsvpResvTSpecBurst")
    {
        rsvpresvtspecburst = value;
    }
    if(value_path == "rsvpResvTSpecMaxTU")
    {
        rsvpresvtspecmaxtu = value;
    }
    if(value_path == "rsvpResvTSpecMinTU")
    {
        rsvpresvtspecmintu = value;
    }
    if(value_path == "rsvpResvTSpecPeakRate")
    {
        rsvpresvtspecpeakrate = value;
    }
    if(value_path == "rsvpResvTSpecRate")
    {
        rsvpresvtspecrate = value;
    }
    if(value_path == "rsvpResvTTL")
    {
        rsvpresvttl = value;
    }
    if(value_path == "rsvpResvType")
    {
        rsvpresvtype = value;
    }
}

RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdtable()
{
    yang_name = "rsvpResvFwdTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpresvfwdtable::~Rsvpresvfwdtable()
{
}

bool RsvpMib::Rsvpresvfwdtable::has_data() const
{
    for (std::size_t index=0; index<rsvpresvfwdentry_.size(); index++)
    {
        if(rsvpresvfwdentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpresvfwdtable::has_operation() const
{
    for (std::size_t index=0; index<rsvpresvfwdentry_.size(); index++)
    {
        if(rsvpresvfwdentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpresvfwdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvFwdTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpresvfwdtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpresvfwdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpResvFwdEntry")
    {
        for(auto const & c : rsvpresvfwdentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry>();
        c->parent = this;
        rsvpresvfwdentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpresvfwdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpresvfwdentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpresvfwdtable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::Rsvpresvfwdentry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpresvfwdnumber{YType::int32, "rsvpResvFwdNumber"},
    rsvpresvfwddestaddr{YType::str, "rsvpResvFwdDestAddr"},
    rsvpresvfwddestaddrlength{YType::int32, "rsvpResvFwdDestAddrLength"},
    rsvpresvfwddestport{YType::str, "rsvpResvFwdDestPort"},
    rsvpresvfwdexplicit{YType::boolean, "rsvpResvFwdExplicit"},
    rsvpresvfwdflowid{YType::int32, "rsvpResvFwdFlowId"},
    rsvpresvfwdhopaddr{YType::str, "rsvpResvFwdHopAddr"},
    rsvpresvfwdhoplih{YType::int32, "rsvpResvFwdHopLih"},
    rsvpresvfwdinterface{YType::int32, "rsvpResvFwdInterface"},
    rsvpresvfwdinterval{YType::int32, "rsvpResvFwdInterval"},
    rsvpresvfwdlastchange{YType::uint32, "rsvpResvFwdLastChange"},
    rsvpresvfwdpolicy{YType::str, "rsvpResvFwdPolicy"},
    rsvpresvfwdport{YType::str, "rsvpResvFwdPort"},
    rsvpresvfwdprotocol{YType::int32, "rsvpResvFwdProtocol"},
    rsvpresvfwdrspecrate{YType::int32, "rsvpResvFwdRSpecRate"},
    rsvpresvfwdrspecslack{YType::int32, "rsvpResvFwdRSpecSlack"},
    rsvpresvfwdrsvphop{YType::boolean, "rsvpResvFwdRSVPHop"},
    rsvpresvfwdscope{YType::str, "rsvpResvFwdScope"},
    rsvpresvfwdsenderaddr{YType::str, "rsvpResvFwdSenderAddr"},
    rsvpresvfwdsenderaddrlength{YType::int32, "rsvpResvFwdSenderAddrLength"},
    rsvpresvfwdservice{YType::enumeration, "rsvpResvFwdService"},
    rsvpresvfwdshared{YType::boolean, "rsvpResvFwdShared"},
    rsvpresvfwdstatus{YType::enumeration, "rsvpResvFwdStatus"},
    rsvpresvfwdtspecburst{YType::int32, "rsvpResvFwdTSpecBurst"},
    rsvpresvfwdtspecmaxtu{YType::int32, "rsvpResvFwdTSpecMaxTU"},
    rsvpresvfwdtspecmintu{YType::int32, "rsvpResvFwdTSpecMinTU"},
    rsvpresvfwdtspecpeakrate{YType::int32, "rsvpResvFwdTSpecPeakRate"},
    rsvpresvfwdtspecrate{YType::int32, "rsvpResvFwdTSpecRate"},
    rsvpresvfwdttl{YType::int32, "rsvpResvFwdTTL"},
    rsvpresvfwdtype{YType::int32, "rsvpResvFwdType"}
{
    yang_name = "rsvpResvFwdEntry"; yang_parent_name = "rsvpResvFwdTable";
}

RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::~Rsvpresvfwdentry()
{
}

bool RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::has_data() const
{
    return rsvpsessionnumber.is_set
	|| rsvpresvfwdnumber.is_set
	|| rsvpresvfwddestaddr.is_set
	|| rsvpresvfwddestaddrlength.is_set
	|| rsvpresvfwddestport.is_set
	|| rsvpresvfwdexplicit.is_set
	|| rsvpresvfwdflowid.is_set
	|| rsvpresvfwdhopaddr.is_set
	|| rsvpresvfwdhoplih.is_set
	|| rsvpresvfwdinterface.is_set
	|| rsvpresvfwdinterval.is_set
	|| rsvpresvfwdlastchange.is_set
	|| rsvpresvfwdpolicy.is_set
	|| rsvpresvfwdport.is_set
	|| rsvpresvfwdprotocol.is_set
	|| rsvpresvfwdrspecrate.is_set
	|| rsvpresvfwdrspecslack.is_set
	|| rsvpresvfwdrsvphop.is_set
	|| rsvpresvfwdscope.is_set
	|| rsvpresvfwdsenderaddr.is_set
	|| rsvpresvfwdsenderaddrlength.is_set
	|| rsvpresvfwdservice.is_set
	|| rsvpresvfwdshared.is_set
	|| rsvpresvfwdstatus.is_set
	|| rsvpresvfwdtspecburst.is_set
	|| rsvpresvfwdtspecmaxtu.is_set
	|| rsvpresvfwdtspecmintu.is_set
	|| rsvpresvfwdtspecpeakrate.is_set
	|| rsvpresvfwdtspecrate.is_set
	|| rsvpresvfwdttl.is_set
	|| rsvpresvfwdtype.is_set;
}

bool RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::has_operation() const
{
    return is_set(operation)
	|| is_set(rsvpsessionnumber.operation)
	|| is_set(rsvpresvfwdnumber.operation)
	|| is_set(rsvpresvfwddestaddr.operation)
	|| is_set(rsvpresvfwddestaddrlength.operation)
	|| is_set(rsvpresvfwddestport.operation)
	|| is_set(rsvpresvfwdexplicit.operation)
	|| is_set(rsvpresvfwdflowid.operation)
	|| is_set(rsvpresvfwdhopaddr.operation)
	|| is_set(rsvpresvfwdhoplih.operation)
	|| is_set(rsvpresvfwdinterface.operation)
	|| is_set(rsvpresvfwdinterval.operation)
	|| is_set(rsvpresvfwdlastchange.operation)
	|| is_set(rsvpresvfwdpolicy.operation)
	|| is_set(rsvpresvfwdport.operation)
	|| is_set(rsvpresvfwdprotocol.operation)
	|| is_set(rsvpresvfwdrspecrate.operation)
	|| is_set(rsvpresvfwdrspecslack.operation)
	|| is_set(rsvpresvfwdrsvphop.operation)
	|| is_set(rsvpresvfwdscope.operation)
	|| is_set(rsvpresvfwdsenderaddr.operation)
	|| is_set(rsvpresvfwdsenderaddrlength.operation)
	|| is_set(rsvpresvfwdservice.operation)
	|| is_set(rsvpresvfwdshared.operation)
	|| is_set(rsvpresvfwdstatus.operation)
	|| is_set(rsvpresvfwdtspecburst.operation)
	|| is_set(rsvpresvfwdtspecmaxtu.operation)
	|| is_set(rsvpresvfwdtspecmintu.operation)
	|| is_set(rsvpresvfwdtspecpeakrate.operation)
	|| is_set(rsvpresvfwdtspecrate.operation)
	|| is_set(rsvpresvfwdttl.operation)
	|| is_set(rsvpresvfwdtype.operation);
}

std::string RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvFwdEntry" <<"[rsvpSessionNumber='" <<rsvpsessionnumber <<"']" <<"[rsvpResvFwdNumber='" <<rsvpresvfwdnumber <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpResvFwdTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.operation)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpresvfwdnumber.is_set || is_set(rsvpresvfwdnumber.operation)) leaf_name_data.push_back(rsvpresvfwdnumber.get_name_leafdata());
    if (rsvpresvfwddestaddr.is_set || is_set(rsvpresvfwddestaddr.operation)) leaf_name_data.push_back(rsvpresvfwddestaddr.get_name_leafdata());
    if (rsvpresvfwddestaddrlength.is_set || is_set(rsvpresvfwddestaddrlength.operation)) leaf_name_data.push_back(rsvpresvfwddestaddrlength.get_name_leafdata());
    if (rsvpresvfwddestport.is_set || is_set(rsvpresvfwddestport.operation)) leaf_name_data.push_back(rsvpresvfwddestport.get_name_leafdata());
    if (rsvpresvfwdexplicit.is_set || is_set(rsvpresvfwdexplicit.operation)) leaf_name_data.push_back(rsvpresvfwdexplicit.get_name_leafdata());
    if (rsvpresvfwdflowid.is_set || is_set(rsvpresvfwdflowid.operation)) leaf_name_data.push_back(rsvpresvfwdflowid.get_name_leafdata());
    if (rsvpresvfwdhopaddr.is_set || is_set(rsvpresvfwdhopaddr.operation)) leaf_name_data.push_back(rsvpresvfwdhopaddr.get_name_leafdata());
    if (rsvpresvfwdhoplih.is_set || is_set(rsvpresvfwdhoplih.operation)) leaf_name_data.push_back(rsvpresvfwdhoplih.get_name_leafdata());
    if (rsvpresvfwdinterface.is_set || is_set(rsvpresvfwdinterface.operation)) leaf_name_data.push_back(rsvpresvfwdinterface.get_name_leafdata());
    if (rsvpresvfwdinterval.is_set || is_set(rsvpresvfwdinterval.operation)) leaf_name_data.push_back(rsvpresvfwdinterval.get_name_leafdata());
    if (rsvpresvfwdlastchange.is_set || is_set(rsvpresvfwdlastchange.operation)) leaf_name_data.push_back(rsvpresvfwdlastchange.get_name_leafdata());
    if (rsvpresvfwdpolicy.is_set || is_set(rsvpresvfwdpolicy.operation)) leaf_name_data.push_back(rsvpresvfwdpolicy.get_name_leafdata());
    if (rsvpresvfwdport.is_set || is_set(rsvpresvfwdport.operation)) leaf_name_data.push_back(rsvpresvfwdport.get_name_leafdata());
    if (rsvpresvfwdprotocol.is_set || is_set(rsvpresvfwdprotocol.operation)) leaf_name_data.push_back(rsvpresvfwdprotocol.get_name_leafdata());
    if (rsvpresvfwdrspecrate.is_set || is_set(rsvpresvfwdrspecrate.operation)) leaf_name_data.push_back(rsvpresvfwdrspecrate.get_name_leafdata());
    if (rsvpresvfwdrspecslack.is_set || is_set(rsvpresvfwdrspecslack.operation)) leaf_name_data.push_back(rsvpresvfwdrspecslack.get_name_leafdata());
    if (rsvpresvfwdrsvphop.is_set || is_set(rsvpresvfwdrsvphop.operation)) leaf_name_data.push_back(rsvpresvfwdrsvphop.get_name_leafdata());
    if (rsvpresvfwdscope.is_set || is_set(rsvpresvfwdscope.operation)) leaf_name_data.push_back(rsvpresvfwdscope.get_name_leafdata());
    if (rsvpresvfwdsenderaddr.is_set || is_set(rsvpresvfwdsenderaddr.operation)) leaf_name_data.push_back(rsvpresvfwdsenderaddr.get_name_leafdata());
    if (rsvpresvfwdsenderaddrlength.is_set || is_set(rsvpresvfwdsenderaddrlength.operation)) leaf_name_data.push_back(rsvpresvfwdsenderaddrlength.get_name_leafdata());
    if (rsvpresvfwdservice.is_set || is_set(rsvpresvfwdservice.operation)) leaf_name_data.push_back(rsvpresvfwdservice.get_name_leafdata());
    if (rsvpresvfwdshared.is_set || is_set(rsvpresvfwdshared.operation)) leaf_name_data.push_back(rsvpresvfwdshared.get_name_leafdata());
    if (rsvpresvfwdstatus.is_set || is_set(rsvpresvfwdstatus.operation)) leaf_name_data.push_back(rsvpresvfwdstatus.get_name_leafdata());
    if (rsvpresvfwdtspecburst.is_set || is_set(rsvpresvfwdtspecburst.operation)) leaf_name_data.push_back(rsvpresvfwdtspecburst.get_name_leafdata());
    if (rsvpresvfwdtspecmaxtu.is_set || is_set(rsvpresvfwdtspecmaxtu.operation)) leaf_name_data.push_back(rsvpresvfwdtspecmaxtu.get_name_leafdata());
    if (rsvpresvfwdtspecmintu.is_set || is_set(rsvpresvfwdtspecmintu.operation)) leaf_name_data.push_back(rsvpresvfwdtspecmintu.get_name_leafdata());
    if (rsvpresvfwdtspecpeakrate.is_set || is_set(rsvpresvfwdtspecpeakrate.operation)) leaf_name_data.push_back(rsvpresvfwdtspecpeakrate.get_name_leafdata());
    if (rsvpresvfwdtspecrate.is_set || is_set(rsvpresvfwdtspecrate.operation)) leaf_name_data.push_back(rsvpresvfwdtspecrate.get_name_leafdata());
    if (rsvpresvfwdttl.is_set || is_set(rsvpresvfwdttl.operation)) leaf_name_data.push_back(rsvpresvfwdttl.get_name_leafdata());
    if (rsvpresvfwdtype.is_set || is_set(rsvpresvfwdtype.operation)) leaf_name_data.push_back(rsvpresvfwdtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpresvfwdtable::Rsvpresvfwdentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
    }
    if(value_path == "rsvpResvFwdNumber")
    {
        rsvpresvfwdnumber = value;
    }
    if(value_path == "rsvpResvFwdDestAddr")
    {
        rsvpresvfwddestaddr = value;
    }
    if(value_path == "rsvpResvFwdDestAddrLength")
    {
        rsvpresvfwddestaddrlength = value;
    }
    if(value_path == "rsvpResvFwdDestPort")
    {
        rsvpresvfwddestport = value;
    }
    if(value_path == "rsvpResvFwdExplicit")
    {
        rsvpresvfwdexplicit = value;
    }
    if(value_path == "rsvpResvFwdFlowId")
    {
        rsvpresvfwdflowid = value;
    }
    if(value_path == "rsvpResvFwdHopAddr")
    {
        rsvpresvfwdhopaddr = value;
    }
    if(value_path == "rsvpResvFwdHopLih")
    {
        rsvpresvfwdhoplih = value;
    }
    if(value_path == "rsvpResvFwdInterface")
    {
        rsvpresvfwdinterface = value;
    }
    if(value_path == "rsvpResvFwdInterval")
    {
        rsvpresvfwdinterval = value;
    }
    if(value_path == "rsvpResvFwdLastChange")
    {
        rsvpresvfwdlastchange = value;
    }
    if(value_path == "rsvpResvFwdPolicy")
    {
        rsvpresvfwdpolicy = value;
    }
    if(value_path == "rsvpResvFwdPort")
    {
        rsvpresvfwdport = value;
    }
    if(value_path == "rsvpResvFwdProtocol")
    {
        rsvpresvfwdprotocol = value;
    }
    if(value_path == "rsvpResvFwdRSpecRate")
    {
        rsvpresvfwdrspecrate = value;
    }
    if(value_path == "rsvpResvFwdRSpecSlack")
    {
        rsvpresvfwdrspecslack = value;
    }
    if(value_path == "rsvpResvFwdRSVPHop")
    {
        rsvpresvfwdrsvphop = value;
    }
    if(value_path == "rsvpResvFwdScope")
    {
        rsvpresvfwdscope = value;
    }
    if(value_path == "rsvpResvFwdSenderAddr")
    {
        rsvpresvfwdsenderaddr = value;
    }
    if(value_path == "rsvpResvFwdSenderAddrLength")
    {
        rsvpresvfwdsenderaddrlength = value;
    }
    if(value_path == "rsvpResvFwdService")
    {
        rsvpresvfwdservice = value;
    }
    if(value_path == "rsvpResvFwdShared")
    {
        rsvpresvfwdshared = value;
    }
    if(value_path == "rsvpResvFwdStatus")
    {
        rsvpresvfwdstatus = value;
    }
    if(value_path == "rsvpResvFwdTSpecBurst")
    {
        rsvpresvfwdtspecburst = value;
    }
    if(value_path == "rsvpResvFwdTSpecMaxTU")
    {
        rsvpresvfwdtspecmaxtu = value;
    }
    if(value_path == "rsvpResvFwdTSpecMinTU")
    {
        rsvpresvfwdtspecmintu = value;
    }
    if(value_path == "rsvpResvFwdTSpecPeakRate")
    {
        rsvpresvfwdtspecpeakrate = value;
    }
    if(value_path == "rsvpResvFwdTSpecRate")
    {
        rsvpresvfwdtspecrate = value;
    }
    if(value_path == "rsvpResvFwdTTL")
    {
        rsvpresvfwdttl = value;
    }
    if(value_path == "rsvpResvFwdType")
    {
        rsvpresvfwdtype = value;
    }
}

RsvpMib::Rsvpiftable::Rsvpiftable()
{
    yang_name = "rsvpIfTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpiftable::~Rsvpiftable()
{
}

bool RsvpMib::Rsvpiftable::has_data() const
{
    for (std::size_t index=0; index<rsvpifentry_.size(); index++)
    {
        if(rsvpifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpiftable::has_operation() const
{
    for (std::size_t index=0; index<rsvpifentry_.size(); index++)
    {
        if(rsvpifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpIfTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpIfEntry")
    {
        for(auto const & c : rsvpifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpiftable::Rsvpifentry>();
        c->parent = this;
        rsvpifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpiftable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpiftable::Rsvpifentry::Rsvpifentry()
    :
    ifindex{YType::str, "ifIndex"},
    rsvpifenabled{YType::boolean, "rsvpIfEnabled"},
    rsvpifipnbrs{YType::uint32, "rsvpIfIpNbrs"},
    rsvpifnbrs{YType::uint32, "rsvpIfNbrs"},
    rsvpifrefreshblockademultiple{YType::int32, "rsvpIfRefreshBlockadeMultiple"},
    rsvpifrefreshinterval{YType::int32, "rsvpIfRefreshInterval"},
    rsvpifrefreshmultiple{YType::int32, "rsvpIfRefreshMultiple"},
    rsvpifroutedelay{YType::int32, "rsvpIfRouteDelay"},
    rsvpifstatus{YType::enumeration, "rsvpIfStatus"},
    rsvpifttl{YType::int32, "rsvpIfTTL"},
    rsvpifudpnbrs{YType::uint32, "rsvpIfUdpNbrs"},
    rsvpifudprequired{YType::boolean, "rsvpIfUdpRequired"}
{
    yang_name = "rsvpIfEntry"; yang_parent_name = "rsvpIfTable";
}

RsvpMib::Rsvpiftable::Rsvpifentry::~Rsvpifentry()
{
}

bool RsvpMib::Rsvpiftable::Rsvpifentry::has_data() const
{
    return ifindex.is_set
	|| rsvpifenabled.is_set
	|| rsvpifipnbrs.is_set
	|| rsvpifnbrs.is_set
	|| rsvpifrefreshblockademultiple.is_set
	|| rsvpifrefreshinterval.is_set
	|| rsvpifrefreshmultiple.is_set
	|| rsvpifroutedelay.is_set
	|| rsvpifstatus.is_set
	|| rsvpifttl.is_set
	|| rsvpifudpnbrs.is_set
	|| rsvpifudprequired.is_set;
}

bool RsvpMib::Rsvpiftable::Rsvpifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(rsvpifenabled.operation)
	|| is_set(rsvpifipnbrs.operation)
	|| is_set(rsvpifnbrs.operation)
	|| is_set(rsvpifrefreshblockademultiple.operation)
	|| is_set(rsvpifrefreshinterval.operation)
	|| is_set(rsvpifrefreshmultiple.operation)
	|| is_set(rsvpifroutedelay.operation)
	|| is_set(rsvpifstatus.operation)
	|| is_set(rsvpifttl.operation)
	|| is_set(rsvpifudpnbrs.operation)
	|| is_set(rsvpifudprequired.operation);
}

std::string RsvpMib::Rsvpiftable::Rsvpifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpIfEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpiftable::Rsvpifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpifenabled.is_set || is_set(rsvpifenabled.operation)) leaf_name_data.push_back(rsvpifenabled.get_name_leafdata());
    if (rsvpifipnbrs.is_set || is_set(rsvpifipnbrs.operation)) leaf_name_data.push_back(rsvpifipnbrs.get_name_leafdata());
    if (rsvpifnbrs.is_set || is_set(rsvpifnbrs.operation)) leaf_name_data.push_back(rsvpifnbrs.get_name_leafdata());
    if (rsvpifrefreshblockademultiple.is_set || is_set(rsvpifrefreshblockademultiple.operation)) leaf_name_data.push_back(rsvpifrefreshblockademultiple.get_name_leafdata());
    if (rsvpifrefreshinterval.is_set || is_set(rsvpifrefreshinterval.operation)) leaf_name_data.push_back(rsvpifrefreshinterval.get_name_leafdata());
    if (rsvpifrefreshmultiple.is_set || is_set(rsvpifrefreshmultiple.operation)) leaf_name_data.push_back(rsvpifrefreshmultiple.get_name_leafdata());
    if (rsvpifroutedelay.is_set || is_set(rsvpifroutedelay.operation)) leaf_name_data.push_back(rsvpifroutedelay.get_name_leafdata());
    if (rsvpifstatus.is_set || is_set(rsvpifstatus.operation)) leaf_name_data.push_back(rsvpifstatus.get_name_leafdata());
    if (rsvpifttl.is_set || is_set(rsvpifttl.operation)) leaf_name_data.push_back(rsvpifttl.get_name_leafdata());
    if (rsvpifudpnbrs.is_set || is_set(rsvpifudpnbrs.operation)) leaf_name_data.push_back(rsvpifudpnbrs.get_name_leafdata());
    if (rsvpifudprequired.is_set || is_set(rsvpifudprequired.operation)) leaf_name_data.push_back(rsvpifudprequired.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpiftable::Rsvpifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpiftable::Rsvpifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpiftable::Rsvpifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "rsvpIfEnabled")
    {
        rsvpifenabled = value;
    }
    if(value_path == "rsvpIfIpNbrs")
    {
        rsvpifipnbrs = value;
    }
    if(value_path == "rsvpIfNbrs")
    {
        rsvpifnbrs = value;
    }
    if(value_path == "rsvpIfRefreshBlockadeMultiple")
    {
        rsvpifrefreshblockademultiple = value;
    }
    if(value_path == "rsvpIfRefreshInterval")
    {
        rsvpifrefreshinterval = value;
    }
    if(value_path == "rsvpIfRefreshMultiple")
    {
        rsvpifrefreshmultiple = value;
    }
    if(value_path == "rsvpIfRouteDelay")
    {
        rsvpifroutedelay = value;
    }
    if(value_path == "rsvpIfStatus")
    {
        rsvpifstatus = value;
    }
    if(value_path == "rsvpIfTTL")
    {
        rsvpifttl = value;
    }
    if(value_path == "rsvpIfUdpNbrs")
    {
        rsvpifudpnbrs = value;
    }
    if(value_path == "rsvpIfUdpRequired")
    {
        rsvpifudprequired = value;
    }
}

RsvpMib::Rsvpnbrtable::Rsvpnbrtable()
{
    yang_name = "rsvpNbrTable"; yang_parent_name = "RSVP-MIB";
}

RsvpMib::Rsvpnbrtable::~Rsvpnbrtable()
{
}

bool RsvpMib::Rsvpnbrtable::has_data() const
{
    for (std::size_t index=0; index<rsvpnbrentry_.size(); index++)
    {
        if(rsvpnbrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpMib::Rsvpnbrtable::has_operation() const
{
    for (std::size_t index=0; index<rsvpnbrentry_.size(); index++)
    {
        if(rsvpnbrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpMib::Rsvpnbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpNbrTable";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpnbrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpnbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpNbrEntry")
    {
        for(auto const & c : rsvpnbrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpMib::Rsvpnbrtable::Rsvpnbrentry>();
        c->parent = this;
        rsvpnbrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpnbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvpnbrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpMib::Rsvpnbrtable::set_value(const std::string & value_path, std::string value)
{
}

RsvpMib::Rsvpnbrtable::Rsvpnbrentry::Rsvpnbrentry()
    :
    ifindex{YType::str, "ifIndex"},
    rsvpnbraddress{YType::str, "rsvpNbrAddress"},
    rsvpnbrprotocol{YType::enumeration, "rsvpNbrProtocol"},
    rsvpnbrstatus{YType::enumeration, "rsvpNbrStatus"}
{
    yang_name = "rsvpNbrEntry"; yang_parent_name = "rsvpNbrTable";
}

RsvpMib::Rsvpnbrtable::Rsvpnbrentry::~Rsvpnbrentry()
{
}

bool RsvpMib::Rsvpnbrtable::Rsvpnbrentry::has_data() const
{
    return ifindex.is_set
	|| rsvpnbraddress.is_set
	|| rsvpnbrprotocol.is_set
	|| rsvpnbrstatus.is_set;
}

bool RsvpMib::Rsvpnbrtable::Rsvpnbrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(rsvpnbraddress.operation)
	|| is_set(rsvpnbrprotocol.operation)
	|| is_set(rsvpnbrstatus.operation);
}

std::string RsvpMib::Rsvpnbrtable::Rsvpnbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpNbrEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[rsvpNbrAddress='" <<rsvpnbraddress <<"']";

    return path_buffer.str();

}

const EntityPath RsvpMib::Rsvpnbrtable::Rsvpnbrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "RSVP-MIB:RSVP-MIB/rsvpNbrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpnbraddress.is_set || is_set(rsvpnbraddress.operation)) leaf_name_data.push_back(rsvpnbraddress.get_name_leafdata());
    if (rsvpnbrprotocol.is_set || is_set(rsvpnbrprotocol.operation)) leaf_name_data.push_back(rsvpnbrprotocol.get_name_leafdata());
    if (rsvpnbrstatus.is_set || is_set(rsvpnbrstatus.operation)) leaf_name_data.push_back(rsvpnbrstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpMib::Rsvpnbrtable::Rsvpnbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpMib::Rsvpnbrtable::Rsvpnbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpMib::Rsvpnbrtable::Rsvpnbrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "rsvpNbrAddress")
    {
        rsvpnbraddress = value;
    }
    if(value_path == "rsvpNbrProtocol")
    {
        rsvpnbrprotocol = value;
    }
    if(value_path == "rsvpNbrStatus")
    {
        rsvpnbrstatus = value;
    }
}

const Enum::YLeaf RsvpencapsulationEnum::ip {1, "ip"};
const Enum::YLeaf RsvpencapsulationEnum::udp {2, "udp"};
const Enum::YLeaf RsvpencapsulationEnum::both {3, "both"};


}
}

