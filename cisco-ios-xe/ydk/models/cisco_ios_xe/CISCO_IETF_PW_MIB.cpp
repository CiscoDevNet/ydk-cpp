
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MIB {

CISCOIETFPWMIB::CISCOIETFPWMIB()
    :
    cpwvcobjects(std::make_shared<CISCOIETFPWMIB::Cpwvcobjects>())
	,cpwvctable(std::make_shared<CISCOIETFPWMIB::Cpwvctable>())
	,cpwvcperfcurrenttable(std::make_shared<CISCOIETFPWMIB::Cpwvcperfcurrenttable>())
	,cpwvcperfintervaltable(std::make_shared<CISCOIETFPWMIB::Cpwvcperfintervaltable>())
	,cpwvcperftotaltable(std::make_shared<CISCOIETFPWMIB::Cpwvcperftotaltable>())
	,cpwvcidmappingtable(std::make_shared<CISCOIETFPWMIB::Cpwvcidmappingtable>())
	,cpwvcpeermappingtable(std::make_shared<CISCOIETFPWMIB::Cpwvcpeermappingtable>())
{
    cpwvcobjects->parent = this;
    cpwvctable->parent = this;
    cpwvcperfcurrenttable->parent = this;
    cpwvcperfintervaltable->parent = this;
    cpwvcperftotaltable->parent = this;
    cpwvcidmappingtable->parent = this;
    cpwvcpeermappingtable->parent = this;

    yang_name = "CISCO-IETF-PW-MIB"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFPWMIB::~CISCOIETFPWMIB()
{
}

bool CISCOIETFPWMIB::has_data() const
{
    return (cpwvcobjects !=  nullptr && cpwvcobjects->has_data())
	|| (cpwvctable !=  nullptr && cpwvctable->has_data())
	|| (cpwvcperfcurrenttable !=  nullptr && cpwvcperfcurrenttable->has_data())
	|| (cpwvcperfintervaltable !=  nullptr && cpwvcperfintervaltable->has_data())
	|| (cpwvcperftotaltable !=  nullptr && cpwvcperftotaltable->has_data())
	|| (cpwvcidmappingtable !=  nullptr && cpwvcidmappingtable->has_data())
	|| (cpwvcpeermappingtable !=  nullptr && cpwvcpeermappingtable->has_data());
}

bool CISCOIETFPWMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcobjects !=  nullptr && cpwvcobjects->has_operation())
	|| (cpwvctable !=  nullptr && cpwvctable->has_operation())
	|| (cpwvcperfcurrenttable !=  nullptr && cpwvcperfcurrenttable->has_operation())
	|| (cpwvcperfintervaltable !=  nullptr && cpwvcperfintervaltable->has_operation())
	|| (cpwvcperftotaltable !=  nullptr && cpwvcperftotaltable->has_operation())
	|| (cpwvcidmappingtable !=  nullptr && cpwvcidmappingtable->has_operation())
	|| (cpwvcpeermappingtable !=  nullptr && cpwvcpeermappingtable->has_operation());
}

std::string CISCOIETFPWMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcObjects")
    {
        if(cpwvcobjects == nullptr)
        {
            cpwvcobjects = std::make_shared<CISCOIETFPWMIB::Cpwvcobjects>();
        }
        return cpwvcobjects;
    }

    if(child_yang_name == "cpwVcTable")
    {
        if(cpwvctable == nullptr)
        {
            cpwvctable = std::make_shared<CISCOIETFPWMIB::Cpwvctable>();
        }
        return cpwvctable;
    }

    if(child_yang_name == "cpwVcPerfCurrentTable")
    {
        if(cpwvcperfcurrenttable == nullptr)
        {
            cpwvcperfcurrenttable = std::make_shared<CISCOIETFPWMIB::Cpwvcperfcurrenttable>();
        }
        return cpwvcperfcurrenttable;
    }

    if(child_yang_name == "cpwVcPerfIntervalTable")
    {
        if(cpwvcperfintervaltable == nullptr)
        {
            cpwvcperfintervaltable = std::make_shared<CISCOIETFPWMIB::Cpwvcperfintervaltable>();
        }
        return cpwvcperfintervaltable;
    }

    if(child_yang_name == "cpwVcPerfTotalTable")
    {
        if(cpwvcperftotaltable == nullptr)
        {
            cpwvcperftotaltable = std::make_shared<CISCOIETFPWMIB::Cpwvcperftotaltable>();
        }
        return cpwvcperftotaltable;
    }

    if(child_yang_name == "cpwVcIdMappingTable")
    {
        if(cpwvcidmappingtable == nullptr)
        {
            cpwvcidmappingtable = std::make_shared<CISCOIETFPWMIB::Cpwvcidmappingtable>();
        }
        return cpwvcidmappingtable;
    }

    if(child_yang_name == "cpwVcPeerMappingTable")
    {
        if(cpwvcpeermappingtable == nullptr)
        {
            cpwvcpeermappingtable = std::make_shared<CISCOIETFPWMIB::Cpwvcpeermappingtable>();
        }
        return cpwvcpeermappingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpwvcobjects != nullptr)
    {
        children["cpwVcObjects"] = cpwvcobjects;
    }

    if(cpwvctable != nullptr)
    {
        children["cpwVcTable"] = cpwvctable;
    }

    if(cpwvcperfcurrenttable != nullptr)
    {
        children["cpwVcPerfCurrentTable"] = cpwvcperfcurrenttable;
    }

    if(cpwvcperfintervaltable != nullptr)
    {
        children["cpwVcPerfIntervalTable"] = cpwvcperfintervaltable;
    }

    if(cpwvcperftotaltable != nullptr)
    {
        children["cpwVcPerfTotalTable"] = cpwvcperftotaltable;
    }

    if(cpwvcidmappingtable != nullptr)
    {
        children["cpwVcIdMappingTable"] = cpwvcidmappingtable;
    }

    if(cpwvcpeermappingtable != nullptr)
    {
        children["cpwVcPeerMappingTable"] = cpwvcpeermappingtable;
    }

    return children;
}

void CISCOIETFPWMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFPWMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFPWMIB>();
}

