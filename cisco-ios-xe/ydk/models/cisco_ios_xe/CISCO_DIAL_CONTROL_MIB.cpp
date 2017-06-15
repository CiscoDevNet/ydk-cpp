
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DIAL_CONTROL_MIB.hpp"

namespace ydk {
namespace CISCO_DIAL_CONTROL_MIB {

CiscoDialControlMib::CiscoDialControlMib()
    :
    ccallhistoryiectable_(std::make_shared<CiscoDialControlMib::Ccallhistoryiectable>())
	,ccallhistorytable_(std::make_shared<CiscoDialControlMib::Ccallhistorytable>())
	,cpeerglobalconfiguration_(std::make_shared<CiscoDialControlMib::Cpeerglobalconfiguration>())
{
    ccallhistoryiectable_->parent = this;

    ccallhistorytable_->parent = this;

    cpeerglobalconfiguration_->parent = this;

    yang_name = "CISCO-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB";
}

CiscoDialControlMib::~CiscoDialControlMib()
{
}

bool CiscoDialControlMib::has_data() const
{
    return (ccallhistoryiectable_ !=  nullptr && ccallhistoryiectable_->has_data())
	|| (ccallhistorytable_ !=  nullptr && ccallhistorytable_->has_data())
	|| (cpeerglobalconfiguration_ !=  nullptr && cpeerglobalconfiguration_->has_data());
}

bool CiscoDialControlMib::has_operation() const
{
    return is_set(operation)
	|| (ccallhistoryiectable_ !=  nullptr && ccallhistoryiectable_->has_operation())
	|| (ccallhistorytable_ !=  nullptr && ccallhistorytable_->has_operation())
	|| (cpeerglobalconfiguration_ !=  nullptr && cpeerglobalconfiguration_->has_operation());
}

std::string CiscoDialControlMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoDialControlMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cCallHistoryIecTable")
    {
        if(ccallhistoryiectable_ == nullptr)
        {
            ccallhistoryiectable_ = std::make_shared<CiscoDialControlMib::Ccallhistoryiectable>();
        }
        return ccallhistoryiectable_;
    }

    if(child_yang_name == "cCallHistoryTable")
    {
        if(ccallhistorytable_ == nullptr)
        {
            ccallhistorytable_ = std::make_shared<CiscoDialControlMib::Ccallhistorytable>();
        }
        return ccallhistorytable_;
    }

    if(child_yang_name == "cPeerGlobalConfiguration")
    {
        if(cpeerglobalconfiguration_ == nullptr)
        {
            cpeerglobalconfiguration_ = std::make_shared<CiscoDialControlMib::Cpeerglobalconfiguration>();
        }
        return cpeerglobalconfiguration_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccallhistoryiectable_ != nullptr)
    {
        children["cCallHistoryIecTable"] = ccallhistoryiectable_;
    }

    if(ccallhistorytable_ != nullptr)
    {
        children["cCallHistoryTable"] = ccallhistorytable_;
    }

    if(cpeerglobalconfiguration_ != nullptr)
    {
        children["cPeerGlobalConfiguration"] = cpeerglobalconfiguration_;
    }

    return children;
}

void CiscoDialControlMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoDialControlMib::clone_ptr() const
{
    return std::make_shared<CiscoDialControlMib>();
}

std::string CiscoDialControlMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoDialControlMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoDialControlMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoDialControlMib::Cpeerglobalconfiguration::Cpeerglobalconfiguration()
    :
    cpeersearchtype{YType::enumeration, "cPeerSearchType"}
{
    yang_name = "cPeerGlobalConfiguration"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB";
}

CiscoDialControlMib::Cpeerglobalconfiguration::~Cpeerglobalconfiguration()
{
}

bool CiscoDialControlMib::Cpeerglobalconfiguration::has_data() const
{
    return cpeersearchtype.is_set;
}

bool CiscoDialControlMib::Cpeerglobalconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(cpeersearchtype.operation);
}

std::string CiscoDialControlMib::Cpeerglobalconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPeerGlobalConfiguration";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::Cpeerglobalconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpeersearchtype.is_set || is_set(cpeersearchtype.operation)) leaf_name_data.push_back(cpeersearchtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDialControlMib::Cpeerglobalconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Cpeerglobalconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDialControlMib::Cpeerglobalconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cPeerSearchType")
    {
        cpeersearchtype = value;
    }
}

CiscoDialControlMib::Ccallhistorytable::Ccallhistorytable()
{
    yang_name = "cCallHistoryTable"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB";
}

CiscoDialControlMib::Ccallhistorytable::~Ccallhistorytable()
{
}

