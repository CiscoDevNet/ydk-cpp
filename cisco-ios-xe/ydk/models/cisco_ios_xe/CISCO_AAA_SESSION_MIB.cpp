
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_AAA_SESSION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_AAA_SESSION_MIB {

CISCOAAASESSIONMIB::CISCOAAASESSIONMIB()
    :
    casnactive(std::make_shared<CISCOAAASESSIONMIB::Casnactive>())
	,casngeneral(std::make_shared<CISCOAAASESSIONMIB::Casngeneral>())
	,casnactivetable(std::make_shared<CISCOAAASESSIONMIB::Casnactivetable>())
{
    casnactive->parent = this;
    casngeneral->parent = this;
    casnactivetable->parent = this;

    yang_name = "CISCO-AAA-SESSION-MIB"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOAAASESSIONMIB::~CISCOAAASESSIONMIB()
{
}

bool CISCOAAASESSIONMIB::has_data() const
{
    return (casnactive !=  nullptr && casnactive->has_data())
	|| (casngeneral !=  nullptr && casngeneral->has_data())
	|| (casnactivetable !=  nullptr && casnactivetable->has_data());
}

bool CISCOAAASESSIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (casnactive !=  nullptr && casnactive->has_operation())
	|| (casngeneral !=  nullptr && casngeneral->has_operation())
	|| (casnactivetable !=  nullptr && casnactivetable->has_operation());
}

std::string CISCOAAASESSIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casnActive")
    {
        if(casnactive == nullptr)
        {
            casnactive = std::make_shared<CISCOAAASESSIONMIB::Casnactive>();
        }
        return casnactive;
    }

    if(child_yang_name == "casnGeneral")
    {
        if(casngeneral == nullptr)
        {
            casngeneral = std::make_shared<CISCOAAASESSIONMIB::Casngeneral>();
        }
        return casngeneral;
    }

    if(child_yang_name == "casnActiveTable")
    {
        if(casnactivetable == nullptr)
        {
            casnactivetable = std::make_shared<CISCOAAASESSIONMIB::Casnactivetable>();
        }
        return casnactivetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(casnactive != nullptr)
    {
        children["casnActive"] = casnactive;
    }

    if(casngeneral != nullptr)
    {
        children["casnGeneral"] = casngeneral;
    }

    if(casnactivetable != nullptr)
    {
        children["casnActiveTable"] = casnactivetable;
    }

    return children;
}

void CISCOAAASESSIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOAAASESSIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::clone_ptr() const
{
    return std::make_shared<CISCOAAASESSIONMIB>();
}

std::string CISCOAAASESSIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOAAASESSIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOAAASESSIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOAAASESSIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOAAASESSIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActive" || name == "casnGeneral" || name == "casnActiveTable")
        return true;
    return false;
}

CISCOAAASESSIONMIB::Casnactive::Casnactive()
    :
    casnactivetableentries{YType::uint32, "casnActiveTableEntries"},
    casnactivetablehighwatermark{YType::uint32, "casnActiveTableHighWaterMark"}
{

    yang_name = "casnActive"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOAAASESSIONMIB::Casnactive::~Casnactive()
{
}

bool CISCOAAASESSIONMIB::Casnactive::has_data() const
{
    return casnactivetableentries.is_set
	|| casnactivetablehighwatermark.is_set;
}

bool CISCOAAASESSIONMIB::Casnactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casnactivetableentries.yfilter)
	|| ydk::is_set(casnactivetablehighwatermark.yfilter);
}

std::string CISCOAAASESSIONMIB::Casnactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::Casnactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::Casnactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casnactivetableentries.is_set || is_set(casnactivetableentries.yfilter)) leaf_name_data.push_back(casnactivetableentries.get_name_leafdata());
    if (casnactivetablehighwatermark.is_set || is_set(casnactivetablehighwatermark.yfilter)) leaf_name_data.push_back(casnactivetablehighwatermark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::Casnactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::Casnactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::Casnactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOAAASESSIONMIB::Casnactive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOAAASESSIONMIB::Casnactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveTableEntries" || name == "casnActiveTableHighWaterMark")
        return true;
    return false;
}

