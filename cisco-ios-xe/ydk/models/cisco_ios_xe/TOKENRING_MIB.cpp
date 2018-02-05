
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TOKENRING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace TOKENRING_MIB {

Dot5Testinsertfunc::Dot5Testinsertfunc()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB", "TOKENRING-MIB", "TOKENRING-MIB:dot5TestInsertFunc")
{

}

Dot5Testinsertfunc::~Dot5Testinsertfunc()
{
}

Dot5Testfullduplexloopback::Dot5Testfullduplexloopback()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB", "TOKENRING-MIB", "TOKENRING-MIB:dot5TestFullDuplexLoopBack")
{

}

Dot5Testfullduplexloopback::~Dot5Testfullduplexloopback()
{
}

Dot5Chipsetibm16::Dot5Chipsetibm16()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB", "TOKENRING-MIB", "TOKENRING-MIB:dot5ChipSetIBM16")
{

}

Dot5Chipsetibm16::~Dot5Chipsetibm16()
{
}

Dot5Chipsettitms380::Dot5Chipsettitms380()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB", "TOKENRING-MIB", "TOKENRING-MIB:dot5ChipSetTItms380")
{

}

Dot5Chipsettitms380::~Dot5Chipsettitms380()
{
}

Dot5Chipsettitms380C16::Dot5Chipsettitms380C16()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:TOKENRING-MIB", "TOKENRING-MIB", "TOKENRING-MIB:dot5ChipSetTItms380c16")
{

}

Dot5Chipsettitms380C16::~Dot5Chipsettitms380C16()
{
}

TOKENRINGMIB::TOKENRINGMIB()
    :
    dot5table(std::make_shared<TOKENRINGMIB::Dot5Table>())
	,dot5statstable(std::make_shared<TOKENRINGMIB::Dot5Statstable>())
	,dot5timertable(std::make_shared<TOKENRINGMIB::Dot5Timertable>())
{
    dot5table->parent = this;
    dot5statstable->parent = this;
    dot5timertable->parent = this;

    yang_name = "TOKENRING-MIB"; yang_parent_name = "TOKENRING-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

TOKENRINGMIB::~TOKENRINGMIB()
{
}

bool TOKENRINGMIB::has_data() const
{
    return (dot5table !=  nullptr && dot5table->has_data())
	|| (dot5statstable !=  nullptr && dot5statstable->has_data())
	|| (dot5timertable !=  nullptr && dot5timertable->has_data());
}

bool TOKENRINGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot5table !=  nullptr && dot5table->has_operation())
	|| (dot5statstable !=  nullptr && dot5statstable->has_operation())
	|| (dot5timertable !=  nullptr && dot5timertable->has_operation());
}

std::string TOKENRINGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5Table")
    {
        if(dot5table == nullptr)
        {
            dot5table = std::make_shared<TOKENRINGMIB::Dot5Table>();
        }
        return dot5table;
    }

    if(child_yang_name == "dot5StatsTable")
    {
        if(dot5statstable == nullptr)
        {
            dot5statstable = std::make_shared<TOKENRINGMIB::Dot5Statstable>();
        }
        return dot5statstable;
    }

    if(child_yang_name == "dot5TimerTable")
    {
        if(dot5timertable == nullptr)
        {
            dot5timertable = std::make_shared<TOKENRINGMIB::Dot5Timertable>();
        }
        return dot5timertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot5table != nullptr)
    {
        children["dot5Table"] = dot5table;
    }

    if(dot5statstable != nullptr)
    {
        children["dot5StatsTable"] = dot5statstable;
    }

    if(dot5timertable != nullptr)
    {
        children["dot5TimerTable"] = dot5timertable;
    }

    return children;
}

void TOKENRINGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TOKENRINGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TOKENRINGMIB::clone_ptr() const
{
    return std::make_shared<TOKENRINGMIB>();
}

