
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
    casnactive(std::make_shared<CISCOAAASESSIONMIB::CasnActive>())
    , casngeneral(std::make_shared<CISCOAAASESSIONMIB::CasnGeneral>())
    , casnactivetable(std::make_shared<CISCOAAASESSIONMIB::CasnActiveTable>())
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
    if (is_presence_container) return true;
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
            casnactive = std::make_shared<CISCOAAASESSIONMIB::CasnActive>();
        }
        return casnactive;
    }

    if(child_yang_name == "casnGeneral")
    {
        if(casngeneral == nullptr)
        {
            casngeneral = std::make_shared<CISCOAAASESSIONMIB::CasnGeneral>();
        }
        return casngeneral;
    }

    if(child_yang_name == "casnActiveTable")
    {
        if(casnactivetable == nullptr)
        {
            casnactivetable = std::make_shared<CISCOAAASESSIONMIB::CasnActiveTable>();
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

CISCOAAASESSIONMIB::CasnActive::CasnActive()
    :
    casnactivetableentries{YType::uint32, "casnActiveTableEntries"},
    casnactivetablehighwatermark{YType::uint32, "casnActiveTableHighWaterMark"}
{

    yang_name = "casnActive"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASESSIONMIB::CasnActive::~CasnActive()
{
}

bool CISCOAAASESSIONMIB::CasnActive::has_data() const
{
    if (is_presence_container) return true;
    return casnactivetableentries.is_set
	|| casnactivetablehighwatermark.is_set;
}

bool CISCOAAASESSIONMIB::CasnActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casnactivetableentries.yfilter)
	|| ydk::is_set(casnactivetablehighwatermark.yfilter);
}

std::string CISCOAAASESSIONMIB::CasnActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::CasnActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::CasnActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casnactivetableentries.is_set || is_set(casnactivetableentries.yfilter)) leaf_name_data.push_back(casnactivetableentries.get_name_leafdata());
    if (casnactivetablehighwatermark.is_set || is_set(casnactivetablehighwatermark.yfilter)) leaf_name_data.push_back(casnactivetablehighwatermark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::CasnActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::CasnActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::CasnActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOAAASESSIONMIB::CasnActive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOAAASESSIONMIB::CasnActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveTableEntries" || name == "casnActiveTableHighWaterMark")
        return true;
    return false;
}

CISCOAAASESSIONMIB::CasnGeneral::CasnGeneral()
    :
    casntotalsessions{YType::uint32, "casnTotalSessions"},
    casndisconnectedsessions{YType::uint32, "casnDisconnectedSessions"}
{

    yang_name = "casnGeneral"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASESSIONMIB::CasnGeneral::~CasnGeneral()
{
}

bool CISCOAAASESSIONMIB::CasnGeneral::has_data() const
{
    if (is_presence_container) return true;
    return casntotalsessions.is_set
	|| casndisconnectedsessions.is_set;
}

bool CISCOAAASESSIONMIB::CasnGeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casntotalsessions.yfilter)
	|| ydk::is_set(casndisconnectedsessions.yfilter);
}

std::string CISCOAAASESSIONMIB::CasnGeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::CasnGeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnGeneral";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::CasnGeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casntotalsessions.is_set || is_set(casntotalsessions.yfilter)) leaf_name_data.push_back(casntotalsessions.get_name_leafdata());
    if (casndisconnectedsessions.is_set || is_set(casndisconnectedsessions.yfilter)) leaf_name_data.push_back(casndisconnectedsessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::CasnGeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::CasnGeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::CasnGeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOAAASESSIONMIB::CasnGeneral::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOAAASESSIONMIB::CasnGeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnTotalSessions" || name == "casnDisconnectedSessions")
        return true;
    return false;
}

CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveTable()
    :
    casnactiveentry(this, {"casnsessionid"})
{

    yang_name = "casnActiveTable"; yang_parent_name = "CISCO-AAA-SESSION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASESSIONMIB::CasnActiveTable::~CasnActiveTable()
{
}

bool CISCOAAASESSIONMIB::CasnActiveTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<casnactiveentry.len(); index++)
    {
        if(casnactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOAAASESSIONMIB::CasnActiveTable::has_operation() const
{
    for (std::size_t index=0; index<casnactiveentry.len(); index++)
    {
        if(casnactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOAAASESSIONMIB::CasnActiveTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::CasnActiveTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::CasnActiveTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOAAASESSIONMIB::CasnActiveTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casnActiveEntry")
    {
        auto c = std::make_shared<CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry>();
        c->parent = this;
        casnactiveentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::CasnActiveTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : casnactiveentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOAAASESSIONMIB::CasnActiveTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOAAASESSIONMIB::CasnActiveTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOAAASESSIONMIB::CasnActiveTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnActiveEntry")
        return true;
    return false;
}

CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::CasnActiveEntry()
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

CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::~CasnActiveEntry()
{
}

bool CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::has_data() const
{
    if (is_presence_container) return true;
    return casnsessionid.is_set
	|| casnuserid.is_set
	|| casnipaddr.is_set
	|| casnidletime.is_set
	|| casndisconnect.is_set
	|| casncalltrackerid.is_set
	|| casnnasport.is_set
	|| casnvaiifindex.is_set;
}

bool CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::has_operation() const
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

std::string CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SESSION-MIB:CISCO-AAA-SESSION-MIB/casnActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casnActiveEntry";
    ADD_KEY_TOKEN(casnsessionid, "casnSessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casnSessionId" || name == "casnUserId" || name == "casnIpAddr" || name == "casnIdleTime" || name == "casnDisconnect" || name == "casnCallTrackerId" || name == "casnNasPort" || name == "casnVaiIfIndex")
        return true;
    return false;
}


}
}