std::string CISCOIETFPWMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFPWMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFPWMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFPWMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFPWMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcObjects" || name == "cpwVcTable" || name == "cpwVcPerfCurrentTable" || name == "cpwVcPerfIntervalTable" || name == "cpwVcPerfTotalTable" || name == "cpwVcIdMappingTable" || name == "cpwVcPeerMappingTable")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcobjects::Cpwvcobjects()
    :
    cpwvcindexnext{YType::uint32, "cpwVcIndexNext"},
    cpwvcperftotalerrorpackets{YType::uint64, "cpwVcPerfTotalErrorPackets"},
    cpwvcupdownnotifenable{YType::boolean, "cpwVcUpDownNotifEnable"},
    cpwvcnotifrate{YType::uint32, "cpwVcNotifRate"}
{

    yang_name = "cpwVcObjects"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcobjects::~Cpwvcobjects()
{
}

bool CISCOIETFPWMIB::Cpwvcobjects::has_data() const
{
    return cpwvcindexnext.is_set
	|| cpwvcperftotalerrorpackets.is_set
	|| cpwvcupdownnotifenable.is_set
	|| cpwvcnotifrate.is_set;
}

bool CISCOIETFPWMIB::Cpwvcobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindexnext.yfilter)
	|| ydk::is_set(cpwvcperftotalerrorpackets.yfilter)
	|| ydk::is_set(cpwvcupdownnotifenable.yfilter)
	|| ydk::is_set(cpwvcnotifrate.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindexnext.is_set || is_set(cpwvcindexnext.yfilter)) leaf_name_data.push_back(cpwvcindexnext.get_name_leafdata());
    if (cpwvcperftotalerrorpackets.is_set || is_set(cpwvcperftotalerrorpackets.yfilter)) leaf_name_data.push_back(cpwvcperftotalerrorpackets.get_name_leafdata());
    if (cpwvcupdownnotifenable.is_set || is_set(cpwvcupdownnotifenable.yfilter)) leaf_name_data.push_back(cpwvcupdownnotifenable.get_name_leafdata());
    if (cpwvcnotifrate.is_set || is_set(cpwvcnotifrate.yfilter)) leaf_name_data.push_back(cpwvcnotifrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndexNext")
    {
        cpwvcindexnext = value;
        cpwvcindexnext.value_namespace = name_space;
        cpwvcindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalErrorPackets")
    {
        cpwvcperftotalerrorpackets = value;
        cpwvcperftotalerrorpackets.value_namespace = name_space;
        cpwvcperftotalerrorpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcUpDownNotifEnable")
    {
        cpwvcupdownnotifenable = value;
        cpwvcupdownnotifenable.value_namespace = name_space;
        cpwvcupdownnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcNotifRate")
    {
        cpwvcnotifrate = value;
        cpwvcnotifrate.value_namespace = name_space;
        cpwvcnotifrate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndexNext")
    {
        cpwvcindexnext.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalErrorPackets")
    {
        cpwvcperftotalerrorpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcUpDownNotifEnable")
    {
        cpwvcupdownnotifenable.yfilter = yfilter;
    }
    if(value_path == "cpwVcNotifRate")
    {
        cpwvcnotifrate.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndexNext" || name == "cpwVcPerfTotalErrorPackets" || name == "cpwVcUpDownNotifEnable" || name == "cpwVcNotifRate")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvctable::Cpwvctable()
{

    yang_name = "cpwVcTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvctable::~Cpwvctable()
{
}

bool CISCOIETFPWMIB::Cpwvctable::has_data() const
{
    for (std::size_t index=0; index<cpwvcentry.size(); index++)
    {
        if(cpwvcentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvctable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcentry.size(); index++)
    {
        if(cpwvcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvctable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvctable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvctable::Cpwvcentry>();
        c->parent = this;
        cpwvcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcentry()
    :
    cpwvcindex{YType::uint32, "cpwVcIndex"},
    cpwvctype{YType::enumeration, "cpwVcType"},
    cpwvcowner{YType::enumeration, "cpwVcOwner"},
    cpwvcpsntype{YType::enumeration, "cpwVcPsnType"},
    cpwvcsetuppriority{YType::int32, "cpwVcSetUpPriority"},
    cpwvcholdingpriority{YType::int32, "cpwVcHoldingPriority"},
    cpwvcinboundmode{YType::enumeration, "cpwVcInboundMode"},
    cpwvcpeeraddrtype{YType::enumeration, "cpwVcPeerAddrType"},
    cpwvcpeeraddr{YType::str, "cpwVcPeerAddr"},
    cpwvcid{YType::uint32, "cpwVcID"},
    cpwvclocalgroupid{YType::uint32, "cpwVcLocalGroupID"},
    cpwvccontrolword{YType::boolean, "cpwVcControlWord"},
    cpwvclocalifmtu{YType::uint32, "cpwVcLocalIfMtu"},
    cpwvclocalifstring{YType::boolean, "cpwVcLocalIfString"},
    cpwvcremotegroupid{YType::uint32, "cpwVcRemoteGroupID"},
    cpwvcremotecontrolword{YType::enumeration, "cpwVcRemoteControlWord"},
    cpwvcremoteifmtu{YType::uint32, "cpwVcRemoteIfMtu"},
    cpwvcremoteifstring{YType::str, "cpwVcRemoteIfString"},
    cpwvcoutboundvclabel{YType::uint32, "cpwVcOutboundVcLabel"},
    cpwvcinboundvclabel{YType::uint32, "cpwVcInboundVcLabel"},
    cpwvcname{YType::str, "cpwVcName"},
    cpwvcdescr{YType::str, "cpwVcDescr"},
    cpwvccreatetime{YType::uint32, "cpwVcCreateTime"},
    cpwvcuptime{YType::uint32, "cpwVcUpTime"},
    cpwvcadminstatus{YType::enumeration, "cpwVcAdminStatus"},
    cpwvcoperstatus{YType::enumeration, "cpwVcOperStatus"},
    cpwvcinboundoperstatus{YType::enumeration, "cpwVcInboundOperStatus"},
    cpwvcoutboundoperstatus{YType::enumeration, "cpwVcOutboundOperStatus"},
    cpwvctimeelapsed{YType::int32, "cpwVcTimeElapsed"},
    cpwvcvalidintervals{YType::int32, "cpwVcValidIntervals"},
    cpwvcrowstatus{YType::enumeration, "cpwVcRowStatus"},
    cpwvcstoragetype{YType::enumeration, "cpwVcStorageType"}
{

    yang_name = "cpwVcEntry"; yang_parent_name = "cpwVcTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::~Cpwvcentry()
{
}

bool CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvctype.is_set
	|| cpwvcowner.is_set
	|| cpwvcpsntype.is_set
	|| cpwvcsetuppriority.is_set
	|| cpwvcholdingpriority.is_set
	|| cpwvcinboundmode.is_set
	|| cpwvcpeeraddrtype.is_set
	|| cpwvcpeeraddr.is_set
	|| cpwvcid.is_set
	|| cpwvclocalgroupid.is_set
	|| cpwvccontrolword.is_set
	|| cpwvclocalifmtu.is_set
	|| cpwvclocalifstring.is_set
	|| cpwvcremotegroupid.is_set
	|| cpwvcremotecontrolword.is_set
	|| cpwvcremoteifmtu.is_set
	|| cpwvcremoteifstring.is_set
	|| cpwvcoutboundvclabel.is_set
	|| cpwvcinboundvclabel.is_set
	|| cpwvcname.is_set
	|| cpwvcdescr.is_set
	|| cpwvccreatetime.is_set
	|| cpwvcuptime.is_set
	|| cpwvcadminstatus.is_set
	|| cpwvcoperstatus.is_set
	|| cpwvcinboundoperstatus.is_set
	|| cpwvcoutboundoperstatus.is_set
	|| cpwvctimeelapsed.is_set
	|| cpwvcvalidintervals.is_set
	|| cpwvcrowstatus.is_set
	|| cpwvcstoragetype.is_set;
}

bool CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvctype.yfilter)
	|| ydk::is_set(cpwvcowner.yfilter)
	|| ydk::is_set(cpwvcpsntype.yfilter)
	|| ydk::is_set(cpwvcsetuppriority.yfilter)
	|| ydk::is_set(cpwvcholdingpriority.yfilter)
	|| ydk::is_set(cpwvcinboundmode.yfilter)
	|| ydk::is_set(cpwvcpeeraddrtype.yfilter)
	|| ydk::is_set(cpwvcpeeraddr.yfilter)
	|| ydk::is_set(cpwvcid.yfilter)
	|| ydk::is_set(cpwvclocalgroupid.yfilter)
	|| ydk::is_set(cpwvccontrolword.yfilter)
	|| ydk::is_set(cpwvclocalifmtu.yfilter)
	|| ydk::is_set(cpwvclocalifstring.yfilter)
	|| ydk::is_set(cpwvcremotegroupid.yfilter)
	|| ydk::is_set(cpwvcremotecontrolword.yfilter)
	|| ydk::is_set(cpwvcremoteifmtu.yfilter)
	|| ydk::is_set(cpwvcremoteifstring.yfilter)
	|| ydk::is_set(cpwvcoutboundvclabel.yfilter)
	|| ydk::is_set(cpwvcinboundvclabel.yfilter)
	|| ydk::is_set(cpwvcname.yfilter)
	|| ydk::is_set(cpwvcdescr.yfilter)
	|| ydk::is_set(cpwvccreatetime.yfilter)
	|| ydk::is_set(cpwvcuptime.yfilter)
	|| ydk::is_set(cpwvcadminstatus.yfilter)
	|| ydk::is_set(cpwvcoperstatus.yfilter)
	|| ydk::is_set(cpwvcinboundoperstatus.yfilter)
	|| ydk::is_set(cpwvcoutboundoperstatus.yfilter)
	|| ydk::is_set(cpwvctimeelapsed.yfilter)
	|| ydk::is_set(cpwvcvalidintervals.yfilter)
	|| ydk::is_set(cpwvcrowstatus.yfilter)
	|| ydk::is_set(cpwvcstoragetype.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvctype.is_set || is_set(cpwvctype.yfilter)) leaf_name_data.push_back(cpwvctype.get_name_leafdata());
    if (cpwvcowner.is_set || is_set(cpwvcowner.yfilter)) leaf_name_data.push_back(cpwvcowner.get_name_leafdata());
    if (cpwvcpsntype.is_set || is_set(cpwvcpsntype.yfilter)) leaf_name_data.push_back(cpwvcpsntype.get_name_leafdata());
    if (cpwvcsetuppriority.is_set || is_set(cpwvcsetuppriority.yfilter)) leaf_name_data.push_back(cpwvcsetuppriority.get_name_leafdata());
    if (cpwvcholdingpriority.is_set || is_set(cpwvcholdingpriority.yfilter)) leaf_name_data.push_back(cpwvcholdingpriority.get_name_leafdata());
    if (cpwvcinboundmode.is_set || is_set(cpwvcinboundmode.yfilter)) leaf_name_data.push_back(cpwvcinboundmode.get_name_leafdata());
    if (cpwvcpeeraddrtype.is_set || is_set(cpwvcpeeraddrtype.yfilter)) leaf_name_data.push_back(cpwvcpeeraddrtype.get_name_leafdata());
    if (cpwvcpeeraddr.is_set || is_set(cpwvcpeeraddr.yfilter)) leaf_name_data.push_back(cpwvcpeeraddr.get_name_leafdata());
    if (cpwvcid.is_set || is_set(cpwvcid.yfilter)) leaf_name_data.push_back(cpwvcid.get_name_leafdata());
    if (cpwvclocalgroupid.is_set || is_set(cpwvclocalgroupid.yfilter)) leaf_name_data.push_back(cpwvclocalgroupid.get_name_leafdata());
    if (cpwvccontrolword.is_set || is_set(cpwvccontrolword.yfilter)) leaf_name_data.push_back(cpwvccontrolword.get_name_leafdata());
    if (cpwvclocalifmtu.is_set || is_set(cpwvclocalifmtu.yfilter)) leaf_name_data.push_back(cpwvclocalifmtu.get_name_leafdata());
    if (cpwvclocalifstring.is_set || is_set(cpwvclocalifstring.yfilter)) leaf_name_data.push_back(cpwvclocalifstring.get_name_leafdata());
    if (cpwvcremotegroupid.is_set || is_set(cpwvcremotegroupid.yfilter)) leaf_name_data.push_back(cpwvcremotegroupid.get_name_leafdata());
    if (cpwvcremotecontrolword.is_set || is_set(cpwvcremotecontrolword.yfilter)) leaf_name_data.push_back(cpwvcremotecontrolword.get_name_leafdata());
    if (cpwvcremoteifmtu.is_set || is_set(cpwvcremoteifmtu.yfilter)) leaf_name_data.push_back(cpwvcremoteifmtu.get_name_leafdata());
    if (cpwvcremoteifstring.is_set || is_set(cpwvcremoteifstring.yfilter)) leaf_name_data.push_back(cpwvcremoteifstring.get_name_leafdata());
    if (cpwvcoutboundvclabel.is_set || is_set(cpwvcoutboundvclabel.yfilter)) leaf_name_data.push_back(cpwvcoutboundvclabel.get_name_leafdata());
    if (cpwvcinboundvclabel.is_set || is_set(cpwvcinboundvclabel.yfilter)) leaf_name_data.push_back(cpwvcinboundvclabel.get_name_leafdata());
    if (cpwvcname.is_set || is_set(cpwvcname.yfilter)) leaf_name_data.push_back(cpwvcname.get_name_leafdata());
    if (cpwvcdescr.is_set || is_set(cpwvcdescr.yfilter)) leaf_name_data.push_back(cpwvcdescr.get_name_leafdata());
    if (cpwvccreatetime.is_set || is_set(cpwvccreatetime.yfilter)) leaf_name_data.push_back(cpwvccreatetime.get_name_leafdata());
    if (cpwvcuptime.is_set || is_set(cpwvcuptime.yfilter)) leaf_name_data.push_back(cpwvcuptime.get_name_leafdata());
    if (cpwvcadminstatus.is_set || is_set(cpwvcadminstatus.yfilter)) leaf_name_data.push_back(cpwvcadminstatus.get_name_leafdata());
    if (cpwvcoperstatus.is_set || is_set(cpwvcoperstatus.yfilter)) leaf_name_data.push_back(cpwvcoperstatus.get_name_leafdata());
    if (cpwvcinboundoperstatus.is_set || is_set(cpwvcinboundoperstatus.yfilter)) leaf_name_data.push_back(cpwvcinboundoperstatus.get_name_leafdata());
    if (cpwvcoutboundoperstatus.is_set || is_set(cpwvcoutboundoperstatus.yfilter)) leaf_name_data.push_back(cpwvcoutboundoperstatus.get_name_leafdata());
    if (cpwvctimeelapsed.is_set || is_set(cpwvctimeelapsed.yfilter)) leaf_name_data.push_back(cpwvctimeelapsed.get_name_leafdata());
    if (cpwvcvalidintervals.is_set || is_set(cpwvcvalidintervals.yfilter)) leaf_name_data.push_back(cpwvcvalidintervals.get_name_leafdata());
    if (cpwvcrowstatus.is_set || is_set(cpwvcrowstatus.yfilter)) leaf_name_data.push_back(cpwvcrowstatus.get_name_leafdata());
    if (cpwvcstoragetype.is_set || is_set(cpwvcstoragetype.yfilter)) leaf_name_data.push_back(cpwvcstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcType")
    {
        cpwvctype = value;
        cpwvctype.value_namespace = name_space;
        cpwvctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcOwner")
    {
        cpwvcowner = value;
        cpwvcowner.value_namespace = name_space;
        cpwvcowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPsnType")
    {
        cpwvcpsntype = value;
        cpwvcpsntype.value_namespace = name_space;
        cpwvcpsntype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcSetUpPriority")
    {
        cpwvcsetuppriority = value;
        cpwvcsetuppriority.value_namespace = name_space;
        cpwvcsetuppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcHoldingPriority")
    {
        cpwvcholdingpriority = value;
        cpwvcholdingpriority.value_namespace = name_space;
        cpwvcholdingpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcInboundMode")
    {
        cpwvcinboundmode = value;
        cpwvcinboundmode.value_namespace = name_space;
        cpwvcinboundmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerAddrType")
    {
        cpwvcpeeraddrtype = value;
        cpwvcpeeraddrtype.value_namespace = name_space;
        cpwvcpeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerAddr")
    {
        cpwvcpeeraddr = value;
        cpwvcpeeraddr.value_namespace = name_space;
        cpwvcpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcID")
    {
        cpwvcid = value;
        cpwvcid.value_namespace = name_space;
        cpwvcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcLocalGroupID")
    {
        cpwvclocalgroupid = value;
        cpwvclocalgroupid.value_namespace = name_space;
        cpwvclocalgroupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcControlWord")
    {
        cpwvccontrolword = value;
        cpwvccontrolword.value_namespace = name_space;
        cpwvccontrolword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcLocalIfMtu")
    {
        cpwvclocalifmtu = value;
        cpwvclocalifmtu.value_namespace = name_space;
        cpwvclocalifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcLocalIfString")
    {
        cpwvclocalifstring = value;
        cpwvclocalifstring.value_namespace = name_space;
        cpwvclocalifstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcRemoteGroupID")
    {
        cpwvcremotegroupid = value;
        cpwvcremotegroupid.value_namespace = name_space;
        cpwvcremotegroupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcRemoteControlWord")
    {
        cpwvcremotecontrolword = value;
        cpwvcremotecontrolword.value_namespace = name_space;
        cpwvcremotecontrolword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcRemoteIfMtu")
    {
        cpwvcremoteifmtu = value;
        cpwvcremoteifmtu.value_namespace = name_space;
        cpwvcremoteifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcRemoteIfString")
    {
        cpwvcremoteifstring = value;
        cpwvcremoteifstring.value_namespace = name_space;
        cpwvcremoteifstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcOutboundVcLabel")
    {
        cpwvcoutboundvclabel = value;
        cpwvcoutboundvclabel.value_namespace = name_space;
        cpwvcoutboundvclabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcInboundVcLabel")
    {
        cpwvcinboundvclabel = value;
        cpwvcinboundvclabel.value_namespace = name_space;
        cpwvcinboundvclabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcName")
    {
        cpwvcname = value;
        cpwvcname.value_namespace = name_space;
        cpwvcname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcDescr")
    {
        cpwvcdescr = value;
        cpwvcdescr.value_namespace = name_space;
        cpwvcdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcCreateTime")
    {
        cpwvccreatetime = value;
        cpwvccreatetime.value_namespace = name_space;
        cpwvccreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcUpTime")
    {
        cpwvcuptime = value;
        cpwvcuptime.value_namespace = name_space;
        cpwvcuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcAdminStatus")
    {
        cpwvcadminstatus = value;
        cpwvcadminstatus.value_namespace = name_space;
        cpwvcadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcOperStatus")
    {
        cpwvcoperstatus = value;
        cpwvcoperstatus.value_namespace = name_space;
        cpwvcoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcInboundOperStatus")
    {
        cpwvcinboundoperstatus = value;
        cpwvcinboundoperstatus.value_namespace = name_space;
        cpwvcinboundoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcOutboundOperStatus")
    {
        cpwvcoutboundoperstatus = value;
        cpwvcoutboundoperstatus.value_namespace = name_space;
        cpwvcoutboundoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcTimeElapsed")
    {
        cpwvctimeelapsed = value;
        cpwvctimeelapsed.value_namespace = name_space;
        cpwvctimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcValidIntervals")
    {
        cpwvcvalidintervals = value;
        cpwvcvalidintervals.value_namespace = name_space;
        cpwvcvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcRowStatus")
    {
        cpwvcrowstatus = value;
        cpwvcrowstatus.value_namespace = name_space;
        cpwvcrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcStorageType")
    {
        cpwvcstoragetype = value;
        cpwvcstoragetype.value_namespace = name_space;
        cpwvcstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcType")
    {
        cpwvctype.yfilter = yfilter;
    }
    if(value_path == "cpwVcOwner")
    {
        cpwvcowner.yfilter = yfilter;
    }
    if(value_path == "cpwVcPsnType")
    {
        cpwvcpsntype.yfilter = yfilter;
    }
    if(value_path == "cpwVcSetUpPriority")
    {
        cpwvcsetuppriority.yfilter = yfilter;
    }
    if(value_path == "cpwVcHoldingPriority")
    {
        cpwvcholdingpriority.yfilter = yfilter;
    }
    if(value_path == "cpwVcInboundMode")
    {
        cpwvcinboundmode.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerAddrType")
    {
        cpwvcpeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerAddr")
    {
        cpwvcpeeraddr.yfilter = yfilter;
    }
    if(value_path == "cpwVcID")
    {
        cpwvcid.yfilter = yfilter;
    }
    if(value_path == "cpwVcLocalGroupID")
    {
        cpwvclocalgroupid.yfilter = yfilter;
    }
    if(value_path == "cpwVcControlWord")
    {
        cpwvccontrolword.yfilter = yfilter;
    }
    if(value_path == "cpwVcLocalIfMtu")
    {
        cpwvclocalifmtu.yfilter = yfilter;
    }
    if(value_path == "cpwVcLocalIfString")
    {
        cpwvclocalifstring.yfilter = yfilter;
    }
    if(value_path == "cpwVcRemoteGroupID")
    {
        cpwvcremotegroupid.yfilter = yfilter;
    }
    if(value_path == "cpwVcRemoteControlWord")
    {
        cpwvcremotecontrolword.yfilter = yfilter;
    }
    if(value_path == "cpwVcRemoteIfMtu")
    {
        cpwvcremoteifmtu.yfilter = yfilter;
    }
    if(value_path == "cpwVcRemoteIfString")
    {
        cpwvcremoteifstring.yfilter = yfilter;
    }
    if(value_path == "cpwVcOutboundVcLabel")
    {
        cpwvcoutboundvclabel.yfilter = yfilter;
    }
    if(value_path == "cpwVcInboundVcLabel")
    {
        cpwvcinboundvclabel.yfilter = yfilter;
    }
    if(value_path == "cpwVcName")
    {
        cpwvcname.yfilter = yfilter;
    }
    if(value_path == "cpwVcDescr")
    {
        cpwvcdescr.yfilter = yfilter;
    }
    if(value_path == "cpwVcCreateTime")
    {
        cpwvccreatetime.yfilter = yfilter;
    }
    if(value_path == "cpwVcUpTime")
    {
        cpwvcuptime.yfilter = yfilter;
    }
    if(value_path == "cpwVcAdminStatus")
    {
        cpwvcadminstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcOperStatus")
    {
        cpwvcoperstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcInboundOperStatus")
    {
        cpwvcinboundoperstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcOutboundOperStatus")
    {
        cpwvcoutboundoperstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcTimeElapsed")
    {
        cpwvctimeelapsed.yfilter = yfilter;
    }
    if(value_path == "cpwVcValidIntervals")
    {
        cpwvcvalidintervals.yfilter = yfilter;
    }
    if(value_path == "cpwVcRowStatus")
    {
        cpwvcrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcStorageType")
    {
        cpwvcstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcType" || name == "cpwVcOwner" || name == "cpwVcPsnType" || name == "cpwVcSetUpPriority" || name == "cpwVcHoldingPriority" || name == "cpwVcInboundMode" || name == "cpwVcPeerAddrType" || name == "cpwVcPeerAddr" || name == "cpwVcID" || name == "cpwVcLocalGroupID" || name == "cpwVcControlWord" || name == "cpwVcLocalIfMtu" || name == "cpwVcLocalIfString" || name == "cpwVcRemoteGroupID" || name == "cpwVcRemoteControlWord" || name == "cpwVcRemoteIfMtu" || name == "cpwVcRemoteIfString" || name == "cpwVcOutboundVcLabel" || name == "cpwVcInboundVcLabel" || name == "cpwVcName" || name == "cpwVcDescr" || name == "cpwVcCreateTime" || name == "cpwVcUpTime" || name == "cpwVcAdminStatus" || name == "cpwVcOperStatus" || name == "cpwVcInboundOperStatus" || name == "cpwVcOutboundOperStatus" || name == "cpwVcTimeElapsed" || name == "cpwVcValidIntervals" || name == "cpwVcRowStatus" || name == "cpwVcStorageType")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrenttable()
{

    yang_name = "cpwVcPerfCurrentTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperfcurrenttable::~Cpwvcperfcurrenttable()
{
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperfcurrententry.size(); index++)
    {
        if(cpwvcperfcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperfcurrententry.size(); index++)
    {
        if(cpwvcperfcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperfcurrenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperfcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperfcurrenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperfcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfCurrentEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry>();
        c->parent = this;
        cpwvcperfcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperfcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcperfcurrententry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvcperfcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvcperfcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcPerfCurrentEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::Cpwvcperfcurrententry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperfcurrentinhcpackets{YType::uint64, "cpwVcPerfCurrentInHCPackets"},
    cpwvcperfcurrentinhcbytes{YType::uint64, "cpwVcPerfCurrentInHCBytes"},
    cpwvcperfcurrentouthcpackets{YType::uint64, "cpwVcPerfCurrentOutHCPackets"},
    cpwvcperfcurrentouthcbytes{YType::uint64, "cpwVcPerfCurrentOutHCBytes"}
{

    yang_name = "cpwVcPerfCurrentEntry"; yang_parent_name = "cpwVcPerfCurrentTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::~Cpwvcperfcurrententry()
{
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperfcurrentinhcpackets.is_set
	|| cpwvcperfcurrentinhcbytes.is_set
	|| cpwvcperfcurrentouthcpackets.is_set
	|| cpwvcperfcurrentouthcbytes.is_set;
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcperfcurrentinhcpackets.yfilter)
	|| ydk::is_set(cpwvcperfcurrentinhcbytes.yfilter)
	|| ydk::is_set(cpwvcperfcurrentouthcpackets.yfilter)
	|| ydk::is_set(cpwvcperfcurrentouthcbytes.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfCurrentEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperfcurrentinhcpackets.is_set || is_set(cpwvcperfcurrentinhcpackets.yfilter)) leaf_name_data.push_back(cpwvcperfcurrentinhcpackets.get_name_leafdata());
    if (cpwvcperfcurrentinhcbytes.is_set || is_set(cpwvcperfcurrentinhcbytes.yfilter)) leaf_name_data.push_back(cpwvcperfcurrentinhcbytes.get_name_leafdata());
    if (cpwvcperfcurrentouthcpackets.is_set || is_set(cpwvcperfcurrentouthcpackets.yfilter)) leaf_name_data.push_back(cpwvcperfcurrentouthcpackets.get_name_leafdata());
    if (cpwvcperfcurrentouthcbytes.is_set || is_set(cpwvcperfcurrentouthcbytes.yfilter)) leaf_name_data.push_back(cpwvcperfcurrentouthcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfCurrentInHCPackets")
    {
        cpwvcperfcurrentinhcpackets = value;
        cpwvcperfcurrentinhcpackets.value_namespace = name_space;
        cpwvcperfcurrentinhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfCurrentInHCBytes")
    {
        cpwvcperfcurrentinhcbytes = value;
        cpwvcperfcurrentinhcbytes.value_namespace = name_space;
        cpwvcperfcurrentinhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfCurrentOutHCPackets")
    {
        cpwvcperfcurrentouthcpackets = value;
        cpwvcperfcurrentouthcpackets.value_namespace = name_space;
        cpwvcperfcurrentouthcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfCurrentOutHCBytes")
    {
        cpwvcperfcurrentouthcbytes = value;
        cpwvcperfcurrentouthcbytes.value_namespace = name_space;
        cpwvcperfcurrentouthcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfCurrentInHCPackets")
    {
        cpwvcperfcurrentinhcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfCurrentInHCBytes")
    {
        cpwvcperfcurrentinhcbytes.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfCurrentOutHCPackets")
    {
        cpwvcperfcurrentouthcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfCurrentOutHCBytes")
    {
        cpwvcperfcurrentouthcbytes.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcperfcurrenttable::Cpwvcperfcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcPerfCurrentInHCPackets" || name == "cpwVcPerfCurrentInHCBytes" || name == "cpwVcPerfCurrentOutHCPackets" || name == "cpwVcPerfCurrentOutHCBytes")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervaltable()
{

    yang_name = "cpwVcPerfIntervalTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperfintervaltable::~Cpwvcperfintervaltable()
{
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperfintervalentry.size(); index++)
    {
        if(cpwvcperfintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperfintervalentry.size(); index++)
    {
        if(cpwvcperfintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperfintervaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperfintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperfintervaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperfintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfIntervalEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry>();
        c->parent = this;
        cpwvcperfintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperfintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcperfintervalentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvcperfintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvcperfintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcPerfIntervalEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::Cpwvcperfintervalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperfintervalnumber{YType::int32, "cpwVcPerfIntervalNumber"},
    cpwvcperfintervalvaliddata{YType::boolean, "cpwVcPerfIntervalValidData"},
    cpwvcperfintervaltimeelapsed{YType::int32, "cpwVcPerfIntervalTimeElapsed"},
    cpwvcperfintervalinhcpackets{YType::uint64, "cpwVcPerfIntervalInHCPackets"},
    cpwvcperfintervalinhcbytes{YType::uint64, "cpwVcPerfIntervalInHCBytes"},
    cpwvcperfintervalouthcpackets{YType::uint64, "cpwVcPerfIntervalOutHCPackets"},
    cpwvcperfintervalouthcbytes{YType::uint64, "cpwVcPerfIntervalOutHCBytes"}
{

    yang_name = "cpwVcPerfIntervalEntry"; yang_parent_name = "cpwVcPerfIntervalTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::~Cpwvcperfintervalentry()
{
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperfintervalnumber.is_set
	|| cpwvcperfintervalvaliddata.is_set
	|| cpwvcperfintervaltimeelapsed.is_set
	|| cpwvcperfintervalinhcpackets.is_set
	|| cpwvcperfintervalinhcbytes.is_set
	|| cpwvcperfintervalouthcpackets.is_set
	|| cpwvcperfintervalouthcbytes.is_set;
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcperfintervalnumber.yfilter)
	|| ydk::is_set(cpwvcperfintervalvaliddata.yfilter)
	|| ydk::is_set(cpwvcperfintervaltimeelapsed.yfilter)
	|| ydk::is_set(cpwvcperfintervalinhcpackets.yfilter)
	|| ydk::is_set(cpwvcperfintervalinhcbytes.yfilter)
	|| ydk::is_set(cpwvcperfintervalouthcpackets.yfilter)
	|| ydk::is_set(cpwvcperfintervalouthcbytes.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfIntervalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcPerfIntervalNumber='" <<cpwvcperfintervalnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperfintervalnumber.is_set || is_set(cpwvcperfintervalnumber.yfilter)) leaf_name_data.push_back(cpwvcperfintervalnumber.get_name_leafdata());
    if (cpwvcperfintervalvaliddata.is_set || is_set(cpwvcperfintervalvaliddata.yfilter)) leaf_name_data.push_back(cpwvcperfintervalvaliddata.get_name_leafdata());
    if (cpwvcperfintervaltimeelapsed.is_set || is_set(cpwvcperfintervaltimeelapsed.yfilter)) leaf_name_data.push_back(cpwvcperfintervaltimeelapsed.get_name_leafdata());
    if (cpwvcperfintervalinhcpackets.is_set || is_set(cpwvcperfintervalinhcpackets.yfilter)) leaf_name_data.push_back(cpwvcperfintervalinhcpackets.get_name_leafdata());
    if (cpwvcperfintervalinhcbytes.is_set || is_set(cpwvcperfintervalinhcbytes.yfilter)) leaf_name_data.push_back(cpwvcperfintervalinhcbytes.get_name_leafdata());
    if (cpwvcperfintervalouthcpackets.is_set || is_set(cpwvcperfintervalouthcpackets.yfilter)) leaf_name_data.push_back(cpwvcperfintervalouthcpackets.get_name_leafdata());
    if (cpwvcperfintervalouthcbytes.is_set || is_set(cpwvcperfintervalouthcbytes.yfilter)) leaf_name_data.push_back(cpwvcperfintervalouthcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalNumber")
    {
        cpwvcperfintervalnumber = value;
        cpwvcperfintervalnumber.value_namespace = name_space;
        cpwvcperfintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalValidData")
    {
        cpwvcperfintervalvaliddata = value;
        cpwvcperfintervalvaliddata.value_namespace = name_space;
        cpwvcperfintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalTimeElapsed")
    {
        cpwvcperfintervaltimeelapsed = value;
        cpwvcperfintervaltimeelapsed.value_namespace = name_space;
        cpwvcperfintervaltimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalInHCPackets")
    {
        cpwvcperfintervalinhcpackets = value;
        cpwvcperfintervalinhcpackets.value_namespace = name_space;
        cpwvcperfintervalinhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalInHCBytes")
    {
        cpwvcperfintervalinhcbytes = value;
        cpwvcperfintervalinhcbytes.value_namespace = name_space;
        cpwvcperfintervalinhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalOutHCPackets")
    {
        cpwvcperfintervalouthcpackets = value;
        cpwvcperfintervalouthcpackets.value_namespace = name_space;
        cpwvcperfintervalouthcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfIntervalOutHCBytes")
    {
        cpwvcperfintervalouthcbytes = value;
        cpwvcperfintervalouthcbytes.value_namespace = name_space;
        cpwvcperfintervalouthcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalNumber")
    {
        cpwvcperfintervalnumber.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalValidData")
    {
        cpwvcperfintervalvaliddata.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalTimeElapsed")
    {
        cpwvcperfintervaltimeelapsed.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalInHCPackets")
    {
        cpwvcperfintervalinhcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalInHCBytes")
    {
        cpwvcperfintervalinhcbytes.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalOutHCPackets")
    {
        cpwvcperfintervalouthcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfIntervalOutHCBytes")
    {
        cpwvcperfintervalouthcbytes.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcperfintervaltable::Cpwvcperfintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcPerfIntervalNumber" || name == "cpwVcPerfIntervalValidData" || name == "cpwVcPerfIntervalTimeElapsed" || name == "cpwVcPerfIntervalInHCPackets" || name == "cpwVcPerfIntervalInHCBytes" || name == "cpwVcPerfIntervalOutHCPackets" || name == "cpwVcPerfIntervalOutHCBytes")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotaltable()
{

    yang_name = "cpwVcPerfTotalTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperftotaltable::~Cpwvcperftotaltable()
{
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::has_data() const
{
    for (std::size_t index=0; index<cpwvcperftotalentry.size(); index++)
    {
        if(cpwvcperftotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcperftotalentry.size(); index++)
    {
        if(cpwvcperftotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperftotaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperftotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperftotaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperftotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPerfTotalEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry>();
        c->parent = this;
        cpwvcperftotalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperftotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcperftotalentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvcperftotaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvcperftotaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcPerfTotalEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::Cpwvcperftotalentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcperftotalinhcpackets{YType::uint64, "cpwVcPerfTotalInHCPackets"},
    cpwvcperftotalinhcbytes{YType::uint64, "cpwVcPerfTotalInHCBytes"},
    cpwvcperftotalouthcpackets{YType::uint64, "cpwVcPerfTotalOutHCPackets"},
    cpwvcperftotalouthcbytes{YType::uint64, "cpwVcPerfTotalOutHCBytes"},
    cpwvcperftotaldiscontinuitytime{YType::uint32, "cpwVcPerfTotalDiscontinuityTime"}
{

    yang_name = "cpwVcPerfTotalEntry"; yang_parent_name = "cpwVcPerfTotalTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::~Cpwvcperftotalentry()
{
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcperftotalinhcpackets.is_set
	|| cpwvcperftotalinhcbytes.is_set
	|| cpwvcperftotalouthcpackets.is_set
	|| cpwvcperftotalouthcbytes.is_set
	|| cpwvcperftotaldiscontinuitytime.is_set;
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcperftotalinhcpackets.yfilter)
	|| ydk::is_set(cpwvcperftotalinhcbytes.yfilter)
	|| ydk::is_set(cpwvcperftotalouthcpackets.yfilter)
	|| ydk::is_set(cpwvcperftotalouthcbytes.yfilter)
	|| ydk::is_set(cpwvcperftotaldiscontinuitytime.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPerfTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPerfTotalEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcperftotalinhcpackets.is_set || is_set(cpwvcperftotalinhcpackets.yfilter)) leaf_name_data.push_back(cpwvcperftotalinhcpackets.get_name_leafdata());
    if (cpwvcperftotalinhcbytes.is_set || is_set(cpwvcperftotalinhcbytes.yfilter)) leaf_name_data.push_back(cpwvcperftotalinhcbytes.get_name_leafdata());
    if (cpwvcperftotalouthcpackets.is_set || is_set(cpwvcperftotalouthcpackets.yfilter)) leaf_name_data.push_back(cpwvcperftotalouthcpackets.get_name_leafdata());
    if (cpwvcperftotalouthcbytes.is_set || is_set(cpwvcperftotalouthcbytes.yfilter)) leaf_name_data.push_back(cpwvcperftotalouthcbytes.get_name_leafdata());
    if (cpwvcperftotaldiscontinuitytime.is_set || is_set(cpwvcperftotaldiscontinuitytime.yfilter)) leaf_name_data.push_back(cpwvcperftotaldiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalInHCPackets")
    {
        cpwvcperftotalinhcpackets = value;
        cpwvcperftotalinhcpackets.value_namespace = name_space;
        cpwvcperftotalinhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalInHCBytes")
    {
        cpwvcperftotalinhcbytes = value;
        cpwvcperftotalinhcbytes.value_namespace = name_space;
        cpwvcperftotalinhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalOutHCPackets")
    {
        cpwvcperftotalouthcpackets = value;
        cpwvcperftotalouthcpackets.value_namespace = name_space;
        cpwvcperftotalouthcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalOutHCBytes")
    {
        cpwvcperftotalouthcbytes = value;
        cpwvcperftotalouthcbytes.value_namespace = name_space;
        cpwvcperftotalouthcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPerfTotalDiscontinuityTime")
    {
        cpwvcperftotaldiscontinuitytime = value;
        cpwvcperftotaldiscontinuitytime.value_namespace = name_space;
        cpwvcperftotaldiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalInHCPackets")
    {
        cpwvcperftotalinhcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalInHCBytes")
    {
        cpwvcperftotalinhcbytes.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalOutHCPackets")
    {
        cpwvcperftotalouthcpackets.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalOutHCBytes")
    {
        cpwvcperftotalouthcbytes.yfilter = yfilter;
    }
    if(value_path == "cpwVcPerfTotalDiscontinuityTime")
    {
        cpwvcperftotaldiscontinuitytime.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcperftotaltable::Cpwvcperftotalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcPerfTotalInHCPackets" || name == "cpwVcPerfTotalInHCBytes" || name == "cpwVcPerfTotalOutHCPackets" || name == "cpwVcPerfTotalOutHCBytes" || name == "cpwVcPerfTotalDiscontinuityTime")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingtable()
{

    yang_name = "cpwVcIdMappingTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcidmappingtable::~Cpwvcidmappingtable()
{
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcidmappingentry.size(); index++)
    {
        if(cpwvcidmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcidmappingentry.size(); index++)
    {
        if(cpwvcidmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcidmappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcidmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcIdMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcidmappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcidmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcIdMappingEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry>();
        c->parent = this;
        cpwvcidmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcidmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcidmappingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvcidmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvcidmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIdMappingEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::Cpwvcidmappingentry()
    :
    cpwvcidmappingvctype{YType::enumeration, "cpwVcIdMappingVcType"},
    cpwvcidmappingvcid{YType::uint32, "cpwVcIdMappingVcID"},
    cpwvcidmappingpeeraddrtype{YType::enumeration, "cpwVcIdMappingPeerAddrType"},
    cpwvcidmappingpeeraddr{YType::str, "cpwVcIdMappingPeerAddr"},
    cpwvcidmappingvcindex{YType::uint32, "cpwVcIdMappingVcIndex"}
{

    yang_name = "cpwVcIdMappingEntry"; yang_parent_name = "cpwVcIdMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::~Cpwvcidmappingentry()
{
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::has_data() const
{
    return cpwvcidmappingvctype.is_set
	|| cpwvcidmappingvcid.is_set
	|| cpwvcidmappingpeeraddrtype.is_set
	|| cpwvcidmappingpeeraddr.is_set
	|| cpwvcidmappingvcindex.is_set;
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcidmappingvctype.yfilter)
	|| ydk::is_set(cpwvcidmappingvcid.yfilter)
	|| ydk::is_set(cpwvcidmappingpeeraddrtype.yfilter)
	|| ydk::is_set(cpwvcidmappingpeeraddr.yfilter)
	|| ydk::is_set(cpwvcidmappingvcindex.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcIdMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcIdMappingEntry" <<"[cpwVcIdMappingVcType='" <<cpwvcidmappingvctype <<"']" <<"[cpwVcIdMappingVcID='" <<cpwvcidmappingvcid <<"']" <<"[cpwVcIdMappingPeerAddrType='" <<cpwvcidmappingpeeraddrtype <<"']" <<"[cpwVcIdMappingPeerAddr='" <<cpwvcidmappingpeeraddr <<"']" <<"[cpwVcIdMappingVcIndex='" <<cpwvcidmappingvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcidmappingvctype.is_set || is_set(cpwvcidmappingvctype.yfilter)) leaf_name_data.push_back(cpwvcidmappingvctype.get_name_leafdata());
    if (cpwvcidmappingvcid.is_set || is_set(cpwvcidmappingvcid.yfilter)) leaf_name_data.push_back(cpwvcidmappingvcid.get_name_leafdata());
    if (cpwvcidmappingpeeraddrtype.is_set || is_set(cpwvcidmappingpeeraddrtype.yfilter)) leaf_name_data.push_back(cpwvcidmappingpeeraddrtype.get_name_leafdata());
    if (cpwvcidmappingpeeraddr.is_set || is_set(cpwvcidmappingpeeraddr.yfilter)) leaf_name_data.push_back(cpwvcidmappingpeeraddr.get_name_leafdata());
    if (cpwvcidmappingvcindex.is_set || is_set(cpwvcidmappingvcindex.yfilter)) leaf_name_data.push_back(cpwvcidmappingvcindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIdMappingVcType")
    {
        cpwvcidmappingvctype = value;
        cpwvcidmappingvctype.value_namespace = name_space;
        cpwvcidmappingvctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcIdMappingVcID")
    {
        cpwvcidmappingvcid = value;
        cpwvcidmappingvcid.value_namespace = name_space;
        cpwvcidmappingvcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcIdMappingPeerAddrType")
    {
        cpwvcidmappingpeeraddrtype = value;
        cpwvcidmappingpeeraddrtype.value_namespace = name_space;
        cpwvcidmappingpeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcIdMappingPeerAddr")
    {
        cpwvcidmappingpeeraddr = value;
        cpwvcidmappingpeeraddr.value_namespace = name_space;
        cpwvcidmappingpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcIdMappingVcIndex")
    {
        cpwvcidmappingvcindex = value;
        cpwvcidmappingvcindex.value_namespace = name_space;
        cpwvcidmappingvcindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIdMappingVcType")
    {
        cpwvcidmappingvctype.yfilter = yfilter;
    }
    if(value_path == "cpwVcIdMappingVcID")
    {
        cpwvcidmappingvcid.yfilter = yfilter;
    }
    if(value_path == "cpwVcIdMappingPeerAddrType")
    {
        cpwvcidmappingpeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "cpwVcIdMappingPeerAddr")
    {
        cpwvcidmappingpeeraddr.yfilter = yfilter;
    }
    if(value_path == "cpwVcIdMappingVcIndex")
    {
        cpwvcidmappingvcindex.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcidmappingtable::Cpwvcidmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIdMappingVcType" || name == "cpwVcIdMappingVcID" || name == "cpwVcIdMappingPeerAddrType" || name == "cpwVcIdMappingPeerAddr" || name == "cpwVcIdMappingVcIndex")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingtable()
{

    yang_name = "cpwVcPeerMappingTable"; yang_parent_name = "CISCO-IETF-PW-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcpeermappingtable::~Cpwvcpeermappingtable()
{
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcpeermappingentry.size(); index++)
    {
        if(cpwvcpeermappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcpeermappingentry.size(); index++)
    {
        if(cpwvcpeermappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcpeermappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcpeermappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPeerMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcpeermappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcpeermappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcPeerMappingEntry")
    {
        auto c = std::make_shared<CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry>();
        c->parent = this;
        cpwvcpeermappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcpeermappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcpeermappingentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWMIB::Cpwvcpeermappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMIB::Cpwvcpeermappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcPeerMappingEntry")
        return true;
    return false;
}

CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::Cpwvcpeermappingentry()
    :
    cpwvcpeermappingpeeraddrtype{YType::enumeration, "cpwVcPeerMappingPeerAddrType"},
    cpwvcpeermappingpeeraddr{YType::str, "cpwVcPeerMappingPeerAddr"},
    cpwvcpeermappingvctype{YType::enumeration, "cpwVcPeerMappingVcType"},
    cpwvcpeermappingvcid{YType::uint32, "cpwVcPeerMappingVcID"},
    cpwvcpeermappingvcindex{YType::uint32, "cpwVcPeerMappingVcIndex"}
{

    yang_name = "cpwVcPeerMappingEntry"; yang_parent_name = "cpwVcPeerMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::~Cpwvcpeermappingentry()
{
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::has_data() const
{
    return cpwvcpeermappingpeeraddrtype.is_set
	|| cpwvcpeermappingpeeraddr.is_set
	|| cpwvcpeermappingvctype.is_set
	|| cpwvcpeermappingvcid.is_set
	|| cpwvcpeermappingvcindex.is_set;
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcpeermappingpeeraddrtype.yfilter)
	|| ydk::is_set(cpwvcpeermappingpeeraddr.yfilter)
	|| ydk::is_set(cpwvcpeermappingvctype.yfilter)
	|| ydk::is_set(cpwvcpeermappingvcid.yfilter)
	|| ydk::is_set(cpwvcpeermappingvcindex.yfilter);
}

std::string CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MIB:CISCO-IETF-PW-MIB/cpwVcPeerMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcPeerMappingEntry" <<"[cpwVcPeerMappingPeerAddrType='" <<cpwvcpeermappingpeeraddrtype <<"']" <<"[cpwVcPeerMappingPeerAddr='" <<cpwvcpeermappingpeeraddr <<"']" <<"[cpwVcPeerMappingVcType='" <<cpwvcpeermappingvctype <<"']" <<"[cpwVcPeerMappingVcID='" <<cpwvcpeermappingvcid <<"']" <<"[cpwVcPeerMappingVcIndex='" <<cpwvcpeermappingvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcpeermappingpeeraddrtype.is_set || is_set(cpwvcpeermappingpeeraddrtype.yfilter)) leaf_name_data.push_back(cpwvcpeermappingpeeraddrtype.get_name_leafdata());
    if (cpwvcpeermappingpeeraddr.is_set || is_set(cpwvcpeermappingpeeraddr.yfilter)) leaf_name_data.push_back(cpwvcpeermappingpeeraddr.get_name_leafdata());
    if (cpwvcpeermappingvctype.is_set || is_set(cpwvcpeermappingvctype.yfilter)) leaf_name_data.push_back(cpwvcpeermappingvctype.get_name_leafdata());
    if (cpwvcpeermappingvcid.is_set || is_set(cpwvcpeermappingvcid.yfilter)) leaf_name_data.push_back(cpwvcpeermappingvcid.get_name_leafdata());
    if (cpwvcpeermappingvcindex.is_set || is_set(cpwvcpeermappingvcindex.yfilter)) leaf_name_data.push_back(cpwvcpeermappingvcindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcPeerMappingPeerAddrType")
    {
        cpwvcpeermappingpeeraddrtype = value;
        cpwvcpeermappingpeeraddrtype.value_namespace = name_space;
        cpwvcpeermappingpeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerMappingPeerAddr")
    {
        cpwvcpeermappingpeeraddr = value;
        cpwvcpeermappingpeeraddr.value_namespace = name_space;
        cpwvcpeermappingpeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerMappingVcType")
    {
        cpwvcpeermappingvctype = value;
        cpwvcpeermappingvctype.value_namespace = name_space;
        cpwvcpeermappingvctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerMappingVcID")
    {
        cpwvcpeermappingvcid = value;
        cpwvcpeermappingvcid.value_namespace = name_space;
        cpwvcpeermappingvcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcPeerMappingVcIndex")
    {
        cpwvcpeermappingvcindex = value;
        cpwvcpeermappingvcindex.value_namespace = name_space;
        cpwvcpeermappingvcindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcPeerMappingPeerAddrType")
    {
        cpwvcpeermappingpeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerMappingPeerAddr")
    {
        cpwvcpeermappingpeeraddr.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerMappingVcType")
    {
        cpwvcpeermappingvctype.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerMappingVcID")
    {
        cpwvcpeermappingvcid.yfilter = yfilter;
    }
    if(value_path == "cpwVcPeerMappingVcIndex")
    {
        cpwvcpeermappingvcindex.yfilter = yfilter;
    }
}

bool CISCOIETFPWMIB::Cpwvcpeermappingtable::Cpwvcpeermappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcPeerMappingPeerAddrType" || name == "cpwVcPeerMappingPeerAddr" || name == "cpwVcPeerMappingVcType" || name == "cpwVcPeerMappingVcID" || name == "cpwVcPeerMappingVcIndex")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcowner::manual {1, "manual"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcowner::maintenanceProtocol {2, "maintenanceProtocol"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcowner::other {3, "other"};

const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::mpls {1, "mpls"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::l2tp {2, "l2tp"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::ip {3, "ip"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::mplsOverIp {4, "mplsOverIp"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::gre {5, "gre"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcpsntype::other {6, "other"};

const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcinboundmode::loose {1, "loose"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcinboundmode::strict {2, "strict"};

const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcremotecontrolword::noControlWord {1, "noControlWord"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcremotecontrolword::withControlWord {2, "withControlWord"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcremotecontrolword::notYetKnown {3, "notYetKnown"};

const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcadminstatus::up {1, "up"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcadminstatus::down {2, "down"};
const Enum::YLeaf CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::Cpwvcadminstatus::testing {3, "testing"};


}
}

