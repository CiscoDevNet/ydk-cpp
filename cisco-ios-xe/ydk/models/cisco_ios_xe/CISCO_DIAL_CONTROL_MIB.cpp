
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DIAL_CONTROL_MIB {

CiscoDialControlMib::CiscoDialControlMib()
    :
    ccallhistoryiectable(std::make_shared<CiscoDialControlMib::Ccallhistoryiectable>())
	,ccallhistorytable(std::make_shared<CiscoDialControlMib::Ccallhistorytable>())
	,cpeerglobalconfiguration(std::make_shared<CiscoDialControlMib::Cpeerglobalconfiguration>())
{
    ccallhistoryiectable->parent = this;

    ccallhistorytable->parent = this;

    cpeerglobalconfiguration->parent = this;

    yang_name = "CISCO-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB";
}

CiscoDialControlMib::~CiscoDialControlMib()
{
}

bool CiscoDialControlMib::has_data() const
{
    return (ccallhistoryiectable !=  nullptr && ccallhistoryiectable->has_data())
	|| (ccallhistorytable !=  nullptr && ccallhistorytable->has_data())
	|| (cpeerglobalconfiguration !=  nullptr && cpeerglobalconfiguration->has_data());
}

bool CiscoDialControlMib::has_operation() const
{
    return is_set(yfilter)
	|| (ccallhistoryiectable !=  nullptr && ccallhistoryiectable->has_operation())
	|| (ccallhistorytable !=  nullptr && ccallhistorytable->has_operation())
	|| (cpeerglobalconfiguration !=  nullptr && cpeerglobalconfiguration->has_operation());
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
        if(ccallhistoryiectable == nullptr)
        {
            ccallhistoryiectable = std::make_shared<CiscoDialControlMib::Ccallhistoryiectable>();
        }
        return ccallhistoryiectable;
    }

    if(child_yang_name == "cCallHistoryTable")
    {
        if(ccallhistorytable == nullptr)
        {
            ccallhistorytable = std::make_shared<CiscoDialControlMib::Ccallhistorytable>();
        }
        return ccallhistorytable;
    }

    if(child_yang_name == "cPeerGlobalConfiguration")
    {
        if(cpeerglobalconfiguration == nullptr)
        {
            cpeerglobalconfiguration = std::make_shared<CiscoDialControlMib::Cpeerglobalconfiguration>();
        }
        return cpeerglobalconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccallhistoryiectable != nullptr)
    {
        children["cCallHistoryIecTable"] = ccallhistoryiectable;
    }

    if(ccallhistorytable != nullptr)
    {
        children["cCallHistoryTable"] = ccallhistorytable;
    }

    if(cpeerglobalconfiguration != nullptr)
    {
        children["cPeerGlobalConfiguration"] = cpeerglobalconfiguration;
    }

    return children;
}

void CiscoDialControlMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDialControlMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoDialControlMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoDialControlMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIecTable" || name == "cCallHistoryTable" || name == "cPeerGlobalConfiguration")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cpeersearchtype.yfilter);
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

    if (cpeersearchtype.is_set || is_set(cpeersearchtype.yfilter)) leaf_name_data.push_back(cpeersearchtype.get_name_leafdata());


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

void CiscoDialControlMib::Cpeerglobalconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPeerSearchType")
    {
        cpeersearchtype = value;
        cpeersearchtype.value_namespace = name_space;
        cpeersearchtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDialControlMib::Cpeerglobalconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPeerSearchType")
    {
        cpeersearchtype.yfilter = yfilter;
    }
}