std::string TOKENRINGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TOKENRINGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TOKENRINGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TOKENRINGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TOKENRINGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5Table" || name == "dot5StatsTable" || name == "dot5TimerTable")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Table::Dot5Table()
{

    yang_name = "dot5Table"; yang_parent_name = "TOKENRING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Table::~Dot5Table()
{
}

bool TOKENRINGMIB::Dot5Table::has_data() const
{
    for (std::size_t index=0; index<dot5entry.size(); index++)
    {
        if(dot5entry[index]->has_data())
            return true;
    }
    return false;
}

bool TOKENRINGMIB::Dot5Table::has_operation() const
{
    for (std::size_t index=0; index<dot5entry.size(); index++)
    {
        if(dot5entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TOKENRINGMIB::Dot5Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5Table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5Entry")
    {
        auto c = std::make_shared<TOKENRINGMIB::Dot5Table::Dot5Entry>();
        c->parent = this;
        dot5entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dot5entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TOKENRINGMIB::Dot5Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TOKENRINGMIB::Dot5Table::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TOKENRINGMIB::Dot5Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5Entry")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Entry()
    :
    dot5ifindex{YType::int32, "dot5IfIndex"},
    dot5commands{YType::enumeration, "dot5Commands"},
    dot5ringstatus{YType::int32, "dot5RingStatus"},
    dot5ringstate{YType::enumeration, "dot5RingState"},
    dot5ringopenstatus{YType::enumeration, "dot5RingOpenStatus"},
    dot5ringspeed{YType::enumeration, "dot5RingSpeed"},
    dot5upstream{YType::str, "dot5UpStream"},
    dot5actmonparticipate{YType::enumeration, "dot5ActMonParticipate"},
    dot5functional{YType::str, "dot5Functional"},
    dot5lastbeaconsent{YType::uint32, "dot5LastBeaconSent"}
{

    yang_name = "dot5Entry"; yang_parent_name = "dot5Table"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Table::Dot5Entry::~Dot5Entry()
{
}

bool TOKENRINGMIB::Dot5Table::Dot5Entry::has_data() const
{
    return dot5ifindex.is_set
	|| dot5commands.is_set
	|| dot5ringstatus.is_set
	|| dot5ringstate.is_set
	|| dot5ringopenstatus.is_set
	|| dot5ringspeed.is_set
	|| dot5upstream.is_set
	|| dot5actmonparticipate.is_set
	|| dot5functional.is_set
	|| dot5lastbeaconsent.is_set;
}

bool TOKENRINGMIB::Dot5Table::Dot5Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot5ifindex.yfilter)
	|| ydk::is_set(dot5commands.yfilter)
	|| ydk::is_set(dot5ringstatus.yfilter)
	|| ydk::is_set(dot5ringstate.yfilter)
	|| ydk::is_set(dot5ringopenstatus.yfilter)
	|| ydk::is_set(dot5ringspeed.yfilter)
	|| ydk::is_set(dot5upstream.yfilter)
	|| ydk::is_set(dot5actmonparticipate.yfilter)
	|| ydk::is_set(dot5functional.yfilter)
	|| ydk::is_set(dot5lastbeaconsent.yfilter);
}

std::string TOKENRINGMIB::Dot5Table::Dot5Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5Table/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Table::Dot5Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5Entry" <<"[dot5IfIndex='" <<dot5ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Table::Dot5Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5ifindex.is_set || is_set(dot5ifindex.yfilter)) leaf_name_data.push_back(dot5ifindex.get_name_leafdata());
    if (dot5commands.is_set || is_set(dot5commands.yfilter)) leaf_name_data.push_back(dot5commands.get_name_leafdata());
    if (dot5ringstatus.is_set || is_set(dot5ringstatus.yfilter)) leaf_name_data.push_back(dot5ringstatus.get_name_leafdata());
    if (dot5ringstate.is_set || is_set(dot5ringstate.yfilter)) leaf_name_data.push_back(dot5ringstate.get_name_leafdata());
    if (dot5ringopenstatus.is_set || is_set(dot5ringopenstatus.yfilter)) leaf_name_data.push_back(dot5ringopenstatus.get_name_leafdata());
    if (dot5ringspeed.is_set || is_set(dot5ringspeed.yfilter)) leaf_name_data.push_back(dot5ringspeed.get_name_leafdata());
    if (dot5upstream.is_set || is_set(dot5upstream.yfilter)) leaf_name_data.push_back(dot5upstream.get_name_leafdata());
    if (dot5actmonparticipate.is_set || is_set(dot5actmonparticipate.yfilter)) leaf_name_data.push_back(dot5actmonparticipate.get_name_leafdata());
    if (dot5functional.is_set || is_set(dot5functional.yfilter)) leaf_name_data.push_back(dot5functional.get_name_leafdata());
    if (dot5lastbeaconsent.is_set || is_set(dot5lastbeaconsent.yfilter)) leaf_name_data.push_back(dot5lastbeaconsent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Table::Dot5Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Table::Dot5Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TOKENRINGMIB::Dot5Table::Dot5Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot5IfIndex")
    {
        dot5ifindex = value;
        dot5ifindex.value_namespace = name_space;
        dot5ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5Commands")
    {
        dot5commands = value;
        dot5commands.value_namespace = name_space;
        dot5commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5RingStatus")
    {
        dot5ringstatus = value;
        dot5ringstatus.value_namespace = name_space;
        dot5ringstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5RingState")
    {
        dot5ringstate = value;
        dot5ringstate.value_namespace = name_space;
        dot5ringstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5RingOpenStatus")
    {
        dot5ringopenstatus = value;
        dot5ringopenstatus.value_namespace = name_space;
        dot5ringopenstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5RingSpeed")
    {
        dot5ringspeed = value;
        dot5ringspeed.value_namespace = name_space;
        dot5ringspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5UpStream")
    {
        dot5upstream = value;
        dot5upstream.value_namespace = name_space;
        dot5upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5ActMonParticipate")
    {
        dot5actmonparticipate = value;
        dot5actmonparticipate.value_namespace = name_space;
        dot5actmonparticipate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5Functional")
    {
        dot5functional = value;
        dot5functional.value_namespace = name_space;
        dot5functional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5LastBeaconSent")
    {
        dot5lastbeaconsent = value;
        dot5lastbeaconsent.value_namespace = name_space;
        dot5lastbeaconsent.value_namespace_prefix = name_space_prefix;
    }
}

void TOKENRINGMIB::Dot5Table::Dot5Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot5IfIndex")
    {
        dot5ifindex.yfilter = yfilter;
    }
    if(value_path == "dot5Commands")
    {
        dot5commands.yfilter = yfilter;
    }
    if(value_path == "dot5RingStatus")
    {
        dot5ringstatus.yfilter = yfilter;
    }
    if(value_path == "dot5RingState")
    {
        dot5ringstate.yfilter = yfilter;
    }
    if(value_path == "dot5RingOpenStatus")
    {
        dot5ringopenstatus.yfilter = yfilter;
    }
    if(value_path == "dot5RingSpeed")
    {
        dot5ringspeed.yfilter = yfilter;
    }
    if(value_path == "dot5UpStream")
    {
        dot5upstream.yfilter = yfilter;
    }
    if(value_path == "dot5ActMonParticipate")
    {
        dot5actmonparticipate.yfilter = yfilter;
    }
    if(value_path == "dot5Functional")
    {
        dot5functional.yfilter = yfilter;
    }
    if(value_path == "dot5LastBeaconSent")
    {
        dot5lastbeaconsent.yfilter = yfilter;
    }
}

bool TOKENRINGMIB::Dot5Table::Dot5Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5IfIndex" || name == "dot5Commands" || name == "dot5RingStatus" || name == "dot5RingState" || name == "dot5RingOpenStatus" || name == "dot5RingSpeed" || name == "dot5UpStream" || name == "dot5ActMonParticipate" || name == "dot5Functional" || name == "dot5LastBeaconSent")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Statstable::Dot5Statstable()
{

    yang_name = "dot5StatsTable"; yang_parent_name = "TOKENRING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Statstable::~Dot5Statstable()
{
}

bool TOKENRINGMIB::Dot5Statstable::has_data() const
{
    for (std::size_t index=0; index<dot5statsentry.size(); index++)
    {
        if(dot5statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool TOKENRINGMIB::Dot5Statstable::has_operation() const
{
    for (std::size_t index=0; index<dot5statsentry.size(); index++)
    {
        if(dot5statsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TOKENRINGMIB::Dot5Statstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Statstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5StatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Statstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Statstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5StatsEntry")
    {
        auto c = std::make_shared<TOKENRINGMIB::Dot5Statstable::Dot5Statsentry>();
        c->parent = this;
        dot5statsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Statstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dot5statsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TOKENRINGMIB::Dot5Statstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TOKENRINGMIB::Dot5Statstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TOKENRINGMIB::Dot5Statstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5StatsEntry")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::Dot5Statsentry()
    :
    dot5statsifindex{YType::int32, "dot5StatsIfIndex"},
    dot5statslineerrors{YType::uint32, "dot5StatsLineErrors"},
    dot5statsbursterrors{YType::uint32, "dot5StatsBurstErrors"},
    dot5statsacerrors{YType::uint32, "dot5StatsACErrors"},
    dot5statsaborttranserrors{YType::uint32, "dot5StatsAbortTransErrors"},
    dot5statsinternalerrors{YType::uint32, "dot5StatsInternalErrors"},
    dot5statslostframeerrors{YType::uint32, "dot5StatsLostFrameErrors"},
    dot5statsreceivecongestions{YType::uint32, "dot5StatsReceiveCongestions"},
    dot5statsframecopiederrors{YType::uint32, "dot5StatsFrameCopiedErrors"},
    dot5statstokenerrors{YType::uint32, "dot5StatsTokenErrors"},
    dot5statssofterrors{YType::uint32, "dot5StatsSoftErrors"},
    dot5statsharderrors{YType::uint32, "dot5StatsHardErrors"},
    dot5statssignalloss{YType::uint32, "dot5StatsSignalLoss"},
    dot5statstransmitbeacons{YType::uint32, "dot5StatsTransmitBeacons"},
    dot5statsrecoverys{YType::uint32, "dot5StatsRecoverys"},
    dot5statslobewires{YType::uint32, "dot5StatsLobeWires"},
    dot5statsremoves{YType::uint32, "dot5StatsRemoves"},
    dot5statssingles{YType::uint32, "dot5StatsSingles"},
    dot5statsfreqerrors{YType::uint32, "dot5StatsFreqErrors"}
{

    yang_name = "dot5StatsEntry"; yang_parent_name = "dot5StatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::~Dot5Statsentry()
{
}

bool TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::has_data() const
{
    return dot5statsifindex.is_set
	|| dot5statslineerrors.is_set
	|| dot5statsbursterrors.is_set
	|| dot5statsacerrors.is_set
	|| dot5statsaborttranserrors.is_set
	|| dot5statsinternalerrors.is_set
	|| dot5statslostframeerrors.is_set
	|| dot5statsreceivecongestions.is_set
	|| dot5statsframecopiederrors.is_set
	|| dot5statstokenerrors.is_set
	|| dot5statssofterrors.is_set
	|| dot5statsharderrors.is_set
	|| dot5statssignalloss.is_set
	|| dot5statstransmitbeacons.is_set
	|| dot5statsrecoverys.is_set
	|| dot5statslobewires.is_set
	|| dot5statsremoves.is_set
	|| dot5statssingles.is_set
	|| dot5statsfreqerrors.is_set;
}

bool TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot5statsifindex.yfilter)
	|| ydk::is_set(dot5statslineerrors.yfilter)
	|| ydk::is_set(dot5statsbursterrors.yfilter)
	|| ydk::is_set(dot5statsacerrors.yfilter)
	|| ydk::is_set(dot5statsaborttranserrors.yfilter)
	|| ydk::is_set(dot5statsinternalerrors.yfilter)
	|| ydk::is_set(dot5statslostframeerrors.yfilter)
	|| ydk::is_set(dot5statsreceivecongestions.yfilter)
	|| ydk::is_set(dot5statsframecopiederrors.yfilter)
	|| ydk::is_set(dot5statstokenerrors.yfilter)
	|| ydk::is_set(dot5statssofterrors.yfilter)
	|| ydk::is_set(dot5statsharderrors.yfilter)
	|| ydk::is_set(dot5statssignalloss.yfilter)
	|| ydk::is_set(dot5statstransmitbeacons.yfilter)
	|| ydk::is_set(dot5statsrecoverys.yfilter)
	|| ydk::is_set(dot5statslobewires.yfilter)
	|| ydk::is_set(dot5statsremoves.yfilter)
	|| ydk::is_set(dot5statssingles.yfilter)
	|| ydk::is_set(dot5statsfreqerrors.yfilter);
}

std::string TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5StatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5StatsEntry" <<"[dot5StatsIfIndex='" <<dot5statsifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5statsifindex.is_set || is_set(dot5statsifindex.yfilter)) leaf_name_data.push_back(dot5statsifindex.get_name_leafdata());
    if (dot5statslineerrors.is_set || is_set(dot5statslineerrors.yfilter)) leaf_name_data.push_back(dot5statslineerrors.get_name_leafdata());
    if (dot5statsbursterrors.is_set || is_set(dot5statsbursterrors.yfilter)) leaf_name_data.push_back(dot5statsbursterrors.get_name_leafdata());
    if (dot5statsacerrors.is_set || is_set(dot5statsacerrors.yfilter)) leaf_name_data.push_back(dot5statsacerrors.get_name_leafdata());
    if (dot5statsaborttranserrors.is_set || is_set(dot5statsaborttranserrors.yfilter)) leaf_name_data.push_back(dot5statsaborttranserrors.get_name_leafdata());
    if (dot5statsinternalerrors.is_set || is_set(dot5statsinternalerrors.yfilter)) leaf_name_data.push_back(dot5statsinternalerrors.get_name_leafdata());
    if (dot5statslostframeerrors.is_set || is_set(dot5statslostframeerrors.yfilter)) leaf_name_data.push_back(dot5statslostframeerrors.get_name_leafdata());
    if (dot5statsreceivecongestions.is_set || is_set(dot5statsreceivecongestions.yfilter)) leaf_name_data.push_back(dot5statsreceivecongestions.get_name_leafdata());
    if (dot5statsframecopiederrors.is_set || is_set(dot5statsframecopiederrors.yfilter)) leaf_name_data.push_back(dot5statsframecopiederrors.get_name_leafdata());
    if (dot5statstokenerrors.is_set || is_set(dot5statstokenerrors.yfilter)) leaf_name_data.push_back(dot5statstokenerrors.get_name_leafdata());
    if (dot5statssofterrors.is_set || is_set(dot5statssofterrors.yfilter)) leaf_name_data.push_back(dot5statssofterrors.get_name_leafdata());
    if (dot5statsharderrors.is_set || is_set(dot5statsharderrors.yfilter)) leaf_name_data.push_back(dot5statsharderrors.get_name_leafdata());
    if (dot5statssignalloss.is_set || is_set(dot5statssignalloss.yfilter)) leaf_name_data.push_back(dot5statssignalloss.get_name_leafdata());
    if (dot5statstransmitbeacons.is_set || is_set(dot5statstransmitbeacons.yfilter)) leaf_name_data.push_back(dot5statstransmitbeacons.get_name_leafdata());
    if (dot5statsrecoverys.is_set || is_set(dot5statsrecoverys.yfilter)) leaf_name_data.push_back(dot5statsrecoverys.get_name_leafdata());
    if (dot5statslobewires.is_set || is_set(dot5statslobewires.yfilter)) leaf_name_data.push_back(dot5statslobewires.get_name_leafdata());
    if (dot5statsremoves.is_set || is_set(dot5statsremoves.yfilter)) leaf_name_data.push_back(dot5statsremoves.get_name_leafdata());
    if (dot5statssingles.is_set || is_set(dot5statssingles.yfilter)) leaf_name_data.push_back(dot5statssingles.get_name_leafdata());
    if (dot5statsfreqerrors.is_set || is_set(dot5statsfreqerrors.yfilter)) leaf_name_data.push_back(dot5statsfreqerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot5StatsIfIndex")
    {
        dot5statsifindex = value;
        dot5statsifindex.value_namespace = name_space;
        dot5statsifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsLineErrors")
    {
        dot5statslineerrors = value;
        dot5statslineerrors.value_namespace = name_space;
        dot5statslineerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsBurstErrors")
    {
        dot5statsbursterrors = value;
        dot5statsbursterrors.value_namespace = name_space;
        dot5statsbursterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsACErrors")
    {
        dot5statsacerrors = value;
        dot5statsacerrors.value_namespace = name_space;
        dot5statsacerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsAbortTransErrors")
    {
        dot5statsaborttranserrors = value;
        dot5statsaborttranserrors.value_namespace = name_space;
        dot5statsaborttranserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsInternalErrors")
    {
        dot5statsinternalerrors = value;
        dot5statsinternalerrors.value_namespace = name_space;
        dot5statsinternalerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsLostFrameErrors")
    {
        dot5statslostframeerrors = value;
        dot5statslostframeerrors.value_namespace = name_space;
        dot5statslostframeerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsReceiveCongestions")
    {
        dot5statsreceivecongestions = value;
        dot5statsreceivecongestions.value_namespace = name_space;
        dot5statsreceivecongestions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsFrameCopiedErrors")
    {
        dot5statsframecopiederrors = value;
        dot5statsframecopiederrors.value_namespace = name_space;
        dot5statsframecopiederrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsTokenErrors")
    {
        dot5statstokenerrors = value;
        dot5statstokenerrors.value_namespace = name_space;
        dot5statstokenerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsSoftErrors")
    {
        dot5statssofterrors = value;
        dot5statssofterrors.value_namespace = name_space;
        dot5statssofterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsHardErrors")
    {
        dot5statsharderrors = value;
        dot5statsharderrors.value_namespace = name_space;
        dot5statsharderrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsSignalLoss")
    {
        dot5statssignalloss = value;
        dot5statssignalloss.value_namespace = name_space;
        dot5statssignalloss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsTransmitBeacons")
    {
        dot5statstransmitbeacons = value;
        dot5statstransmitbeacons.value_namespace = name_space;
        dot5statstransmitbeacons.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsRecoverys")
    {
        dot5statsrecoverys = value;
        dot5statsrecoverys.value_namespace = name_space;
        dot5statsrecoverys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsLobeWires")
    {
        dot5statslobewires = value;
        dot5statslobewires.value_namespace = name_space;
        dot5statslobewires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsRemoves")
    {
        dot5statsremoves = value;
        dot5statsremoves.value_namespace = name_space;
        dot5statsremoves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsSingles")
    {
        dot5statssingles = value;
        dot5statssingles.value_namespace = name_space;
        dot5statssingles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5StatsFreqErrors")
    {
        dot5statsfreqerrors = value;
        dot5statsfreqerrors.value_namespace = name_space;
        dot5statsfreqerrors.value_namespace_prefix = name_space_prefix;
    }
}

void TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot5StatsIfIndex")
    {
        dot5statsifindex.yfilter = yfilter;
    }
    if(value_path == "dot5StatsLineErrors")
    {
        dot5statslineerrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsBurstErrors")
    {
        dot5statsbursterrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsACErrors")
    {
        dot5statsacerrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsAbortTransErrors")
    {
        dot5statsaborttranserrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsInternalErrors")
    {
        dot5statsinternalerrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsLostFrameErrors")
    {
        dot5statslostframeerrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsReceiveCongestions")
    {
        dot5statsreceivecongestions.yfilter = yfilter;
    }
    if(value_path == "dot5StatsFrameCopiedErrors")
    {
        dot5statsframecopiederrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsTokenErrors")
    {
        dot5statstokenerrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsSoftErrors")
    {
        dot5statssofterrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsHardErrors")
    {
        dot5statsharderrors.yfilter = yfilter;
    }
    if(value_path == "dot5StatsSignalLoss")
    {
        dot5statssignalloss.yfilter = yfilter;
    }
    if(value_path == "dot5StatsTransmitBeacons")
    {
        dot5statstransmitbeacons.yfilter = yfilter;
    }
    if(value_path == "dot5StatsRecoverys")
    {
        dot5statsrecoverys.yfilter = yfilter;
    }
    if(value_path == "dot5StatsLobeWires")
    {
        dot5statslobewires.yfilter = yfilter;
    }
    if(value_path == "dot5StatsRemoves")
    {
        dot5statsremoves.yfilter = yfilter;
    }
    if(value_path == "dot5StatsSingles")
    {
        dot5statssingles.yfilter = yfilter;
    }
    if(value_path == "dot5StatsFreqErrors")
    {
        dot5statsfreqerrors.yfilter = yfilter;
    }
}

bool TOKENRINGMIB::Dot5Statstable::Dot5Statsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5StatsIfIndex" || name == "dot5StatsLineErrors" || name == "dot5StatsBurstErrors" || name == "dot5StatsACErrors" || name == "dot5StatsAbortTransErrors" || name == "dot5StatsInternalErrors" || name == "dot5StatsLostFrameErrors" || name == "dot5StatsReceiveCongestions" || name == "dot5StatsFrameCopiedErrors" || name == "dot5StatsTokenErrors" || name == "dot5StatsSoftErrors" || name == "dot5StatsHardErrors" || name == "dot5StatsSignalLoss" || name == "dot5StatsTransmitBeacons" || name == "dot5StatsRecoverys" || name == "dot5StatsLobeWires" || name == "dot5StatsRemoves" || name == "dot5StatsSingles" || name == "dot5StatsFreqErrors")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Timertable::Dot5Timertable()
{

    yang_name = "dot5TimerTable"; yang_parent_name = "TOKENRING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Timertable::~Dot5Timertable()
{
}

bool TOKENRINGMIB::Dot5Timertable::has_data() const
{
    for (std::size_t index=0; index<dot5timerentry.size(); index++)
    {
        if(dot5timerentry[index]->has_data())
            return true;
    }
    return false;
}

bool TOKENRINGMIB::Dot5Timertable::has_operation() const
{
    for (std::size_t index=0; index<dot5timerentry.size(); index++)
    {
        if(dot5timerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TOKENRINGMIB::Dot5Timertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Timertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5TimerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Timertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Timertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5TimerEntry")
    {
        auto c = std::make_shared<TOKENRINGMIB::Dot5Timertable::Dot5Timerentry>();
        c->parent = this;
        dot5timerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Timertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dot5timerentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TOKENRINGMIB::Dot5Timertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TOKENRINGMIB::Dot5Timertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TOKENRINGMIB::Dot5Timertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5TimerEntry")
        return true;
    return false;
}

TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::Dot5Timerentry()
    :
    dot5timerifindex{YType::int32, "dot5TimerIfIndex"},
    dot5timerreturnrepeat{YType::int32, "dot5TimerReturnRepeat"},
    dot5timerholding{YType::int32, "dot5TimerHolding"},
    dot5timerqueuepdu{YType::int32, "dot5TimerQueuePDU"},
    dot5timervalidtransmit{YType::int32, "dot5TimerValidTransmit"},
    dot5timernotoken{YType::int32, "dot5TimerNoToken"},
    dot5timeractivemon{YType::int32, "dot5TimerActiveMon"},
    dot5timerstandbymon{YType::int32, "dot5TimerStandbyMon"},
    dot5timererrorreport{YType::int32, "dot5TimerErrorReport"},
    dot5timerbeacontransmit{YType::int32, "dot5TimerBeaconTransmit"},
    dot5timerbeaconreceive{YType::int32, "dot5TimerBeaconReceive"}
{

    yang_name = "dot5TimerEntry"; yang_parent_name = "dot5TimerTable"; is_top_level_class = false; has_list_ancestor = false;
}

TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::~Dot5Timerentry()
{
}

bool TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::has_data() const
{
    return dot5timerifindex.is_set
	|| dot5timerreturnrepeat.is_set
	|| dot5timerholding.is_set
	|| dot5timerqueuepdu.is_set
	|| dot5timervalidtransmit.is_set
	|| dot5timernotoken.is_set
	|| dot5timeractivemon.is_set
	|| dot5timerstandbymon.is_set
	|| dot5timererrorreport.is_set
	|| dot5timerbeacontransmit.is_set
	|| dot5timerbeaconreceive.is_set;
}

bool TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot5timerifindex.yfilter)
	|| ydk::is_set(dot5timerreturnrepeat.yfilter)
	|| ydk::is_set(dot5timerholding.yfilter)
	|| ydk::is_set(dot5timerqueuepdu.yfilter)
	|| ydk::is_set(dot5timervalidtransmit.yfilter)
	|| ydk::is_set(dot5timernotoken.yfilter)
	|| ydk::is_set(dot5timeractivemon.yfilter)
	|| ydk::is_set(dot5timerstandbymon.yfilter)
	|| ydk::is_set(dot5timererrorreport.yfilter)
	|| ydk::is_set(dot5timerbeacontransmit.yfilter)
	|| ydk::is_set(dot5timerbeaconreceive.yfilter);
}

std::string TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5TimerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5TimerEntry" <<"[dot5TimerIfIndex='" <<dot5timerifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5timerifindex.is_set || is_set(dot5timerifindex.yfilter)) leaf_name_data.push_back(dot5timerifindex.get_name_leafdata());
    if (dot5timerreturnrepeat.is_set || is_set(dot5timerreturnrepeat.yfilter)) leaf_name_data.push_back(dot5timerreturnrepeat.get_name_leafdata());
    if (dot5timerholding.is_set || is_set(dot5timerholding.yfilter)) leaf_name_data.push_back(dot5timerholding.get_name_leafdata());
    if (dot5timerqueuepdu.is_set || is_set(dot5timerqueuepdu.yfilter)) leaf_name_data.push_back(dot5timerqueuepdu.get_name_leafdata());
    if (dot5timervalidtransmit.is_set || is_set(dot5timervalidtransmit.yfilter)) leaf_name_data.push_back(dot5timervalidtransmit.get_name_leafdata());
    if (dot5timernotoken.is_set || is_set(dot5timernotoken.yfilter)) leaf_name_data.push_back(dot5timernotoken.get_name_leafdata());
    if (dot5timeractivemon.is_set || is_set(dot5timeractivemon.yfilter)) leaf_name_data.push_back(dot5timeractivemon.get_name_leafdata());
    if (dot5timerstandbymon.is_set || is_set(dot5timerstandbymon.yfilter)) leaf_name_data.push_back(dot5timerstandbymon.get_name_leafdata());
    if (dot5timererrorreport.is_set || is_set(dot5timererrorreport.yfilter)) leaf_name_data.push_back(dot5timererrorreport.get_name_leafdata());
    if (dot5timerbeacontransmit.is_set || is_set(dot5timerbeacontransmit.yfilter)) leaf_name_data.push_back(dot5timerbeacontransmit.get_name_leafdata());
    if (dot5timerbeaconreceive.is_set || is_set(dot5timerbeaconreceive.yfilter)) leaf_name_data.push_back(dot5timerbeaconreceive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot5TimerIfIndex")
    {
        dot5timerifindex = value;
        dot5timerifindex.value_namespace = name_space;
        dot5timerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerReturnRepeat")
    {
        dot5timerreturnrepeat = value;
        dot5timerreturnrepeat.value_namespace = name_space;
        dot5timerreturnrepeat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerHolding")
    {
        dot5timerholding = value;
        dot5timerholding.value_namespace = name_space;
        dot5timerholding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerQueuePDU")
    {
        dot5timerqueuepdu = value;
        dot5timerqueuepdu.value_namespace = name_space;
        dot5timerqueuepdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerValidTransmit")
    {
        dot5timervalidtransmit = value;
        dot5timervalidtransmit.value_namespace = name_space;
        dot5timervalidtransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerNoToken")
    {
        dot5timernotoken = value;
        dot5timernotoken.value_namespace = name_space;
        dot5timernotoken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerActiveMon")
    {
        dot5timeractivemon = value;
        dot5timeractivemon.value_namespace = name_space;
        dot5timeractivemon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerStandbyMon")
    {
        dot5timerstandbymon = value;
        dot5timerstandbymon.value_namespace = name_space;
        dot5timerstandbymon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerErrorReport")
    {
        dot5timererrorreport = value;
        dot5timererrorreport.value_namespace = name_space;
        dot5timererrorreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerBeaconTransmit")
    {
        dot5timerbeacontransmit = value;
        dot5timerbeacontransmit.value_namespace = name_space;
        dot5timerbeacontransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot5TimerBeaconReceive")
    {
        dot5timerbeaconreceive = value;
        dot5timerbeaconreceive.value_namespace = name_space;
        dot5timerbeaconreceive.value_namespace_prefix = name_space_prefix;
    }
}

void TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot5TimerIfIndex")
    {
        dot5timerifindex.yfilter = yfilter;
    }
    if(value_path == "dot5TimerReturnRepeat")
    {
        dot5timerreturnrepeat.yfilter = yfilter;
    }
    if(value_path == "dot5TimerHolding")
    {
        dot5timerholding.yfilter = yfilter;
    }
    if(value_path == "dot5TimerQueuePDU")
    {
        dot5timerqueuepdu.yfilter = yfilter;
    }
    if(value_path == "dot5TimerValidTransmit")
    {
        dot5timervalidtransmit.yfilter = yfilter;
    }
    if(value_path == "dot5TimerNoToken")
    {
        dot5timernotoken.yfilter = yfilter;
    }
    if(value_path == "dot5TimerActiveMon")
    {
        dot5timeractivemon.yfilter = yfilter;
    }
    if(value_path == "dot5TimerStandbyMon")
    {
        dot5timerstandbymon.yfilter = yfilter;
    }
    if(value_path == "dot5TimerErrorReport")
    {
        dot5timererrorreport.yfilter = yfilter;
    }
    if(value_path == "dot5TimerBeaconTransmit")
    {
        dot5timerbeacontransmit.yfilter = yfilter;
    }
    if(value_path == "dot5TimerBeaconReceive")
    {
        dot5timerbeaconreceive.yfilter = yfilter;
    }
}

bool TOKENRINGMIB::Dot5Timertable::Dot5Timerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot5TimerIfIndex" || name == "dot5TimerReturnRepeat" || name == "dot5TimerHolding" || name == "dot5TimerQueuePDU" || name == "dot5TimerValidTransmit" || name == "dot5TimerNoToken" || name == "dot5TimerActiveMon" || name == "dot5TimerStandbyMon" || name == "dot5TimerErrorReport" || name == "dot5TimerBeaconTransmit" || name == "dot5TimerBeaconReceive")
        return true;
    return false;
}

const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Commands::noop {1, "noop"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Commands::open {2, "open"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Commands::reset {3, "reset"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Commands::close {4, "close"};

const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::opened {1, "opened"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::closed {2, "closed"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::opening {3, "opening"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::closing {4, "closing"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::openFailure {5, "openFailure"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringstate::ringFailure {6, "ringFailure"};

const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::noOpen {1, "noOpen"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::badParam {2, "badParam"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::lobeFailed {3, "lobeFailed"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::signalLoss {4, "signalLoss"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::insertionTimeout {5, "insertionTimeout"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::ringFailed {6, "ringFailed"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::beaconing {7, "beaconing"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::duplicateMAC {8, "duplicateMAC"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::requestFailed {9, "requestFailed"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::removeReceived {10, "removeReceived"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringopenstatus::open {11, "open"};

const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringspeed::unknown {1, "unknown"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringspeed::oneMegabit {2, "oneMegabit"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringspeed::fourMegabit {3, "fourMegabit"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Ringspeed::sixteenMegabit {4, "sixteenMegabit"};

const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Actmonparticipate::true_ {1, "true"};
const Enum::YLeaf TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Actmonparticipate::false_ {2, "false"};


}
}