CISCOAAASESSIONMIB::Casngeneral::Casngeneral()
    :
    casntotalsessions{YType::uint32, "casnTotalSessions"},
    casndisconnectedsessions{YType::uint32, "casnDisconnectedSessions"}
{

    yang_name = "casnGeneral"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOAAASESSIONMIB::Casngeneral::~Casngeneral()
{
}

bool CISCOAAASESSIONMIB::Casngeneral::has_data() const
{
    return casntotalsessions.is_set
	|| casndisconnectedsessions.is_set;
}

bool CISCOAAASESSIONMIB::Casngeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casntotalsessions.yfilter)
	|| ydk::is_set(casndisconnectedsessions.yfilter);
}

std::string CISCOAAASESSIONMIB::Casngeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::Casngeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnGeneral";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::Casngeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casntotalsessions.is_set || is_set(casntotalsessions.yfilter)) leaf_name_data.push_back(casntotalsessions.get_name_leafdata());
    if (casndisconnectedsessions.is_set || is_set(casndisconnectedsessions.yfilter)) leaf_name_data.push_back(casndisconnectedsessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::Casngeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::Casngeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::Casngeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casnTotalSessions")
    {
        casntotalsessions = value;
        casntotalsessions.value_namespace = name_space;
        casntotalsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnDisconnectedSessions")
    {
        casndisconnectedsessions = value;
        casndisconnectedsessions.value_namespace = name_space;
        casndisconnectedsessions.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOAAASESSIONMIB::Casngeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casnTotalSessions")
    {
        casntotalsessions.yfilter = yfilter;
    }
    if(value_path == "casnDisconnectedSessions")
    {
        casndisconnectedsessions.yfilter = yfilter;
    }
}

bool CISCOAAASESSIONMIB::Casngeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnTotalSessions" || name == "casnDisconnectedSessions")
        return true;
    return false;
}

CISCOAAASESSIONMIB::Casnactivetable::Casnactivetable()
{

    yang_name = "casnActiveTable"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOAAASESSIONMIB::Casnactivetable::~Casnactivetable()
{
}

bool CISCOAAASESSIONMIB::Casnactivetable::has_data() const
{
    for (std::size_t index=0; index<casnactiveentry.size(); index++)
    {
        if(casnactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOAAASESSIONMIB::Casnactivetable::has_operation() const
{
    for (std::size_t index=0; index<casnactiveentry.size(); index++)
    {
        if(casnactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOAAASESSIONMIB::Casnactivetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::Casnactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::Casnactivetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::Casnactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casnActiveEntry")
    {
        auto c = std::make_shared<CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry>();
        c->parent = this;
        casnactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::Casnactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : casnactiveentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOAAASESSIONMIB::Casnactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOAAASESSIONMIB::Casnactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOAAASESSIONMIB::Casnactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveEntry")
        return true;
    return false;
}

CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::Casnactiveentry()
    :
    casnsessionid{YType::uint32, "casnSessionId"},
    casnuserid{YType::str, "casnUserId"},
    casnipaddr{YType::str, "casnIpAddr"},
    casnidletime{YType::uint32, "casnIdleTime"},
    casndisconnect{YType::boolean, "casnDisconnect"},
    casncalltrackerid{YType::uint32, "casnCallTrackerId"},
    casnnasport{YType::str, "casnNasPort"},
    casnvaiifindex{YType::int32, "casnVaiIfIndex"}
{

    yang_name = "casnActiveEntry"; yang_parent_name = "casnActiveTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::~Casnactiveentry()
{
}

bool CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::has_data() const
{
    return casnsessionid.is_set
	|| casnuserid.is_set
	|| casnipaddr.is_set
	|| casnidletime.is_set
	|| casndisconnect.is_set
	|| casncalltrackerid.is_set
	|| casnnasport.is_set
	|| casnvaiifindex.is_set;
}

bool CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casnsessionid.yfilter)
	|| ydk::is_set(casnuserid.yfilter)
	|| ydk::is_set(casnipaddr.yfilter)
	|| ydk::is_set(casnidletime.yfilter)
	|| ydk::is_set(casndisconnect.yfilter)
	|| ydk::is_set(casncalltrackerid.yfilter)
	|| ydk::is_set(casnnasport.yfilter)
	|| ydk::is_set(casnvaiifindex.yfilter);
}

std::string CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/casnActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveEntry" <<"[casnSessionId='" <<casnsessionid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casnsessionid.is_set || is_set(casnsessionid.yfilter)) leaf_name_data.push_back(casnsessionid.get_name_leafdata());
    if (casnuserid.is_set || is_set(casnuserid.yfilter)) leaf_name_data.push_back(casnuserid.get_name_leafdata());
    if (casnipaddr.is_set || is_set(casnipaddr.yfilter)) leaf_name_data.push_back(casnipaddr.get_name_leafdata());
    if (casnidletime.is_set || is_set(casnidletime.yfilter)) leaf_name_data.push_back(casnidletime.get_name_leafdata());
    if (casndisconnect.is_set || is_set(casndisconnect.yfilter)) leaf_name_data.push_back(casndisconnect.get_name_leafdata());
    if (casncalltrackerid.is_set || is_set(casncalltrackerid.yfilter)) leaf_name_data.push_back(casncalltrackerid.get_name_leafdata());
    if (casnnasport.is_set || is_set(casnnasport.yfilter)) leaf_name_data.push_back(casnnasport.get_name_leafdata());
    if (casnvaiifindex.is_set || is_set(casnvaiifindex.yfilter)) leaf_name_data.push_back(casnvaiifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casnSessionId")
    {
        casnsessionid = value;
        casnsessionid.value_namespace = name_space;
        casnsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnUserId")
    {
        casnuserid = value;
        casnuserid.value_namespace = name_space;
        casnuserid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnIpAddr")
    {
        casnipaddr = value;
        casnipaddr.value_namespace = name_space;
        casnipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnIdleTime")
    {
        casnidletime = value;
        casnidletime.value_namespace = name_space;
        casnidletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnDisconnect")
    {
        casndisconnect = value;
        casndisconnect.value_namespace = name_space;
        casndisconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnCallTrackerId")
    {
        casncalltrackerid = value;
        casncalltrackerid.value_namespace = name_space;
        casncalltrackerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnNasPort")
    {
        casnnasport = value;
        casnnasport.value_namespace = name_space;
        casnnasport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casnVaiIfIndex")
    {
        casnvaiifindex = value;
        casnvaiifindex.value_namespace = name_space;
        casnvaiifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casnSessionId")
    {
        casnsessionid.yfilter = yfilter;
    }
    if(value_path == "casnUserId")
    {
        casnuserid.yfilter = yfilter;
    }
    if(value_path == "casnIpAddr")
    {
        casnipaddr.yfilter = yfilter;
    }
    if(value_path == "casnIdleTime")
    {
        casnidletime.yfilter = yfilter;
    }
    if(value_path == "casnDisconnect")
    {
        casndisconnect.yfilter = yfilter;
    }
    if(value_path == "casnCallTrackerId")
    {
        casncalltrackerid.yfilter = yfilter;
    }
    if(value_path == "casnNasPort")
    {
        casnnasport.yfilter = yfilter;
    }
    if(value_path == "casnVaiIfIndex")
    {
        casnvaiifindex.yfilter = yfilter;
    }
}

bool CISCOAAASESSIONMIB::Casnactivetable::Casnactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnSessionId" || name == "casnUserId" || name == "casnIpAddr" || name == "casnIdleTime" || name == "casnDisconnect" || name == "casnCallTrackerId" || name == "casnNasPort" || name == "casnVaiIfIndex")
        return true;
    return false;
}


}
}