bool CiscoDialControlMib::Cpeerglobalconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPeerSearchType")
        return true;
    return false;
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
    for (std::size_t index=0; index<ccallhistoryentry.size(); index++)
    {
        if(ccallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDialControlMib::Ccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryentry.size(); index++)
    {
        if(ccallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ccallhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry>();
        c->parent = this;
        ccallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDialControlMib::Ccallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDialControlMib::Ccallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDialControlMib::Ccallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(ccallhistorycallorigin.yfilter)
	|| ydk::is_set(ccallhistorychargedunits.yfilter)
	|| ydk::is_set(ccallhistoryconnecttime.yfilter)
	|| ydk::is_set(ccallhistorydisconnectcause.yfilter)
	|| ydk::is_set(ccallhistorydisconnecttext.yfilter)
	|| ydk::is_set(ccallhistorydisconnecttime.yfilter)
	|| ydk::is_set(ccallhistoryinfotype.yfilter)
	|| ydk::is_set(ccallhistorylogicalifindex.yfilter)
	|| ydk::is_set(ccallhistorypeeraddress.yfilter)
	|| ydk::is_set(ccallhistorypeerid.yfilter)
	|| ydk::is_set(ccallhistorypeerifindex.yfilter)
	|| ydk::is_set(ccallhistorypeersubaddress.yfilter)
	|| ydk::is_set(ccallhistoryreceivebytes.yfilter)
	|| ydk::is_set(ccallhistoryreceivepackets.yfilter)
	|| ydk::is_set(ccallhistoryreleasesource.yfilter)
	|| ydk::is_set(ccallhistoryreleasesrc.yfilter)
	|| ydk::is_set(ccallhistorysetuptime.yfilter)
	|| ydk::is_set(ccallhistorytransmitbytes.yfilter)
	|| ydk::is_set(ccallhistorytransmitpackets.yfilter);
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

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistorycallorigin.is_set || is_set(ccallhistorycallorigin.yfilter)) leaf_name_data.push_back(ccallhistorycallorigin.get_name_leafdata());
    if (ccallhistorychargedunits.is_set || is_set(ccallhistorychargedunits.yfilter)) leaf_name_data.push_back(ccallhistorychargedunits.get_name_leafdata());
    if (ccallhistoryconnecttime.is_set || is_set(ccallhistoryconnecttime.yfilter)) leaf_name_data.push_back(ccallhistoryconnecttime.get_name_leafdata());
    if (ccallhistorydisconnectcause.is_set || is_set(ccallhistorydisconnectcause.yfilter)) leaf_name_data.push_back(ccallhistorydisconnectcause.get_name_leafdata());
    if (ccallhistorydisconnecttext.is_set || is_set(ccallhistorydisconnecttext.yfilter)) leaf_name_data.push_back(ccallhistorydisconnecttext.get_name_leafdata());
    if (ccallhistorydisconnecttime.is_set || is_set(ccallhistorydisconnecttime.yfilter)) leaf_name_data.push_back(ccallhistorydisconnecttime.get_name_leafdata());
    if (ccallhistoryinfotype.is_set || is_set(ccallhistoryinfotype.yfilter)) leaf_name_data.push_back(ccallhistoryinfotype.get_name_leafdata());
    if (ccallhistorylogicalifindex.is_set || is_set(ccallhistorylogicalifindex.yfilter)) leaf_name_data.push_back(ccallhistorylogicalifindex.get_name_leafdata());
    if (ccallhistorypeeraddress.is_set || is_set(ccallhistorypeeraddress.yfilter)) leaf_name_data.push_back(ccallhistorypeeraddress.get_name_leafdata());
    if (ccallhistorypeerid.is_set || is_set(ccallhistorypeerid.yfilter)) leaf_name_data.push_back(ccallhistorypeerid.get_name_leafdata());
    if (ccallhistorypeerifindex.is_set || is_set(ccallhistorypeerifindex.yfilter)) leaf_name_data.push_back(ccallhistorypeerifindex.get_name_leafdata());
    if (ccallhistorypeersubaddress.is_set || is_set(ccallhistorypeersubaddress.yfilter)) leaf_name_data.push_back(ccallhistorypeersubaddress.get_name_leafdata());
    if (ccallhistoryreceivebytes.is_set || is_set(ccallhistoryreceivebytes.yfilter)) leaf_name_data.push_back(ccallhistoryreceivebytes.get_name_leafdata());
    if (ccallhistoryreceivepackets.is_set || is_set(ccallhistoryreceivepackets.yfilter)) leaf_name_data.push_back(ccallhistoryreceivepackets.get_name_leafdata());
    if (ccallhistoryreleasesource.is_set || is_set(ccallhistoryreleasesource.yfilter)) leaf_name_data.push_back(ccallhistoryreleasesource.get_name_leafdata());
    if (ccallhistoryreleasesrc.is_set || is_set(ccallhistoryreleasesrc.yfilter)) leaf_name_data.push_back(ccallhistoryreleasesrc.get_name_leafdata());
    if (ccallhistorysetuptime.is_set || is_set(ccallhistorysetuptime.yfilter)) leaf_name_data.push_back(ccallhistorysetuptime.get_name_leafdata());
    if (ccallhistorytransmitbytes.is_set || is_set(ccallhistorytransmitbytes.yfilter)) leaf_name_data.push_back(ccallhistorytransmitbytes.get_name_leafdata());
    if (ccallhistorytransmitpackets.is_set || is_set(ccallhistorytransmitpackets.yfilter)) leaf_name_data.push_back(ccallhistorytransmitpackets.get_name_leafdata());


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

void CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryCallOrigin")
    {
        ccallhistorycallorigin = value;
        ccallhistorycallorigin.value_namespace = name_space;
        ccallhistorycallorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryChargedUnits")
    {
        ccallhistorychargedunits = value;
        ccallhistorychargedunits.value_namespace = name_space;
        ccallhistorychargedunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryConnectTime")
    {
        ccallhistoryconnecttime = value;
        ccallhistoryconnecttime.value_namespace = name_space;
        ccallhistoryconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryDisconnectCause")
    {
        ccallhistorydisconnectcause = value;
        ccallhistorydisconnectcause.value_namespace = name_space;
        ccallhistorydisconnectcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryDisconnectText")
    {
        ccallhistorydisconnecttext = value;
        ccallhistorydisconnecttext.value_namespace = name_space;
        ccallhistorydisconnecttext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryDisconnectTime")
    {
        ccallhistorydisconnecttime = value;
        ccallhistorydisconnecttime.value_namespace = name_space;
        ccallhistorydisconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryInfoType")
    {
        ccallhistoryinfotype = value;
        ccallhistoryinfotype.value_namespace = name_space;
        ccallhistoryinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryLogicalIfIndex")
    {
        ccallhistorylogicalifindex = value;
        ccallhistorylogicalifindex.value_namespace = name_space;
        ccallhistorylogicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerAddress")
    {
        ccallhistorypeeraddress = value;
        ccallhistorypeeraddress.value_namespace = name_space;
        ccallhistorypeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerId")
    {
        ccallhistorypeerid = value;
        ccallhistorypeerid.value_namespace = name_space;
        ccallhistorypeerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerIfIndex")
    {
        ccallhistorypeerifindex = value;
        ccallhistorypeerifindex.value_namespace = name_space;
        ccallhistorypeerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerSubAddress")
    {
        ccallhistorypeersubaddress = value;
        ccallhistorypeersubaddress.value_namespace = name_space;
        ccallhistorypeersubaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReceiveBytes")
    {
        ccallhistoryreceivebytes = value;
        ccallhistoryreceivebytes.value_namespace = name_space;
        ccallhistoryreceivebytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReceivePackets")
    {
        ccallhistoryreceivepackets = value;
        ccallhistoryreceivepackets.value_namespace = name_space;
        ccallhistoryreceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReleaseSource")
    {
        ccallhistoryreleasesource = value;
        ccallhistoryreleasesource.value_namespace = name_space;
        ccallhistoryreleasesource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReleaseSrc")
    {
        ccallhistoryreleasesrc = value;
        ccallhistoryreleasesrc.value_namespace = name_space;
        ccallhistoryreleasesrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistorySetupTime")
    {
        ccallhistorysetuptime = value;
        ccallhistorysetuptime.value_namespace = name_space;
        ccallhistorysetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryTransmitBytes")
    {
        ccallhistorytransmitbytes = value;
        ccallhistorytransmitbytes.value_namespace = name_space;
        ccallhistorytransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryTransmitPackets")
    {
        ccallhistorytransmitpackets = value;
        ccallhistorytransmitpackets.value_namespace = name_space;
        ccallhistorytransmitpackets.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryCallOrigin")
    {
        ccallhistorycallorigin.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryChargedUnits")
    {
        ccallhistorychargedunits.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryConnectTime")
    {
        ccallhistoryconnecttime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectCause")
    {
        ccallhistorydisconnectcause.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectText")
    {
        ccallhistorydisconnecttext.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectTime")
    {
        ccallhistorydisconnecttime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryInfoType")
    {
        ccallhistoryinfotype.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryLogicalIfIndex")
    {
        ccallhistorylogicalifindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerAddress")
    {
        ccallhistorypeeraddress.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerId")
    {
        ccallhistorypeerid.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerIfIndex")
    {
        ccallhistorypeerifindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerSubAddress")
    {
        ccallhistorypeersubaddress.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReceiveBytes")
    {
        ccallhistoryreceivebytes.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReceivePackets")
    {
        ccallhistoryreceivepackets.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReleaseSource")
    {
        ccallhistoryreleasesource.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReleaseSrc")
    {
        ccallhistoryreleasesrc.yfilter = yfilter;
    }
    if(value_path == "cCallHistorySetupTime")
    {
        ccallhistorysetuptime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryTransmitBytes")
    {
        ccallhistorytransmitbytes.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryTransmitPackets")
    {
        ccallhistorytransmitpackets.yfilter = yfilter;
    }
}

bool CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cCallHistoryCallOrigin" || name == "cCallHistoryChargedUnits" || name == "cCallHistoryConnectTime" || name == "cCallHistoryDisconnectCause" || name == "cCallHistoryDisconnectText" || name == "cCallHistoryDisconnectTime" || name == "cCallHistoryInfoType" || name == "cCallHistoryLogicalIfIndex" || name == "cCallHistoryPeerAddress" || name == "cCallHistoryPeerId" || name == "cCallHistoryPeerIfIndex" || name == "cCallHistoryPeerSubAddress" || name == "cCallHistoryReceiveBytes" || name == "cCallHistoryReceivePackets" || name == "cCallHistoryReleaseSource" || name == "cCallHistoryReleaseSrc" || name == "cCallHistorySetupTime" || name == "cCallHistoryTransmitBytes" || name == "cCallHistoryTransmitPackets")
        return true;
    return false;
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
    for (std::size_t index=0; index<ccallhistoryiecentry.size(); index++)
    {
        if(ccallhistoryiecentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDialControlMib::Ccallhistoryiectable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryiecentry.size(); index++)
    {
        if(ccallhistoryiecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ccallhistoryiecentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry>();
        c->parent = this;
        ccallhistoryiecentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDialControlMib::Ccallhistoryiectable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccallhistoryiecentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDialControlMib::Ccallhistoryiectable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDialControlMib::Ccallhistoryiectable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDialControlMib::Ccallhistoryiectable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIecEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(ccallhistoryiecindex.yfilter)
	|| ydk::is_set(ccallhistoryiec.yfilter);
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

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistoryiecindex.is_set || is_set(ccallhistoryiecindex.yfilter)) leaf_name_data.push_back(ccallhistoryiecindex.get_name_leafdata());
    if (ccallhistoryiec.is_set || is_set(ccallhistoryiec.yfilter)) leaf_name_data.push_back(ccallhistoryiec.get_name_leafdata());


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

void CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryIecIndex")
    {
        ccallhistoryiecindex = value;
        ccallhistoryiecindex.value_namespace = name_space;
        ccallhistoryiecindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryIec")
    {
        ccallhistoryiec = value;
        ccallhistoryiec.value_namespace = name_space;
        ccallhistoryiec.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryIecIndex")
    {
        ccallhistoryiecindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryIec")
    {
        ccallhistoryiec.yfilter = yfilter;
    }
}

bool CiscoDialControlMib::Ccallhistoryiectable::Ccallhistoryiecentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cCallHistoryIecIndex" || name == "cCallHistoryIec")
        return true;
    return false;
}

const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::Cpeersearchtype::none {1, "none"};
const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::Cpeersearchtype::datavoice {2, "datavoice"};
const Enum::YLeaf CiscoDialControlMib::Cpeerglobalconfiguration::Cpeersearchtype::voicedata {3, "voicedata"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::originate {1, "originate"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::answer {2, "answer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::callback {3, "callback"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::other {1, "other"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::speech {2, "speech"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::audio31 {6, "audio31"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::audio7 {7, "audio7"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::video {8, "video"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::fax {10, "fax"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::internalRelease {5, "internalRelease"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::internalCallControlApp {6, "internalCallControlApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::consoleCommand {7, "consoleCommand"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalRadiusServer {8, "externalRadiusServer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalNmsApp {9, "externalNmsApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalCallControlAgent {10, "externalCallControlAgent"};

const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInPotsLeg {5, "internalReleaseInPotsLeg"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInVoipLeg {6, "internalReleaseInVoipLeg"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalCallControlApp {7, "internalCallControlApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInVoipAAA {8, "internalReleaseInVoipAAA"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::consoleCommand {9, "consoleCommand"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalRadiusServer {10, "externalRadiusServer"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalNmsApp {11, "externalNmsApp"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalCallControlAgent {12, "externalCallControlAgent"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::gatekeeper {13, "gatekeeper"};
const Enum::YLeaf CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalGKTMPServer {14, "externalGKTMPServer"};


}
}

