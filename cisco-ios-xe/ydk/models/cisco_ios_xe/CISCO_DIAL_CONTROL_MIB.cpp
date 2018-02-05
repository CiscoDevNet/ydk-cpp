
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DIAL_CONTROL_MIB {

CISCODIALCONTROLMIB::CISCODIALCONTROLMIB()
    :
    cpeerglobalconfiguration(std::make_shared<CISCODIALCONTROLMIB::Cpeerglobalconfiguration>())
	,ccallhistorytable(std::make_shared<CISCODIALCONTROLMIB::Ccallhistorytable>())
	,ccallhistoryiectable(std::make_shared<CISCODIALCONTROLMIB::Ccallhistoryiectable>())
{
    cpeerglobalconfiguration->parent = this;
    ccallhistorytable->parent = this;
    ccallhistoryiectable->parent = this;

    yang_name = "CISCO-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::~CISCODIALCONTROLMIB()
{
}

bool CISCODIALCONTROLMIB::has_data() const
{
    return (cpeerglobalconfiguration !=  nullptr && cpeerglobalconfiguration->has_data())
	|| (ccallhistorytable !=  nullptr && ccallhistorytable->has_data())
	|| (ccallhistoryiectable !=  nullptr && ccallhistoryiectable->has_data());
}

bool CISCODIALCONTROLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpeerglobalconfiguration !=  nullptr && cpeerglobalconfiguration->has_operation())
	|| (ccallhistorytable !=  nullptr && ccallhistorytable->has_operation())
	|| (ccallhistoryiectable !=  nullptr && ccallhistoryiectable->has_operation());
}

std::string CISCODIALCONTROLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPeerGlobalConfiguration")
    {
        if(cpeerglobalconfiguration == nullptr)
        {
            cpeerglobalconfiguration = std::make_shared<CISCODIALCONTROLMIB::Cpeerglobalconfiguration>();
        }
        return cpeerglobalconfiguration;
    }

    if(child_yang_name == "cCallHistoryTable")
    {
        if(ccallhistorytable == nullptr)
        {
            ccallhistorytable = std::make_shared<CISCODIALCONTROLMIB::Ccallhistorytable>();
        }
        return ccallhistorytable;
    }

    if(child_yang_name == "cCallHistoryIecTable")
    {
        if(ccallhistoryiectable == nullptr)
        {
            ccallhistoryiectable = std::make_shared<CISCODIALCONTROLMIB::Ccallhistoryiectable>();
        }
        return ccallhistoryiectable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpeerglobalconfiguration != nullptr)
    {
        children["cPeerGlobalConfiguration"] = cpeerglobalconfiguration;
    }

    if(ccallhistorytable != nullptr)
    {
        children["cCallHistoryTable"] = ccallhistorytable;
    }

    if(ccallhistoryiectable != nullptr)
    {
        children["cCallHistoryIecTable"] = ccallhistoryiectable;
    }

    return children;
}

void CISCODIALCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODIALCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::clone_ptr() const
{
    return std::make_shared<CISCODIALCONTROLMIB>();
}

std::string CISCODIALCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCODIALCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCODIALCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCODIALCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCODIALCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPeerGlobalConfiguration" || name == "cCallHistoryTable" || name == "cCallHistoryIecTable")
        return true;
    return false;
}

CISCODIALCONTROLMIB::Cpeerglobalconfiguration::Cpeerglobalconfiguration()
    :
    cpeersearchtype{YType::enumeration, "cPeerSearchType"}
{

    yang_name = "cPeerGlobalConfiguration"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::Cpeerglobalconfiguration::~Cpeerglobalconfiguration()
{
}

bool CISCODIALCONTROLMIB::Cpeerglobalconfiguration::has_data() const
{
    return cpeersearchtype.is_set;
}

bool CISCODIALCONTROLMIB::Cpeerglobalconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpeersearchtype.yfilter);
}

std::string CISCODIALCONTROLMIB::Cpeerglobalconfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODIALCONTROLMIB::Cpeerglobalconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPeerGlobalConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::Cpeerglobalconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpeersearchtype.is_set || is_set(cpeersearchtype.yfilter)) leaf_name_data.push_back(cpeersearchtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::Cpeerglobalconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::Cpeerglobalconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODIALCONTROLMIB::Cpeerglobalconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPeerSearchType")
    {
        cpeersearchtype = value;
        cpeersearchtype.value_namespace = name_space;
        cpeersearchtype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODIALCONTROLMIB::Cpeerglobalconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPeerSearchType")
    {
        cpeersearchtype.yfilter = yfilter;
    }
}

bool CISCODIALCONTROLMIB::Cpeerglobalconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPeerSearchType")
        return true;
    return false;
}

CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistorytable()
{

    yang_name = "cCallHistoryTable"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::Ccallhistorytable::~Ccallhistorytable()
{
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::has_data() const
{
    for (std::size_t index=0; index<ccallhistoryentry.size(); index++)
    {
        if(ccallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryentry.size(); index++)
    {
        if(ccallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODIALCONTROLMIB::Ccallhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODIALCONTROLMIB::Ccallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::Ccallhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::Ccallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cCallHistoryEntry")
    {
        auto c = std::make_shared<CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry>();
        c->parent = this;
        ccallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::Ccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ccallhistoryentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODIALCONTROLMIB::Ccallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODIALCONTROLMIB::Ccallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryEntry")
        return true;
    return false;
}

CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryentry()
    :
    ccallhistoryindex{YType::uint32, "cCallHistoryIndex"},
    ccallhistorysetuptime{YType::uint32, "cCallHistorySetupTime"},
    ccallhistorypeeraddress{YType::str, "cCallHistoryPeerAddress"},
    ccallhistorypeersubaddress{YType::str, "cCallHistoryPeerSubAddress"},
    ccallhistorypeerid{YType::int32, "cCallHistoryPeerId"},
    ccallhistorypeerifindex{YType::int32, "cCallHistoryPeerIfIndex"},
    ccallhistorylogicalifindex{YType::int32, "cCallHistoryLogicalIfIndex"},
    ccallhistorydisconnectcause{YType::str, "cCallHistoryDisconnectCause"},
    ccallhistorydisconnecttext{YType::str, "cCallHistoryDisconnectText"},
    ccallhistoryconnecttime{YType::uint32, "cCallHistoryConnectTime"},
    ccallhistorydisconnecttime{YType::uint32, "cCallHistoryDisconnectTime"},
    ccallhistorycallorigin{YType::enumeration, "cCallHistoryCallOrigin"},
    ccallhistorychargedunits{YType::uint32, "cCallHistoryChargedUnits"},
    ccallhistoryinfotype{YType::enumeration, "cCallHistoryInfoType"},
    ccallhistorytransmitpackets{YType::uint32, "cCallHistoryTransmitPackets"},
    ccallhistorytransmitbytes{YType::uint32, "cCallHistoryTransmitBytes"},
    ccallhistoryreceivepackets{YType::uint32, "cCallHistoryReceivePackets"},
    ccallhistoryreceivebytes{YType::uint32, "cCallHistoryReceiveBytes"},
    ccallhistoryreleasesource{YType::enumeration, "cCallHistoryReleaseSource"},
    ccallhistoryreleasesrc{YType::enumeration, "cCallHistoryReleaseSrc"}
{

    yang_name = "cCallHistoryEntry"; yang_parent_name = "cCallHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::~Ccallhistoryentry()
{
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| ccallhistorysetuptime.is_set
	|| ccallhistorypeeraddress.is_set
	|| ccallhistorypeersubaddress.is_set
	|| ccallhistorypeerid.is_set
	|| ccallhistorypeerifindex.is_set
	|| ccallhistorylogicalifindex.is_set
	|| ccallhistorydisconnectcause.is_set
	|| ccallhistorydisconnecttext.is_set
	|| ccallhistoryconnecttime.is_set
	|| ccallhistorydisconnecttime.is_set
	|| ccallhistorycallorigin.is_set
	|| ccallhistorychargedunits.is_set
	|| ccallhistoryinfotype.is_set
	|| ccallhistorytransmitpackets.is_set
	|| ccallhistorytransmitbytes.is_set
	|| ccallhistoryreceivepackets.is_set
	|| ccallhistoryreceivebytes.is_set
	|| ccallhistoryreleasesource.is_set
	|| ccallhistoryreleasesrc.is_set;
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(ccallhistorysetuptime.yfilter)
	|| ydk::is_set(ccallhistorypeeraddress.yfilter)
	|| ydk::is_set(ccallhistorypeersubaddress.yfilter)
	|| ydk::is_set(ccallhistorypeerid.yfilter)
	|| ydk::is_set(ccallhistorypeerifindex.yfilter)
	|| ydk::is_set(ccallhistorylogicalifindex.yfilter)
	|| ydk::is_set(ccallhistorydisconnectcause.yfilter)
	|| ydk::is_set(ccallhistorydisconnecttext.yfilter)
	|| ydk::is_set(ccallhistoryconnecttime.yfilter)
	|| ydk::is_set(ccallhistorydisconnecttime.yfilter)
	|| ydk::is_set(ccallhistorycallorigin.yfilter)
	|| ydk::is_set(ccallhistorychargedunits.yfilter)
	|| ydk::is_set(ccallhistoryinfotype.yfilter)
	|| ydk::is_set(ccallhistorytransmitpackets.yfilter)
	|| ydk::is_set(ccallhistorytransmitbytes.yfilter)
	|| ydk::is_set(ccallhistoryreceivepackets.yfilter)
	|| ydk::is_set(ccallhistoryreceivebytes.yfilter)
	|| ydk::is_set(ccallhistoryreleasesource.yfilter)
	|| ydk::is_set(ccallhistoryreleasesrc.yfilter);
}

std::string CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/cCallHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistorysetuptime.is_set || is_set(ccallhistorysetuptime.yfilter)) leaf_name_data.push_back(ccallhistorysetuptime.get_name_leafdata());
    if (ccallhistorypeeraddress.is_set || is_set(ccallhistorypeeraddress.yfilter)) leaf_name_data.push_back(ccallhistorypeeraddress.get_name_leafdata());
    if (ccallhistorypeersubaddress.is_set || is_set(ccallhistorypeersubaddress.yfilter)) leaf_name_data.push_back(ccallhistorypeersubaddress.get_name_leafdata());
    if (ccallhistorypeerid.is_set || is_set(ccallhistorypeerid.yfilter)) leaf_name_data.push_back(ccallhistorypeerid.get_name_leafdata());
    if (ccallhistorypeerifindex.is_set || is_set(ccallhistorypeerifindex.yfilter)) leaf_name_data.push_back(ccallhistorypeerifindex.get_name_leafdata());
    if (ccallhistorylogicalifindex.is_set || is_set(ccallhistorylogicalifindex.yfilter)) leaf_name_data.push_back(ccallhistorylogicalifindex.get_name_leafdata());
    if (ccallhistorydisconnectcause.is_set || is_set(ccallhistorydisconnectcause.yfilter)) leaf_name_data.push_back(ccallhistorydisconnectcause.get_name_leafdata());
    if (ccallhistorydisconnecttext.is_set || is_set(ccallhistorydisconnecttext.yfilter)) leaf_name_data.push_back(ccallhistorydisconnecttext.get_name_leafdata());
    if (ccallhistoryconnecttime.is_set || is_set(ccallhistoryconnecttime.yfilter)) leaf_name_data.push_back(ccallhistoryconnecttime.get_name_leafdata());
    if (ccallhistorydisconnecttime.is_set || is_set(ccallhistorydisconnecttime.yfilter)) leaf_name_data.push_back(ccallhistorydisconnecttime.get_name_leafdata());
    if (ccallhistorycallorigin.is_set || is_set(ccallhistorycallorigin.yfilter)) leaf_name_data.push_back(ccallhistorycallorigin.get_name_leafdata());
    if (ccallhistorychargedunits.is_set || is_set(ccallhistorychargedunits.yfilter)) leaf_name_data.push_back(ccallhistorychargedunits.get_name_leafdata());
    if (ccallhistoryinfotype.is_set || is_set(ccallhistoryinfotype.yfilter)) leaf_name_data.push_back(ccallhistoryinfotype.get_name_leafdata());
    if (ccallhistorytransmitpackets.is_set || is_set(ccallhistorytransmitpackets.yfilter)) leaf_name_data.push_back(ccallhistorytransmitpackets.get_name_leafdata());
    if (ccallhistorytransmitbytes.is_set || is_set(ccallhistorytransmitbytes.yfilter)) leaf_name_data.push_back(ccallhistorytransmitbytes.get_name_leafdata());
    if (ccallhistoryreceivepackets.is_set || is_set(ccallhistoryreceivepackets.yfilter)) leaf_name_data.push_back(ccallhistoryreceivepackets.get_name_leafdata());
    if (ccallhistoryreceivebytes.is_set || is_set(ccallhistoryreceivebytes.yfilter)) leaf_name_data.push_back(ccallhistoryreceivebytes.get_name_leafdata());
    if (ccallhistoryreleasesource.is_set || is_set(ccallhistoryreleasesource.yfilter)) leaf_name_data.push_back(ccallhistoryreleasesource.get_name_leafdata());
    if (ccallhistoryreleasesrc.is_set || is_set(ccallhistoryreleasesrc.yfilter)) leaf_name_data.push_back(ccallhistoryreleasesrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistorySetupTime")
    {
        ccallhistorysetuptime = value;
        ccallhistorysetuptime.value_namespace = name_space;
        ccallhistorysetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerAddress")
    {
        ccallhistorypeeraddress = value;
        ccallhistorypeeraddress.value_namespace = name_space;
        ccallhistorypeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryPeerSubAddress")
    {
        ccallhistorypeersubaddress = value;
        ccallhistorypeersubaddress.value_namespace = name_space;
        ccallhistorypeersubaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cCallHistoryLogicalIfIndex")
    {
        ccallhistorylogicalifindex = value;
        ccallhistorylogicalifindex.value_namespace = name_space;
        ccallhistorylogicalifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cCallHistoryConnectTime")
    {
        ccallhistoryconnecttime = value;
        ccallhistoryconnecttime.value_namespace = name_space;
        ccallhistoryconnecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryDisconnectTime")
    {
        ccallhistorydisconnecttime = value;
        ccallhistorydisconnecttime.value_namespace = name_space;
        ccallhistorydisconnecttime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cCallHistoryInfoType")
    {
        ccallhistoryinfotype = value;
        ccallhistoryinfotype.value_namespace = name_space;
        ccallhistoryinfotype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryTransmitPackets")
    {
        ccallhistorytransmitpackets = value;
        ccallhistorytransmitpackets.value_namespace = name_space;
        ccallhistorytransmitpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryTransmitBytes")
    {
        ccallhistorytransmitbytes = value;
        ccallhistorytransmitbytes.value_namespace = name_space;
        ccallhistorytransmitbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReceivePackets")
    {
        ccallhistoryreceivepackets = value;
        ccallhistoryreceivepackets.value_namespace = name_space;
        ccallhistoryreceivepackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cCallHistoryReceiveBytes")
    {
        ccallhistoryreceivebytes = value;
        ccallhistoryreceivebytes.value_namespace = name_space;
        ccallhistoryreceivebytes.value_namespace_prefix = name_space_prefix;
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
}

void CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistorySetupTime")
    {
        ccallhistorysetuptime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerAddress")
    {
        ccallhistorypeeraddress.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerSubAddress")
    {
        ccallhistorypeersubaddress.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerId")
    {
        ccallhistorypeerid.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryPeerIfIndex")
    {
        ccallhistorypeerifindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryLogicalIfIndex")
    {
        ccallhistorylogicalifindex.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectCause")
    {
        ccallhistorydisconnectcause.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectText")
    {
        ccallhistorydisconnecttext.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryConnectTime")
    {
        ccallhistoryconnecttime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryDisconnectTime")
    {
        ccallhistorydisconnecttime.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryCallOrigin")
    {
        ccallhistorycallorigin.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryChargedUnits")
    {
        ccallhistorychargedunits.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryInfoType")
    {
        ccallhistoryinfotype.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryTransmitPackets")
    {
        ccallhistorytransmitpackets.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryTransmitBytes")
    {
        ccallhistorytransmitbytes.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReceivePackets")
    {
        ccallhistoryreceivepackets.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReceiveBytes")
    {
        ccallhistoryreceivebytes.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReleaseSource")
    {
        ccallhistoryreleasesource.yfilter = yfilter;
    }
    if(value_path == "cCallHistoryReleaseSrc")
    {
        ccallhistoryreleasesrc.yfilter = yfilter;
    }
}

bool CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cCallHistorySetupTime" || name == "cCallHistoryPeerAddress" || name == "cCallHistoryPeerSubAddress" || name == "cCallHistoryPeerId" || name == "cCallHistoryPeerIfIndex" || name == "cCallHistoryLogicalIfIndex" || name == "cCallHistoryDisconnectCause" || name == "cCallHistoryDisconnectText" || name == "cCallHistoryConnectTime" || name == "cCallHistoryDisconnectTime" || name == "cCallHistoryCallOrigin" || name == "cCallHistoryChargedUnits" || name == "cCallHistoryInfoType" || name == "cCallHistoryTransmitPackets" || name == "cCallHistoryTransmitBytes" || name == "cCallHistoryReceivePackets" || name == "cCallHistoryReceiveBytes" || name == "cCallHistoryReleaseSource" || name == "cCallHistoryReleaseSrc")
        return true;
    return false;
}

CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiectable()
{

    yang_name = "cCallHistoryIecTable"; yang_parent_name = "CISCO-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::Ccallhistoryiectable::~Ccallhistoryiectable()
{
}

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::has_data() const
{
    for (std::size_t index=0; index<ccallhistoryiecentry.size(); index++)
    {
        if(ccallhistoryiecentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::has_operation() const
{
    for (std::size_t index=0; index<ccallhistoryiecentry.size(); index++)
    {
        if(ccallhistoryiecentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODIALCONTROLMIB::Ccallhistoryiectable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODIALCONTROLMIB::Ccallhistoryiectable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryIecTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::Ccallhistoryiectable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::Ccallhistoryiectable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cCallHistoryIecEntry")
    {
        auto c = std::make_shared<CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry>();
        c->parent = this;
        ccallhistoryiecentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::Ccallhistoryiectable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ccallhistoryiecentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODIALCONTROLMIB::Ccallhistoryiectable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODIALCONTROLMIB::Ccallhistoryiectable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIecEntry")
        return true;
    return false;
}

CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::Ccallhistoryiecentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    ccallhistoryiecindex{YType::uint32, "cCallHistoryIecIndex"},
    ccallhistoryiec{YType::str, "cCallHistoryIec"}
{

    yang_name = "cCallHistoryIecEntry"; yang_parent_name = "cCallHistoryIecTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::~Ccallhistoryiecentry()
{
}

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| ccallhistoryiecindex.is_set
	|| ccallhistoryiec.is_set;
}

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(ccallhistoryiecindex.yfilter)
	|| ydk::is_set(ccallhistoryiec.yfilter);
}

std::string CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DIAL-CONTROL-MIB:CISCO-DIAL-CONTROL-MIB/cCallHistoryIecTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cCallHistoryIecEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']" <<"[cCallHistoryIecIndex='" <<ccallhistoryiecindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (ccallhistoryiecindex.is_set || is_set(ccallhistoryiecindex.yfilter)) leaf_name_data.push_back(ccallhistoryiecindex.get_name_leafdata());
    if (ccallhistoryiec.is_set || is_set(ccallhistoryiec.yfilter)) leaf_name_data.push_back(ccallhistoryiec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODIALCONTROLMIB::Ccallhistoryiectable::Ccallhistoryiecentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cCallHistoryIecIndex" || name == "cCallHistoryIec")
        return true;
    return false;
}

const Enum::YLeaf CISCODIALCONTROLMIB::Cpeerglobalconfiguration::Cpeersearchtype::none {1, "none"};
const Enum::YLeaf CISCODIALCONTROLMIB::Cpeerglobalconfiguration::Cpeersearchtype::datavoice {2, "datavoice"};
const Enum::YLeaf CISCODIALCONTROLMIB::Cpeerglobalconfiguration::Cpeersearchtype::voicedata {3, "voicedata"};

const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::originate {1, "originate"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::answer {2, "answer"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistorycallorigin::callback {3, "callback"};

const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::other {1, "other"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::speech {2, "speech"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::unrestrictedDigital {3, "unrestrictedDigital"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::unrestrictedDigital56 {4, "unrestrictedDigital56"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::restrictedDigital {5, "restrictedDigital"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::audio31 {6, "audio31"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::audio7 {7, "audio7"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::video {8, "video"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::packetSwitched {9, "packetSwitched"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryinfotype::fax {10, "fax"};

const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::internalRelease {5, "internalRelease"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::internalCallControlApp {6, "internalCallControlApp"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::consoleCommand {7, "consoleCommand"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalRadiusServer {8, "externalRadiusServer"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalNmsApp {9, "externalNmsApp"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesource::externalCallControlAgent {10, "externalCallControlAgent"};

const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::callingPartyInPstn {1, "callingPartyInPstn"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::callingPartyInVoip {2, "callingPartyInVoip"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::calledPartyInPstn {3, "calledPartyInPstn"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::calledPartyInVoip {4, "calledPartyInVoip"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInPotsLeg {5, "internalReleaseInPotsLeg"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInVoipLeg {6, "internalReleaseInVoipLeg"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalCallControlApp {7, "internalCallControlApp"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::internalReleaseInVoipAAA {8, "internalReleaseInVoipAAA"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::consoleCommand {9, "consoleCommand"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalRadiusServer {10, "externalRadiusServer"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalNmsApp {11, "externalNmsApp"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalCallControlAgent {12, "externalCallControlAgent"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::gatekeeper {13, "gatekeeper"};
const Enum::YLeaf CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::Ccallhistoryreleasesrc::externalGKTMPServer {14, "externalGKTMPServer"};


}
}