bool CiscoDialControlMib::Ccallhistorytable::has_data() const
{
    for (std::size_t index=0; index<ccallhistoryentry_.size(); index++)
    {
        if(ccallhistoryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDialControlMib::Ccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryentry_.size(); index++)
    {
        if(ccallhistoryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDialControlMib::Ccallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::Ccallhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDialControlMib::Ccallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cCallHistoryEntry")
    {
        for(auto const & c : ccallhistoryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry>();
        c->parent = this;
        ccallhistoryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccallhistoryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDialControlMib::Ccallhistorytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryentry()
    :
    ccallhistoryindex{YType::uint32, "cCallHistoryIndex"},
    ccallhistorycallorigin{YType::enumeration, "cCallHistoryCallOrigin"},
    ccallhistorychargedunits{YType::uint32, "cCallHistoryChargedUnits"},
    ccallhistoryconnecttime{YType::uint32, "cCallHistoryConnectTime"},
    ccallhistorydisconnectcause{YType::str, "cCallHistoryDisconnectCause"},
    ccallhistorydisconnecttext{YType::str, "cCallHistoryDisconnectText"},
    ccallhistorydisconnecttime{YType::uint32, "cCallHistoryDisconnectTime"},
    ccallhistoryinfotype{YType::enumeration, "cCallHistoryInfoType"},
    ccallhistorylogicalifindex{YType::int32, "cCallHistoryLogicalIfIndex"},
    ccallhistorypeeraddress{YType::str, "cCallHistoryPeerAddress"},
    ccallhistorypeerid{YType::int32, "cCallHistoryPeerId"},
    ccallhistorypeerifindex{YType::int32, "cCallHistoryPeerIfIndex"},
    ccallhistorypeersubaddress{YType::str, "cCallHistoryPeerSubAddress"},
    ccallhistoryreceivebytes{YType::uint32, "cCallHistoryReceiveBytes"},
    ccallhistoryreceivepackets{YType::uint32, "cCallHistoryReceivePackets"},
    ccallhistoryreleasesource{YType::enumeration, "cCallHistoryReleaseSource"},
    ccallhistoryreleasesrc{YType::enumeration, "cCallHistoryReleaseSrc"},
    ccallhistorysetuptime{YType::uint32, "cCallHistorySetupTime"},
    ccallhistorytransmitbytes{YType::uint32, "cCallHistoryTransmitBytes"},
    ccallhistorytransmitpackets{YType::uint32, "cCallHistoryTransmitPackets"}
{
    yang_name = "cCallHistoryEntry"; yang_parent_name = "cCallHistoryTable";
}

CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::~Ccallhistoryentry()
{
}

bool CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| ccallhistorycallorigin.is_set
	|| ccallhistorychargedunits.is_set
	|| ccallhistoryconnecttime.is_set
	|| ccallhistorydisconnectcause.is_set
	|| ccallhistorydisconnecttext.is_set
	|| ccallhistorydisconnecttime.is_set
	|| ccallhistoryinfotype.is_set
	|| ccallhistorylogicalifindex.is_set
	|| ccallhistorypeeraddress.is_set
	|| ccallhistorypeerid.is_set
	|| ccallhistorypeerifindex.is_set
	|| ccallhistorypeersubaddress.is_set
	|| ccallhistoryreceivebytes.is_set
	|| ccallhistoryreceivepackets.is_set
	|| ccallhistoryreleasesource.is_set
	|| ccallhistoryreleasesrc.is_set
	|| ccallhistorysetuptime.is_set
	|| ccallhistorytransmitbytes.is_set
	|| ccallhistorytransmitpackets.is_set;
}

bool CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ccallhistoryindex.operation)
	|| is_set(ccallhistorycallorigin.operation)
	|| is_set(ccallhistorychargedunits.operation)
	|| is_set(ccallhistoryconnecttime.operation)
	|| is_set(ccallhistorydisconnectcause.operation)
	|| is_set(ccallhistorydisconnecttext.operation)
	|| is_set(ccallhistorydisconnecttime.operation)
	|| is_set(ccallhistoryinfotype.operation)
	|| is_set(ccallhistorylogicalifindex.operation)
	|| is_set(ccallhistorypeeraddress.operation)
	|| is_set(ccallhistorypeerid.operation)
	|| is_set(ccallhistorypeerifindex.operation)
	|| is_set(ccallhistorypeersubaddress.operation)
	|| is_set(ccallhistoryreceivebytes.operation)
	|| is_set(ccallhistoryreceivepackets.operation)
	|| is_set(ccallhistoryreleasesource.operation)
	|| is_set(ccallhistoryreleasesrc.operation)
	|| is_set(ccallhistorysetuptime.operation)
	|| is_set(ccallhistorytransmitbytes.operation)
	|| is_set(ccallhistorytransmitpackets.operation);
}

std::string CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/cCallHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.operation)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistorycallorigin.is_set || is_set(ccallhistorycallorigin.operation)) leaf_name_data.push_back(ccallhistorycallorigin.get_name_leafdata());
    if (ccallhistorychargedunits.is_set || is_set(ccallhistorychargedunits.operation)) leaf_name_data.push_back(ccallhistorychargedunits.get_name_leafdata());
    if (ccallhistoryconnecttime.is_set || is_set(ccallhistoryconnecttime.operation)) leaf_name_data.push_back(ccallhistoryconnecttime.get_name_leafdata());
    if (ccallhistorydisconnectcause.is_set || is_set(ccallhistorydisconnectcause.operation)) leaf_name_data.push_back(ccallhistorydisconnectcause.get_name_leafdata());
    if (ccallhistorydisconnecttext.is_set || is_set(ccallhistorydisconnecttext.operation)) leaf_name_data.push_back(ccallhistorydisconnecttext.get_name_leafdata());
    if (ccallhistorydisconnecttime.is_set || is_set(ccallhistorydisconnecttime.operation)) leaf_name_data.push_back(ccallhistorydisconnecttime.get_name_leafdata());
    if (ccallhistoryinfotype.is_set || is_set(ccallhistoryinfotype.operation)) leaf_name_data.push_back(ccallhistoryinfotype.get_name_leafdata());
    if (ccallhistorylogicalifindex.is_set || is_set(ccallhistorylogicalifindex.operation)) leaf_name_data.push_back(ccallhistorylogicalifindex.get_name_leafdata());
    if (ccallhistorypeeraddress.is_set || is_set(ccallhistorypeeraddress.operation)) leaf_name_data.push_back(ccallhistorypeeraddress.get_name_leafdata());
    if (ccallhistorypeerid.is_set || is_set(ccallhistorypeerid.operation)) leaf_name_data.push_back(ccallhistorypeerid.get_name_leafdata());
    if (ccallhistorypeerifindex.is_set || is_set(ccallhistorypeerifindex.operation)) leaf_name_data.push_back(ccallhistorypeerifindex.get_name_leafdata());
    if (ccallhistorypeersubaddress.is_set || is_set(ccallhistorypeersubaddress.operation)) leaf_name_data.push_back(ccallhistorypeersubaddress.get_name_leafdata());
    if (ccallhistoryreceivebytes.is_set || is_set(ccallhistoryreceivebytes.operation)) leaf_name_data.push_back(ccallhistoryreceivebytes.get_name_leafdata());
    if (ccallhistoryreceivepackets.is_set || is_set(ccallhistoryreceivepackets.operation)) leaf_name_data.push_back(ccallhistoryreceivepackets.get_name_leafdata());
    if (ccallhistoryreleasesource.is_set || is_set(ccallhistoryreleasesource.operation)) leaf_name_data.push_back(ccallhistoryreleasesource.get_name_leafdata());
    if (ccallhistoryreleasesrc.is_set || is_set(ccallhistoryreleasesrc.operation)) leaf_name_data.push_back(ccallhistoryreleasesrc.get_name_leafdata());
    if (ccallhistorysetuptime.is_set || is_set(ccallhistorysetuptime.operation)) leaf_name_data.push_back(ccallhistorysetuptime.get_name_leafdata());
    if (ccallhistorytransmitbytes.is_set || is_set(ccallhistorytransmitbytes.operation)) leaf_name_data.push_back(ccallhistorytransmitbytes.get_name_leafdata());
    if (ccallhistorytransmitpackets.is_set || is_set(ccallhistorytransmitpackets.operation)) leaf_name_data.push_back(ccallhistorytransmitpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
    }
    if(value_path == "cCallHistoryCallOrigin")
    {
        ccallhistorycallorigin = value;
    }
    if(value_path == "cCallHistoryChargedUnits")
    {
        ccallhistorychargedunits = value;
    }
    if(value_path == "cCallHistoryConnectTime")
    {
        ccallhistoryconnecttime = value;
    }
    if(value_path == "cCallHistoryDisconnectCause")
    {
        ccallhistorydisconnectcause = value;
    }
    if(value_path == "cCallHistoryDisconnectText")
    {
        ccallhistorydisconnecttext = value;
    }
    if(value_path == "cCallHistoryDisconnectTime")
    {
        ccallhistorydisconnecttime = value;
    }
    if(value_path == "cCallHistoryInfoType")
    {
        ccallhistoryinfotype = value;
    }
    if(value_path == "cCallHistoryLogicalIfIndex")
    {
        ccallhistorylogicalifindex = value;
    }
    if(value_path == "cCallHistoryPeerAddress")
    {
        ccallhistorypeeraddress = value;
    }
    if(value_path == "cCallHistoryPeerId")
    {
        ccallhistorypeerid = value;
    }
    if(value_path == "cCallHistoryPeerIfIndex")
    {
        ccallhistorypeerifindex = value;
    }
    if(value_path == "cCallHistoryPeerSubAddress")
    {
        ccallhistorypeersubaddress = value;
    }
    if(value_path == "cCallHistoryReceiveBytes")
    {
        ccallhistoryreceivebytes = value;
    }
    if(value_path == "cCallHistoryReceivePackets")
    {
        ccallhistoryreceivepackets = value;
    }
    if(value_path == "cCallHistoryReleaseSource")
    {
        ccallhistoryreleasesource = value;
    }
    if(value_path == "cCallHistoryReleaseSrc")
    {
        ccallhistoryreleasesrc = value;
    }
    if(value_path == "cCallHistorySetupTime")
    {
        ccallhistorysetuptime = value;
    }
    if(value_path == "cCallHistoryTransmitBytes")
    {
        ccallhistorytransmitbytes = value;
    }
    if(value_path == "cCallHistoryTransmitPackets")
    {
        ccallhistorytransmitpackets = value;
    }
}

CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiectable()
{
    yang_name = "cCallHistoryIecTable"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB";
}

CiscoDialControlMib::Ccallhistoryiectable::~Ccallhistoryiectable()
{
}

bool CiscoDialControlMib::Ccallhistoryiectable::has_data() const
{
    for (std::size_t index=0; index<ccallhistoryiecentry_.size(); index++)
    {
        if(ccallhistoryiecentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDialControlMib::Ccallhistoryiectable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryiecentry_.size(); index++)
    {
        if(ccallhistoryiecentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDialControlMib::Ccallhistoryiectable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryIecTable";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::Ccallhistoryiectable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDialControlMib::Ccallhistoryiectable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cCallHistoryIecEntry")
    {
        for(auto const & c : ccallhistoryiecentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry>();
        c->parent = this;
        ccallhistoryiecentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistoryiectable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccallhistoryiecentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDialControlMib::Ccallhistoryiectable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::Ccallhistoryiecentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    ccallhistoryiecindex{YType::uint32, "cCallHistoryIecIndex"},
    ccallhistoryiec{YType::str, "cCallHistoryIec"}
{
    yang_name = "cCallHistoryIecEntry"; yang_parent_name = "cCallHistoryIecTable";
}

CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::~Ccallhistoryiecentry()
{
}

bool CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| ccallhistoryiecindex.is_set
	|| ccallhistoryiec.is_set;
}

bool CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ccallhistoryindex.operation)
	|| is_set(ccallhistoryiecindex.operation)
	|| is_set(ccallhistoryiec.operation);
}

std::string CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryIecEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']" <<"[cCallHistoryIecIndex='" <<ccallhistoryiecindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/cCallHistoryIecTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.operation)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistoryiecindex.is_set || is_set(ccallhistoryiecindex.operation)) leaf_name_data.push_back(ccallhistoryiecindex.get_name_leafdata());
    if (ccallhistoryiec.is_set || is_set(ccallhistoryiec.operation)) leaf_name_data.push_back(ccallhistoryiec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
    }
    if(value_path == "cCallHistoryIecIndex")
    {
        ccallhistoryiecindex = value;
    }
    if(value_path == "cCallHistoryIec")
    {
        ccallhistoryiec = value;
    }
}

const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::CpeersearchtypeEnum::none {1, "none"};
const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::CpeersearchtypeEnum::datavoice {2, "datavoice"};
const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::CpeersearchtypeEnum::voicedata {3, "voicedata"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistorycalloriginEnum::originate {1, "originate"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistorycalloriginEnum::answer {2, "answer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistorycalloriginEnum::callback {3, "callback"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::other {1, "other"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::speech {2, "speech"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::audio31 {6, "audio31"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::audio7 {7, "audio7"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::video {8, "video"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryinfotypeEnum::fax {10, "fax"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::internalRelease {5, "internalRelease"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::internalCallControlApp {6, "internalCallControlApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::consoleCommand {7, "consoleCommand"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::externalRadiusServer {8, "externalRadiusServer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::externalNmsApp {9, "externalNmsApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesourceEnum::externalCallControlAgent {10, "externalCallControlAgent"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::internalReleaseInPotsLeg {5, "internalReleaseInPotsLeg"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::internalReleaseInVoipLeg {6, "internalReleaseInVoipLeg"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::internalCallControlApp {7, "internalCallControlApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::internalReleaseInVoipAAA {8, "internalReleaseInVoipAAA"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::consoleCommand {9, "consoleCommand"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::externalRadiusServer {10, "externalRadiusServer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::externalNmsApp {11, "externalNmsApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::externalCallControlAgent {12, "externalCallControlAgent"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::gatekeeper {13, "gatekeeper"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::CcallhistoryreleasesrcEnum::externalGKTMPServer {14, "externalGKTMPServer"};


}
}

